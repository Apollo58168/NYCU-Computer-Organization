module PipelineCPU (
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

wire [31:0] PC_counter;
wire [31:0] PC_out_IF, PC_plus4_IF, IMEM_out_IF;
wire [31:0] PC_out_ID, PC_plus4_ID, IMEM_out_ID;

wire [31:0] readData1_ID, readData2_ID, IMMGEN_out_ID;
wire [31:0] readData1_EX, readData2_EX, IMMGEN_out_EX, PC_plus4_EX, IMEM_out_EX;

wire [31:0] ALUOut_EX;
wire [31:0] ALUOut_MEM, readData2_MEM, PC_plus4_MEM, IMEM_out_MEM;

wire [31:0] DMEM_out_MEM;
wire [31:0] PC_plus4_WB, ALUOut_WB, DMEM_out_WB, IMEM_out_WB;

wire [31:0] writeData;
wire [31:0] IMMGEN_out_shift, Adder2_out, Mux_ALU;
wire [3:0] ALUCtl;

// control
wire [1:0] PCSel;

wire [1:0] memtoReg_ID, ALUOp_ID;
wire regWrite_ID, memRead_ID, memWrite_ID, ALUSrc_ID;

wire [1:0] memtoReg_EX, ALUOp_EX;
wire regWrite_EX, memRead_EX, memWrite_EX, ALUSrc_EX;

wire [1:0] memtoReg_MEM;
wire regWrite_MEM, memRead_MEM, memWrite_MEM;

wire [1:0] memtoReg_WB;
wire regWrite_WB;

PC m_PC(
    .clk(clk),
    .rst(start),
    .pc_i(PC_counter),
    .pc_o(PC_out_IF)
);

Adder m_Adder_1(
    .a(PC_out_IF),
    .b(4),
    .sum(PC_plus4_IF)
);


InstructionMemory m_InstMem(
    .readAddr(PC_out_IF),
    .inst(IMEM_out_IF)
);

Control m_Control(
    .opcode(IMEM_out_ID[6:0]),
    .funct3(IMEM_out_ID[14:12]),
    .memRead(memRead_ID),
    .memtoReg(memtoReg_ID),
    .ALUOp(ALUOp_ID),
    .memWrite(memWrite_ID),
    .ALUSrc(ALUSrc_ID),
    .regWrite(regWrite_ID),
    .PCSel(PCSel)
);

IF_ID_Reg m_IF_ID_Reg(
    .clk(clk),
    .rst(start),
    .pc_i(PC_out_IF),
    .pc_4_i(PC_plus4_IF),
    .inst_i(IMEM_out_IF),
    .pc_o(PC_out_ID),
    .pc_4_o(PC_plus4_ID),
    .inst_o(IMEM_out_ID)
);

// For Student:
// Do not change the Register instance name!
// Or you will fail validation.

Register m_Register(
    .clk(clk),
    .rst(start),
    .regWrite(regWrite_WB),
    .readReg1(IMEM_out_ID[19:15]),
    .readReg2(IMEM_out_ID[24:20]),
    .writeReg(IMEM_out_WB[11:7]),
    .writeData(writeData),
    .readData1(readData1_ID),
    .readData2(readData2_ID)
);

// ======= for validation =======
// == Dont change this section ==
assign r = m_Register.regs;
// ======= for vaildation =======

ImmGen m_ImmGen(
    .inst(IMEM_out_ID),
    .imm(IMMGEN_out_ID)
);


ShiftLeftOne m_ShiftLeftOne(
    .i(IMMGEN_out_ID),
    .o(IMMGEN_out_shift)
);

Adder m_Adder_2(
    .a(PC_out_ID),
    .b(IMMGEN_out_shift),
    .sum(Adder2_out)
);

Mux3to1 #(.size(32)) m_Mux_PC(
    .sel(PCSel),
    .s0(PC_plus4_IF),
    .s1(Adder2_out),
    .s2(ALUOut_EX),
    .out(PC_counter)
);

