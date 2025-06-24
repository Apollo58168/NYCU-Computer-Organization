# NYCU-Computer-Organization

## Lab 4
The testcase in lab4 is for the jalr-lw hazard
it will meets below situation:


jalr in ID

lw in EX


but jalr need lw's value

so the pipepile will stall two cycle, let lw run to WB stage, and jalr can read lw's value

## Lab 5
Implement a 8-way associative cache
