// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top_verilator.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtb_top_verilator___024root.h"

VL_INLINE_OPT void Vtb_top_verilator___024root___ico_sequent__TOP__0(Vtb_top_verilator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_verilator___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__sleep_unit_i__DOT__fetch_enable_d 
        = ((IData)(vlSelf->fetch_enable_i) | (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__sleep_unit_i__DOT__fetch_enable_q));
    if ((1U & (~ (IData)(vlSelf->clk_i)))) {
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__sleep_unit_i__DOT__core_clock_gate_i__DOT__clk_en 
            = ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__sleep_unit_i__DOT__fetch_enable_q) 
               & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__sleep_unit_i__DOT__core_busy_q) 
                  | (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__wake_from_sleep)));
    }
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__clk 
        = ((IData)(vlSelf->clk_i) & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__sleep_unit_i__DOT__core_clock_gate_i__DOT__clk_en));
}

VL_INLINE_OPT void Vtb_top_verilator___024root___act_sequent__TOP__1(Vtb_top_verilator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_verilator___024root___act_sequent__TOP__1\n"); );
    // Body
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_op_a 
        = ((0x10000U & (((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_signed) 
                         << 0x10U) & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_op_a 
                                      << 1U))) | (0xffffU 
                                                  & ((1U 
                                                      & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_subword))
                                                      ? 
                                                     (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mult_operand_a_ex 
                                                      >> 0x10U)
                                                      : vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mult_operand_a_ex)));
}

VL_INLINE_OPT void Vtb_top_verilator___024root___act_sequent__TOP__2(Vtb_top_verilator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_verilator___024root___act_sequent__TOP__2\n"); );
    // Body
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_op_b 
        = (((IData)((((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_signed) 
                      >> 1U) & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_op_b 
                                >> 0xfU))) << 0x10U) 
           | (0xffffU & ((2U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_subword))
                          ? (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mult_operand_b_ex 
                             >> 0x10U) : vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mult_operand_b_ex)));
}

