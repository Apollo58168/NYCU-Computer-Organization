// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPipelineCPU.h for the primary calling header

#include "verilated.h"

#include "VPipelineCPU___024root.h"

void VPipelineCPU___024root___eval_act(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___eval_act\n"); );
}

VL_INLINE_OPT void VPipelineCPU___024root___nba_sequent__TOP__0(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__PipelineCPU__DOT__m_Register__DOT__regs__v0;
    __Vdlyvdim0__PipelineCPU__DOT__m_Register__DOT__regs__v0 = 0;
    IData/*31:0*/ __Vdlyvval__PipelineCPU__DOT__m_Register__DOT__regs__v0;
    __Vdlyvval__PipelineCPU__DOT__m_Register__DOT__regs__v0 = 0;
    CData/*0:0*/ __Vdlyvset__PipelineCPU__DOT__m_Register__DOT__regs__v0;
    __Vdlyvset__PipelineCPU__DOT__m_Register__DOT__regs__v0 = 0;
    CData/*0:0*/ __Vdlyvset__PipelineCPU__DOT__m_Register__DOT__regs__v1;
    __Vdlyvset__PipelineCPU__DOT__m_Register__DOT__regs__v1 = 0;
    // Body
    vlSelf->__Vdly__PipelineCPU__DOT__PC_out_IF = vlSelf->PipelineCPU__DOT__PC_out_IF;
    __Vdlyvset__PipelineCPU__DOT__m_Register__DOT__regs__v0 = 0U;
    __Vdlyvset__PipelineCPU__DOT__m_Register__DOT__regs__v1 = 0U;
    if (vlSelf->start) {
        vlSelf->__Vdly__PipelineCPU__DOT__PC_out_IF 
            = vlSelf->PipelineCPU__DOT__PC_counter;
        if (vlSelf->PipelineCPU__DOT__regWrite_WB) {
            __Vdlyvval__PipelineCPU__DOT__m_Register__DOT__regs__v0 
                = ((0U == (0x1fU & (vlSelf->PipelineCPU__DOT__IMEM_out_WB 
                                    >> 7U))) ? 0U : vlSelf->PipelineCPU__DOT__writeData);
            __Vdlyvset__PipelineCPU__DOT__m_Register__DOT__regs__v0 = 1U;
            __Vdlyvdim0__PipelineCPU__DOT__m_Register__DOT__regs__v0 
                = (0x1fU & (vlSelf->PipelineCPU__DOT__IMEM_out_WB 
                            >> 7U));
        }
    } else {
        vlSelf->__Vdly__PipelineCPU__DOT__PC_out_IF 
            = vlSelf->PipelineCPU__DOT__PC_out_IF;
        __Vdlyvset__PipelineCPU__DOT__m_Register__DOT__regs__v1 = 1U;
    }
    if (__Vdlyvset__PipelineCPU__DOT__m_Register__DOT__regs__v0) {
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[__Vdlyvdim0__PipelineCPU__DOT__m_Register__DOT__regs__v0] 
            = __Vdlyvval__PipelineCPU__DOT__m_Register__DOT__regs__v0;
    }
    if (__Vdlyvset__PipelineCPU__DOT__m_Register__DOT__regs__v1) {
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[1U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[2U] = 0x80U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[3U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[4U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[5U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[6U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[7U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[8U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[9U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0xaU] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0xbU] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0xcU] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0xdU] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0xeU] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0xfU] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0x10U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0x11U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0x12U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0x13U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0x14U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0x15U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0x16U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0x17U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0x18U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0x19U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0x1aU] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0x1bU] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0x1cU] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0x1dU] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0x1eU] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0x1fU] = 0U;
    }
    vlSelf->r[0U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0U];
    vlSelf->r[1U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [1U];
    vlSelf->r[2U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [2U];
    vlSelf->r[3U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [3U];
    vlSelf->r[4U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [4U];
    vlSelf->r[5U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [5U];
    vlSelf->r[6U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [6U];
    vlSelf->r[7U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [7U];
    vlSelf->r[8U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [8U];
    vlSelf->r[9U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [9U];
    vlSelf->r[0xaU] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0xaU];
    vlSelf->r[0xbU] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0xbU];
    vlSelf->r[0xcU] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0xcU];
    vlSelf->r[0xdU] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0xdU];
    vlSelf->r[0xeU] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0xeU];
    vlSelf->r[0xfU] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0xfU];
    vlSelf->r[0x10U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x10U];
    vlSelf->r[0x11U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x11U];
    vlSelf->r[0x12U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x12U];
    vlSelf->r[0x13U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x13U];
    vlSelf->r[0x14U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x14U];
    vlSelf->r[0x15U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x15U];
    vlSelf->r[0x16U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x16U];
    vlSelf->r[0x17U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x17U];
    vlSelf->r[0x18U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x18U];
    vlSelf->r[0x19U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x19U];
    vlSelf->r[0x1aU] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x1aU];
    vlSelf->r[0x1bU] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x1bU];
    vlSelf->r[0x1cU] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x1cU];
    vlSelf->r[0x1dU] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x1dU];
    vlSelf->r[0x1eU] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x1eU];
    vlSelf->r[0x1fU] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x1fU];
}