ID_EX_Reg m_ID_EX_Reg(
    .clk(clk),
    .rst(start),

    .memRead_i(memRead_ID),
    .memWrite_i(memWrite_ID),
    .memtoReg_i(memtoReg_ID),
    .regWrite_i(regWrite_ID),
    .ALUop_i(ALUOp_ID),
    .ALUsrc_i(ALUSrc_ID),

    .pc_4_i(PC_plus4_ID),
    .readData1_i(readData1_ID),
    .readData2_i(readData2_ID),
    .imm_i(IMMGEN_out_ID),
    .inst_i(IMEM_out_ID),

    .memRead_o(memRead_EX),
    .memWrite_o(memWrite_EX),
    .memtoReg_o(memtoReg_EX),
    .regWrite_o(regWrite_EX),
    .ALUop(ALUOp_EX),
    .ALUsrc(ALUSrc_EX),

    .readData1_o(readData1_EX),
    .readData2_o(readData2_EX),
    .pc_4_o(PC_plus4_EX),
    .imm_o(IMMGEN_out_EX),
    .inst_o(IMEM_out_EX)
);

Mux2to1 #(.size(32)) m_Mux_ALU(
    .sel(ALUSrc_EX),
    .s0(readData2_EX),
    .s1(IMMGEN_out_EX),
    .out(Mux_ALU)
);

ALUCtrl m_ALUCtrl(
    .ALUOp(ALUOp_EX),
    .funct7(IMEM_out_EX[30]),
    .funct3(IMEM_out_EX[14:12]),
    .ALUCtl(ALUCtl)
);

ALU m_ALU(
    .ALUctl(ALUCtl),
    .A(readData1_EX),
    .B(Mux_ALU),
    .ALUOut(ALUOut_EX)
    //.zero(ALUOut)
);

EX_MEM_Reg m_EX_MEM_Reg(
    .clk(clk),
    .rst(start),

    .memRead_i(memRead_EX),
    .memWrite_i(memWrite_EX),
    .memtoReg_i(memtoReg_EX),
    .regWrite_i(regWrite_EX),

    .pc_4_i(PC_plus4_EX),
    .ALU_i(ALUOut_EX),
    .readData2_i(readData2_EX),
    .inst_i(IMEM_out_EX),

    .memRead_o(memRead_MEM),
    .memWrite_o(memWrite_MEM),
    .memtoReg_o(memtoReg_MEM),
    .regWrite_o(regWrite_MEM),

    .pc_4_o(PC_plus4_MEM),
    .ALU_o(ALUOut_MEM),
    .readData2_o(readData2_MEM),
    .inst_o(IMEM_out_MEM)
);

DataMemory m_DataMemory(
    .rst(start),
    .clk(clk),
    .memWrite(memWrite_MEM),
    .memRead(memRead_MEM),
    .address(ALUOut_MEM),
    .writeData(readData2_MEM),
    .readData(DMEM_out_MEM)
);

MEM_WB_Reg m_MEM_WB_Reg(
    .clk(clk),
    .rst(start),

    .memtoReg_i(memtoReg_MEM),
    .regWrite_i(regWrite_MEM),

    .pc_4_i(PC_plus4_MEM),
    .ALU_i(ALUOut_MEM),
    .readData_i(DMEM_out_MEM),
    .inst_i(IMEM_out_MEM),

    .memtoReg_o(memtoReg_WB),
    .regWrite_o(regWrite_WB),

    .pc_4_o(PC_plus4_WB),
    .ALU_o(ALUOut_WB),
    .readData_o(DMEM_out_WB),
    .inst_o(IMEM_out_WB)
);

Mux3to1 #(.size(32)) m_Mux_WriteData(
    .sel(memtoReg_WB),
    .s0(ALUOut_WB),
    .s1(DMEM_out_WB),
    .s2(PC_plus4_WB),
    .out(writeData)
);

endmodule