VL_INLINE_OPT void Vtb_top_verilator___024root___act_sequent__TOP__3(Vtb_top_verilator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_verilator___024root___act_sequent__TOP__3\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h4fcb539b__0;
    VlWide<3>/*95:0*/ __Vtemp_hbb2d7437__0;
    // Body
    __Vtemp_h4fcb539b__0[0U] = (IData)((((QData)((IData)(
                                                         (0x1fU 
                                                          & ((0x800000U 
                                                              & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                              ? 
                                                             ((vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                               << 0xdU) 
                                                              | (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                 >> 0x13U))
                                                              : 
                                                             ((vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                               << 8U) 
                                                              | (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                 >> 0x18U)))))) 
                                         << 0x37U) 
                                        | (((QData)((IData)(
                                                            (0x1fU 
                                                             & ((0x200000U 
                                                                 & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                 ? 
                                                                ((vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                  << 0x17U) 
                                                                 | (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                    >> 9U))
                                                                 : 
                                                                ((vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                  << 0x12U) 
                                                                 | (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                    >> 0xeU)))))) 
                                            << 0x32U) 
                                           | (((QData)((IData)(
                                                               (0x1fU 
                                                                & ((0x80000U 
                                                                    & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                    ? 
                                                                   ((vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                     << 1U) 
                                                                    | (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                       >> 0x1fU))
                                                                    : 
                                                                   ((vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                     << 0x1cU) 
                                                                    | (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                       >> 4U)))))) 
                                               << 0x2dU) 
                                              | (((QData)((IData)(
                                                                  (0x1fU 
                                                                   & ((0x20000U 
                                                                       & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                       ? 
                                                                      ((vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                        << 0xbU) 
                                                                       | (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                          >> 0x15U))
                                                                       : 
                                                                      ((vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                        << 6U) 
                                                                       | (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                          >> 0x1aU)))))) 
                                                  << 0x28U) 
                                                 | (((QData)((IData)(
                                                                     (0x1fU 
                                                                      & ((0x8000U 
                                                                          & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                          ? 
                                                                         ((vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                           << 0x15U) 
                                                                          | (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                             >> 0xbU))
                                                                          : 
                                                                         ((vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                           << 0x10U) 
                                                                          | (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                             >> 0x10U)))))) 
                                                     << 0x23U) 
                                                    | (((QData)((IData)(
                                                                        (0x1fU 
                                                                         & ((0x2000U 
                                                                             & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                             ? 
                                                                            ((vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                              << 0x1fU) 
                                                                             | (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                                >> 1U))
                                                                             : 
                                                                            ((vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                              << 0x1aU) 
                                                                             | (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                                >> 6U)))))) 
                                                        << 0x1eU) 
                                                       | (QData)((IData)(
                                                                         ((0x3e000000U 
                                                                           & (((0x800U 
                                                                                & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                                ? 
                                                                               ((vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                                << 9U) 
                                                                                | (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                                >> 0x17U))
                                                                                : 
                                                                               ((vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                                << 4U) 
                                                                                | (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                                >> 0x1cU))) 
                                                                              << 0x19U)) 
                                                                          | ((0x1f00000U 
                                                                              & (((0x200U 
                                                                                & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                                << 0x13U) 
                                                                                | (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                                >> 0xdU))
                                                                                 : 
                                                                                ((vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                                << 0xeU) 
                                                                                | (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                                >> 0x12U))) 
                                                                                << 0x14U)) 
                                                                             | ((0xf8000U 
                                                                                & (((0x80U 
                                                                                & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                                << 0x1dU) 
                                                                                | (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                                >> 3U))
                                                                                 : 
                                                                                ((vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                                << 0x18U) 
                                                                                | (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                                >> 8U))) 
                                                                                << 0xfU)) 
                                                                                | ((0x7c00U 
                                                                                & (((0x20U 
                                                                                & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                                << 7U) 
                                                                                | (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                                >> 0x19U))
                                                                                 : 
                                                                                ((vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                                << 2U) 
                                                                                | (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                                >> 0x1eU))) 
                                                                                << 0xaU)) 
                                                                                | ((0x3e0U 
                                                                                & (((8U 
                                                                                & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                                << 0x11U) 
                                                                                | (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                                >> 0xfU))
                                                                                 : 
                                                                                ((vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                                << 0xcU) 
                                                                                | (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                                >> 0x14U))) 
                                                                                << 5U)) 
                                                                                | (0x1fU 
                                                                                & ((2U 
                                                                                & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                                << 0x1bU) 
                                                                                | (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                                >> 5U))
                                                                                 : 
                                                                                ((vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                                << 0x16U) 
                                                                                | (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                                >> 0xaU))))))))))))))))));
    __Vtemp_h4fcb539b__0[1U] = ((((0x2000000U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                   ? ((vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                       << 3U) | (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                 >> 0x1dU))
                                   : ((vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                       << 0x1eU) | 
                                      (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                       >> 2U))) << 0x1cU) 
                                | (IData)(((((QData)((IData)(
                                                             (0x1fU 
                                                              & ((0x800000U 
                                                                  & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                  ? 
                                                                 ((vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                   << 0xdU) 
                                                                  | (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                     >> 0x13U))
                                                                  : 
                                                                 ((vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                   << 8U) 
                                                                  | (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                     >> 0x18U)))))) 
                                             << 0x37U) 
                                            | (((QData)((IData)(
                                                                (0x1fU 
                                                                 & ((0x200000U 
                                                                     & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                     ? 
                                                                    ((vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                      << 0x17U) 
                                                                     | (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                        >> 9U))
                                                                     : 
                                                                    ((vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                      << 0x12U) 
                                                                     | (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                        >> 0xeU)))))) 
                                                << 0x32U) 
                                               | (((QData)((IData)(
                                                                   (0x1fU 
                                                                    & ((0x80000U 
                                                                        & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                        ? 
                                                                       ((vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                         << 1U) 
                                                                        | (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                           >> 0x1fU))
                                                                        : 
                                                                       ((vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                         << 0x1cU) 
                                                                        | (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                           >> 4U)))))) 
                                                   << 0x2dU) 
                                                  | (((QData)((IData)(
                                                                      (0x1fU 
                                                                       & ((0x20000U 
                                                                           & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                           ? 
                                                                          ((vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                            << 0xbU) 
                                                                           | (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                              >> 0x15U))
                                                                           : 
                                                                          ((vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                            << 6U) 
                                                                           | (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                              >> 0x1aU)))))) 
                                                      << 0x28U) 
                                                     | (((QData)((IData)(
                                                                         (0x1fU 
                                                                          & ((0x8000U 
                                                                              & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                              ? 
                                                                             ((vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                               << 0x15U) 
                                                                              | (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                                >> 0xbU))
                                                                              : 
                                                                             ((vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                               << 0x10U) 
                                                                              | (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                                >> 0x10U)))))) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(
                                                                            (0x1fU 
                                                                             & ((0x2000U 
                                                                                & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                                << 0x1fU) 
                                                                                | (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                                >> 1U))
                                                                                 : 
                                                                                ((vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                                << 0x1aU) 
                                                                                | (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                                >> 6U)))))) 
                                                            << 0x1eU) 
                                                           | (QData)((IData)(
                                                                             ((0x3e000000U 
                                                                               & (((0x800U 
                                                                                & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                                << 9U) 
                                                                                | (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                                >> 0x17U))
                                                                                 : 
                                                                                ((vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                                << 4U) 
                                                                                | (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                                >> 0x1cU))) 
                                                                                << 0x19U)) 
                                                                              | ((0x1f00000U 
                                                                                & (((0x200U 
                                                                                & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                                << 0x13U) 
                                                                                | (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                                >> 0xdU))
                                                                                 : 
                                                                                ((vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                                << 0xeU) 
                                                                                | (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                                >> 0x12U))) 
                                                                                << 0x14U)) 
                                                                                | ((0xf8000U 
                                                                                & (((0x80U 
                                                                                & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                                << 0x1dU) 
                                                                                | (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                                >> 3U))
                                                                                 : 
                                                                                ((vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                                << 0x18U) 
                                                                                | (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                                >> 8U))) 
                                                                                << 0xfU)) 
                                                                                | ((0x7c00U 
                                                                                & (((0x20U 
                                                                                & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                                << 7U) 
                                                                                | (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                                >> 0x19U))
                                                                                 : 
                                                                                ((vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                                << 2U) 
                                                                                | (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                                >> 0x1eU))) 
                                                                                << 0xaU)) 
                                                                                | ((0x3e0U 
                                                                                & (((8U 
                                                                                & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                                << 0x11U) 
                                                                                | (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                                >> 0xfU))
                                                                                 : 
                                                                                ((vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                                << 0xcU) 
                                                                                | (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                                >> 0x14U))) 
                                                                                << 5U)) 
                                                                                | (0x1fU 
                                                                                & ((2U 
                                                                                & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                                << 0x1bU) 
                                                                                | (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                                >> 5U))
                                                                                 : 
                                                                                ((vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                                << 0x16U) 
                                                                                | (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                                >> 0xaU))))))))))))))))) 
                                           >> 0x20U)));
    __Vtemp_hbb2d7437__0[2U] = ((0x7c0U & (((0x20000000U 
                                             & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                             ? ((vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                 << 0xfU) 
                                                | (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                   >> 0x11U))
                                             : ((vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                 << 0xaU) 
                                                | (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                   >> 0x16U))) 
                                           << 6U)) 
                                | ((0x3eU & (((0x8000000U 
                                               & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                               ? ((
                                                   vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                   << 0x19U) 
                                                  | (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                     >> 7U))
                                               : ((
                                                   vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                   << 0x14U) 
                                                  | (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                     >> 0xcU))) 
                                             << 1U)) 
                                   | (1U & (((0x2000000U 
                                              & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                              ? ((vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                  << 3U) 
                                                 | (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                    >> 0x1dU))
                                              : ((vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                  << 0x1eU) 
                                                 | (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                    >> 2U))) 
                                            >> 4U))));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
        = __Vtemp_h4fcb539b__0[0U];
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
        = __Vtemp_h4fcb539b__0[1U];
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
        = ((((0x100U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
              ? 8U : 9U) << 0x1fU) | ((((0x40U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                         ? 6U : 7U) 
                                       << 0x1aU) | 
                                      ((((0x10U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                          ? 4U : 5U) 
                                        << 0x15U) | 
                                       ((((4U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                           ? 2U : 3U) 
                                         << 0x10U) 
                                        | ((((1U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                              ? 0U : 1U) 
                                            << 0xbU) 
                                           | __Vtemp_hbb2d7437__0[2U])))));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
        = ((((0x100000U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
              ? 0x14U : 0x15U) << 0x1dU) | ((((0x40000U 
                                               & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                               ? 0x12U
                                               : 0x13U) 
                                             << 0x18U) 
                                            | ((((0x10000U 
                                                  & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                  ? 0x10U
                                                  : 0x11U) 
                                                << 0x13U) 
                                               | ((((0x4000U 
                                                     & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                     ? 0xeU
                                                     : 0xfU) 
                                                   << 0xeU) 
                                                  | ((((0x1000U 
                                                        & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                        ? 0xcU
                                                        : 0xdU) 
                                                      << 9U) 
                                                     | ((((0x400U 
                                                           & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                           ? 0xaU
                                                           : 0xbU) 
                                                         << 4U) 
                                                        | (((0x100U 
                                                             & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                             ? 8U
                                                             : 9U) 
                                                           >> 1U)))))));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
        = ((0xf8000000U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U]) 
           | ((((0x40000000U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                 ? 0x1eU : 0x1fU) << 0x16U) | ((((0x10000000U 
                                                  & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                  ? 0x1cU
                                                  : 0x1dU) 
                                                << 0x11U) 
                                               | ((((0x4000000U 
                                                     & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                     ? 0x1aU
                                                     : 0x1bU) 
                                                   << 0xcU) 
                                                  | ((((0x1000000U 
                                                        & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                        ? 0x18U
                                                        : 0x19U) 
                                                      << 7U) 
                                                     | ((((0x400000U 
                                                           & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                           ? 0x16U
                                                           : 0x17U) 
                                                         << 2U) 
                                                        | (((0x100000U 
                                                             & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                             ? 0x14U
                                                             : 0x15U) 
                                                           >> 3U)))))));
}

VL_INLINE_OPT void Vtb_top_verilator___024root___act_sequent__TOP__4(Vtb_top_verilator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_verilator___024root___act_sequent__TOP__4\n"); );
    // Init
    IData/*31:0*/ __Vtemp_h4651a475__0;
    // Body
    __Vtemp_h4651a475__0 = (((IData)((0U != (0xc0000000U 
                                             & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input))) 
                             << 0x1eU) | (((IData)(
                                                   (0U 
                                                    != 
                                                    (0x30000000U 
                                                     & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input))) 
                                           << 0x1dU) 
                                          | (((IData)(
                                                      (0U 
                                                       != 
                                                       (0xc000000U 
                                                        & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input))) 
                                              << 0x1cU) 
                                             | (((IData)(
                                                         (0U 
                                                          != 
                                                          (0x3000000U 
                                                           & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input))) 
                                                 << 0x1bU) 
                                                | (((IData)(
                                                            (0U 
                                                             != 
                                                             (0xc00000U 
                                                              & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input))) 
                                                    << 0x1aU) 
                                                   | (((IData)(
                                                               (0U 
                                                                != 
                                                                (0x300000U 
                                                                 & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input))) 
                                                       << 0x19U) 
                                                      | (((IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0xc0000U 
                                                                    & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input))) 
                                                          << 0x18U) 
                                                         | (((IData)(
                                                                     (0U 
                                                                      != 
                                                                      (0x30000U 
                                                                       & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input))) 
                                                             << 0x17U) 
                                                            | (((IData)(
                                                                        (0U 
                                                                         != 
                                                                         (0xc000U 
                                                                          & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input))) 
                                                                << 0x16U) 
                                                               | (((IData)(
                                                                           (0U 
                                                                            != 
                                                                            (0x3000U 
                                                                             & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input))) 
                                                                   << 0x15U) 
                                                                  | (((IData)(
                                                                              (0U 
                                                                               != 
                                                                               (0xc00U 
                                                                                & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input))) 
                                                                      << 0x14U) 
                                                                     | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x300U 
                                                                                & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input))) 
                                                                         << 0x13U) 
                                                                        | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input))) 
                                                                            << 0x12U) 
                                                                           | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input))) 
                                                                               << 0x11U) 
                                                                              | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xcU 
                                                                                & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input))) 
                                                                                << 0x10U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (3U 
                                                                                & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input))) 
                                                                                << 0xfU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60000000U 
                                                                                & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes))) 
                                                                                << 0xeU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18000000U 
                                                                                & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes))) 
                                                                                << 0xdU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x6000000U 
                                                                                & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes))) 
                                                                                << 0xcU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1800000U 
                                                                                & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes))) 
                                                                                << 0xbU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x600000U 
                                                                                & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes))) 
                                                                                << 0xaU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x180000U 
                                                                                & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes))) 
                                                                                << 9U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60000U 
                                                                                & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes))) 
                                                                                << 8U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18000U 
                                                                                & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes))) 
                                                                                << 7U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x6000U 
                                                                                & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes))) 
                                                                                << 6U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes))) 
                                                                                << 5U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x600U 
                                                                                & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes))) 
                                                                                << 4U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x180U 
                                                                                & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes))) 
                                                                                << 3U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60U 
                                                                                & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes))) 
                                                                                << 2U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18U 
                                                                                & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes))) 
                                                                                << 1U) 
                                                                                | (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (6U 
                                                                                & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)))))))))))))))))))))))))))))))));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
        = __Vtemp_h4651a475__0;
}