VL_INLINE_OPT void VPipelineCPU___024root___nba_sequent__TOP__1(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___nba_sequent__TOP__1\n"); );
    // Body
    vlSelf->__Vdlyvset__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v0 = 0U;
    vlSelf->__Vdlyvset__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v4 = 0U;
    if (vlSelf->start) {
        if (vlSelf->PipelineCPU__DOT__memWrite_MEM) {
            vlSelf->__Vdlyvval__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v0 
                = (vlSelf->PipelineCPU__DOT__ForwardB_MEM_out 
                   >> 0x18U);
            vlSelf->__Vdlyvset__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v0 = 1U;
            vlSelf->__Vdlyvdim0__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v0 
                = (0x7fU & ((IData)(3U) + vlSelf->PipelineCPU__DOT__ALUOut_MEM));
            vlSelf->__Vdlyvval__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v1 
                = (0xffU & (vlSelf->PipelineCPU__DOT__ForwardB_MEM_out 
                            >> 0x10U));
            vlSelf->__Vdlyvdim0__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v1 
                = (0x7fU & ((IData)(2U) + vlSelf->PipelineCPU__DOT__ALUOut_MEM));
            vlSelf->__Vdlyvval__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v2 
                = (0xffU & (vlSelf->PipelineCPU__DOT__ForwardB_MEM_out 
                            >> 8U));
            vlSelf->__Vdlyvdim0__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v2 
                = (0x7fU & ((IData)(1U) + vlSelf->PipelineCPU__DOT__ALUOut_MEM));
            vlSelf->__Vdlyvval__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v3 
                = (0xffU & vlSelf->PipelineCPU__DOT__ForwardB_MEM_out);
            vlSelf->__Vdlyvdim0__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v3 
                = (0x7fU & vlSelf->PipelineCPU__DOT__ALUOut_MEM);
        }
    } else {
        vlSelf->__Vdlyvset__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v4 = 1U;
    }
}

