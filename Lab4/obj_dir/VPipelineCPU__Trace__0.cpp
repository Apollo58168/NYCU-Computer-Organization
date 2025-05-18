// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VPipelineCPU__Syms.h"


void VPipelineCPU___024root__trace_chg_sub_0(VPipelineCPU___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VPipelineCPU___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root__trace_chg_top_0\n"); );
    // Init
    VPipelineCPU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VPipelineCPU___024root*>(voidSelf);
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VPipelineCPU___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void VPipelineCPU___024root__trace_chg_sub_0(VPipelineCPU___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0]),32);
        bufp->chgIData(oldp+1,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[1]),32);
        bufp->chgIData(oldp+2,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[2]),32);
        bufp->chgIData(oldp+3,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[3]),32);
        bufp->chgIData(oldp+4,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[4]),32);
        bufp->chgIData(oldp+5,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[5]),32);
        bufp->chgIData(oldp+6,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[6]),32);
        bufp->chgIData(oldp+7,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[7]),32);
        bufp->chgIData(oldp+8,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[8]),32);
        bufp->chgIData(oldp+9,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[9]),32);
        bufp->chgIData(oldp+10,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[10]),32);
        bufp->chgIData(oldp+11,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[11]),32);
        bufp->chgIData(oldp+12,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[12]),32);
        bufp->chgIData(oldp+13,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[13]),32);
        bufp->chgIData(oldp+14,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[14]),32);
        bufp->chgIData(oldp+15,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[15]),32);
        bufp->chgIData(oldp+16,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[16]),32);
        bufp->chgIData(oldp+17,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[17]),32);
        bufp->chgIData(oldp+18,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[18]),32);
        bufp->chgIData(oldp+19,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[19]),32);
        bufp->chgIData(oldp+20,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[20]),32);
        bufp->chgIData(oldp+21,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[21]),32);
        bufp->chgIData(oldp+22,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[22]),32);
        bufp->chgIData(oldp+23,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[23]),32);
        bufp->chgIData(oldp+24,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[24]),32);
        bufp->chgIData(oldp+25,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[25]),32);
        bufp->chgIData(oldp+26,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[26]),32);
        bufp->chgIData(oldp+27,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[27]),32);
        bufp->chgIData(oldp+28,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[28]),32);
        bufp->chgIData(oldp+29,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[29]),32);
        bufp->chgIData(oldp+30,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[30]),32);
        bufp->chgIData(oldp+31,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[31]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+32,(vlSelf->PipelineCPU__DOT__PC_out_ID),32);
        bufp->chgIData(oldp+33,(vlSelf->PipelineCPU__DOT__PC_plus4_ID),32);
        bufp->chgIData(oldp+34,(vlSelf->PipelineCPU__DOT__IMEM_out_ID),32);
        bufp->chgIData(oldp+35,(vlSelf->PipelineCPU__DOT__IMMGEN_out_ID),32);
        bufp->chgIData(oldp+36,(vlSelf->PipelineCPU__DOT__IMMGEN_out_EX),32);
        bufp->chgIData(oldp+37,(vlSelf->PipelineCPU__DOT__PC_plus4_EX),32);
        bufp->chgIData(oldp+38,(vlSelf->PipelineCPU__DOT__IMEM_out_EX),32);
        bufp->chgIData(oldp+39,(vlSelf->PipelineCPU__DOT__PC_plus4_MEM),32);
        bufp->chgIData(oldp+40,(vlSelf->PipelineCPU__DOT__IMEM_out_MEM),32);
        bufp->chgIData(oldp+41,(vlSelf->PipelineCPU__DOT__PC_plus4_WB),32);
        bufp->chgIData(oldp+42,(vlSelf->PipelineCPU__DOT__ALUOut_WB),32);
        bufp->chgIData(oldp+43,(vlSelf->PipelineCPU__DOT__DMEM_out_WB),32);
        bufp->chgIData(oldp+44,(vlSelf->PipelineCPU__DOT__IMEM_out_WB),32);
        bufp->chgIData(oldp+45,(vlSelf->PipelineCPU__DOT__writeData),32);
        bufp->chgIData(oldp+46,((vlSelf->PipelineCPU__DOT__IMMGEN_out_ID 
                                 << 1U)),32);
        bufp->chgCData(oldp+47,(vlSelf->PipelineCPU__DOT__memtoReg_EX),2);
        bufp->chgCData(oldp+48,(vlSelf->PipelineCPU__DOT__ALUOp_EX),2);
        bufp->chgBit(oldp+49,(vlSelf->PipelineCPU__DOT__regWrite_EX));
        bufp->chgBit(oldp+50,(vlSelf->PipelineCPU__DOT__memWrite_EX));
        bufp->chgBit(oldp+51,(vlSelf->PipelineCPU__DOT__ALUSrc_EX));
        bufp->chgCData(oldp+52,(vlSelf->PipelineCPU__DOT__memtoReg_MEM),2);
        bufp->chgBit(oldp+53,(vlSelf->PipelineCPU__DOT__regWrite_MEM));
        bufp->chgBit(oldp+54,(vlSelf->PipelineCPU__DOT__memWrite_MEM));
        bufp->chgCData(oldp+55,(vlSelf->PipelineCPU__DOT__memtoReg_WB),2);
        bufp->chgBit(oldp+56,(vlSelf->PipelineCPU__DOT__regWrite_WB));
        bufp->chgCData(oldp+57,(vlSelf->PipelineCPU__DOT__id_ForwardA),2);
        bufp->chgCData(oldp+58,(vlSelf->PipelineCPU__DOT__id_ForwardB),2);
        bufp->chgCData(oldp+59,(vlSelf->PipelineCPU__DOT__ex_ForwardA),2);
        bufp->chgCData(oldp+60,(vlSelf->PipelineCPU__DOT__ex_ForwardB),2);
        bufp->chgIData(oldp+61,(vlSelf->PipelineCPU__DOT__ForwardA_EX),32);
        bufp->chgIData(oldp+62,(vlSelf->PipelineCPU__DOT__ForwardB_EX),32);
        bufp->chgIData(oldp+63,(vlSelf->PipelineCPU__DOT__ForwardB_MEM_out),32);
        bufp->chgBit(oldp+64,((1U & (vlSelf->PipelineCPU__DOT__IMEM_out_EX 
                                     >> 0x1eU))));
        bufp->chgCData(oldp+65,((7U & (vlSelf->PipelineCPU__DOT__IMEM_out_EX 
                                       >> 0xcU))),3);
        bufp->chgCData(oldp+66,((0x7fU & vlSelf->PipelineCPU__DOT__IMEM_out_ID)),7);
        bufp->chgCData(oldp+67,((7U & (vlSelf->PipelineCPU__DOT__IMEM_out_ID 
                                       >> 0xcU))),3);
        bufp->chgCData(oldp+68,((0x1fU & (vlSelf->PipelineCPU__DOT__IMEM_out_ID 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+69,((0x1fU & (vlSelf->PipelineCPU__DOT__IMEM_out_ID 
                                          >> 0x14U))),5);
        bufp->chgCData(oldp+70,((0x1fU & (vlSelf->PipelineCPU__DOT__IMEM_out_EX 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+71,((0x1fU & (vlSelf->PipelineCPU__DOT__IMEM_out_EX 
                                          >> 0x14U))),5);
        bufp->chgCData(oldp+72,((0x1fU & (vlSelf->PipelineCPU__DOT__IMEM_out_MEM 
                                          >> 7U))),5);
        bufp->chgCData(oldp+73,((0x1fU & (vlSelf->PipelineCPU__DOT__IMEM_out_WB 
                                          >> 7U))),5);
        bufp->chgCData(oldp+74,((0x1fU & (vlSelf->PipelineCPU__DOT__IMEM_out_EX 
                                          >> 7U))),5);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgIData(oldp+75,(vlSelf->PipelineCPU__DOT__PC_out_IF),32);
        bufp->chgIData(oldp+76,(((IData)(4U) + vlSelf->PipelineCPU__DOT__PC_out_IF)),32);
        bufp->chgIData(oldp+77,(((0x80U <= vlSelf->PipelineCPU__DOT__PC_out_IF)
                                  ? 0U : ((vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts
                                           [(0x7fU 
                                             & vlSelf->PipelineCPU__DOT__PC_out_IF)] 
                                           << 0x18U) 
                                          | ((vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts
                                              [(0x7fU 
                                                & ((IData)(1U) 
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
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgIData(oldp+78,(((8U & (IData)(vlSelf->PipelineCPU__DOT__ALUCtl))
                                  ? 0U : ((4U & (IData)(vlSelf->PipelineCPU__DOT__ALUCtl))
                                           ? ((2U & (IData)(vlSelf->PipelineCPU__DOT__ALUCtl))
                                               ? ((1U 
                                                   & (IData)(vlSelf->PipelineCPU__DOT__ALUCtl))
                                                   ? 
                                                  (VL_LTS_III(32, vlSelf->PipelineCPU__DOT__ForwardA_EX_out, vlSelf->PipelineCPU__DOT__Mux_ALU)
                                                    ? 1U
                                                    : 0U)
                                                   : 
                                                  (vlSelf->PipelineCPU__DOT__ForwardA_EX_out 
                                                   - vlSelf->PipelineCPU__DOT__Mux_ALU))
                                               : 0U)
                                           : ((2U & (IData)(vlSelf->PipelineCPU__DOT__ALUCtl))
                                               ? ((1U 
                                                   & (IData)(vlSelf->PipelineCPU__DOT__ALUCtl))
                                                   ? 0U
                                                   : 
                                                  (vlSelf->PipelineCPU__DOT__ForwardA_EX_out 
                                                   + vlSelf->PipelineCPU__DOT__Mux_ALU))
                                               : ((1U 
                                                   & (IData)(vlSelf->PipelineCPU__DOT__ALUCtl))
                                                   ? 
                                                  (vlSelf->PipelineCPU__DOT__ForwardA_EX_out 
                                                   | vlSelf->PipelineCPU__DOT__Mux_ALU)
                                                   : 
                                                  (vlSelf->PipelineCPU__DOT__ForwardA_EX_out 
                                                   & vlSelf->PipelineCPU__DOT__Mux_ALU)))))),32);
        bufp->chgIData(oldp+79,(vlSelf->PipelineCPU__DOT__ALUOut_MEM),32);
        bufp->chgIData(oldp+80,(vlSelf->PipelineCPU__DOT__Mux_ALU),32);
        bufp->chgCData(oldp+81,(vlSelf->PipelineCPU__DOT__ALUCtl),4);
        bufp->chgBit(oldp+82,(vlSelf->PipelineCPU__DOT__memRead_EX));
        bufp->chgBit(oldp+83,(vlSelf->PipelineCPU__DOT__memRead_MEM));
        bufp->chgBit(oldp+84,(vlSelf->PipelineCPU__DOT__RePC));
        bufp->chgBit(oldp+85,(vlSelf->PipelineCPU__DOT__Flush_HD));
        bufp->chgIData(oldp+86,(vlSelf->PipelineCPU__DOT__ForwardA_EX_out),32);
        bufp->chgIData(oldp+87,(vlSelf->PipelineCPU__DOT__ForwardB_EX_out),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
        bufp->chgCData(oldp+88,((3U & ((IData)(vlSelf->PipelineCPU__DOT__m_Control__DOT__ctrl) 
                                       >> 0xaU))),2);
        bufp->chgCData(oldp+89,((3U & ((IData)(vlSelf->PipelineCPU__DOT__m_Control__DOT__ctrl) 
                                       >> 7U))),2);
        bufp->chgCData(oldp+90,((3U & ((IData)(vlSelf->PipelineCPU__DOT__m_Control__DOT__ctrl) 
                                       >> 5U))),2);
        bufp->chgBit(oldp+91,((1U & ((IData)(vlSelf->PipelineCPU__DOT__m_Control__DOT__ctrl) 
                                     >> 2U))));
        bufp->chgBit(oldp+92,((1U & ((IData)(vlSelf->PipelineCPU__DOT__m_Control__DOT__ctrl) 
                                     >> 9U))));
        bufp->chgBit(oldp+93,((1U & ((IData)(vlSelf->PipelineCPU__DOT__m_Control__DOT__ctrl) 
                                     >> 4U))));
        bufp->chgBit(oldp+94,((1U & ((IData)(vlSelf->PipelineCPU__DOT__m_Control__DOT__ctrl) 
                                     >> 3U))));
        bufp->chgBit(oldp+95,(vlSelf->PipelineCPU__DOT__BrEq));
        bufp->chgBit(oldp+96,(vlSelf->PipelineCPU__DOT__BrLT));
        bufp->chgBit(oldp+97,((1U & ((IData)(vlSelf->PipelineCPU__DOT__m_Control__DOT__ctrl) 
                                     >> 1U))));
        bufp->chgBit(oldp+98,((1U & (IData)(vlSelf->PipelineCPU__DOT__m_Control__DOT__ctrl))));
        bufp->chgIData(oldp+99,(vlSelf->PipelineCPU__DOT__ForwardA_ID),32);
        bufp->chgIData(oldp+100,(vlSelf->PipelineCPU__DOT__ForwardB_ID),32);
        bufp->chgSData(oldp+101,(vlSelf->PipelineCPU__DOT__m_Control__DOT__ctrl),12);
        bufp->chgBit(oldp+102,((1U & ((IData)(vlSelf->PipelineCPU__DOT__m_Control__DOT__ctrl) 
                                      >> 0xaU))));
    }
    bufp->chgBit(oldp+103,(vlSelf->clk));
    bufp->chgBit(oldp+104,(vlSelf->start));
    bufp->chgIData(oldp+105,(vlSelf->r[0]),32);
    bufp->chgIData(oldp+106,(vlSelf->r[1]),32);
    bufp->chgIData(oldp+107,(vlSelf->r[2]),32);
    bufp->chgIData(oldp+108,(vlSelf->r[3]),32);
    bufp->chgIData(oldp+109,(vlSelf->r[4]),32);
    bufp->chgIData(oldp+110,(vlSelf->r[5]),32);
    bufp->chgIData(oldp+111,(vlSelf->r[6]),32);
    bufp->chgIData(oldp+112,(vlSelf->r[7]),32);
    bufp->chgIData(oldp+113,(vlSelf->r[8]),32);
    bufp->chgIData(oldp+114,(vlSelf->r[9]),32);
    bufp->chgIData(oldp+115,(vlSelf->r[10]),32);
    bufp->chgIData(oldp+116,(vlSelf->r[11]),32);
    bufp->chgIData(oldp+117,(vlSelf->r[12]),32);
    bufp->chgIData(oldp+118,(vlSelf->r[13]),32);
    bufp->chgIData(oldp+119,(vlSelf->r[14]),32);
    bufp->chgIData(oldp+120,(vlSelf->r[15]),32);
    bufp->chgIData(oldp+121,(vlSelf->r[16]),32);
    bufp->chgIData(oldp+122,(vlSelf->r[17]),32);
    bufp->chgIData(oldp+123,(vlSelf->r[18]),32);
    bufp->chgIData(oldp+124,(vlSelf->r[19]),32);
    bufp->chgIData(oldp+125,(vlSelf->r[20]),32);
    bufp->chgIData(oldp+126,(vlSelf->r[21]),32);
    bufp->chgIData(oldp+127,(vlSelf->r[22]),32);
    bufp->chgIData(oldp+128,(vlSelf->r[23]),32);
    bufp->chgIData(oldp+129,(vlSelf->r[24]),32);
    bufp->chgIData(oldp+130,(vlSelf->r[25]),32);
    bufp->chgIData(oldp+131,(vlSelf->r[26]),32);
    bufp->chgIData(oldp+132,(vlSelf->r[27]),32);
    bufp->chgIData(oldp+133,(vlSelf->r[28]),32);
    bufp->chgIData(oldp+134,(vlSelf->r[29]),32);
    bufp->chgIData(oldp+135,(vlSelf->r[30]),32);
    bufp->chgIData(oldp+136,(vlSelf->r[31]),32);
    bufp->chgIData(oldp+137,(((0x400U & (IData)(vlSelf->PipelineCPU__DOT__m_Control__DOT__ctrl))
                               ? (((1U & (IData)(vlSelf->PipelineCPU__DOT__m_Control__DOT__ctrl))
                                    ? vlSelf->PipelineCPU__DOT__ForwardA_ID
                                    : vlSelf->PipelineCPU__DOT__PC_out_ID) 
                                  + (vlSelf->PipelineCPU__DOT__IMMGEN_out_ID 
                                     << 1U)) : ((IData)(4U) 
                                                + vlSelf->PipelineCPU__DOT__PC_out_IF))),32);
    bufp->chgIData(oldp+138,(((IData)(vlSelf->PipelineCPU__DOT__RePC)
                               ? vlSelf->PipelineCPU__DOT__PC_out_IF
                               : ((0x400U & (IData)(vlSelf->PipelineCPU__DOT__m_Control__DOT__ctrl))
                                   ? (((1U & (IData)(vlSelf->PipelineCPU__DOT__m_Control__DOT__ctrl))
                                        ? vlSelf->PipelineCPU__DOT__ForwardA_ID
                                        : vlSelf->PipelineCPU__DOT__PC_out_ID) 
                                      + (vlSelf->PipelineCPU__DOT__IMMGEN_out_ID 
                                         << 1U)) : 
                                  ((IData)(4U) + vlSelf->PipelineCPU__DOT__PC_out_IF)))),32);
    bufp->chgIData(oldp+139,(((1U & (IData)(vlSelf->PipelineCPU__DOT__m_Control__DOT__ctrl))
                               ? vlSelf->PipelineCPU__DOT__ForwardA_ID
                               : vlSelf->PipelineCPU__DOT__PC_out_ID)),32);
    bufp->chgIData(oldp+140,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
                             [(0x1fU & (vlSelf->PipelineCPU__DOT__IMEM_out_ID 
                                        >> 0xfU))]),32);
    bufp->chgIData(oldp+141,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
                             [(0x1fU & (vlSelf->PipelineCPU__DOT__IMEM_out_ID 
                                        >> 0x14U))]),32);
    bufp->chgIData(oldp+142,(vlSelf->PipelineCPU__DOT__DMEM_out_MEM),32);
    bufp->chgIData(oldp+143,((((1U & (IData)(vlSelf->PipelineCPU__DOT__m_Control__DOT__ctrl))
                                ? vlSelf->PipelineCPU__DOT__ForwardA_ID
                                : vlSelf->PipelineCPU__DOT__PC_out_ID) 
                              + (vlSelf->PipelineCPU__DOT__IMMGEN_out_ID 
                                 << 1U))),32);
}

void VPipelineCPU___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root__trace_cleanup\n"); );
    // Init
    VPipelineCPU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VPipelineCPU___024root*>(voidSelf);
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
}