VL_INLINE_OPT void Vtb_top_verilator___024root___act_comb__TOP__0(Vtb_top_verilator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_verilator___024root___act_comb__TOP__0\n"); );
    // Init
    IData/*31:0*/ tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT____VdfgExtracted_ha2022ff0__0;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT____VdfgExtracted_ha2022ff0__0 = 0;
    // Body
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_mac 
        = (0x3ffffffffULL & (VL_EXTENDS_QQ(34,33, (0x1ffffffffULL 
                                                   & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mulh_active)
                                                       ? 
                                                      (((QData)((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_carry_q)) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mult_operand_c_ex)))
                                                       : 
                                                      VL_EXTENDS_QI(33,32, vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mult_operand_c_ex)))) 
                             + (VL_MULS_QQQ(34, (0x3ffffffffULL 
                                                 & VL_EXTENDS_QI(34,17, vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_op_a)), 
                                            (0x3ffffffffULL 
                                             & VL_EXTENDS_QI(34,17, vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_op_b))) 
                                + VL_EXTENDS_QI(34,32, 
                                                ((3U 
                                                  == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mult_operator_ex))
                                                  ? 
                                                 (((IData)(1U) 
                                                   << (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mult_imm_ex)) 
                                                  >> 1U)
                                                  : 0U)))));
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT____VdfgExtracted_ha2022ff0__0 
        = (IData)((0x3ffffffffULL & VL_SHIFTRS_QQI(34,34,5, 
                                                   (((QData)((IData)(
                                                                     ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_shift_arith) 
                                                                      & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mulh_active)
                                                                          ? (IData)(
                                                                                (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_mac 
                                                                                >> 0x21U))
                                                                          : (IData)(
                                                                                (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_mac 
                                                                                >> 0x1fU)))))) 
                                                     << 0x21U) 
                                                    | (((QData)((IData)(
                                                                        ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_shift_arith) 
                                                                         & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mulh_active)
                                                                             ? (IData)(
                                                                                (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_mac 
                                                                                >> 0x20U))
                                                                             : (IData)(
                                                                                (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_mac 
                                                                                >> 0x1fU)))))) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_mac)))), 
                                                   ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mulh_active)
                                                     ? (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_imm)
                                                     : (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mult_imm_ex)))));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_result = 0U;
    if ((4U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mult_operator_ex))) {
        if ((2U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mult_operator_ex))) {
            if ((1U & (~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mult_operator_ex)))) {
                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_result 
                    = tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT____VdfgExtracted_ha2022ff0__0;
            }
        } else {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_result 
                = ((1U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mult_operator_ex))
                    ? ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mult_is_clpx_ex)
                        ? ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mult_clpx_img_ex)
                            ? (((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__clpx_shift_result) 
                                << 0x10U) | (0xffffU 
                                             & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mult_dot_op_c_ex))
                            : ((0xffff0000U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mult_dot_op_c_ex) 
                               | (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__clpx_shift_result)))
                        : (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_result))
                    : (VL_EXTENDS_II(32,18, (0x3ffffU 
                                             & VL_MULS_III(18, 
                                                           (0x3ffffU 
                                                            & VL_EXTENDS_II(18,9, 
                                                                            (((IData)(
                                                                                (((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mult_dot_signed_ex) 
                                                                                >> 1U) 
                                                                                & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mult_dot_op_a_ex 
                                                                                >> 7U))) 
                                                                              << 8U) 
                                                                             | (0xffU 
                                                                                & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mult_dot_op_a_ex)))), 
                                                           (0x3ffffU 
                                                            & VL_EXTENDS_II(18,9, 
                                                                            ((0x100U 
                                                                              & (((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mult_dot_signed_ex) 
                                                                                << 8U) 
                                                                                & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mult_dot_op_b_ex 
                                                                                << 1U))) 
                                                                             | (0xffU 
                                                                                & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mult_dot_op_b_ex))))))) 
                       + (VL_EXTENDS_II(32,18, (0x3ffffU 
                                                & VL_MULS_III(18, 
                                                              (0x3ffffU 
                                                               & VL_EXTENDS_II(18,9, 
                                                                               (((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT____VdfgTmp_ha7611102__0) 
                                                                                << 8U) 
                                                                                | (0xffU 
                                                                                & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mult_dot_op_a_ex 
                                                                                >> 8U))))), 
                                                              (0x3ffffU 
                                                               & VL_EXTENDS_II(18,9, 
                                                                               (((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT____VdfgTmp_h4c4298a7__0) 
                                                                                << 8U) 
                                                                                | (0xffU 
                                                                                & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mult_dot_op_b_ex 
                                                                                >> 8U)))))))) 
                          + (VL_EXTENDS_II(32,18, (0x3ffffU 
                                                   & VL_MULS_III(18, 
                                                                 (0x3ffffU 
                                                                  & VL_EXTENDS_II(18,9, 
                                                                                (((IData)(
                                                                                (((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mult_dot_signed_ex) 
                                                                                >> 1U) 
                                                                                & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mult_dot_op_a_ex 
                                                                                >> 0x17U))) 
                                                                                << 8U) 
                                                                                | (0xffU 
                                                                                & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mult_dot_op_a_ex 
                                                                                >> 0x10U))))), 
                                                                 (0x3ffffU 
                                                                  & VL_EXTENDS_II(18,9, 
                                                                                ((0x100U 
                                                                                & (((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mult_dot_signed_ex) 
                                                                                << 8U) 
                                                                                & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mult_dot_op_b_ex 
                                                                                >> 0xfU))) 
                                                                                | (0xffU 
                                                                                & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mult_dot_op_b_ex 
                                                                                >> 0x10U)))))))) 
                             + (VL_EXTENDS_II(32,18, 
                                              (0x3ffffU 
                                               & VL_MULS_III(18, 
                                                             (0x3ffffU 
                                                              & VL_EXTENDS_II(18,9, 
                                                                              (((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT____VdfgTmp_ha42c51ca__0) 
                                                                                << 8U) 
                                                                               | (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mult_dot_op_a_ex 
                                                                                >> 0x18U)))), 
                                                             (0x3ffffU 
                                                              & VL_EXTENDS_II(18,9, 
                                                                              (((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT____VdfgTmp_hb3bd7a45__0) 
                                                                                << 8U) 
                                                                               | (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mult_dot_op_b_ex 
                                                                                >> 0x18U))))))) 
                                + vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mult_dot_op_c_ex)))));
        }
    } else {
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_result 
            = ((2U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mult_operator_ex))
                ? tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT____VdfgExtracted_ha2022ff0__0
                : (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mult_operand_c_ex 
                   + ((vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mult_operand_b_ex 
                       & (- (IData)((1U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mult_operator_ex))))) 
                      + VL_MULS_III(32, (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mult_operand_a_ex 
                                         ^ (- (IData)(
                                                      (1U 
                                                       == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mult_operator_ex))))), vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mult_operand_b_ex))));
    }
}