VL_INLINE_OPT void VPipelineCPU___024root___nba_sequent__TOP__2(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___nba_sequent__TOP__2\n"); );
    // Body
    vlSelf->PipelineCPU__DOT__ALUSrc_EX = (1U & ((~ 
                                                  ((IData)(vlSelf->clk) 
                                                   | (IData)(vlSelf->PipelineCPU__DOT__Flush_HD))) 
                                                 & ((IData)(vlSelf->PipelineCPU__DOT__m_Control__DOT__ctrl) 
                                                    >> 3U)));
    if (vlSelf->clk) {
        vlSelf->PipelineCPU__DOT__memtoReg_WB = 0U;
        vlSelf->PipelineCPU__DOT__PC_plus4_WB = 0U;
        vlSelf->PipelineCPU__DOT__ALUOut_WB = 0U;
        vlSelf->PipelineCPU__DOT__DMEM_out_WB = 0U;
        vlSelf->PipelineCPU__DOT__IMEM_out_WB = 0U;
        vlSelf->PipelineCPU__DOT__ForwardB_MEM_out = 0U;
        vlSelf->PipelineCPU__DOT__memtoReg_MEM = 0U;
        vlSelf->PipelineCPU__DOT__PC_plus4_MEM = 0U;
        vlSelf->PipelineCPU__DOT__IMEM_out_MEM = 0U;
    } else {
        vlSelf->PipelineCPU__DOT__memtoReg_WB = vlSelf->PipelineCPU__DOT__memtoReg_MEM;
        vlSelf->PipelineCPU__DOT__PC_plus4_WB = vlSelf->PipelineCPU__DOT__PC_plus4_MEM;
        vlSelf->PipelineCPU__DOT__ALUOut_WB = vlSelf->PipelineCPU__DOT__ALUOut_MEM;
        vlSelf->PipelineCPU__DOT__DMEM_out_WB = vlSelf->PipelineCPU__DOT__DMEM_out_MEM;
        vlSelf->PipelineCPU__DOT__IMEM_out_WB = vlSelf->PipelineCPU__DOT__IMEM_out_MEM;
        vlSelf->PipelineCPU__DOT__ForwardB_MEM_out 
            = vlSelf->PipelineCPU__DOT__ForwardB_EX_out;
        vlSelf->PipelineCPU__DOT__memtoReg_MEM = vlSelf->PipelineCPU__DOT__memtoReg_EX;
        vlSelf->PipelineCPU__DOT__PC_plus4_MEM = vlSelf->PipelineCPU__DOT__PC_plus4_EX;
        vlSelf->PipelineCPU__DOT__IMEM_out_MEM = vlSelf->PipelineCPU__DOT__IMEM_out_EX;
    }
    if (((IData)(vlSelf->clk) | (IData)(vlSelf->PipelineCPU__DOT__Flush_HD))) {
        vlSelf->PipelineCPU__DOT__IMMGEN_out_EX = 0U;
        vlSelf->PipelineCPU__DOT__ALUOp_EX = 0U;
        vlSelf->PipelineCPU__DOT__ForwardA_EX = 0U;
        vlSelf->PipelineCPU__DOT__ForwardB_EX = 0U;
        vlSelf->PipelineCPU__DOT__memtoReg_EX = 0U;
        vlSelf->PipelineCPU__DOT__PC_plus4_EX = 0U;
        vlSelf->PipelineCPU__DOT__IMEM_out_EX = 0x13U;
    } else {
        vlSelf->PipelineCPU__DOT__IMMGEN_out_EX = vlSelf->PipelineCPU__DOT__IMMGEN_out_ID;
        vlSelf->PipelineCPU__DOT__ALUOp_EX = (3U & 
                                              ((IData)(vlSelf->PipelineCPU__DOT__m_Control__DOT__ctrl) 
                                               >> 5U));
        vlSelf->PipelineCPU__DOT__ForwardA_EX = vlSelf->PipelineCPU__DOT__ForwardA_ID;
        vlSelf->PipelineCPU__DOT__ForwardB_EX = vlSelf->PipelineCPU__DOT__ForwardB_ID;
        vlSelf->PipelineCPU__DOT__memtoReg_EX = (3U 
                                                 & ((IData)(vlSelf->PipelineCPU__DOT__m_Control__DOT__ctrl) 
                                                    >> 7U));
        vlSelf->PipelineCPU__DOT__PC_plus4_EX = vlSelf->PipelineCPU__DOT__PC_plus4_ID;
        vlSelf->PipelineCPU__DOT__IMEM_out_EX = vlSelf->PipelineCPU__DOT__IMEM_out_ID;
    }
    if ((1U & ((IData)(vlSelf->clk) | ((IData)(vlSelf->PipelineCPU__DOT__m_Control__DOT__ctrl) 
                                       >> 1U)))) {
        vlSelf->PipelineCPU__DOT__PC_out_ID = 0U;
        vlSelf->PipelineCPU__DOT__PC_plus4_ID = 0U;
        vlSelf->PipelineCPU__DOT__IMEM_out_ID = 0x13U;
    } else if ((1U & (~ (IData)(vlSelf->PipelineCPU__DOT__Flush_HD)))) {
        vlSelf->PipelineCPU__DOT__PC_out_ID = vlSelf->PipelineCPU__DOT__PC_out_IF;
        vlSelf->PipelineCPU__DOT__PC_plus4_ID = ((IData)(4U) 
                                                 + vlSelf->PipelineCPU__DOT__PC_out_IF);
        vlSelf->PipelineCPU__DOT__IMEM_out_ID = ((0x80U 
                                                  <= vlSelf->PipelineCPU__DOT__PC_out_IF)
                                                  ? 0U
                                                  : 
                                                 ((vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts
                                                   [
                                                   (0x7fU 
                                                    & vlSelf->PipelineCPU__DOT__PC_out_IF)] 
                                                   << 0x18U) 
                                                  | ((vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts
                                                      [
                                                      (0x7fU 
                                                       & ((IData)(1U) 
                                                          + vlSelf->PipelineCPU__DOT__PC_out_IF))] 
                                                      << 0x10U) 
                                                     | ((vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts
                                                         [
                                                         (0x7fU 
                                                          & ((IData)(2U) 
                                                             + vlSelf->PipelineCPU__DOT__PC_out_IF))] 
                                                         << 8U) 
                                                        | vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts
                                                        [
                                                        (0x7fU 
                                                         & ((IData)(3U) 
                                                            + vlSelf->PipelineCPU__DOT__PC_out_IF))]))));
    }
    vlSelf->PipelineCPU__DOT__regWrite_WB = ((~ (IData)(vlSelf->clk)) 
                                             & (IData)(vlSelf->PipelineCPU__DOT__regWrite_MEM));
    vlSelf->PipelineCPU__DOT__memWrite_MEM = ((~ (IData)(vlSelf->clk)) 
                                              & (IData)(vlSelf->PipelineCPU__DOT__memWrite_EX));
    vlSelf->PipelineCPU__DOT__writeData = ((0U == (IData)(vlSelf->PipelineCPU__DOT__memtoReg_WB))
                                            ? vlSelf->PipelineCPU__DOT__ALUOut_WB
                                            : ((1U 
                                                == (IData)(vlSelf->PipelineCPU__DOT__memtoReg_WB))
                                                ? vlSelf->PipelineCPU__DOT__DMEM_out_WB
                                                : (
                                                   (2U 
                                                    == (IData)(vlSelf->PipelineCPU__DOT__memtoReg_WB))
                                                    ? vlSelf->PipelineCPU__DOT__PC_plus4_WB
                                                    : 0U)));
    vlSelf->PipelineCPU__DOT__regWrite_MEM = ((~ (IData)(vlSelf->clk)) 
                                              & (IData)(vlSelf->PipelineCPU__DOT__regWrite_EX));
    vlSelf->PipelineCPU__DOT__memWrite_EX = (1U & (
                                                   (~ 
                                                    ((IData)(vlSelf->clk) 
                                                     | (IData)(vlSelf->PipelineCPU__DOT__Flush_HD))) 
                                                   & ((IData)(vlSelf->PipelineCPU__DOT__m_Control__DOT__ctrl) 
                                                      >> 4U)));
    vlSelf->PipelineCPU__DOT__regWrite_EX = (1U & (
                                                   (~ 
                                                    ((IData)(vlSelf->clk) 
                                                     | (IData)(vlSelf->PipelineCPU__DOT__Flush_HD))) 
                                                   & ((IData)(vlSelf->PipelineCPU__DOT__m_Control__DOT__ctrl) 
                                                      >> 2U)));
    vlSelf->PipelineCPU__DOT__ex_ForwardA = ((((IData)(vlSelf->PipelineCPU__DOT__regWrite_MEM) 
                                               & (0U 
                                                  != 
                                                  (0x1fU 
                                                   & (vlSelf->PipelineCPU__DOT__IMEM_out_MEM 
                                                      >> 7U)))) 
                                              & ((0x1fU 
                                                  & (vlSelf->PipelineCPU__DOT__IMEM_out_MEM 
                                                     >> 7U)) 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->PipelineCPU__DOT__IMEM_out_EX 
                                                     >> 0xfU))))
                                              ? 2U : 
                                             ((((IData)(vlSelf->PipelineCPU__DOT__regWrite_WB) 
                                                & (0U 
                                                   != 
                                                   (0x1fU 
                                                    & (vlSelf->PipelineCPU__DOT__IMEM_out_WB 
                                                       >> 7U)))) 
                                               & ((0x1fU 
                                                   & (vlSelf->PipelineCPU__DOT__IMEM_out_WB 
                                                      >> 7U)) 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->PipelineCPU__DOT__IMEM_out_EX 
                                                      >> 0xfU))))
                                               ? 1U
                                               : 0U));
    vlSelf->PipelineCPU__DOT__ex_ForwardB = ((((IData)(vlSelf->PipelineCPU__DOT__regWrite_MEM) 
                                               & (0U 
                                                  != 
                                                  (0x1fU 
                                                   & (vlSelf->PipelineCPU__DOT__IMEM_out_MEM 
                                                      >> 7U)))) 
                                              & ((0x1fU 
                                                  & (vlSelf->PipelineCPU__DOT__IMEM_out_MEM 
                                                     >> 7U)) 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->PipelineCPU__DOT__IMEM_out_EX 
                                                     >> 0x14U))))
                                              ? 2U : 
                                             ((((IData)(vlSelf->PipelineCPU__DOT__regWrite_WB) 
                                                & (0U 
                                                   != 
                                                   (0x1fU 
                                                    & (vlSelf->PipelineCPU__DOT__IMEM_out_WB 
                                                       >> 7U)))) 
                                               & ((0x1fU 
                                                   & (vlSelf->PipelineCPU__DOT__IMEM_out_WB 
                                                      >> 7U)) 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->PipelineCPU__DOT__IMEM_out_EX 
                                                      >> 0x14U))))
                                               ? 1U
                                               : 0U));
    vlSelf->PipelineCPU__DOT__IMMGEN_out_ID = ((0x40U 
                                                & vlSelf->PipelineCPU__DOT__IMEM_out_ID)
                                                ? (
                                                   (0x20U 
                                                    & vlSelf->PipelineCPU__DOT__IMEM_out_ID)
                                                    ? 
                                                   ((0x10U 
                                                     & vlSelf->PipelineCPU__DOT__IMEM_out_ID)
                                                     ? 0U
                                                     : 
                                                    ((8U 
                                                      & vlSelf->PipelineCPU__DOT__IMEM_out_ID)
                                                      ? 
                                                     ((4U 
                                                       & vlSelf->PipelineCPU__DOT__IMEM_out_ID)
                                                       ? 
                                                      ((2U 
                                                        & vlSelf->PipelineCPU__DOT__IMEM_out_ID)
                                                        ? 
                                                       ((1U 
                                                         & vlSelf->PipelineCPU__DOT__IMEM_out_ID)
                                                         ? 
                                                        (((- (IData)(
                                                                     (vlSelf->PipelineCPU__DOT__IMEM_out_ID 
                                                                      >> 0x1fU))) 
                                                          << 0x14U) 
                                                         | ((0x80000U 
                                                             & (vlSelf->PipelineCPU__DOT__IMEM_out_ID 
                                                                >> 0xcU)) 
                                                            | ((0x7f800U 
                                                                & (vlSelf->PipelineCPU__DOT__IMEM_out_ID 
                                                                   >> 1U)) 
                                                               | ((0x400U 
                                                                   & (vlSelf->PipelineCPU__DOT__IMEM_out_ID 
                                                                      >> 0xaU)) 
                                                                  | (0x3ffU 
                                                                     & (vlSelf->PipelineCPU__DOT__IMEM_out_ID 
                                                                        >> 0x15U))))))
                                                         : 0U)
                                                        : 0U)
                                                       : 0U)
                                                      : 
                                                     ((4U 
                                                       & vlSelf->PipelineCPU__DOT__IMEM_out_ID)
                                                       ? 
                                                      ((2U 
                                                        & vlSelf->PipelineCPU__DOT__IMEM_out_ID)
                                                        ? 
                                                       ((1U 
                                                         & vlSelf->PipelineCPU__DOT__IMEM_out_ID)
                                                         ? 
                                                        (((- (IData)(
                                                                     (vlSelf->PipelineCPU__DOT__IMEM_out_ID 
                                                                      >> 0x1fU))) 
                                                          << 0xcU) 
                                                         | (vlSelf->PipelineCPU__DOT__IMEM_out_ID 
                                                            >> 0x14U))
                                                         : 0U)
                                                        : 0U)
                                                       : 
                                                      ((2U 
                                                        & vlSelf->PipelineCPU__DOT__IMEM_out_ID)
                                                        ? 
                                                       ((1U 
                                                         & vlSelf->PipelineCPU__DOT__IMEM_out_ID)
                                                         ? 
                                                        (((- (IData)(
                                                                     (vlSelf->PipelineCPU__DOT__IMEM_out_ID 
                                                                      >> 0x1fU))) 
                                                          << 0xcU) 
                                                         | ((0x800U 
                                                             & (vlSelf->PipelineCPU__DOT__IMEM_out_ID 
                                                                >> 0x14U)) 
                                                            | ((0x400U 
                                                                & (vlSelf->PipelineCPU__DOT__IMEM_out_ID 
                                                                   << 3U)) 
                                                               | ((0x3f0U 
                                                                   & (vlSelf->PipelineCPU__DOT__IMEM_out_ID 
                                                                      >> 0x15U)) 
                                                                  | (0xfU 
                                                                     & (vlSelf->PipelineCPU__DOT__IMEM_out_ID 
                                                                        >> 8U))))))
                                                         : 0U)
                                                        : 0U))))
                                                    : 0U)
                                                : (
                                                   (0x20U 
                                                    & vlSelf->PipelineCPU__DOT__IMEM_out_ID)
                                                    ? 
                                                   ((0x10U 
                                                     & vlSelf->PipelineCPU__DOT__IMEM_out_ID)
                                                     ? 0U
                                                     : 
                                                    ((8U 
                                                      & vlSelf->PipelineCPU__DOT__IMEM_out_ID)
                                                      ? 0U
                                                      : 
                                                     ((4U 
                                                       & vlSelf->PipelineCPU__DOT__IMEM_out_ID)
                                                       ? 0U
                                                       : 
                                                      ((2U 
                                                        & vlSelf->PipelineCPU__DOT__IMEM_out_ID)
                                                        ? 
                                                       ((1U 
                                                         & vlSelf->PipelineCPU__DOT__IMEM_out_ID)
                                                         ? 
                                                        (((- (IData)(
                                                                     (vlSelf->PipelineCPU__DOT__IMEM_out_ID 
                                                                      >> 0x1fU))) 
                                                          << 0xcU) 
                                                         | ((0xfe0U 
                                                             & (vlSelf->PipelineCPU__DOT__IMEM_out_ID 
                                                                >> 0x14U)) 
                                                            | (0x1fU 
                                                               & (vlSelf->PipelineCPU__DOT__IMEM_out_ID 
                                                                  >> 7U))))
                                                         : 0U)
                                                        : 0U))))
                                                    : 
                                                   ((0x10U 
                                                     & vlSelf->PipelineCPU__DOT__IMEM_out_ID)
                                                     ? 
                                                    ((8U 
                                                      & vlSelf->PipelineCPU__DOT__IMEM_out_ID)
                                                      ? 0U
                                                      : 
                                                     ((4U 
                                                       & vlSelf->PipelineCPU__DOT__IMEM_out_ID)
                                                       ? 0U
                                                       : 
                                                      ((2U 
                                                        & vlSelf->PipelineCPU__DOT__IMEM_out_ID)
                                                        ? 
                                                       ((1U 
                                                         & vlSelf->PipelineCPU__DOT__IMEM_out_ID)
                                                         ? 
                                                        (((- (IData)(
                                                                     (vlSelf->PipelineCPU__DOT__IMEM_out_ID 
                                                                      >> 0x1fU))) 
                                                          << 0xcU) 
                                                         | (vlSelf->PipelineCPU__DOT__IMEM_out_ID 
                                                            >> 0x14U))
                                                         : 0U)
                                                        : 0U)))
                                                     : 
                                                    ((8U 
                                                      & vlSelf->PipelineCPU__DOT__IMEM_out_ID)
                                                      ? 0U
                                                      : 
                                                     ((4U 
                                                       & vlSelf->PipelineCPU__DOT__IMEM_out_ID)
                                                       ? 0U
                                                       : 
                                                      ((2U 
                                                        & vlSelf->PipelineCPU__DOT__IMEM_out_ID)
                                                        ? 
                                                       ((1U 
                                                         & vlSelf->PipelineCPU__DOT__IMEM_out_ID)
                                                         ? 
                                                        (((- (IData)(
                                                                     (vlSelf->PipelineCPU__DOT__IMEM_out_ID 
                                                                      >> 0x1fU))) 
                                                          << 0xcU) 
                                                         | (vlSelf->PipelineCPU__DOT__IMEM_out_ID 
                                                            >> 0x14U))
                                                         : 0U)
                                                        : 0U))))));
    vlSelf->PipelineCPU__DOT__id_ForwardB = ((((IData)(vlSelf->PipelineCPU__DOT__regWrite_MEM) 
                                               & (0U 
                                                  != 
                                                  (0x1fU 
                                                   & (vlSelf->PipelineCPU__DOT__IMEM_out_MEM 
                                                      >> 7U)))) 
                                              & ((0x1fU 
                                                  & (vlSelf->PipelineCPU__DOT__IMEM_out_MEM 
                                                     >> 7U)) 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->PipelineCPU__DOT__IMEM_out_ID 
                                                     >> 0x14U))))
                                              ? 1U : 
                                             ((((IData)(vlSelf->PipelineCPU__DOT__regWrite_WB) 
                                                & (0U 
                                                   != 
                                                   (0x1fU 
                                                    & (vlSelf->PipelineCPU__DOT__IMEM_out_WB 
                                                       >> 7U)))) 
                                               & ((0x1fU 
                                                   & (vlSelf->PipelineCPU__DOT__IMEM_out_WB 
                                                      >> 7U)) 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->PipelineCPU__DOT__IMEM_out_ID 
                                                      >> 0x14U))))
                                               ? 2U
                                               : 0U));
    vlSelf->PipelineCPU__DOT__id_ForwardA = ((((IData)(vlSelf->PipelineCPU__DOT__regWrite_MEM) 
                                               & (0U 
                                                  != 
                                                  (0x1fU 
                                                   & (vlSelf->PipelineCPU__DOT__IMEM_out_MEM 
                                                      >> 7U)))) 
                                              & ((0x1fU 
                                                  & (vlSelf->PipelineCPU__DOT__IMEM_out_MEM 
                                                     >> 7U)) 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->PipelineCPU__DOT__IMEM_out_ID 
                                                     >> 0xfU))))
                                              ? 1U : 
                                             ((((IData)(vlSelf->PipelineCPU__DOT__regWrite_WB) 
                                                & (0U 
                                                   != 
                                                   (0x1fU 
                                                    & (vlSelf->PipelineCPU__DOT__IMEM_out_WB 
                                                       >> 7U)))) 
                                               & ((0x1fU 
                                                   & (vlSelf->PipelineCPU__DOT__IMEM_out_WB 
                                                      >> 7U)) 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->PipelineCPU__DOT__IMEM_out_ID 
                                                      >> 0xfU))))
                                               ? 2U
                                               : 0U));
}

