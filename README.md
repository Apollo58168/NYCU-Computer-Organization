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