VL_INLINE_OPT void Vtb_top_verilator___024root___act_comb__TOP__1(Vtb_top_verilator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_verilator___024root___act_comb__TOP__1\n"); );
    // Init
    IData/*31:0*/ tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt = 0;
    IData/*31:0*/ tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_int;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_int = 0;
    IData/*31:0*/ tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result = 0;
    IData/*31:0*/ tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result = 0;
    CData/*5:0*/ tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bitop_result;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bitop_result = 0;
    IData/*31:0*/ tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bextins_result;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bextins_result = 0;
    IData/*31:0*/ tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__radix_2_rev;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__radix_2_rev = 0;
    IData/*31:0*/ tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__reverse_result;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__reverse_result = 0;
    // Body
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bitop_result = 0U;
    if ((1U & (~ ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operator_ex) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operator_ex))) {
            if ((0x10U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operator_ex))) {
                if ((1U & (~ ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operator_ex) 
                              >> 3U)))) {
                    if ((4U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operator_ex))) {
                        tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bitop_result 
                            = (0x3fU & ((2U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operator_ex))
                                         ? ((1U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operator_ex))
                                             ? ((1U 
                                                 & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                 ? 
                                                (0x1fU 
                                                 & ((IData)(0x1fU) 
                                                    - 
                                                    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U]))
                                                 : 0x20U)
                                             : ((1U 
                                                 & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                 ? 
                                                (0x1fU 
                                                 & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U])
                                                 : 0x20U))
                                         : ((1U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operator_ex))
                                             ? ((1U 
                                                 & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                 ? 
                                                ((0x1fU 
                                                  & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U]) 
                                                 - (IData)(1U))
                                                 : 
                                                ((vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex 
                                                  >> 0x1fU)
                                                  ? 0x1fU
                                                  : 0U))
                                             : (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cnt_result))));
                    }
                }
            }
        }
    }
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__div_shift 
        = (0x3fU & (((1U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                      ? ((0x1fU & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U]) 
                         - (IData)(1U)) : 0x1fU) + 
                    ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__div_op_a_signed)
                      ? 0U : 1U)));
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt 
        = ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__div_valid)
            ? (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__div_shift)
            : vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_b_ex);
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_int 
        = ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_use_round)
            ? ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_is_clpx_ex)
                ? (((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_clpx_shift_ex) 
                    << 0x10U) | (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_clpx_shift_ex))
                : (((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__bmask_b_ex) 
                    << 0x18U) | (((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__bmask_b_ex) 
                                  << 0x10U) | (((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__bmask_b_ex) 
                                                << 8U) 
                                               | (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__bmask_b_ex)))))
            : ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_left)
                ? ((2U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_vec_mode_ex))
                    ? ((tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt 
                        << 0x10U) | (tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt 
                                     >> 0x10U)) : (
                                                   (3U 
                                                    == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_vec_mode_ex))
                                                    ? 
                                                   ((tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt 
                                                     << 0x18U) 
                                                    | ((0xff0000U 
                                                        & (tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt 
                                                           << 8U)) 
                                                       | ((0xff00U 
                                                           & (tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt 
                                                              >> 8U)) 
                                                          | (tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt 
                                                             >> 0x18U))))
                                                    : tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt))
                : tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt));
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
        = ((2U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_vec_mode_ex))
            ? ((VL_SHIFTRS_III(17,17,4, (((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT____VdfgTmp_h9d86fdda__0) 
                                          << 0x10U) 
                                         | (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a 
                                            >> 0x10U)), 
                               (0xfU & (tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_int 
                                        >> 0x10U))) 
                << 0x10U) | (0xffffU & VL_SHIFTRS_III(17,17,4, 
                                                      (((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT____VdfgTmp_h9df3e3be__0) 
                                                        << 0x10U) 
                                                       | (0xffffU 
                                                          & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a)), 
                                                      (0xfU 
                                                       & tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_int))))
            : ((3U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_vec_mode_ex))
                ? ((VL_SHIFTRS_III(9,9,3, (((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT____VdfgTmp_h9d86fdda__0) 
                                            << 8U) 
                                           | (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a 
                                              >> 0x18U)), 
                                   (7U & (tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_int 
                                          >> 0x18U))) 
                    << 0x18U) | ((0xff0000U & (VL_SHIFTRS_III(9,9,3, 
                                                              ((0x1ff00U 
                                                                & (((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_arithmetic) 
                                                                    << 8U) 
                                                                   & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a 
                                                                      >> 0xfU))) 
                                                               | (0xffU 
                                                                  & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a 
                                                                     >> 0x10U))), 
                                                              (7U 
                                                               & (tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_int 
                                                                  >> 0x10U))) 
                                               << 0x10U)) 
                                 | ((0xff00U & (VL_SHIFTRS_III(9,9,3, 
                                                               (((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT____VdfgTmp_h9df3e3be__0) 
                                                                 << 8U) 
                                                                | (0xffU 
                                                                   & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a 
                                                                      >> 8U))), 
                                                               (7U 
                                                                & (tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_int 
                                                                   >> 8U))) 
                                                << 8U)) 
                                    | (0xffU & VL_SHIFTRS_III(9,9,3, 
                                                              ((0xffffff00U 
                                                                & (((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_arithmetic) 
                                                                    << 8U) 
                                                                   & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a 
                                                                      << 1U))) 
                                                               | (0xffU 
                                                                  & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a)), 
                                                              (7U 
                                                               & tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_int))))))
                : (IData)((((0x26U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operator_ex))
                             ? (((QData)((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a)) 
                                 << 0x20U) | (QData)((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a)))
                             : (((QData)((IData)((- (IData)((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT____VdfgTmp_h9d86fdda__0))))) 
                                 << 0x20U) | (QData)((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a)))) 
                           >> (0x1fU & tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_int)))));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_left_result 
        = ((tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
            << 0x1fU) | ((0x40000000U & (tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                         << 0x1dU)) 
                         | ((0x20000000U & (tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                            << 0x1bU)) 
                            | ((0x10000000U & (tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                               << 0x19U)) 
                               | ((0x8000000U & (tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                                 << 0x17U)) 
                                  | ((0x4000000U & 
                                      (tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                       << 0x15U)) | 
                                     ((0x2000000U & 
                                       (tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                        << 0x13U)) 
                                      | ((0x1000000U 
                                          & (tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                             << 0x11U)) 
                                         | ((0x800000U 
                                             & (tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                                << 0xfU)) 
                                            | ((0x400000U 
                                                & (tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                                   << 0xdU)) 
                                               | ((0x200000U 
                                                   & (tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                                      << 0xbU)) 
                                                  | ((0x100000U 
                                                      & (tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                                         << 9U)) 
                                                     | ((0x80000U 
                                                         & (tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                                            << 7U)) 
                                                        | ((0x40000U 
                                                            & (tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                                               << 5U)) 
                                                           | ((0x20000U 
                                                               & (tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                                                  << 3U)) 
                                                              | ((0x10000U 
                                                                  & (tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                                                     << 1U)) 
                                                                 | ((0x8000U 
                                                                     & (tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                                                        >> 1U)) 
                                                                    | ((0x4000U 
                                                                        & (tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                                                           >> 3U)) 
                                                                       | ((0x2000U 
                                                                           & (tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                                                              >> 5U)) 
                                                                          | ((0x1000U 
                                                                              & (tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                                                                >> 7U)) 
                                                                             | ((0x800U 
                                                                                & (tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                                                                >> 9U)) 
                                                                                | ((0x400U 
                                                                                & (tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                                                                >> 0xbU)) 
                                                                                | ((0x200U 
                                                                                & (tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                                                                >> 0xdU)) 
                                                                                | ((0x100U 
                                                                                & (tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                                                                >> 0xfU)) 
                                                                                | ((0x80U 
                                                                                & (tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                                                                >> 0x11U)) 
                                                                                | ((0x40U 
                                                                                & (tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                                                                >> 0x13U)) 
                                                                                | ((0x20U 
                                                                                & (tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                                                                >> 0x15U)) 
                                                                                | ((0x10U 
                                                                                & (tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                                                                >> 0x17U)) 
                                                                                | ((8U 
                                                                                & (tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                                                                >> 0x19U)) 
                                                                                | ((4U 
                                                                                & (tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                                                                >> 0x1bU)) 
                                                                                | ((2U 
                                                                                & (tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                                                                >> 0x1dU)) 
                                                                                | (tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                                                                >> 0x1fU))))))))))))))))))))))))))))))));
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
        = ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_left)
            ? vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_left_result
            : tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result);
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bextins_result 
        = ((vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bmask 
            & tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result) 
           | ((~ vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bmask) 
              & ((0x2aU == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operator_ex))
                  ? vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_c_ex
                  : (- (IData)(((0x28U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operator_ex)) 
                                & (tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                   >> (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__bmask_a_ex))))))));
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__radix_2_rev 
        = ((tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
            << 0x1fU) | ((0x40000000U & (tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                         << 0x1dU)) 
                         | ((0x20000000U & (tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                            << 0x1bU)) 
                            | ((0x10000000U & (tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                               << 0x19U)) 
                               | ((0x8000000U & (tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                 << 0x17U)) 
                                  | ((0x4000000U & 
                                      (tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                       << 0x15U)) | 
                                     ((0x2000000U & 
                                       (tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                        << 0x13U)) 
                                      | ((0x1000000U 
                                          & (tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                             << 0x11U)) 
                                         | ((0x800000U 
                                             & (tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                << 0xfU)) 
                                            | ((0x400000U 
                                                & (tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                   << 0xdU)) 
                                               | ((0x200000U 
                                                   & (tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                      << 0xbU)) 
                                                  | ((0x100000U 
                                                      & (tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                         << 9U)) 
                                                     | ((0x80000U 
                                                         & (tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                            << 7U)) 
                                                        | ((0x40000U 
                                                            & (tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                               << 5U)) 
                                                           | ((0x20000U 
                                                               & (tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                                  << 3U)) 
                                                              | ((0x10000U 
                                                                  & (tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                                     << 1U)) 
                                                                 | ((0x8000U 
                                                                     & (tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                                        >> 1U)) 
                                                                    | ((0x4000U 
                                                                        & (tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                                           >> 3U)) 
                                                                       | ((0x2000U 
                                                                           & (tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                                              >> 5U)) 
                                                                          | ((0x1000U 
                                                                              & (tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                                                >> 7U)) 
                                                                             | ((0x800U 
                                                                                & (tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                                                >> 9U)) 
                                                                                | ((0x400U 
                                                                                & (tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                                                >> 0xbU)) 
                                                                                | ((0x200U 
                                                                                & (tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                                                >> 0xdU)) 
                                                                                | ((0x100U 
                                                                                & (tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                                                >> 0xfU)) 
                                                                                | ((0x80U 
                                                                                & (tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                                                >> 0x11U)) 
                                                                                | ((0x40U 
                                                                                & (tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                                                >> 0x13U)) 
                                                                                | ((0x20U 
                                                                                & (tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                                                >> 0x15U)) 
                                                                                | ((0x10U 
                                                                                & (tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                                                >> 0x17U)) 
                                                                                | ((8U 
                                                                                & (tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                                                >> 0x19U)) 
                                                                                | ((4U 
                                                                                & (tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                                                >> 0x1bU)) 
                                                                                | ((2U 
                                                                                & (tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                                                >> 0x1dU)) 
                                                                                | (tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                                                >> 0x1fU))))))))))))))))))))))))))))))));
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__reverse_result 
        = ((0U == (3U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__bmask_a_ex)))
            ? tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__radix_2_rev
            : ((1U == (3U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__bmask_a_ex)))
                ? ((tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                    << 0x1eU) | ((0x30000000U & (tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                 << 0x1aU)) 
                                 | ((0xc000000U & (tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                   << 0x16U)) 
                                    | ((0x3000000U 
                                        & (tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                           << 0x12U)) 
                                       | ((0xc00000U 
                                           & (tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                              << 0xeU)) 
                                          | ((0x300000U 
                                              & (tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                 << 0xaU)) 
                                             | ((0xc0000U 
                                                 & (tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                    << 6U)) 
                                                | ((0x30000U 
                                                    & (tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                       << 2U)) 
                                                   | ((0xc000U 
                                                       & (tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                          >> 2U)) 
                                                      | ((0x3000U 
                                                          & (tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                             >> 6U)) 
                                                         | ((0xc00U 
                                                             & (tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                                >> 0xaU)) 
                                                            | ((0x300U 
                                                                & (tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                                   >> 0xeU)) 
                                                               | ((0xc0U 
                                                                   & (tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                                      >> 0x12U)) 
                                                                  | ((0x30U 
                                                                      & (tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                                         >> 0x16U)) 
                                                                     | ((0xcU 
                                                                         & (tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                                            >> 0x1aU)) 
                                                                        | (tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                                           >> 0x1eU))))))))))))))))
                : ((2U == (3U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__bmask_a_ex)))
                    ? ((0x38000000U & (tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                       << 0x19U)) | 
                       ((0x7000000U & (tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                       << 0x13U)) | 
                        ((0xe00000U & (tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                       << 0xdU)) | 
                         ((0x1c0000U & (tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                        << 7U)) | (
                                                   (0x38000U 
                                                    & (tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                       << 1U)) 
                                                   | ((0x7000U 
                                                       & (tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                          >> 5U)) 
                                                      | ((0xe00U 
                                                          & (tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                             >> 0xbU)) 
                                                         | ((0x1c0U 
                                                             & (tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                                >> 0x11U)) 
                                                            | ((0x38U 
                                                                & (tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                                   >> 0x17U)) 
                                                               | (tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                                  >> 0x1dU))))))))))
                    : tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__radix_2_rev)));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_result = 0U;
    if ((0x40U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operator_ex))) {
        if ((1U & (~ ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operator_ex) 
                      >> 5U)))) {
            if ((1U & (~ ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operator_ex) 
                          >> 4U)))) {
                if ((8U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operator_ex))) {
                    if ((1U & (~ ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operator_ex) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operator_ex) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operator_ex))) {
                                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_result 
                                    = tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__reverse_result;
                            }
                        }
                    }
                }
            }
        }
    } else if ((0x20U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operator_ex))) {
        if ((0x10U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operator_ex))) {
            if ((8U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operator_ex))) {
                if ((4U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operator_ex))) {
                    if ((2U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operator_ex))) {
                        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_result 
                            = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__pack_result;
                    }
                } else {
                    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_result 
                        = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__pack_result;
                }
            } else {
                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_result 
                    = ((4U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operator_ex))
                        ? (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bitop_result)
                        : ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResInv_SP)
                            ? (- vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__OutMux_D)
                            : vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__OutMux_D));
            }
        } else if ((8U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operator_ex))) {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_result 
                = ((4U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operator_ex))
                    ? ((2U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operator_ex))
                        ? ((1U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operator_ex))
                            ? (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex 
                               ^ vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_b_ex)
                            : (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex 
                               | vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_b_ex))
                        : ((1U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operator_ex))
                            ? vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__pack_result
                            : (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex 
                               | vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bmask)))
                    : ((2U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operator_ex))
                        ? ((1U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operator_ex))
                            ? ((~ vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bmask) 
                               & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex)
                            : tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bextins_result)
                        : tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bextins_result));
        } else if ((4U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operator_ex))) {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_result 
                = tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result;
        }
    } else if ((0x10U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operator_ex))) {
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_result 
            = ((8U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operator_ex))
                ? tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result
                : ((4U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operator_ex))
                    ? ((2U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operator_ex))
                        ? ((0x17U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operator_ex))
                            ? (((vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex 
                                 >> 0x1fU) | (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_clip))
                                ? 0U : vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__result_minmax)
                            : ((IData)(((vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_result_expanded 
                                         >> 0x24U) 
                                        | (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_clip)))
                                ? (~ vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_b_ex)
                                : vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__result_minmax))
                        : ((1U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operator_ex))
                            ? (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex 
                               & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_b_ex)
                            : ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_is_clpx_ex)
                                ? ((0xffff0000U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_result) 
                                   | (0xffffU & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex))
                                : vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__result_minmax)))
                    : vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__result_minmax));
    } else if ((8U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operator_ex))) {
        if ((4U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operator_ex))) {
            if ((1U & (~ ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operator_ex) 
                          >> 1U)))) {
                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_result 
                    = ((0xffffU & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_result) 
                       | (((- (IData)((1U & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result) 
                                             >> 3U)))) 
                           << 0x18U) | (0xff0000U & 
                                        ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result) 
                                                        >> 2U)))) 
                                         << 0x10U))));
                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_result 
                    = ((0xffff0000U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_result) 
                       | ((0xff00U & ((- (IData)((1U 
                                                  & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result) 
                                                     >> 1U)))) 
                                      << 8U)) | (0xffU 
                                                 & (- (IData)(
                                                              (1U 
                                                               & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result)))))));
            }
        } else {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_result 
                = ((0xffffU & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_result) 
                   | (((- (IData)((1U & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result) 
                                         >> 3U)))) 
                       << 0x18U) | (0xff0000U & ((- (IData)(
                                                            (1U 
                                                             & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result) 
                                                                >> 2U)))) 
                                                 << 0x10U))));
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_result 
                = ((0xffff0000U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_result) 
                   | ((0xff00U & ((- (IData)((1U & 
                                              ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result) 
                                               >> 1U)))) 
                                  << 8U)) | (0xffU 
                                             & (- (IData)(
                                                          (1U 
                                                           & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result)))))));
        }
    } else if ((2U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operator_ex))) {
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_result 
            = (1U & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result) 
                     >> 3U));
    } else {
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_result 
            = ((0xffffU & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_result) 
               | (((- (IData)((1U & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result) 
                                     >> 3U)))) << 0x18U) 
                  | (0xff0000U & ((- (IData)((1U & 
                                              ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result) 
                                               >> 2U)))) 
                                  << 0x10U))));
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_result 
            = ((0xffff0000U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_result) 
               | ((0xff00U & ((- (IData)((1U & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result) 
                                                >> 1U)))) 
                              << 8U)) | (0xffU & (- (IData)(
                                                            (1U 
                                                             & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result)))))));
    }
}

