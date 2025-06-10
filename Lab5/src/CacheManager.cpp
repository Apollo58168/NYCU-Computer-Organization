#include "CacheManager.h"
#include <math.h>
#include <vector>
#include <algorithm>

CacheManager::CacheManager(Memory *memory, Cache *cache)
{
    this->memory = memory;
    this->cache = cache;
    size = cache->get_size();

    // Set larger block size
    cache->set_block_size(128); // 128 bytes (32 words)

    tag_bits = 32 - log2(cache->get_len()) - log2(128);

    // Initialize all cache blocks with invalid tags
    for (unsigned int i = 0; i < cache->get_len(); i++)
    {
        (*cache)[i].tag = 0xFFFFFFFF;
    }

    // Initialize LRU counter for 8-way associative
    lru_counter.resize(cache->get_len() / 8);
    for (auto &counter : lru_counter)
    {
        counter.resize(8, 0);
        for (int i = 0; i < 8; i++)
        {
            counter[i] = i;
        }
    }
};

CacheManager::~CacheManager()
{
}

std::pair<unsigned, unsigned> CacheManager::directed_map(unsigned int addr)
{
    unsigned int block_offset_bits = log2(128);         // block size = 128
    unsigned int set_bits = log2(cache->get_len() / 8); // 8-way associative

    unsigned int set_index = (addr >> block_offset_bits) % (cache->get_len() / 8);
    unsigned int tag = addr >> (block_offset_bits + set_bits);

    return {set_index, tag};
}

void CacheManager::update_lru(unsigned int set_index, int used_way)
{
    int pos = 0;
    for (int i = 0; i < 8; i++)
    {
        if (lru_counter[set_index][i] == used_way)
        {
            pos = i;
            break;
        }
    }

    for (int i = pos; i > 0; i--)
    {
        lru_counter[set_index][i] = lru_counter[set_index][i - 1];
    }
    lru_counter[set_index][0] = used_way;
}

int CacheManager::get_lru_victim(unsigned int set_index)
{
    return lru_counter[set_index][7]; // LRU victim for 8-way
}

unsigned int *CacheManager::find(unsigned int addr)
{
    auto [set_index, tag] = directed_map(addr);

    // Check all 8 ways in the set
    for (int way = 0; way < 8; way++)
    {
        unsigned int cache_index = set_index * 8 + way;
        if ((*cache)[cache_index].tag == tag)
        {
            update_lru(set_index, way);
            return &((*cache)[cache_index][(addr % 128) / 4]);
        }
    }
    return nullptr;
}

unsigned int CacheManager::read(unsigned int addr)
{
    unsigned int *value_ptr = find(addr);
    if (value_ptr != nullptr)
    {
        return *value_ptr;
    }
    else
    {
        auto [set_index, tag] = directed_map(addr);
        int victim_way = get_lru_victim(set_index);
        unsigned int cache_index = set_index * 8 + victim_way;

        (*cache)[cache_index].tag = tag;
        update_lru(set_index, victim_way);

        // Load entire block (128 bytes = 32 words)
        unsigned int block_start = (addr / 128) * 128;
        for (int i = 0; i < 32; i++)
        {
            (*cache)[cache_index][i] = memory->read(block_start + i * 4);
        }

        return (*cache)[cache_index][(addr % 128) / 4];
    }
};

void CacheManager::write(unsigned int addr, unsigned value)
{
    auto [set_index, tag] = directed_map(addr);

    bool hit = false;
    unsigned int cache_index;

    for (int way = 0; way < 8; way++)
    {
        cache_index = set_index * 8 + way;
        if ((*cache)[cache_index].tag == tag)
        {
            hit = true;
            update_lru(set_index, way);
            break;
        }
    }

    if (hit)
    {
        (*cache)[cache_index][(addr % 128) / 4] = value;
    }
    else
    {
        int victim_way = get_lru_victim(set_index);
        cache_index = set_index * 8 + victim_way;

        (*cache)[cache_index].tag = tag;
        update_lru(set_index, victim_way);

        // Load entire block
        unsigned int block_start = (addr / 128) * 128;
        for (int i = 0; i < 32; i++)
        {
            (*cache)[cache_index][i] = memory->read(block_start + i * 4);
        }
        (*cache)[cache_index][(addr % 128) / 4] = value;
    }

    memory->write(addr, value);
};