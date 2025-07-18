#pragma once

#include "Cache.h"
#include "Memory.h"

class CacheManager
{
private:
    /*
     * 1. TAs' simulator will check if you store data in cache or not,
     *    so make sure that you use cache correctly
     * 2. When cache miss, you should call memory to get data.
     * 3. Don't modify original member function and variable, however,
     *    you are allow to declare addtional ones (such as dirty bit)
     * 4. You should actually manage *cache, don't try to cheat evaluator
     *    by declare a large data structure to replace the usage of cache
     * 5. Follow rules above, otherwise, you will get failed in this lab.
     * 6. Let's do lab peacefully together!!
     */
    Memory *memory;
    Cache *cache;
    unsigned int size;
    unsigned int tag_bits;
    std::vector<std::vector<int>> lru_counter;
    std::pair<unsigned, unsigned> directed_map(unsigned int addr);
    void update_lru(unsigned int set_index, int used_way);
    int get_lru_victim(unsigned int set_index);

public:
    CacheManager(Memory *memory, Cache *cache);
    ~CacheManager();
    unsigned int *find(unsigned int addr);
    unsigned int read(unsigned int addr);
    void write(unsigned int addr, unsigned value);
};