VL_INLINE_OPT void Vtb_top_verilator___024root___act_comb__TOP__3(Vtb_top_verilator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_verilator___024root___act_comb__TOP__3\n"); );
    // Body
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_alu_wdata_fw = 0U;
    if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_en_ex) {
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_alu_wdata_fw 
            = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_result;
    }
    if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mult_en_ex) {
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_alu_wdata_fw 
            = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_result;
    }
    if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_access_ex) {
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_alu_wdata_fw 
            = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_rdata_int;
    }
}

extern const VlWide<32>/*1023:0*/ Vtb_top_verilator__ConstPool__CONST_hd6b7ba52_0;

VL_INLINE_OPT void Vtb_top_verilator___024root___act_comb__TOP__6(Vtb_top_verilator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_verilator___024root___act_comb__TOP__6\n"); );
    // Init
    IData/*31:0*/ tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__operand_b_fw_id;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__operand_b_fw_id = 0;
    // Body
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__operand_a_fw_id 
        = ((1U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__operand_a_fw_mux_sel))
            ? vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_alu_wdata_fw
            : ((2U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__operand_a_fw_mux_sel))
                ? vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__lsu_rdata
                : vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__regfile_data_ra_id));
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__operand_b_fw_id 
        = ((1U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__operand_b_fw_mux_sel))
            ? vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_alu_wdata_fw
            : ((2U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__operand_b_fw_mux_sel))
                ? vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__lsu_rdata
                : vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[
               (0x1fU & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                         >> 0x14U))]));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__operand_c_fw_id 
        = ((1U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__operand_c_fw_mux_sel))
            ? vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_alu_wdata_fw
            : ((2U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__operand_c_fw_mux_sel))
                ? vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__lsu_rdata
                : ((0x20U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_rc_id))
                    ? Vtb_top_verilator__ConstPool__CONST_hd6b7ba52_0[
                   (0x1fU & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_rc_id))]
                    : vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[
                   (0x1fU & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_rc_id))])));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__operand_c 
        = ((0U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__alu_op_c_mux_sel))
            ? vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__operand_c_fw_id
            : ((1U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__alu_op_c_mux_sel))
                ? tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__operand_b_fw_id
                : ((2U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__alu_op_c_mux_sel))
                    ? vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__jump_target
                    : vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__operand_c_fw_id)));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__operand_b 
        = ((4U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel))
            ? ((2U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel))
                ? tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__operand_b_fw_id
                : ((1U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel))
                    ? tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__operand_b_fw_id
                    : (0x1fU & tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__operand_b_fw_id)))
            : ((2U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel))
                ? ((1U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel))
                    ? vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__operand_a_fw_id
                    : vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__imm_b)
                : ((1U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel))
                    ? vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__operand_c_fw_id
                    : tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__operand_b_fw_id)));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__alu_operand_a 
        = ((4U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__alu_op_a_mux_sel))
            ? ((2U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__alu_op_a_mux_sel))
                ? vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__operand_a_fw_id
                : ((1U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__alu_op_a_mux_sel))
                    ? vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__operand_a_fw_id
                    : vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__operand_c_fw_id))
            : ((2U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__alu_op_a_mux_sel))
                ? ((1U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__alu_op_a_mux_sel))
                    ? tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__operand_b_fw_id
                    : vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__imm_a)
                : ((1U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__alu_op_a_mux_sel))
                    ? vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__pc_id
                    : vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__operand_a_fw_id)));
}