VL_INLINE_OPT void VPipelineCPU___024root___nba_sequent__TOP__3(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___nba_sequent__TOP__3\n"); );
    // Body
    if (vlSelf->PipelineCPU__DOT__memRead_MEM) {
        vlSelf->PipelineCPU__DOT__DMEM_out_MEM = ((0xffffffU 
                                                   & vlSelf->PipelineCPU__DOT__DMEM_out_MEM) 
                                                  | (vlSelf->PipelineCPU__DOT__m_DataMemory__DOT__data_memory
                                                     [
                                                     (0x7fU 
                                                      & ((IData)(3U) 
                                                         + vlSelf->PipelineCPU__DOT__ALUOut_MEM))] 
                                                     << 0x18U));
        vlSelf->PipelineCPU__DOT__DMEM_out_MEM = ((0xff00ffffU 
                                                   & vlSelf->PipelineCPU__DOT__DMEM_out_MEM) 
                                                  | (vlSelf->PipelineCPU__DOT__m_DataMemory__DOT__data_memory
                                                     [
                                                     (0x7fU 
                                                      & ((IData)(2U) 
                                                         + vlSelf->PipelineCPU__DOT__ALUOut_MEM))] 
                                                     << 0x10U));
        vlSelf->PipelineCPU__DOT__DMEM_out_MEM = ((0xffff00ffU 
                                                   & vlSelf->PipelineCPU__DOT__DMEM_out_MEM) 
                                                  | (vlSelf->PipelineCPU__DOT__m_DataMemory__DOT__data_memory
                                                     [
                                                     (0x7fU 
                                                      & ((IData)(1U) 
                                                         + vlSelf->PipelineCPU__DOT__ALUOut_MEM))] 
                                                     << 8U));
        vlSelf->PipelineCPU__DOT__DMEM_out_MEM = ((0xffffff00U 
                                                   & vlSelf->PipelineCPU__DOT__DMEM_out_MEM) 
                                                  | vlSelf->PipelineCPU__DOT__m_DataMemory__DOT__data_memory
                                                  [
                                                  (0x7fU 
                                                   & vlSelf->PipelineCPU__DOT__ALUOut_MEM)]);
    }
}

