## This is the repository of Computer Organization 2025, NYCU.

This course aims to introduce the design and implementation of a simple CPU. 
You’ll learn both concept and implementation from a series of labs.

Check the [lecture website](https://people.cs.nycu.edu.tw/~ttyeh/course/2025_Spring/CS10014/outline.html) for the schedule and the lecture slides.

## [Lab 0: Environment Setup & simple Verilog practice](https://github.com/nycu-caslab/CO2025/tree/main/Lab0)

The lab 0 aims to enhance your Verilog coding abilities and to provide you with a preliminary understanding and practical experience with [GTKWave](https://gtkwave.sourceforge.net/) and [Verilator](https://www.veripool.org/verilator/), which we will use in future projects.
```java
├── lab0
│   ├── Makefile // demonstrating the usage of veilator and its tb.
│   ├── part1
│   │   ├── fullAdder.v
│   │   └── testbench.cpp // the tb in cpp.
│   └── part2
│       ├── alu.v
│       └── testbench.cpp
```


## Lab 1 - Lab 4: From Single Cycle CPU to Advanced Pipeline CPU

- [Lab 1: Assembly & Basic ALU Design Flow](https://github.com/nycu-caslab/CO2025/tree/main/Lab1)
- [Lab 2: Single Cycle CPU](https://github.com/nycu-caslab/CO2025/tree/main/Lab2)
- [Lab 3: Simple Pipeline CPU](https://github.com/nycu-caslab/CO2025/tree/main/Lab3)
- [Lab 4: Advance Pipeline CPU](https://github.com/nycu-caslab/CO2025/tree/main/Lab4)

These four labs cover some fundamental concepts of CPUs. We will start from assembly language, move through the CPU components, then build a single-cycle CPU, and finally transition to a pipelined CPU. 
During the implementation of the branch instructions of the pipelined version, we will introduce a forwarding unit and hazard detection.

We will provide the following template to serve as a reference for the implementation of these four labs.
```java
├── lab1
│   ├── asm_template
│   │   ├── dp
|   |   |   ├──dp.c
|   |   |   ├──dp.s
│   │   ├── recursive
|   |   |   ├──recursive.c
|   |   |   ├──recursive.s
│   │   ├── xor_trick
|   |   |   ├──main.c
|   |   |   ├──main.s
│   ├── cpu_component_template
│   │   ├── ALU.v
│   │   ├── ALUctrl.v
├── lab2
│   ├── Adder.v
│   ├── ALUCtrl.v
│   ├── ALU.v
│   ├── Control.v
│   ├── DataMemory.v
│   ├── example_testbench.cpp // Testbench for verilator that test the CPU.
│   ├── ImmGen.v
│   ├── InstructionMemory.v // Load from the "TEST_INSTRUCTIONS.txt"
│   ├── Mux2to1.v
│   ├── Mux3to1.v
│   ├── PC.v
│   ├── Register.v
|   ├── BranchComp.v
│   ├── ShiftLeftOne.v
│   ├── SingleCycleCPU.v // finish the top module and the submodules.
│   ├── TEST_INSTRUCTIONS.asm // set of simple instructions are provided
│   └── TEST_INSTRUCTIONS.txt // binaries in format of line per byte
├── lab3
│   ├── IF_ID_Reg.v
│   ├── Pipeline_Register.v
├── lab4
│   ├── HazardDetection.v
│   ├── Forwarding_Unit.v
```

## [Lab 5: Implementing a Cache Manager](https://github.com/nycu-caslab/CO2025/tree/main/Lab5)

You’ll design a cache manager to manage the cache table and data in cache, we are providing the code of the simulator, but you need to implement the remaining cache manager to finish the lab.

There are no restrictions about the implementation of your cache, and there are no specified block size requirement also. As long as the cache operates correctly, both "Direct Mapped" and "Set Associative Cache" are acceptable. Additionally, you are free to design the Cache replacement policy and update policy as you see fit.

```c
├── lab5
│   ├── includes
│   │   ├── Block.h             // the basic unit of cache
│   │   ├── Cache.h             // maintains a vector of block
│   │   ├── CacheManager.h      // maintains a cache and descirbe cache policy
│   │   ├── Evaluator.h         // evaluates cache manager
│   │   └── Memory.h            // the abstraction of physical memory
│   ├── Makefile
│   ├── process.py              // convert a serial of memory address to memory operation ( Trace.txt -> testcase.txt )
│   ├── sample
│   │   ├── CacheManager.cpp    // LRU sample
│   │   └── CacheManager.h      // LRU sample
│   ├── src                      
│   │   ├── Block.cpp
│   │   ├── Cache.cpp
│   │   ├── CacheManager.cpp
│   │   ├── Evaluator.cpp
│   │   ├── main.cpp
│   │   └── Memory.cpp
│   ├── testcase.txt            // contains a serial of read write memory operation log
│   └── Trace.txt
```

## [Appendix: Running Compiled C on Lab 4 CPU using FPGA](https://github.com/nycu-caslab/CO2025/blob/main/CO-FPGA/CO-FPGA.pdf)

If you are interested about running some compiled C on your lab 4 CPU using FPGA (Digilent Nexys A7-100t), you can use the kits we provide below and follow the steps and demonstrations shown in the [***instruction pdf***](https://github.com/nycu-caslab/CO2025/blob/main/CO-FPGA/CO-FPGA.pdf), provided under the `CO-FPGA` directory.

This kit provides special library containing `printf()`, `getchar()` and boot function, linker script to perform specific memory layout, UART TX and RX circuits and so.

Please keep in mind that the supported instructions for the lab 4 CPU is extremely limited, it is only capable of running some basic C programs.
```java
├── CO-FPGA
│   ├── Bitstream
│   │   └── cpu_top.bit       // generated bit file
│   ├── COCPU_nexys
│   │   ├── COCPU_nexys.srcs/ // HW source code here
│   │   └── COCPU_nexys.xpr
│   ├── CO-FPGA.pdf           // instructions pdf
│   └── SW_dev
│       ├── cpu_lib.c
│       ├── cpu_lib.h         // extremely minimal library for your lab CPU.
│       ├── hello.c           // write your hello world here
│       ├── hello.ld
│       └── Makefile          // Makefile to make everything
```

---

## Reflections

### Lab0
感謝助教幫我們把整個 iso 檔都壓縮好了，只需要下載並且啟動 virtual machine 就可以輕鬆完成環境架設

### Lab1
第一次用組合語言寫演算法有關的東西
雖然道理跟邏輯相同
但是寫起來會因為 asm 比較底層的關係所以卡卡的

### Lab2
這一次作業因為第一次繳交的時候，沒有注意到 jtype 的路徑比較不同
所以重新補交被扣了10分
但是把所有 module 串起來非常好玩
而且只是根據架構圖 (可以點上面的 Lab2 連結) 慢慢把線接起來而已

### Lab3
這一次 Lab 我只有稍微看過 ripes 的行為模擬
我就直接照著架構圖把 pipeline 寫出來了
因為不用處理 hazard 跟 stall 的關係
所以其實蠻容易的

### Lab4
這個 Lab 讓很多人沒有拿滿
因為助教給的架構圖比較不直觀，很多人看不懂
我也不太了解，所以我自己修改了架構圖 (文件中的 Lab4.pdf)
花比較多時間的應該是 使用 GTKwave 一個一個 cycle 看每一個值是否正確
並且配合 ripes 來 debug 每一個 stage 的值是多少

### Lab5
這一個 Lab 只需要寫得比助教給的 sample code miss 還要低就好
但是因為有 ranking 所以我實踐了一個 8-way associtive cache
自己覺得沒有到非常難