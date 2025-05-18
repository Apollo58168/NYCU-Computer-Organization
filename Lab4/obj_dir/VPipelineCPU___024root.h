// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VPipelineCPU.h for the primary calling header

#ifndef VERILATED_VPIPELINECPU___024ROOT_H_
#define VERILATED_VPIPELINECPU___024ROOT_H_  // guard

#include "verilated.h"

class VPipelineCPU__Syms;

class VPipelineCPU___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(start,0,0);
        CData/*0:0*/ PipelineCPU__DOT__memRead_MEM;
        CData/*3:0*/ PipelineCPU__DOT__ALUCtl;
        CData/*1:0*/ PipelineCPU__DOT__memtoReg_EX;
        CData/*1:0*/ PipelineCPU__DOT__ALUOp_EX;
        CData/*0:0*/ PipelineCPU__DOT__regWrite_EX;
        CData/*0:0*/ PipelineCPU__DOT__memRead_EX;
        CData/*0:0*/ PipelineCPU__DOT__memWrite_EX;
        CData/*0:0*/ PipelineCPU__DOT__ALUSrc_EX;
        CData/*1:0*/ PipelineCPU__DOT__memtoReg_MEM;
        CData/*0:0*/ PipelineCPU__DOT__regWrite_MEM;
        CData/*0:0*/ PipelineCPU__DOT__memWrite_MEM;
        CData/*1:0*/ PipelineCPU__DOT__memtoReg_WB;
        CData/*0:0*/ PipelineCPU__DOT__regWrite_WB;
        CData/*0:0*/ PipelineCPU__DOT__BrEq;
        CData/*0:0*/ PipelineCPU__DOT__BrLT;
        CData/*0:0*/ PipelineCPU__DOT__RePC;
        CData/*0:0*/ PipelineCPU__DOT__Flush_HD;
        CData/*1:0*/ PipelineCPU__DOT__id_ForwardA;
        CData/*1:0*/ PipelineCPU__DOT__id_ForwardB;
        CData/*1:0*/ PipelineCPU__DOT__ex_ForwardA;
        CData/*1:0*/ PipelineCPU__DOT__ex_ForwardB;
        CData/*6:0*/ __Vdlyvdim0__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v0;
        CData/*7:0*/ __Vdlyvval__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v0;
        CData/*0:0*/ __Vdlyvset__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v0;
        CData/*6:0*/ __Vdlyvdim0__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v1;
        CData/*7:0*/ __Vdlyvval__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v1;
        CData/*6:0*/ __Vdlyvdim0__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v2;
        CData/*7:0*/ __Vdlyvval__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v2;
        CData/*6:0*/ __Vdlyvdim0__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v3;
        CData/*7:0*/ __Vdlyvval__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v3;
        CData/*0:0*/ __Vdlyvset__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v4;
        CData/*0:0*/ __Vtrigrprev__TOP__clk;
        CData/*0:0*/ __Vtrigrprev__TOP__start;
        CData/*0:0*/ __Vtrigrprev__TOP__PipelineCPU__DOT__memRead_MEM;
        CData/*0:0*/ __VactDidInit;
        CData/*0:0*/ __VactContinue;
        SData/*11:0*/ PipelineCPU__DOT__m_Control__DOT__ctrl;
        IData/*31:0*/ PipelineCPU__DOT__PC_counter;
        IData/*31:0*/ PipelineCPU__DOT__PC_out_IF;
        IData/*31:0*/ PipelineCPU__DOT__PC_out_ID;
        IData/*31:0*/ PipelineCPU__DOT__PC_plus4_ID;
        IData/*31:0*/ PipelineCPU__DOT__IMEM_out_ID;
        IData/*31:0*/ PipelineCPU__DOT__IMMGEN_out_ID;
        IData/*31:0*/ PipelineCPU__DOT__readData1_EX;
        IData/*31:0*/ PipelineCPU__DOT__readData2_EX;
        IData/*31:0*/ PipelineCPU__DOT__IMMGEN_out_EX;
        IData/*31:0*/ PipelineCPU__DOT__PC_plus4_EX;
        IData/*31:0*/ PipelineCPU__DOT__IMEM_out_EX;
        IData/*31:0*/ PipelineCPU__DOT__ALUOut_MEM;
        IData/*31:0*/ PipelineCPU__DOT__readData2_MEM;
        IData/*31:0*/ PipelineCPU__DOT__PC_plus4_MEM;
        IData/*31:0*/ PipelineCPU__DOT__IMEM_out_MEM;
        IData/*31:0*/ PipelineCPU__DOT__DMEM_out_MEM;
        IData/*31:0*/ PipelineCPU__DOT__PC_plus4_WB;
        IData/*31:0*/ PipelineCPU__DOT__ALUOut_WB;
        IData/*31:0*/ PipelineCPU__DOT__DMEM_out_WB;
        IData/*31:0*/ PipelineCPU__DOT__IMEM_out_WB;
        IData/*31:0*/ PipelineCPU__DOT__writeData;
        IData/*31:0*/ PipelineCPU__DOT__Mux_ALU;
        IData/*31:0*/ PipelineCPU__DOT__ForwardA_ID;
        IData/*31:0*/ PipelineCPU__DOT__ForwardB_ID;
        IData/*31:0*/ PipelineCPU__DOT__ForwardA_EX;
    };
    struct {
        IData/*31:0*/ PipelineCPU__DOT__ForwardB_EX;
        IData/*31:0*/ PipelineCPU__DOT__ForwardA_EX_out;
        IData/*31:0*/ PipelineCPU__DOT__ForwardB_EX_out;
        IData/*31:0*/ PipelineCPU__DOT__ForwardB_MEM_out;
        IData/*31:0*/ __Vdly__PipelineCPU__DOT__PC_out_IF;
        IData/*31:0*/ __VstlIterCount;
        IData/*31:0*/ __Vtrigrprev__TOP__PipelineCPU__DOT__ALUOut_MEM;
        IData/*31:0*/ __VactIterCount;
        VL_OUT(r[32],31,0);
        VlUnpacked<CData/*7:0*/, 128> PipelineCPU__DOT__m_InstMem__DOT__insts;
        VlUnpacked<IData/*31:0*/, 32> PipelineCPU__DOT__m_Register__DOT__regs;
        VlUnpacked<CData/*7:0*/, 128> PipelineCPU__DOT__m_DataMemory__DOT__data_memory;
        VlUnpacked<CData/*0:0*/, 6> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<4> __VactTriggered;
    VlTriggerVec<4> __VnbaTriggered;

    // INTERNAL VARIABLES
    VPipelineCPU__Syms* const vlSymsp;

    // CONSTRUCTORS
    VPipelineCPU___024root(VPipelineCPU__Syms* symsp, const char* v__name);
    ~VPipelineCPU___024root();
    VL_UNCOPYABLE(VPipelineCPU___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