VL_INLINE_OPT void VPipelineCPU___024root___nba_sequent__TOP__4(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___nba_sequent__TOP__4\n"); );
    // Body
    vlSelf->PipelineCPU__DOT__PC_out_IF = vlSelf->__Vdly__PipelineCPU__DOT__PC_out_IF;
}

VL_INLINE_OPT void VPipelineCPU___024root___nba_sequent__TOP__5(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___nba_sequent__TOP__5\n"); );
    // Init
    IData/*31:0*/ __Vilp;
    // Body
    if (vlSelf->__Vdlyvset__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v0) {
        vlSelf->PipelineCPU__DOT__m_DataMemory__DOT__data_memory[vlSelf->__Vdlyvdim0__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v0] 
            = vlSelf->__Vdlyvval__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v0;
        vlSelf->PipelineCPU__DOT__m_DataMemory__DOT__data_memory[vlSelf->__Vdlyvdim0__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v1] 
            = vlSelf->__Vdlyvval__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v1;
        vlSelf->PipelineCPU__DOT__m_DataMemory__DOT__data_memory[vlSelf->__Vdlyvdim0__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v2] 
            = vlSelf->__Vdlyvval__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v2;
        vlSelf->PipelineCPU__DOT__m_DataMemory__DOT__data_memory[vlSelf->__Vdlyvdim0__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v3] 
            = vlSelf->__Vdlyvval__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v3;
    }
    if (vlSelf->__Vdlyvset__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v4) {
        __Vilp = 0U;
        while ((__Vilp <= 0x7fU)) {
            vlSelf->PipelineCPU__DOT__m_DataMemory__DOT__data_memory[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
    }
}

extern const VlUnpacked<CData/*3:0*/, 64> VPipelineCPU__ConstPool__TABLE_h46b25d5f_0;

VL_INLINE_OPT void VPipelineCPU___024root___nba_sequent__TOP__6(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___nba_sequent__TOP__6\n"); );
    // Init
    CData/*5:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    vlSelf->PipelineCPU__DOT__memRead_MEM = ((~ (IData)(vlSelf->clk)) 
                                             & (IData)(vlSelf->PipelineCPU__DOT__memRead_EX));
    vlSelf->PipelineCPU__DOT__ALUOut_MEM = ((IData)(vlSelf->clk)
                                             ? 0U : 
                                            ((8U & (IData)(vlSelf->PipelineCPU__DOT__ALUCtl))
                                              ? 0U : 
                                             ((4U & (IData)(vlSelf->PipelineCPU__DOT__ALUCtl))
                                               ? ((2U 
                                                   & (IData)(vlSelf->PipelineCPU__DOT__ALUCtl))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->PipelineCPU__DOT__ALUCtl))
                                                    ? 
                                                   (VL_LTS_III(32, vlSelf->PipelineCPU__DOT__ForwardA_EX_out, vlSelf->PipelineCPU__DOT__Mux_ALU)
                                                     ? 1U
                                                     : 0U)
                                                    : 
                                                   (vlSelf->PipelineCPU__DOT__ForwardA_EX_out 
                                                    - vlSelf->PipelineCPU__DOT__Mux_ALU))
                                                   : 0U)
                                               : ((2U 
                                                   & (IData)(vlSelf->PipelineCPU__DOT__ALUCtl))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->PipelineCPU__DOT__ALUCtl))
                                                    ? 0U
                                                    : 
                                                   (vlSelf->PipelineCPU__DOT__ForwardA_EX_out 
                                                    + vlSelf->PipelineCPU__DOT__Mux_ALU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->PipelineCPU__DOT__ALUCtl))
                                                    ? 
                                                   (vlSelf->PipelineCPU__DOT__ForwardA_EX_out 
                                                    | vlSelf->PipelineCPU__DOT__Mux_ALU)
                                                    : 
                                                   (vlSelf->PipelineCPU__DOT__ForwardA_EX_out 
                                                    & vlSelf->PipelineCPU__DOT__Mux_ALU))))));
    __Vtableidx2 = ((0x20U & (vlSelf->PipelineCPU__DOT__IMEM_out_EX 
                              >> 0x19U)) | ((0x1cU 
                                             & (vlSelf->PipelineCPU__DOT__IMEM_out_EX 
                                                >> 0xaU)) 
                                            | (IData)(vlSelf->PipelineCPU__DOT__ALUOp_EX)));
    vlSelf->PipelineCPU__DOT__ALUCtl = VPipelineCPU__ConstPool__TABLE_h46b25d5f_0
        [__Vtableidx2];
    vlSelf->PipelineCPU__DOT__memRead_EX = (1U & ((~ 
                                                   ((IData)(vlSelf->clk) 
                                                    | (IData)(vlSelf->PipelineCPU__DOT__Flush_HD))) 
                                                  & ((IData)(vlSelf->PipelineCPU__DOT__m_Control__DOT__ctrl) 
                                                     >> 9U)));
    vlSelf->PipelineCPU__DOT__ForwardA_EX_out = ((0U 
                                                  == (IData)(vlSelf->PipelineCPU__DOT__ex_ForwardA))
                                                  ? vlSelf->PipelineCPU__DOT__ForwardA_EX
                                                  : 
                                                 ((1U 
                                                   == (IData)(vlSelf->PipelineCPU__DOT__ex_ForwardA))
                                                   ? vlSelf->PipelineCPU__DOT__writeData
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelf->PipelineCPU__DOT__ex_ForwardA))
                                                    ? vlSelf->PipelineCPU__DOT__ALUOut_MEM
                                                    : 0U)));
    vlSelf->PipelineCPU__DOT__ForwardB_EX_out = ((0U 
                                                  == (IData)(vlSelf->PipelineCPU__DOT__ex_ForwardB))
                                                  ? vlSelf->PipelineCPU__DOT__ForwardB_EX
                                                  : 
                                                 ((1U 
                                                   == (IData)(vlSelf->PipelineCPU__DOT__ex_ForwardB))
                                                   ? vlSelf->PipelineCPU__DOT__writeData
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelf->PipelineCPU__DOT__ex_ForwardB))
                                                    ? vlSelf->PipelineCPU__DOT__ALUOut_MEM
                                                    : 0U)));
    vlSelf->PipelineCPU__DOT__Mux_ALU = ((IData)(vlSelf->PipelineCPU__DOT__ALUSrc_EX)
                                          ? vlSelf->PipelineCPU__DOT__IMMGEN_out_EX
                                          : vlSelf->PipelineCPU__DOT__ForwardB_EX_out);
    vlSelf->PipelineCPU__DOT__Flush_HD = 0U;
    if (((IData)(vlSelf->PipelineCPU__DOT__memRead_EX) 
         & (((0x1fU & (vlSelf->PipelineCPU__DOT__IMEM_out_EX 
                       >> 7U)) == (0x1fU & (vlSelf->PipelineCPU__DOT__IMEM_out_ID 
                                            >> 0xfU))) 
            | ((0x1fU & (vlSelf->PipelineCPU__DOT__IMEM_out_EX 
                         >> 7U)) == (0x1fU & (vlSelf->PipelineCPU__DOT__IMEM_out_ID 
                                              >> 0x14U)))))) {
        vlSelf->PipelineCPU__DOT__Flush_HD = 1U;
        vlSelf->PipelineCPU__DOT__RePC = 0U;
        vlSelf->PipelineCPU__DOT__RePC = 1U;
    } else {
        vlSelf->PipelineCPU__DOT__RePC = 0U;
    }
    if (((((0x63U == (0x7fU & vlSelf->PipelineCPU__DOT__IMEM_out_ID)) 
           & (IData)(vlSelf->PipelineCPU__DOT__regWrite_EX)) 
          & (((0x1fU & (vlSelf->PipelineCPU__DOT__IMEM_out_EX 
                        >> 7U)) == (0x1fU & (vlSelf->PipelineCPU__DOT__IMEM_out_ID 
                                             >> 0xfU))) 
             | ((0x1fU & (vlSelf->PipelineCPU__DOT__IMEM_out_EX 
                          >> 7U)) == (0x1fU & (vlSelf->PipelineCPU__DOT__IMEM_out_ID 
                                               >> 0x14U))))) 
         & (0U != (0x1fU & (vlSelf->PipelineCPU__DOT__IMEM_out_EX 
                            >> 7U))))) {
        vlSelf->PipelineCPU__DOT__Flush_HD = 1U;
        vlSelf->PipelineCPU__DOT__RePC = 1U;
    }
}

extern const VlUnpacked<SData/*11:0*/, 4096> VPipelineCPU__ConstPool__TABLE_hd4fbb822_0;

VL_INLINE_OPT void VPipelineCPU___024root___nba_comb__TOP__0(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___nba_comb__TOP__0\n"); );
    // Init
    SData/*11:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelf->PipelineCPU__DOT__ForwardB_ID = ((0U == (IData)(vlSelf->PipelineCPU__DOT__id_ForwardB))
                                              ? vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
                                             [(0x1fU 
                                               & (vlSelf->PipelineCPU__DOT__IMEM_out_ID 
                                                  >> 0x14U))]
                                              : ((1U 
                                                  == (IData)(vlSelf->PipelineCPU__DOT__id_ForwardB))
                                                  ? vlSelf->PipelineCPU__DOT__ALUOut_MEM
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelf->PipelineCPU__DOT__id_ForwardB))
                                                   ? vlSelf->PipelineCPU__DOT__writeData
                                                   : 0U)));
    vlSelf->PipelineCPU__DOT__ForwardA_ID = ((0U == (IData)(vlSelf->PipelineCPU__DOT__id_ForwardA))
                                              ? vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
                                             [(0x1fU 
                                               & (vlSelf->PipelineCPU__DOT__IMEM_out_ID 
                                                  >> 0xfU))]
                                              : ((1U 
                                                  == (IData)(vlSelf->PipelineCPU__DOT__id_ForwardA))
                                                  ? vlSelf->PipelineCPU__DOT__ALUOut_MEM
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelf->PipelineCPU__DOT__id_ForwardA))
                                                   ? vlSelf->PipelineCPU__DOT__writeData
                                                   : 0U)));
    vlSelf->PipelineCPU__DOT__BrEq = (vlSelf->PipelineCPU__DOT__ForwardA_ID 
                                      == vlSelf->PipelineCPU__DOT__ForwardB_ID);
    vlSelf->PipelineCPU__DOT__BrLT = VL_LTS_III(32, vlSelf->PipelineCPU__DOT__ForwardA_ID, vlSelf->PipelineCPU__DOT__ForwardB_ID);
    __Vtableidx1 = (((IData)(vlSelf->PipelineCPU__DOT__BrEq) 
                     << 0xbU) | (((IData)(vlSelf->PipelineCPU__DOT__BrLT) 
                                  << 0xaU) | ((0x380U 
                                               & (vlSelf->PipelineCPU__DOT__IMEM_out_ID 
                                                  >> 5U)) 
                                              | (0x7fU 
                                                 & vlSelf->PipelineCPU__DOT__IMEM_out_ID))));
    vlSelf->PipelineCPU__DOT__m_Control__DOT__ctrl 
        = VPipelineCPU__ConstPool__TABLE_hd4fbb822_0
        [__Vtableidx1];
    vlSelf->PipelineCPU__DOT__PC_counter = ((IData)(vlSelf->PipelineCPU__DOT__RePC)
                                             ? vlSelf->PipelineCPU__DOT__PC_out_IF
                                             : ((0x400U 
                                                 & (IData)(vlSelf->PipelineCPU__DOT__m_Control__DOT__ctrl))
                                                 ? 
                                                (((1U 
                                                   & (IData)(vlSelf->PipelineCPU__DOT__m_Control__DOT__ctrl))
                                                   ? vlSelf->PipelineCPU__DOT__ForwardA_ID
                                                   : vlSelf->PipelineCPU__DOT__PC_out_ID) 
                                                 + 
                                                 (vlSelf->PipelineCPU__DOT__IMMGEN_out_ID 
                                                  << 1U))
                                                 : 
                                                ((IData)(4U) 
                                                 + vlSelf->PipelineCPU__DOT__PC_out_IF)));
}

void VPipelineCPU___024root___eval_nba(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VPipelineCPU___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(2U)) {
        VPipelineCPU___024root___nba_sequent__TOP__1(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VPipelineCPU___024root___nba_sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(3U)) {
        VPipelineCPU___024root___nba_sequent__TOP__3(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VPipelineCPU___024root___nba_sequent__TOP__4(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(2U)) {
        VPipelineCPU___024root___nba_sequent__TOP__5(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VPipelineCPU___024root___nba_sequent__TOP__6(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    if ((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(1U))) {
        VPipelineCPU___024root___nba_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
    }
}

void VPipelineCPU___024root___eval_triggers__act(VPipelineCPU___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VPipelineCPU___024root___dump_triggers__act(VPipelineCPU___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VPipelineCPU___024root___dump_triggers__nba(VPipelineCPU___024root* vlSelf);
#endif  // VL_DEBUG

void VPipelineCPU___024root___eval(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___eval\n"); );
    // Init
    VlTriggerVec<4> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            VPipelineCPU___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    VPipelineCPU___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("PipelineCPU.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                VPipelineCPU___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                VPipelineCPU___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("PipelineCPU.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            VPipelineCPU___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void VPipelineCPU___024root___eval_debug_assertions(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->start & 0xfeU))) {
        Verilated::overWidthError("start");}
}
#endif  // VL_DEBUG
