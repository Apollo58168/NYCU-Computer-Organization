// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VPipelineCPU__Syms.h"


VL_ATTR_COLD void VPipelineCPU___024root__trace_init_sub__TOP__0(VPipelineCPU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+104,"clk", false,-1);
    tracep->declBit(c+105,"start", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+106+i*1,"r", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("PipelineCPU ");
    tracep->declBit(c+104,"clk", false,-1);
    tracep->declBit(c+105,"start", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+106+i*1,"r", true,(i+0), 31,0);
    }
    tracep->declBus(c+138,"PC_MUX1_out", false,-1, 31,0);
    tracep->declBus(c+139,"PC_counter", false,-1, 31,0);
    tracep->declBus(c+140,"PC_R1_out", false,-1, 31,0);
    tracep->declBus(c+76,"PC_out_IF", false,-1, 31,0);
    tracep->declBus(c+77,"PC_plus4_IF", false,-1, 31,0);
    tracep->declBus(c+78,"IMEM_out_IF", false,-1, 31,0);
    tracep->declBus(c+33,"PC_out_ID", false,-1, 31,0);
    tracep->declBus(c+34,"PC_plus4_ID", false,-1, 31,0);
    tracep->declBus(c+35,"IMEM_out_ID", false,-1, 31,0);
    tracep->declBus(c+141,"readData1_ID", false,-1, 31,0);
    tracep->declBus(c+142,"readData2_ID", false,-1, 31,0);
    tracep->declBus(c+36,"IMMGEN_out_ID", false,-1, 31,0);
    tracep->declBus(c+145,"readData1_EX", false,-1, 31,0);
    tracep->declBus(c+146,"readData2_EX", false,-1, 31,0);
    tracep->declBus(c+37,"IMMGEN_out_EX", false,-1, 31,0);
    tracep->declBus(c+38,"PC_plus4_EX", false,-1, 31,0);
    tracep->declBus(c+39,"IMEM_out_EX", false,-1, 31,0);
    tracep->declBus(c+79,"ALUOut_EX", false,-1, 31,0);
    tracep->declBus(c+80,"ALUOut_MEM", false,-1, 31,0);
    tracep->declBus(c+147,"readData2_MEM", false,-1, 31,0);
    tracep->declBus(c+40,"PC_plus4_MEM", false,-1, 31,0);
    tracep->declBus(c+41,"IMEM_out_MEM", false,-1, 31,0);
    tracep->declBus(c+143,"DMEM_out_MEM", false,-1, 31,0);
    tracep->declBus(c+42,"PC_plus4_WB", false,-1, 31,0);
    tracep->declBus(c+43,"ALUOut_WB", false,-1, 31,0);
    tracep->declBus(c+44,"DMEM_out_WB", false,-1, 31,0);
    tracep->declBus(c+45,"IMEM_out_WB", false,-1, 31,0);
    tracep->declBus(c+46,"writeData", false,-1, 31,0);
    tracep->declBus(c+47,"IMMGEN_out_shift", false,-1, 31,0);
    tracep->declBus(c+144,"Adder2_out", false,-1, 31,0);
    tracep->declBus(c+81,"Mux_ALU", false,-1, 31,0);
    tracep->declBus(c+82,"ALUCtl", false,-1, 3,0);
    tracep->declBus(c+89,"PCSel", false,-1, 1,0);
    tracep->declBus(c+90,"memtoReg_ID", false,-1, 1,0);
    tracep->declBus(c+91,"ALUOp_ID", false,-1, 1,0);
    tracep->declBit(c+92,"regWrite_ID", false,-1);
    tracep->declBit(c+93,"memRead_ID", false,-1);
    tracep->declBit(c+94,"memWrite_ID", false,-1);
    tracep->declBit(c+95,"ALUSrc_ID", false,-1);
    tracep->declBus(c+48,"memtoReg_EX", false,-1, 1,0);
    tracep->declBus(c+49,"ALUOp_EX", false,-1, 1,0);
    tracep->declBit(c+50,"regWrite_EX", false,-1);
    tracep->declBit(c+83,"memRead_EX", false,-1);
    tracep->declBit(c+51,"memWrite_EX", false,-1);
    tracep->declBit(c+52,"ALUSrc_EX", false,-1);
    tracep->declBus(c+53,"memtoReg_MEM", false,-1, 1,0);
    tracep->declBit(c+54,"regWrite_MEM", false,-1);
    tracep->declBit(c+84,"memRead_MEM", false,-1);
    tracep->declBit(c+55,"memWrite_MEM", false,-1);
    tracep->declBus(c+56,"memtoReg_WB", false,-1, 1,0);
    tracep->declBit(c+57,"regWrite_WB", false,-1);
    tracep->declBit(c+96,"BrEq", false,-1);
    tracep->declBit(c+97,"BrLT", false,-1);
    tracep->declBit(c+85,"RePC", false,-1);
    tracep->declBit(c+98,"Flush_ctrl", false,-1);
    tracep->declBit(c+86,"Flush_HD", false,-1);
    tracep->declBit(c+99,"PCorR1", false,-1);
    tracep->declBus(c+58,"id_ForwardA", false,-1, 1,0);
    tracep->declBus(c+59,"id_ForwardB", false,-1, 1,0);
    tracep->declBus(c+60,"ex_ForwardA", false,-1, 1,0);
    tracep->declBus(c+61,"ex_ForwardB", false,-1, 1,0);
    tracep->declBus(c+100,"ForwardA_ID", false,-1, 31,0);
    tracep->declBus(c+101,"ForwardB_ID", false,-1, 31,0);
    tracep->declBus(c+62,"ForwardA_EX", false,-1, 31,0);
    tracep->declBus(c+63,"ForwardB_EX", false,-1, 31,0);
    tracep->declBus(c+87,"ForwardA_EX_out", false,-1, 31,0);
    tracep->declBus(c+88,"ForwardB_EX_out", false,-1, 31,0);
    tracep->declBus(c+64,"ForwardB_MEM_out", false,-1, 31,0);
    tracep->pushNamePrefix("m_ALU ");
    tracep->declBus(c+82,"ALUctl", false,-1, 3,0);
    tracep->declBus(c+87,"A", false,-1, 31,0);
    tracep->declBus(c+81,"B", false,-1, 31,0);
    tracep->declBus(c+79,"ALUOut", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_ALUCtrl ");
    tracep->declBus(c+49,"ALUOp", false,-1, 1,0);
    tracep->declBit(c+65,"funct7", false,-1);
    tracep->declBus(c+66,"funct3", false,-1, 2,0);
    tracep->declBus(c+82,"ALUCtl", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Adder_1 ");
    tracep->declBus(c+76,"a", false,-1, 31,0);
    tracep->declBus(c+148,"b", false,-1, 31,0);
    tracep->declBus(c+77,"sum", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Adder_2 ");
    tracep->declBus(c+140,"a", false,-1, 31,0);
    tracep->declBus(c+47,"b", false,-1, 31,0);
    tracep->declBus(c+144,"sum", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_BranchComp ");
    tracep->declBus(c+100,"A", false,-1, 31,0);
    tracep->declBus(c+101,"B", false,-1, 31,0);
    tracep->declBit(c+96,"BrEq", false,-1);
    tracep->declBit(c+97,"BrLT", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Control ");
    tracep->declBus(c+67,"opcode", false,-1, 6,0);
    tracep->declBus(c+68,"funct3", false,-1, 2,0);
    tracep->declBit(c+96,"BrEq", false,-1);
    tracep->declBit(c+97,"BrLT", false,-1);
    tracep->declBit(c+93,"memRead", false,-1);
    tracep->declBus(c+90,"memtoReg", false,-1, 1,0);
    tracep->declBus(c+91,"ALUOp", false,-1, 1,0);
    tracep->declBit(c+94,"memWrite", false,-1);
    tracep->declBit(c+95,"ALUSrc", false,-1);
    tracep->declBit(c+92,"regWrite", false,-1);
    tracep->declBus(c+89,"PCSel", false,-1, 1,0);
    tracep->declBit(c+98,"Flush_ctrl", false,-1);
    tracep->declBit(c+99,"PCorR1", false,-1);
    tracep->declBus(c+102,"ctrl", false,-1, 11,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_DataMemory ");
    tracep->declBit(c+105,"rst", false,-1);
    tracep->declBit(c+104,"clk", false,-1);
    tracep->declBit(c+55,"memWrite", false,-1);
    tracep->declBit(c+84,"memRead", false,-1);
    tracep->declBus(c+80,"address", false,-1, 31,0);
    tracep->declBus(c+64,"writeData", false,-1, 31,0);
    tracep->declBus(c+143,"readData", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_EX_MEM_Reg ");
    tracep->declBit(c+104,"clk", false,-1);
    tracep->declBit(c+105,"rst", false,-1);
    tracep->declBit(c+83,"memRead_i", false,-1);
    tracep->declBit(c+51,"memWrite_i", false,-1);
    tracep->declBus(c+48,"memtoReg_i", false,-1, 1,0);
    tracep->declBit(c+50,"regWrite_i", false,-1);
    tracep->declBus(c+38,"pc_4_i", false,-1, 31,0);
    tracep->declBus(c+79,"ALU_i", false,-1, 31,0);
    tracep->declBus(c+88,"readData2_i", false,-1, 31,0);
    tracep->declBus(c+39,"inst_i", false,-1, 31,0);
    tracep->declBit(c+84,"memRead_o", false,-1);
    tracep->declBit(c+55,"memWrite_o", false,-1);
    tracep->declBus(c+53,"memtoReg_o", false,-1, 1,0);
    tracep->declBit(c+54,"regWrite_o", false,-1);
    tracep->declBus(c+40,"pc_4_o", false,-1, 31,0);
    tracep->declBus(c+80,"ALU_o", false,-1, 31,0);
    tracep->declBus(c+64,"readData2_o", false,-1, 31,0);
    tracep->declBus(c+41,"inst_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Forwarding_Unit ");
    tracep->declBus(c+69,"id_R1", false,-1, 4,0);
    tracep->declBus(c+70,"id_R2", false,-1, 4,0);
    tracep->declBus(c+71,"ex_R1", false,-1, 4,0);
    tracep->declBus(c+72,"ex_R2", false,-1, 4,0);
    tracep->declBus(c+73,"mem_Rd", false,-1, 4,0);
    tracep->declBus(c+74,"wb_Rd", false,-1, 4,0);
    tracep->declBit(c+54,"mem_RegWrite", false,-1);
    tracep->declBit(c+57,"wb_RegWrite", false,-1);
    tracep->declBus(c+58,"id_ForwardA", false,-1, 1,0);
    tracep->declBus(c+59,"id_ForwardB", false,-1, 1,0);
    tracep->declBus(c+60,"ex_ForwardA", false,-1, 1,0);
    tracep->declBus(c+61,"ex_ForwardB", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_HazardDetection ");
    tracep->declBus(c+69,"id_R1", false,-1, 4,0);
    tracep->declBus(c+70,"id_R2", false,-1, 4,0);
    tracep->declBus(c+75,"ex_Rd", false,-1, 4,0);
    tracep->declBus(c+73,"mem_Rd", false,-1, 4,0);
    tracep->declBit(c+83,"ex_MemRead", false,-1);
    tracep->declBit(c+50,"ex_RegWrite", false,-1);
    tracep->declBus(c+67,"opcode", false,-1, 6,0);
    tracep->declBit(c+85,"RePC", false,-1);
    tracep->declBit(c+86,"Flush_HD", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_ID_EX_Reg ");
    tracep->declBit(c+104,"clk", false,-1);
    tracep->declBit(c+105,"rst", false,-1);
    tracep->declBit(c+86,"Flush_HD", false,-1);
    tracep->declBit(c+93,"memRead_i", false,-1);
    tracep->declBit(c+94,"memWrite_i", false,-1);
    tracep->declBus(c+90,"memtoReg_i", false,-1, 1,0);
    tracep->declBit(c+92,"regWrite_i", false,-1);
    tracep->declBus(c+91,"ALUop_i", false,-1, 1,0);
    tracep->declBit(c+95,"ALUsrc_i", false,-1);
    tracep->declBus(c+34,"pc_4_i", false,-1, 31,0);
    tracep->declBus(c+100,"readData1_i", false,-1, 31,0);
    tracep->declBus(c+101,"readData2_i", false,-1, 31,0);
    tracep->declBus(c+36,"imm_i", false,-1, 31,0);
    tracep->declBus(c+35,"inst_i", false,-1, 31,0);
    tracep->declBit(c+83,"memRead_o", false,-1);
    tracep->declBit(c+51,"memWrite_o", false,-1);
    tracep->declBus(c+48,"memtoReg_o", false,-1, 1,0);
    tracep->declBit(c+50,"regWrite_o", false,-1);
    tracep->declBus(c+49,"ALUop", false,-1, 1,0);
    tracep->declBit(c+52,"ALUsrc", false,-1);
    tracep->declBus(c+62,"readData1_o", false,-1, 31,0);
    tracep->declBus(c+63,"readData2_o", false,-1, 31,0);
    tracep->declBus(c+38,"pc_4_o", false,-1, 31,0);
    tracep->declBus(c+37,"imm_o", false,-1, 31,0);
    tracep->declBus(c+39,"inst_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_IF_ID_Reg ");
    tracep->declBit(c+104,"clk", false,-1);
    tracep->declBit(c+105,"rst", false,-1);
    tracep->declBit(c+86,"Flush_HD", false,-1);
    tracep->declBit(c+98,"Flush_ctrl", false,-1);
    tracep->declBus(c+76,"pc_i", false,-1, 31,0);
    tracep->declBus(c+77,"pc_4_i", false,-1, 31,0);
    tracep->declBus(c+78,"inst_i", false,-1, 31,0);
    tracep->declBus(c+33,"pc_o", false,-1, 31,0);
    tracep->declBus(c+34,"pc_4_o", false,-1, 31,0);
    tracep->declBus(c+35,"inst_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_ImmGen ");
    tracep->declBus(c+35,"inst", false,-1, 31,0);
    tracep->declBus(c+36,"imm", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_InstMem ");
    tracep->declBus(c+76,"readAddr", false,-1, 31,0);
    tracep->declBus(c+78,"inst", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_MEM_WB_Reg ");
    tracep->declBit(c+104,"clk", false,-1);
    tracep->declBit(c+105,"rst", false,-1);
    tracep->declBus(c+53,"memtoReg_i", false,-1, 1,0);
    tracep->declBit(c+54,"regWrite_i", false,-1);
    tracep->declBus(c+40,"pc_4_i", false,-1, 31,0);
    tracep->declBus(c+80,"ALU_i", false,-1, 31,0);
    tracep->declBus(c+143,"readData_i", false,-1, 31,0);
    tracep->declBus(c+41,"inst_i", false,-1, 31,0);
    tracep->declBus(c+56,"memtoReg_o", false,-1, 1,0);
    tracep->declBit(c+57,"regWrite_o", false,-1);
    tracep->declBus(c+42,"pc_4_o", false,-1, 31,0);
    tracep->declBus(c+43,"ALU_o", false,-1, 31,0);
    tracep->declBus(c+44,"readData_o", false,-1, 31,0);
    tracep->declBus(c+45,"inst_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux_ALU ");
    tracep->declBus(c+149,"size", false,-1, 31,0);
    tracep->declBit(c+52,"sel", false,-1);
    tracep->declBus(c+88,"s0", false,-1, 31,0);
    tracep->declBus(c+37,"s1", false,-1, 31,0);
    tracep->declBus(c+81,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux_EX_ForwardA ");
    tracep->declBus(c+149,"size", false,-1, 31,0);
    tracep->declBus(c+60,"sel", false,-1, 1,0);
    tracep->declBus(c+62,"s0", false,-1, 31,0);
    tracep->declBus(c+46,"s1", false,-1, 31,0);
    tracep->declBus(c+80,"s2", false,-1, 31,0);
    tracep->declBus(c+87,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux_EX_ForwardB ");
    tracep->declBus(c+149,"size", false,-1, 31,0);
    tracep->declBus(c+61,"sel", false,-1, 1,0);
    tracep->declBus(c+63,"s0", false,-1, 31,0);
    tracep->declBus(c+46,"s1", false,-1, 31,0);
    tracep->declBus(c+80,"s2", false,-1, 31,0);
    tracep->declBus(c+88,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux_ID_ForwardA ");
    tracep->declBus(c+149,"size", false,-1, 31,0);
    tracep->declBus(c+58,"sel", false,-1, 1,0);
    tracep->declBus(c+141,"s0", false,-1, 31,0);
    tracep->declBus(c+80,"s1", false,-1, 31,0);
    tracep->declBus(c+46,"s2", false,-1, 31,0);
    tracep->declBus(c+100,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux_ID_ForwardB ");
    tracep->declBus(c+149,"size", false,-1, 31,0);
    tracep->declBus(c+59,"sel", false,-1, 1,0);
    tracep->declBus(c+142,"s0", false,-1, 31,0);
    tracep->declBus(c+80,"s1", false,-1, 31,0);
    tracep->declBus(c+46,"s2", false,-1, 31,0);
    tracep->declBus(c+101,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux_PC_1 ");
    tracep->declBus(c+149,"size", false,-1, 31,0);
    tracep->declBit(c+103,"sel", false,-1);
    tracep->declBus(c+77,"s0", false,-1, 31,0);
    tracep->declBus(c+144,"s1", false,-1, 31,0);
    tracep->declBus(c+138,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux_PC_2 ");
    tracep->declBus(c+149,"size", false,-1, 31,0);
    tracep->declBit(c+85,"sel", false,-1);
    tracep->declBus(c+138,"s0", false,-1, 31,0);
    tracep->declBus(c+76,"s1", false,-1, 31,0);
    tracep->declBus(c+139,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux_PCorR1 ");
    tracep->declBus(c+149,"size", false,-1, 31,0);
    tracep->declBit(c+99,"sel", false,-1);
    tracep->declBus(c+33,"s0", false,-1, 31,0);
    tracep->declBus(c+100,"s1", false,-1, 31,0);
    tracep->declBus(c+140,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux_WriteData ");
    tracep->declBus(c+149,"size", false,-1, 31,0);
    tracep->declBus(c+56,"sel", false,-1, 1,0);
    tracep->declBus(c+43,"s0", false,-1, 31,0);
    tracep->declBus(c+44,"s1", false,-1, 31,0);
    tracep->declBus(c+42,"s2", false,-1, 31,0);
    tracep->declBus(c+46,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_PC ");
    tracep->declBit(c+104,"clk", false,-1);
    tracep->declBit(c+105,"rst", false,-1);
    tracep->declBus(c+139,"pc_i", false,-1, 31,0);
    tracep->declBus(c+76,"pc_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Register ");
    tracep->declBit(c+104,"clk", false,-1);
    tracep->declBit(c+105,"rst", false,-1);
    tracep->declBit(c+57,"regWrite", false,-1);
    tracep->declBus(c+69,"readReg1", false,-1, 4,0);
    tracep->declBus(c+70,"readReg2", false,-1, 4,0);
    tracep->declBus(c+74,"writeReg", false,-1, 4,0);
    tracep->declBus(c+46,"writeData", false,-1, 31,0);
    tracep->declBus(c+141,"readData1", false,-1, 31,0);
    tracep->declBus(c+142,"readData2", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1+i*1,"regs", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_ShiftLeftOne ");
    tracep->declBus(c+36,"i", false,-1, 31,0);
    tracep->declBus(c+47,"o", false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void VPipelineCPU___024root__trace_init_top(VPipelineCPU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root__trace_init_top\n"); );
    // Body
    VPipelineCPU___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VPipelineCPU___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VPipelineCPU___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VPipelineCPU___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VPipelineCPU___024root__trace_register(VPipelineCPU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VPipelineCPU___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VPipelineCPU___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VPipelineCPU___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VPipelineCPU___024root__trace_full_sub_0(VPipelineCPU___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VPipelineCPU___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root__trace_full_top_0\n"); );
    // Init
    VPipelineCPU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VPipelineCPU___024root*>(voidSelf);
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VPipelineCPU___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VPipelineCPU___024root__trace_full_sub_0(VPipelineCPU___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0]),32);
    bufp->fullIData(oldp+2,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[1]),32);
    bufp->fullIData(oldp+3,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[2]),32);
    bufp->fullIData(oldp+4,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[3]),32);
    bufp->fullIData(oldp+5,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[4]),32);
    bufp->fullIData(oldp+6,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[5]),32);
    bufp->fullIData(oldp+7,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[6]),32);
    bufp->fullIData(oldp+8,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[7]),32);
    bufp->fullIData(oldp+9,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[8]),32);
    bufp->fullIData(oldp+10,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[9]),32);
    bufp->fullIData(oldp+11,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[10]),32);
    bufp->fullIData(oldp+12,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[11]),32);
    bufp->fullIData(oldp+13,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[12]),32);
    bufp->fullIData(oldp+14,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[13]),32);
    bufp->fullIData(oldp+15,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[14]),32);
    bufp->fullIData(oldp+16,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[15]),32);
    bufp->fullIData(oldp+17,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[16]),32);
    bufp->fullIData(oldp+18,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[17]),32);
    bufp->fullIData(oldp+19,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[18]),32);
    bufp->fullIData(oldp+20,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[19]),32);
    bufp->fullIData(oldp+21,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[20]),32);
    bufp->fullIData(oldp+22,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[21]),32);
    bufp->fullIData(oldp+23,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[22]),32);
    bufp->fullIData(oldp+24,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[23]),32);
    bufp->fullIData(oldp+25,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[24]),32);
    bufp->fullIData(oldp+26,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[25]),32);
    bufp->fullIData(oldp+27,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[26]),32);
    bufp->fullIData(oldp+28,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[27]),32);
    bufp->fullIData(oldp+29,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[28]),32);
    bufp->fullIData(oldp+30,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[29]),32);
    bufp->fullIData(oldp+31,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[30]),32);
    bufp->fullIData(oldp+32,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[31]),32);
    bufp->fullIData(oldp+33,(vlSelf->PipelineCPU__DOT__PC_out_ID),32);
    bufp->fullIData(oldp+34,(vlSelf->PipelineCPU__DOT__PC_plus4_ID),32);
    bufp->fullIData(oldp+35,(vlSelf->PipelineCPU__DOT__IMEM_out_ID),32);
    bufp->fullIData(oldp+36,(vlSelf->PipelineCPU__DOT__IMMGEN_out_ID),32);
    bufp->fullIData(oldp+37,(vlSelf->PipelineCPU__DOT__IMMGEN_out_EX),32);
    bufp->fullIData(oldp+38,(vlSelf->PipelineCPU__DOT__PC_plus4_EX),32);
    bufp->fullIData(oldp+39,(vlSelf->PipelineCPU__DOT__IMEM_out_EX),32);
    bufp->fullIData(oldp+40,(vlSelf->PipelineCPU__DOT__PC_plus4_MEM),32);
    bufp->fullIData(oldp+41,(vlSelf->PipelineCPU__DOT__IMEM_out_MEM),32);
    bufp->fullIData(oldp+42,(vlSelf->PipelineCPU__DOT__PC_plus4_WB),32);
    bufp->fullIData(oldp+43,(vlSelf->PipelineCPU__DOT__ALUOut_WB),32);
    bufp->fullIData(oldp+44,(vlSelf->PipelineCPU__DOT__DMEM_out_WB),32);
    bufp->fullIData(oldp+45,(vlSelf->PipelineCPU__DOT__IMEM_out_WB),32);
    bufp->fullIData(oldp+46,(vlSelf->PipelineCPU__DOT__writeData),32);
    bufp->fullIData(oldp+47,((vlSelf->PipelineCPU__DOT__IMMGEN_out_ID 
                              << 1U)),32);
    bufp->fullCData(oldp+48,(vlSelf->PipelineCPU__DOT__memtoReg_EX),2);
    bufp->fullCData(oldp+49,(vlSelf->PipelineCPU__DOT__ALUOp_EX),2);
    bufp->fullBit(oldp+50,(vlSelf->PipelineCPU__DOT__regWrite_EX));
    bufp->fullBit(oldp+51,(vlSelf->PipelineCPU__DOT__memWrite_EX));
    bufp->fullBit(oldp+52,(vlSelf->PipelineCPU__DOT__ALUSrc_EX));
    bufp->fullCData(oldp+53,(vlSelf->PipelineCPU__DOT__memtoReg_MEM),2);
    bufp->fullBit(oldp+54,(vlSelf->PipelineCPU__DOT__regWrite_MEM));
    bufp->fullBit(oldp+55,(vlSelf->PipelineCPU__DOT__memWrite_MEM));
    bufp->fullCData(oldp+56,(vlSelf->PipelineCPU__DOT__memtoReg_WB),2);
    bufp->fullBit(oldp+57,(vlSelf->PipelineCPU__DOT__regWrite_WB));
    bufp->fullCData(oldp+58,(vlSelf->PipelineCPU__DOT__id_ForwardA),2);
    bufp->fullCData(oldp+59,(vlSelf->PipelineCPU__DOT__id_ForwardB),2);
    bufp->fullCData(oldp+60,(vlSelf->PipelineCPU__DOT__ex_ForwardA),2);
    bufp->fullCData(oldp+61,(vlSelf->PipelineCPU__DOT__ex_ForwardB),2);
    bufp->fullIData(oldp+62,(vlSelf->PipelineCPU__DOT__ForwardA_EX),32);
    bufp->fullIData(oldp+63,(vlSelf->PipelineCPU__DOT__ForwardB_EX),32);
    bufp->fullIData(oldp+64,(vlSelf->PipelineCPU__DOT__ForwardB_MEM_out),32);
    bufp->fullBit(oldp+65,((1U & (vlSelf->PipelineCPU__DOT__IMEM_out_EX 
                                  >> 0x1eU))));
    bufp->fullCData(oldp+66,((7U & (vlSelf->PipelineCPU__DOT__IMEM_out_EX 
                                    >> 0xcU))),3);
    bufp->fullCData(oldp+67,((0x7fU & vlSelf->PipelineCPU__DOT__IMEM_out_ID)),7);
    bufp->fullCData(oldp+68,((7U & (vlSelf->PipelineCPU__DOT__IMEM_out_ID 
                                    >> 0xcU))),3);
    bufp->fullCData(oldp+69,((0x1fU & (vlSelf->PipelineCPU__DOT__IMEM_out_ID 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+70,((0x1fU & (vlSelf->PipelineCPU__DOT__IMEM_out_ID 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+71,((0x1fU & (vlSelf->PipelineCPU__DOT__IMEM_out_EX 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+72,((0x1fU & (vlSelf->PipelineCPU__DOT__IMEM_out_EX 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+73,((0x1fU & (vlSelf->PipelineCPU__DOT__IMEM_out_MEM 
                                       >> 7U))),5);
    bufp->fullCData(oldp+74,((0x1fU & (vlSelf->PipelineCPU__DOT__IMEM_out_WB 
                                       >> 7U))),5);
    bufp->fullCData(oldp+75,((0x1fU & (vlSelf->PipelineCPU__DOT__IMEM_out_EX 
                                       >> 7U))),5);
    bufp->fullIData(oldp+76,(vlSelf->PipelineCPU__DOT__PC_out_IF),32);
    bufp->fullIData(oldp+77,(((IData)(4U) + vlSelf->PipelineCPU__DOT__PC_out_IF)),32);
    bufp->fullIData(oldp+78,(((0x80U <= vlSelf->PipelineCPU__DOT__PC_out_IF)
                               ? 0U : ((vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts
                                        [(0x7fU & vlSelf->PipelineCPU__DOT__PC_out_IF)] 
                                        << 0x18U) | 
                                       ((vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts
                                         [(0x7fU & 
                                           ((IData)(1U) 
                                            + vlSelf->PipelineCPU__DOT__PC_out_IF))] 
                                         << 0x10U) 
                                        | ((vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts
                                            [(0x7fU 
                                              & ((IData)(2U) 
                                                 + vlSelf->PipelineCPU__DOT__PC_out_IF))] 
                                            << 8U) 
                                           | vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts
                                           [(0x7fU 
                                             & ((IData)(3U) 
                                                + vlSelf->PipelineCPU__DOT__PC_out_IF))]))))),32);
    bufp->fullIData(oldp+79,(((8U & (IData)(vlSelf->PipelineCPU__DOT__ALUCtl))
                               ? 0U : ((4U & (IData)(vlSelf->PipelineCPU__DOT__ALUCtl))
                                        ? ((2U & (IData)(vlSelf->PipelineCPU__DOT__ALUCtl))
                                            ? ((1U 
                                                & (IData)(vlSelf->PipelineCPU__DOT__ALUCtl))
                                                ? (
                                                   VL_LTS_III(32, vlSelf->PipelineCPU__DOT__ForwardA_EX_out, vlSelf->PipelineCPU__DOT__Mux_ALU)
                                                    ? 1U
                                                    : 0U)
                                                : (vlSelf->PipelineCPU__DOT__ForwardA_EX_out 
                                                   - vlSelf->PipelineCPU__DOT__Mux_ALU))
                                            : 0U) : 
                                       ((2U & (IData)(vlSelf->PipelineCPU__DOT__ALUCtl))
                                         ? ((1U & (IData)(vlSelf->PipelineCPU__DOT__ALUCtl))
                                             ? 0U : 
                                            (vlSelf->PipelineCPU__DOT__ForwardA_EX_out 
                                             + vlSelf->PipelineCPU__DOT__Mux_ALU))
                                         : ((1U & (IData)(vlSelf->PipelineCPU__DOT__ALUCtl))
                                             ? (vlSelf->PipelineCPU__DOT__ForwardA_EX_out 
                                                | vlSelf->PipelineCPU__DOT__Mux_ALU)
                                             : (vlSelf->PipelineCPU__DOT__ForwardA_EX_out 
                                                & vlSelf->PipelineCPU__DOT__Mux_ALU)))))),32);
    bufp->fullIData(oldp+80,(vlSelf->PipelineCPU__DOT__ALUOut_MEM),32);
    bufp->fullIData(oldp+81,(vlSelf->PipelineCPU__DOT__Mux_ALU),32);
    bufp->fullCData(oldp+82,(vlSelf->PipelineCPU__DOT__ALUCtl),4);
    bufp->fullBit(oldp+83,(vlSelf->PipelineCPU__DOT__memRead_EX));
    bufp->fullBit(oldp+84,(vlSelf->PipelineCPU__DOT__memRead_MEM));
    bufp->fullBit(oldp+85,(vlSelf->PipelineCPU__DOT__RePC));
    bufp->fullBit(oldp+86,(vlSelf->PipelineCPU__DOT__Flush_HD));
    bufp->fullIData(oldp+87,(vlSelf->PipelineCPU__DOT__ForwardA_EX_out),32);
    bufp->fullIData(oldp+88,(vlSelf->PipelineCPU__DOT__ForwardB_EX_out),32);
    bufp->fullCData(oldp+89,((3U & ((IData)(vlSelf->PipelineCPU__DOT__m_Control__DOT__ctrl) 
                                    >> 0xaU))),2);
    bufp->fullCData(oldp+90,((3U & ((IData)(vlSelf->PipelineCPU__DOT__m_Control__DOT__ctrl) 
                                    >> 7U))),2);
    bufp->fullCData(oldp+91,((3U & ((IData)(vlSelf->PipelineCPU__DOT__m_Control__DOT__ctrl) 
                                    >> 5U))),2);
    bufp->fullBit(oldp+92,((1U & ((IData)(vlSelf->PipelineCPU__DOT__m_Control__DOT__ctrl) 
                                  >> 2U))));
    bufp->fullBit(oldp+93,((1U & ((IData)(vlSelf->PipelineCPU__DOT__m_Control__DOT__ctrl) 
                                  >> 9U))));
    bufp->fullBit(oldp+94,((1U & ((IData)(vlSelf->PipelineCPU__DOT__m_Control__DOT__ctrl) 
                                  >> 4U))));
    bufp->fullBit(oldp+95,((1U & ((IData)(vlSelf->PipelineCPU__DOT__m_Control__DOT__ctrl) 
                                  >> 3U))));
    bufp->fullBit(oldp+96,(vlSelf->PipelineCPU__DOT__BrEq));
    bufp->fullBit(oldp+97,(vlSelf->PipelineCPU__DOT__BrLT));
    bufp->fullBit(oldp+98,((1U & ((IData)(vlSelf->PipelineCPU__DOT__m_Control__DOT__ctrl) 
                                  >> 1U))));
    bufp->fullBit(oldp+99,((1U & (IData)(vlSelf->PipelineCPU__DOT__m_Control__DOT__ctrl))));
    bufp->fullIData(oldp+100,(vlSelf->PipelineCPU__DOT__ForwardA_ID),32);
    bufp->fullIData(oldp+101,(vlSelf->PipelineCPU__DOT__ForwardB_ID),32);
    bufp->fullSData(oldp+102,(vlSelf->PipelineCPU__DOT__m_Control__DOT__ctrl),12);
    bufp->fullBit(oldp+103,((1U & ((IData)(vlSelf->PipelineCPU__DOT__m_Control__DOT__ctrl) 
                                   >> 0xaU))));
    bufp->fullBit(oldp+104,(vlSelf->clk));
    bufp->fullBit(oldp+105,(vlSelf->start));
    bufp->fullIData(oldp+106,(vlSelf->r[0]),32);
    bufp->fullIData(oldp+107,(vlSelf->r[1]),32);
    bufp->fullIData(oldp+108,(vlSelf->r[2]),32);
    bufp->fullIData(oldp+109,(vlSelf->r[3]),32);
    bufp->fullIData(oldp+110,(vlSelf->r[4]),32);
    bufp->fullIData(oldp+111,(vlSelf->r[5]),32);
    bufp->fullIData(oldp+112,(vlSelf->r[6]),32);
    bufp->fullIData(oldp+113,(vlSelf->r[7]),32);
    bufp->fullIData(oldp+114,(vlSelf->r[8]),32);
    bufp->fullIData(oldp+115,(vlSelf->r[9]),32);
    bufp->fullIData(oldp+116,(vlSelf->r[10]),32);
    bufp->fullIData(oldp+117,(vlSelf->r[11]),32);
    bufp->fullIData(oldp+118,(vlSelf->r[12]),32);
    bufp->fullIData(oldp+119,(vlSelf->r[13]),32);
    bufp->fullIData(oldp+120,(vlSelf->r[14]),32);
    bufp->fullIData(oldp+121,(vlSelf->r[15]),32);
    bufp->fullIData(oldp+122,(vlSelf->r[16]),32);
    bufp->fullIData(oldp+123,(vlSelf->r[17]),32);
    bufp->fullIData(oldp+124,(vlSelf->r[18]),32);
    bufp->fullIData(oldp+125,(vlSelf->r[19]),32);
    bufp->fullIData(oldp+126,(vlSelf->r[20]),32);
    bufp->fullIData(oldp+127,(vlSelf->r[21]),32);
    bufp->fullIData(oldp+128,(vlSelf->r[22]),32);
    bufp->fullIData(oldp+129,(vlSelf->r[23]),32);
    bufp->fullIData(oldp+130,(vlSelf->r[24]),32);
    bufp->fullIData(oldp+131,(vlSelf->r[25]),32);
    bufp->fullIData(oldp+132,(vlSelf->r[26]),32);
    bufp->fullIData(oldp+133,(vlSelf->r[27]),32);
    bufp->fullIData(oldp+134,(vlSelf->r[28]),32);
    bufp->fullIData(oldp+135,(vlSelf->r[29]),32);
    bufp->fullIData(oldp+136,(vlSelf->r[30]),32);
    bufp->fullIData(oldp+137,(vlSelf->r[31]),32);
    bufp->fullIData(oldp+138,(((0x400U & (IData)(vlSelf->PipelineCPU__DOT__m_Control__DOT__ctrl))
                                ? (((1U & (IData)(vlSelf->PipelineCPU__DOT__m_Control__DOT__ctrl))
                                     ? vlSelf->PipelineCPU__DOT__ForwardA_ID
                                     : vlSelf->PipelineCPU__DOT__PC_out_ID) 
                                   + (vlSelf->PipelineCPU__DOT__IMMGEN_out_ID 
                                      << 1U)) : ((IData)(4U) 
                                                 + vlSelf->PipelineCPU__DOT__PC_out_IF))),32);
    bufp->fullIData(oldp+139,(((IData)(vlSelf->PipelineCPU__DOT__RePC)
                                ? vlSelf->PipelineCPU__DOT__PC_out_IF
                                : ((0x400U & (IData)(vlSelf->PipelineCPU__DOT__m_Control__DOT__ctrl))
                                    ? (((1U & (IData)(vlSelf->PipelineCPU__DOT__m_Control__DOT__ctrl))
                                         ? vlSelf->PipelineCPU__DOT__ForwardA_ID
                                         : vlSelf->PipelineCPU__DOT__PC_out_ID) 
                                       + (vlSelf->PipelineCPU__DOT__IMMGEN_out_ID 
                                          << 1U)) : 
                                   ((IData)(4U) + vlSelf->PipelineCPU__DOT__PC_out_IF)))),32);
    bufp->fullIData(oldp+140,(((1U & (IData)(vlSelf->PipelineCPU__DOT__m_Control__DOT__ctrl))
                                ? vlSelf->PipelineCPU__DOT__ForwardA_ID
                                : vlSelf->PipelineCPU__DOT__PC_out_ID)),32);
    bufp->fullIData(oldp+141,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
                              [(0x1fU & (vlSelf->PipelineCPU__DOT__IMEM_out_ID 
                                         >> 0xfU))]),32);
    bufp->fullIData(oldp+142,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
                              [(0x1fU & (vlSelf->PipelineCPU__DOT__IMEM_out_ID 
                                         >> 0x14U))]),32);
    bufp->fullIData(oldp+143,(vlSelf->PipelineCPU__DOT__DMEM_out_MEM),32);
    bufp->fullIData(oldp+144,((((1U & (IData)(vlSelf->PipelineCPU__DOT__m_Control__DOT__ctrl))
                                 ? vlSelf->PipelineCPU__DOT__ForwardA_ID
                                 : vlSelf->PipelineCPU__DOT__PC_out_ID) 
                               + (vlSelf->PipelineCPU__DOT__IMMGEN_out_ID 
                                  << 1U))),32);
    bufp->fullIData(oldp+145,(vlSelf->PipelineCPU__DOT__readData1_EX),32);
    bufp->fullIData(oldp+146,(vlSelf->PipelineCPU__DOT__readData2_EX),32);
    bufp->fullIData(oldp+147,(vlSelf->PipelineCPU__DOT__readData2_MEM),32);
    bufp->fullIData(oldp+148,(4U),32);
    bufp->fullIData(oldp+149,(0x20U),32);
}