VL_INLINE_OPT void Vtb_top_verilator___024root___act_comb__TOP__7(Vtb_top_verilator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_verilator___024root___act_comb__TOP__7\n"); );
    // Body
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__Cnt_DN 
        = (0x3fU & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__LoadEn_S)
                     ? (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__div_shift)
                     : ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__Cnt_DP) 
                        - (0U != (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__Cnt_DP)))));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__BReg_DN 
        = ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__BRegEn_S)
            ? ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__LoadEn_S)
                ? vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_left_result
                : (((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__CompInv_SP) 
                    << 0x1fU) | (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__BReg_DP 
                                 >> 1U))) : vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__BReg_DP);
}

extern const VlUnpacked<CData/*0:0*/, 64> Vtb_top_verilator__ConstPool__TABLE_h05b947fa_0;

VL_INLINE_OPT void Vtb_top_verilator___024root___nba_sequent__TOP__3(Vtb_top_verilator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_verilator___024root___nba_sequent__TOP__3\n"); );
    // Init
    CData/*0:0*/ tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 0;
    IData/*31:0*/ tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in = 0;
    CData/*5:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    // Body
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__wdata_offset 
        = (3U & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__data_addr_int 
                 - (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__data_reg_offset_ex)));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__data_addr 
        = ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__data_misaligned_ex)
            ? (0xfffffffcU & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__data_addr_int)
            : vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__data_addr_int);
    if (vlSelf->rst_ni) {
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q 
            = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_n;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__cnt_q 
            = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__next_cnt;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__cnt_q 
            = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__next_cnt;
        if ((1U & (~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__data_misaligned)))) {
            if ((1U & (~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mult_multicycle)))) {
                if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_valid) {
                    if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__alu_en) {
                        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_c_ex 
                            = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__operand_c;
                    }
                    if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__data_req_id) {
                        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__data_we_ex 
                            = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__data_we_id;
                    }
                }
            }
        }
    } else {
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q = 0U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__cnt_q = 0U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__cnt_q = 0U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_c_ex = 0U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__data_we_ex = 0U;
    }
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__data_we_id = 0U;
    if ((1U & (~ (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                  >> 6U)))) {
        if ((0x20U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
            if ((1U & (~ (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                          >> 4U)))) {
                if ((1U & (~ (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                  >> 2U)))) {
                        if ((2U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                            if ((1U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__data_we_id = 1U;
                                if ((0U != (7U & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                                  >> 0xcU)))) {
                                    if ((1U != (7U 
                                                & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                                   >> 0xcU)))) {
                                        if ((2U != 
                                             (7U & 
                                              (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                               >> 0xcU)))) {
                                            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__data_we_id = 0U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mult_multicycle = 0U;
    if ((0U != (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
        if ((1U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mult_multicycle = 1U;
        } else if ((2U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mult_multicycle = 1U;
        } else if ((3U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mult_multicycle = 1U;
        }
    }
    __Vtableidx4 = (((3U == (3U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__data_addr_int)) 
                     << 5U) | (((0U != (3U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__data_addr_int)) 
                                << 4U) | (((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__data_type_ex) 
                                           << 2U) | 
                                          (((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__data_misaligned_ex) 
                                            << 1U) 
                                           | (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__data_req_ex)))));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__data_misaligned 
        = Vtb_top_verilator__ConstPool__TABLE_h05b947fa_0
        [__Vtableidx4];
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hebd32772__0 
        = ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
           & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__debug_csr_save = 0U;
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__dret_insn_dec = 0U;
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__csr_status = 0U;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 0U;
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op = 0U;
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 0U;
    if ((0x40U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
        if ((0x20U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
            if ((0x10U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                if ((1U & (~ (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                  >> 2U)))) {
                        if ((2U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                            if ((1U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                                if ((0U == (7U & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                                  >> 0xcU)))) {
                                    if ((0U == ((0x3e0U 
                                                 & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                                    >> 0xaU)) 
                                                | (0x1fU 
                                                   & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                                      >> 7U))))) {
                                        if ((0U != 
                                             (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                              >> 0x14U))) {
                                            if ((1U 
                                                 != 
                                                 (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                                  >> 0x14U))) {
                                                if (
                                                    (0x302U 
                                                     != 
                                                     (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                                      >> 0x14U))) {
                                                    if (
                                                        (2U 
                                                         != 
                                                         (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                                          >> 0x14U))) {
                                                        if (
                                                            (0x7b2U 
                                                             == 
                                                             (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                                              >> 0x14U))) {
                                                            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__dret_insn_dec 
                                                                = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                if ((8U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                } else if ((4U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                } else if ((2U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                    if ((1U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                        if ((0U == (7U & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                          >> 0xcU)))) {
                            if ((0U == ((0x3e0U & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                                   >> 0xaU)) 
                                        | (0x1fU & 
                                           (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                            >> 7U))))) {
                                if ((0U != (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                            >> 0x14U))) {
                                    if ((1U != (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                                >> 0x14U))) {
                                        if ((0x302U 
                                             == (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                                 >> 0x14U))) {
                                            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 0U;
                                        } else if (
                                                   (2U 
                                                    == 
                                                    (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                                     >> 0x14U))) {
                                            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                        } else if (
                                                   (0x7b2U 
                                                    == 
                                                    (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                                     >> 0x14U))) {
                                            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec 
                                                = (1U 
                                                   & (~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)));
                                        } else if (
                                                   (0x105U 
                                                    != 
                                                    (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                                     >> 0x14U))) {
                                            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                        }
                                    }
                                }
                            } else {
                                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                            }
                        } else {
                            if ((1U == (3U & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                              >> 0xcU)))) {
                                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op = 1U;
                            } else if ((2U == (3U & 
                                               (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                                >> 0xcU)))) {
                                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op 
                                    = ((0U == (0x1fU 
                                               & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                                  >> 0xfU)))
                                        ? 0U : 2U);
                            } else if ((3U == (3U & 
                                               (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                                >> 0xcU)))) {
                                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op 
                                    = ((0U == (0x1fU 
                                               & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                                  >> 0xfU)))
                                        ? 0U : 3U);
                            } else {
                                tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                            }
                            if ((vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                 >> 0x1fU)) {
                                if ((0x40000000U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                                    if ((0x20000000U 
                                         & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                                        if ((0x10000000U 
                                             & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                                            if ((0x8000000U 
                                                 & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                                                tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                            } else if (
                                                       (0x4000000U 
                                                        & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                                                tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                            } else if (
                                                       (0x2000000U 
                                                        & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                                                tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                            } else if (
                                                       (0x1000000U 
                                                        & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                                                if (
                                                    (0x800000U 
                                                     & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                                                    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                                } else if (
                                                           (0x400000U 
                                                            & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                                                    if (
                                                        (0x200000U 
                                                         & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                                                        tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                                    } else if (
                                                               (0x100000U 
                                                                & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                                                        tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                                    } else if (
                                                               (0U 
                                                                != (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op))) {
                                                        tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                                    }
                                                } else if (
                                                           (0x200000U 
                                                            & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                                                    if (
                                                        (0U 
                                                         != (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op))) {
                                                        tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                                    }
                                                } else if (
                                                           (0x100000U 
                                                            & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                                                    if (
                                                        (0U 
                                                         != (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op))) {
                                                        tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                                    }
                                                } else {
                                                    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                                }
                                            } else {
                                                tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                            }
                                        } else {
                                            tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                        }
                                    } else if ((0x10000000U 
                                                & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                                        tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                    } else if ((0x8000000U 
                                                & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                                        if ((0x4000000U 
                                             & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                                            tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                        } else if (
                                                   (0x2000000U 
                                                    & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                                            tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                        } else if (
                                                   (0x1000000U 
                                                    & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                                            if ((0U 
                                                 != (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op))) {
                                                tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                            } else {
                                                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__csr_status = 1U;
                                            }
                                        } else if (
                                                   (0x800000U 
                                                    & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                                            if ((0U 
                                                 != (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op))) {
                                                tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                            } else {
                                                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__csr_status = 1U;
                                            }
                                        } else if (
                                                   (0x400000U 
                                                    & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                                            if ((0U 
                                                 != (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op))) {
                                                tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                            } else {
                                                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__csr_status = 1U;
                                            }
                                        } else if (
                                                   (0x200000U 
                                                    & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                                            if ((0U 
                                                 != (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op))) {
                                                tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                            } else {
                                                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__csr_status = 1U;
                                            }
                                        } else if (
                                                   (0x100000U 
                                                    & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                                            tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                        } else if (
                                                   (0U 
                                                    != (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op))) {
                                            tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                        } else {
                                            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__csr_status = 1U;
                                        }
                                    } else if ((0x4000000U 
                                                & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                                        tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                    } else if ((0x2000000U 
                                                & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                                        tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                    } else if ((0x1000000U 
                                                & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                                        if ((0U != (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op))) {
                                            tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                        } else {
                                            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__csr_status = 1U;
                                        }
                                    } else if ((0x800000U 
                                                & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                                        if ((0U != (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op))) {
                                            tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                        } else {
                                            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__csr_status = 1U;
                                        }
                                    } else if ((0x400000U 
                                                & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                                        if ((0U != (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op))) {
                                            tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                        } else {
                                            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__csr_status = 1U;
                                        }
                                    } else if ((0x200000U 
                                                & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                                        if ((0U != (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op))) {
                                            tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                        } else {
                                            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__csr_status = 1U;
                                        }
                                    } else if ((0x100000U 
                                                & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                                        tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                    } else if ((0U 
                                                != (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op))) {
                                        tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                    } else {
                                        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__csr_status = 1U;
                                    }
                                } else if ((0x20000000U 
                                            & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                                    if ((0x10000000U 
                                         & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                                        if ((0x4000000U 
                                             & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                                            tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                        } else if (
                                                   (0x2000000U 
                                                    & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                                            tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                        } else if (
                                                   (0x1000000U 
                                                    & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                                            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__csr_status = 1U;
                                        } else if (
                                                   (0x800000U 
                                                    & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                                            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__csr_status = 1U;
                                        } else if (
                                                   (0x400000U 
                                                    & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                                            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__csr_status = 1U;
                                        } else if (
                                                   (0x200000U 
                                                    & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                                            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__csr_status = 1U;
                                        } else if (
                                                   (0x100000U 
                                                    & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                                            tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                        } else {
                                            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__csr_status = 1U;
                                        }
                                    } else {
                                        tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                    }
                                } else {
                                    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                }
                            } else if ((0x40000000U 
                                        & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                                if ((0x20000000U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                                    if ((0x10000000U 
                                         & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                                        if ((0x8000000U 
                                             & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                                            if ((0x4000000U 
                                                 & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                                                tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                            } else if (
                                                       (0x2000000U 
                                                        & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                                                if (
                                                    (0x1000000U 
                                                     & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                                                    if (
                                                        (0x800000U 
                                                         & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                                                        tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                                    } else if (
                                                               (0x400000U 
                                                                & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                                                        tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                                    } else if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q) {
                                                        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__csr_status = 1U;
                                                    } else {
                                                        tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                                    }
                                                } else if (
                                                           (0x800000U 
                                                            & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                                                    if (
                                                        (0x400000U 
                                                         & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                                                        tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                                    } else if (
                                                               (0x100000U 
                                                                & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                                                        tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                                    }
                                                } else if (
                                                           (0x400000U 
                                                            & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                                                    if (
                                                        (0x200000U 
                                                         & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                                                        tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                                    } else if (
                                                               (0x100000U 
                                                                & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                                                        tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                                    }
                                                }
                                            } else {
                                                tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                            }
                                        } else {
                                            tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                        }
                                    } else {
                                        tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                    }
                                } else {
                                    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                }
                            } else if ((0x20000000U 
                                        & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                                if ((0x10000000U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                                    if ((0x8000000U 
                                         & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                                        tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                    } else if ((0x4000000U 
                                                & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                                        if ((0x2000000U 
                                             & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                                            tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                        } else if (
                                                   (0x1000000U 
                                                    & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                                            tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                        } else if (
                                                   (0x800000U 
                                                    & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                                            tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                        } else if (
                                                   (0x400000U 
                                                    & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                                            if ((0x200000U 
                                                 & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                                                tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                            } else if (
                                                       (0x100000U 
                                                        & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                                                tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                            }
                                        } else if (
                                                   (0x200000U 
                                                    & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                                     >> 0x14U)))) {
                                                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__csr_status = 1U;
                                            }
                                        } else if (
                                                   (0x100000U 
                                                    & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                                            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__csr_status = 1U;
                                        }
                                    } else if ((0x2000000U 
                                                & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                                        if ((0x1000000U 
                                             & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                                            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__csr_status = 1U;
                                        } else if (
                                                   (0x800000U 
                                                    & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                                            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__csr_status = 1U;
                                        } else if (
                                                   (0x400000U 
                                                    & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                                            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__csr_status = 1U;
                                        } else if (
                                                   (0x200000U 
                                                    & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                                            if ((0x100000U 
                                                 & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                                                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__csr_status = 1U;
                                            } else {
                                                tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                            }
                                        } else if (
                                                   (0x100000U 
                                                    & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                                            tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                        } else {
                                            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__csr_status = 1U;
                                        }
                                    } else if ((0x1000000U 
                                                & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                                        tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                    } else if ((0x800000U 
                                                & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                                        tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                    } else if ((0x400000U 
                                                & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                                        if ((0x200000U 
                                             & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                                            tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                        } else if (
                                                   (0x100000U 
                                                    & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                                            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__csr_status = 1U;
                                        }
                                    } else if ((0x200000U 
                                                & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                                        tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                    } else if ((1U 
                                                & (~ 
                                                   (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                                    >> 0x14U)))) {
                                        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__csr_status = 1U;
                                    }
                                } else {
                                    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                }
                            } else {
                                tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                            }
                            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec 
                                = tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal;
                        }
                    } else {
                        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                    }
                } else {
                    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                }
            } else if ((8U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                if ((4U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                    if ((2U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                        if ((1U & (~ vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id))) {
                            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                        }
                    } else {
                        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                    }
                } else {
                    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                }
            } else if ((4U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                if ((2U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                    if ((1U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                        if ((0U != (7U & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                          >> 0xcU)))) {
                            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                        }
                    } else {
                        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                    }
                } else {
                    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                }
            } else if ((2U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                if ((1U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                    if ((1U & (~ (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                  >> 0xeU)))) {
                        if ((0x2000U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                        }
                    }
                } else {
                    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                }
            } else {
                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
            }
        } else {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
        }
    } else if ((0x20U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
        if ((0x10U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
            if ((8U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
            } else if ((4U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                if ((2U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                    if ((1U & (~ vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id))) {
                        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                    }
                } else {
                    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                }
            } else if ((2U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                if ((1U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                    if ((3U == (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                >> 0x1eU))) {
                        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                    } else if ((2U == (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                       >> 0x1eU))) {
                        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                    } else if ((0x40000000U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                        if ((0x20000000U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                        } else if ((0x10000000U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                        } else if ((0x8000000U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                        } else if ((0x4000000U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                        } else if ((0x2000000U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                        } else if ((0x4000U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                            if ((0x2000U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                            } else if ((1U & (~ (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                                 >> 0xcU)))) {
                                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                            }
                        } else if ((0x2000U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                        } else if ((0x1000U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                        }
                    } else if ((0x20000000U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                    } else if ((0x10000000U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                    } else if ((0x8000000U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                    } else if ((0x4000000U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                    }
                } else {
                    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                }
            } else {
                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
            }
        } else if ((8U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
        } else if ((4U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
        } else if ((2U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
            if ((1U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                if ((0U != (7U & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                  >> 0xcU)))) {
                    if ((1U != (7U & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                      >> 0xcU)))) {
                        if ((2U != (7U & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                          >> 0xcU)))) {
                            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                        }
                    }
                }
            } else {
                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
            }
        } else {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
        }
    } else if ((0x10U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
        if ((8U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
        } else if ((4U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
            if ((2U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                if ((1U & (~ vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id))) {
                    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                }
            } else {
                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
            }
        } else if ((2U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
            if ((1U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                if ((0x4000U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                    if ((1U & (~ (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                  >> 0xdU)))) {
                        if ((0x1000U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                            if ((0U != (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                        >> 0x19U))) {
                                if ((0x20U != (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                               >> 0x19U))) {
                                    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                }
                            }
                        }
                    }
                } else if ((1U & (~ (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                     >> 0xdU)))) {
                    if ((0x1000U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                        if ((0U != (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                    >> 0x19U))) {
                            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                        }
                    }
                }
            } else {
                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
            }
        } else {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
        }
    } else if ((8U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
        if ((4U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
            if ((2U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                if ((1U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                    if ((0U != (7U & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                      >> 0xcU)))) {
                        if ((1U != (7U & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                          >> 0xcU)))) {
                            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                        }
                    }
                } else {
                    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                }
            } else {
                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
            }
        } else {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
        }
    } else if ((4U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
    } else if ((2U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
        if ((1U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
            if ((0x4000U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                if ((0x2000U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                }
            } else if ((0x2000U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                if ((0x1000U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                }
            }
        } else {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
        }
    } else {
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
    }
    if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__illegal_c_insn_id) {
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
    }
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_n 
        = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q;
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__data_req 
        = ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__data_req_ex) 
           & (2U > (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__cnt_q)));
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in 
        = ((2U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg1_sel))
            ? (((- (IData)((vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex 
                            >> 0x1fU))) << 0x18U) | 
               ((0xff0000U & ((- (IData)((1U & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex 
                                                >> 0x17U)))) 
                              << 0x10U)) | ((0xff00U 
                                             & ((- (IData)(
                                                           (1U 
                                                            & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex 
                                                               >> 0xfU)))) 
                                                << 8U)) 
                                            | (0xffU 
                                               & (- (IData)(
                                                            (1U 
                                                             & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex 
                                                                >> 7U))))))))
            : ((1U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg1_sel))
                ? vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_c_ex
                : vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_b_ex));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__operand_b_fw_mux_sel = 0U;
    if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_we_wb) {
        if ((((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__regfile_waddr_lsu) 
              == (0x1fU & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                           >> 0x14U))) & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT____VdfgTmp_h44ac4589__0))) {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__operand_b_fw_mux_sel = 2U;
        }
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__operand_a_fw_mux_sel = 0U;
        if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__reg_d_wb_is_reg_a_id) {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__operand_a_fw_mux_sel = 2U;
        }
    } else {
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__operand_a_fw_mux_sel = 0U;
    }
    if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_alu_we_fw) {
        if ((((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_alu_waddr_ex) 
              == (0x1fU & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                           >> 0x14U))) & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT____VdfgTmp_h44ac4589__0))) {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__operand_b_fw_mux_sel = 1U;
        }
    }
    if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__data_misaligned) {
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__operand_b_fw_mux_sel = 0U;
    }
    if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_alu_we_fw) {
        if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__reg_d_alu_is_reg_a_id) {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__operand_a_fw_mux_sel = 1U;
        }
    }
    if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__data_misaligned) {
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__operand_a_fw_mux_sel = 1U;
    }
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__operand_c_fw_mux_sel = 0U;
    if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_we_wb) {
        if ((((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_rc_id) 
              == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__regfile_waddr_lsu)) 
             & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT____VdfgTmp_h405ab6f1__0))) {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__operand_c_fw_mux_sel = 2U;
        }
    }
    if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_alu_we_fw) {
        if ((((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_rc_id) 
              == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_alu_waddr_ex)) 
             & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT____VdfgTmp_h405ab6f1__0))) {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__operand_c_fw_mux_sel = 1U;
        }
    }
    if ((1U & (~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__data_misaligned)))) {
        if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mult_multicycle) {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__operand_c_fw_mux_sel = 1U;
        }
    }
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_restore_mret_id = 0U;
    if ((1U & (~ ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                  >> 4U)))) {
        if ((8U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((4U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if ((1U & (~ ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)))) {
                        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__debug_csr_save = 1U;
                        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_n = 1U;
                    }
                }
            } else if ((2U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if ((1U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    if ((1U & (~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))) {
                        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__debug_csr_save = 1U;
                    }
                    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_n = 1U;
                } else if ((1U & (~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__mret_dec)))) {
                    if ((1U & (~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__uret_dec)))) {
                        if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__dret_dec) {
                            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_n = 0U;
                        }
                    }
                }
            }
            if ((1U & (~ ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                              >> 1U)))) {
                    if ((1U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                        if ((1U & (~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__data_err_q)))) {
                            if ((1U & (~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__is_fetch_failed_id)))) {
                                if ((1U & (~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_q)))) {
                                    if (((((((((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__ebrk_insn_dec) 
                                               | (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__ecall_insn_dec)) 
                                              | (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__mret_insn_dec)) 
                                             | (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__uret_insn_dec)) 
                                            | (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__dret_insn_dec)) 
                                           | (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__csr_status)) 
                                          | (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__wfi_insn_dec)) 
                                         | (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__fencei_insn_dec))) {
                                        if ((1U & (~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__ebrk_insn_dec)))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__ecall_insn_dec)))) {
                                                if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__mret_insn_dec) {
                                                    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_restore_mret_id 
                                                        = 
                                                        (1U 
                                                         & (~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)));
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__pack_result 
        = ((((8U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_through))
              ? ((8U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel))
                  ? ((0x80U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                      ? ((0x40U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                          ? (tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in 
                             >> 0x18U) : (tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in 
                                          >> 0x10U))
                      : ((0x40U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                          ? (tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in 
                             >> 8U) : tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in))
                  : ((0x80U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                      ? ((0x40U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                          ? (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in 
                             >> 0x18U) : (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in 
                                          >> 0x10U))
                      : ((0x40U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                          ? (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in 
                             >> 8U) : vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in)))
              : (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_c_ex 
                 >> 0x18U)) << 0x18U) | ((0xff0000U 
                                          & (((4U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_through))
                                               ? ((4U 
                                                   & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel))
                                                   ? 
                                                  ((0x20U 
                                                    & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                    ? 
                                                   ((0x10U 
                                                     & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                     ? 
                                                    (tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in 
                                                     >> 0x18U)
                                                     : 
                                                    (tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in 
                                                     >> 0x10U))
                                                    : 
                                                   ((0x10U 
                                                     & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                     ? 
                                                    (tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in 
                                                     >> 8U)
                                                     : tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in))
                                                   : 
                                                  ((0x20U 
                                                    & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                    ? 
                                                   ((0x10U 
                                                     & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                     ? 
                                                    (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in 
                                                     >> 0x18U)
                                                     : 
                                                    (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in 
                                                     >> 0x10U))
                                                    : 
                                                   ((0x10U 
                                                     & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                     ? 
                                                    (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in 
                                                     >> 8U)
                                                     : vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in)))
                                               : (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_c_ex 
                                                  >> 0x10U)) 
                                             << 0x10U)) 
                                         | ((0xff00U 
                                             & (((2U 
                                                  & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_through))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel))
                                                   ? 
                                                  ((8U 
                                                    & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                    ? 
                                                   ((4U 
                                                     & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                     ? 
                                                    (tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in 
                                                     >> 0x18U)
                                                     : 
                                                    (tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in 
                                                     >> 0x10U))
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                     ? 
                                                    (tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in 
                                                     >> 8U)
                                                     : tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in))
                                                   : 
                                                  ((8U 
                                                    & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                    ? 
                                                   ((4U 
                                                     & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                     ? 
                                                    (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in 
                                                     >> 0x18U)
                                                     : 
                                                    (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in 
                                                     >> 0x10U))
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                     ? 
                                                    (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in 
                                                     >> 8U)
                                                     : vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in)))
                                                  : 
                                                 (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_c_ex 
                                                  >> 8U)) 
                                                << 8U)) 
                                            | (0xffU 
                                               & ((1U 
                                                   & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_through))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                      ? 
                                                     (tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in 
                                                      >> 0x18U)
                                                      : 
                                                     (tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in 
                                                      >> 0x10U))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                      ? 
                                                     (tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in 
                                                      >> 8U)
                                                      : tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                      ? 
                                                     (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in 
                                                      >> 0x18U)
                                                      : 
                                                     (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in 
                                                      >> 0x10U))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                      ? 
                                                     (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in 
                                                      >> 8U)
                                                      : vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in)))
                                                   : vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_c_ex)))));
}

void Vtb_top_verilator___024root___eval_triggers__ico(Vtb_top_verilator___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_top_verilator___024root___dump_triggers__ico(Vtb_top_verilator___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_top_verilator___024root___eval_ico(Vtb_top_verilator___024root* vlSelf);
void Vtb_top_verilator___024root___eval_triggers__act(Vtb_top_verilator___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_top_verilator___024root___dump_triggers__act(Vtb_top_verilator___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_top_verilator___024root___eval_act(Vtb_top_verilator___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_top_verilator___024root___dump_triggers__nba(Vtb_top_verilator___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_top_verilator___024root___eval_nba(Vtb_top_verilator___024root* vlSelf);

void Vtb_top_verilator___024root___eval(Vtb_top_verilator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_verilator___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        Vtb_top_verilator___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Vtb_top_verilator___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("/home/rohan/core-v-verif/cv32e40p/tb/core/tb_top_verilator.sv", 14, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Vtb_top_verilator___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vtb_top_verilator___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vtb_top_verilator___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("/home/rohan/core-v-verif/cv32e40p/tb/core/tb_top_verilator.sv", 14, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                vlSelf->__VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vtb_top_verilator___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vtb_top_verilator___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("/home/rohan/core-v-verif/cv32e40p/tb/core/tb_top_verilator.sv", 14, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vtb_top_verilator___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vtb_top_verilator___024root___eval_debug_assertions(Vtb_top_verilator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_verilator___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk_i & 0xfeU))) {
        Verilated::overWidthError("clk_i");}
    if (VL_UNLIKELY((vlSelf->rst_ni & 0xfeU))) {
        Verilated::overWidthError("rst_ni");}
    if (VL_UNLIKELY((vlSelf->fetch_enable_i & 0xfeU))) {
        Verilated::overWidthError("fetch_enable_i");}
}
#endif  // VL_DEBUG
