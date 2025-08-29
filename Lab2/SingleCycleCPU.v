module SingleCycleCPU (
    input clk,
    input start,
    output signed [31:0] r [0:31]
);

// When input start is zero, cpu should reset
// When input start is high, cpu start running

// The rst signal is active low, which means the module will reset if the rst signal is zero.
// And you should follow this design.

// TODO: connect wire to realize SingleCycleCPU
// The following provides simple template,
// you can modify it as you wish except I/O pin and register module

wire [31:0] PC_counter, PC_out, PC_plus4, IMEM_out, IMMGEN_out, writeData, readData1, readData2;
wire [31:0] IMMGEN_out_shift, Adder2_out, Mux_ALU, ALUOut, DMEM_out;
wire [3:0] ALUCtl;
wire [1:0] memtoReg, ALUOp, PCSel;
wire BrEq, BrLT, regWrite, memRead, memWrite, ALUSrc;

PC m_PC(
    .clk(clk),
    .rst(start),
    .pc_i(PC_counter),
    .pc_o(PC_out)
);

Adder m_Adder_1(
    .a(PC_out),
    .b(4),
    .sum(PC_plus4)
);


InstructionMemory m_InstMem(
    .readAddr(PC_out),
    .inst(IMEM_out)
);

Control m_Control(
    .opcode(IMEM_out[6:0]),
    .funct3(IMEM_out[14:12]),
    .BrEq(BrEq),
    .BrLT(BrLT),
    .memRead(memRead),
    .memtoReg(memtoReg),
    .ALUOp(ALUOp),
    .memWrite(memWrite),
    .ALUSrc(ALUSrc),
    .regWrite(regWrite),
    .PCSel(PCSel)
);

// For Student:
// Do not change the Register instance name!
// Or you will fail validation.

Register m_Register(
    .clk(clk),
    .rst(start),
    .regWrite(regWrite),
    .readReg1(IMEM_out[19:15]),
    .readReg2(IMEM_out[24:20]),
    .writeReg(IMEM_out[11:7]),
    .writeData(writeData),
    .readData1(readData1),
    .readData2(readData2)
);

// ======= for validation =======
// == Dont change this section ==
assign r = m_Register.regs;
// ======= for vaildation =======

BranchComp m_BranchComp(
    .A(readData1),
    .B(readData2),
    .BrEq(BrEq),
    .BrLT(BrLT)
);

ImmGen m_ImmGen(
    .inst(IMEM_out),
    .imm(IMMGEN_out)
);


ShiftLeftOne m_ShiftLeftOne(
    .i(IMMGEN_out),
    .o(IMMGEN_out_shift)
);

Adder m_Adder_2(
    .a(PC_out),
    .b(IMMGEN_out_shift),
    .sum(Adder2_out)
);

Mux3to1 #(.size(32)) m_Mux_PC(
    .sel(PCSel),
    .s0(PC_plus4),
    .s1(Adder2_out),
    .s2(ALUOut),
    .out(PC_counter)
);


Mux2to1 #(.size(32)) m_Mux_ALU(
    .sel(ALUSrc),
    .s0(readData2),
    .s1(IMMGEN_out),
    .out(Mux_ALU)
);

ALUCtrl m_ALUCtrl(
    .ALUOp(ALUOp),
    .funct7(IMEM_out[30]),
    .funct3(IMEM_out[14:12]),
    .ALUCtl(ALUCtl)
);

ALU m_ALU(
    .ALUctl(ALUCtl),
    .A(readData1),
    .B(Mux_ALU),
    .ALUOut(ALUOut)
    //.zero(ALUOut)
);


DataMemory m_DataMemory(
    .rst(start),
    .clk(clk),
    .memWrite(memWrite),
    .memRead(memRead),
    .address(ALUOut),
    .writeData(readData2),
    .readData(DMEM_out)
);


Mux3to1 #(.size(32)) m_Mux_WriteData(
    .sel(memtoReg),
    .s0(ALUOut),
    .s1(DMEM_out),
    .s2(PC_plus4),
    .out(writeData)
);

endmodule
