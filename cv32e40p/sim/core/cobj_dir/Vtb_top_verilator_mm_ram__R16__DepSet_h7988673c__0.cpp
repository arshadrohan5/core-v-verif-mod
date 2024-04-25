// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top_verilator.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtb_top_verilator_mm_ram__R16.h"

VL_INLINE_OPT void Vtb_top_verilator_mm_ram__R16___act_sequent__TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i__0(Vtb_top_verilator_mm_ram__R16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_verilator_mm_ram__R16___act_sequent__TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i__0\n"); );
    // Body
    vlSelf->__Vdlyvset__data_rvalid_stall_i__DOT__fifo__v0 = 0U;
}

VL_INLINE_OPT void Vtb_top_verilator_mm_ram__R16___act_sequent__TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i__3(Vtb_top_verilator_mm_ram__R16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_verilator_mm_ram__R16___act_sequent__TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i__3\n"); );
    // Body
    vlSelf->data_rdata_o = 0U;
    if (vlSelf->data_rvalid_stall_i__DOT____VdfgExtracted_he119aaf2__0) {
        vlSelf->data_rdata_o = ((((7U & (IData)(vlSelf->__PVT__data_rvalid_stall_i__DOT__rptr)) 
                                  == (IData)(vlSelf->__PVT__data_rvalid_stall_i__DOT__wptr_rdata)) 
                                 & (IData)(vlSelf->__PVT__data_rvalid_stall_i__DOT__rvalid_i_q))
                                 ? ((1U & (IData)((
                                                   vlSelf->__PVT__data_rvalid_stall_i__DOT__fifo
                                                   [
                                                   (7U 
                                                    & (IData)(vlSelf->__PVT__data_rvalid_stall_i__DOT__rptr))] 
                                                   >> 0x24U)))
                                     ? 0U : vlSelf->__PVT__data_rdata_mux)
                                 : (IData)(vlSelf->__PVT__data_rvalid_stall_i__DOT__fifo
                                           [(7U & (IData)(vlSelf->__PVT__data_rvalid_stall_i__DOT__rptr))]));
    }
}

VL_INLINE_OPT void Vtb_top_verilator_mm_ram__R16___nba_comb__TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i__0(Vtb_top_verilator_mm_ram__R16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_verilator_mm_ram__R16___nba_comb__TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i__0\n"); );
    // Init
    IData/*31:0*/ __PVT__i_amo_shim__DOT__amo_operand_a;
    __PVT__i_amo_shim__DOT__amo_operand_a = 0;
    QData/*33:0*/ __PVT__i_amo_shim__DOT__adder_sum;
    __PVT__i_amo_shim__DOT__adder_sum = 0;
    QData/*32:0*/ __PVT__i_amo_shim__DOT__adder_operand_a;
    __PVT__i_amo_shim__DOT__adder_operand_a = 0;
    // Body
    vlSelf->__Vcellout__instr_rvalid_stall_i__rdata_o = 0U;
    if (vlSelf->instr_rvalid_stall_i__DOT____VdfgExtracted_he119aaf2__0) {
        vlSelf->__Vcellout__instr_rvalid_stall_i__rdata_o 
            = ((((7U & (IData)(vlSelf->__PVT__instr_rvalid_stall_i__DOT__rptr)) 
                 == (IData)(vlSelf->__PVT__instr_rvalid_stall_i__DOT__wptr_rdata)) 
                & (IData)(vlSelf->__PVT__instr_rvalid_stall_i__DOT__rvalid_i_q))
                ? ((1U & (IData)((vlSelf->__PVT__instr_rvalid_stall_i__DOT__fifo
                                  [(7U & (IData)(vlSelf->__PVT__instr_rvalid_stall_i__DOT__rptr))] 
                                  >> 0x24U))) ? 0U : 
                   vlSelf->__PVT__ram_instr_rdata[0U])
                : (IData)(vlSelf->__PVT__instr_rvalid_stall_i__DOT__fifo
                          [(7U & (IData)(vlSelf->__PVT__instr_rvalid_stall_i__DOT__rptr))]));
    }
    __PVT__i_amo_shim__DOT__amo_operand_a = ((IData)(vlSelf->__PVT__i_amo_shim__DOT__upper_word_q)
                                              ? 0U : vlSelf->__PVT__tmp_ram_amoshimd_data_rdata);
    __PVT__i_amo_shim__DOT__adder_operand_a = (0x1ffffffffULL 
                                               & VL_EXTENDS_QI(33,32, __PVT__i_amo_shim__DOT__amo_operand_a));
    vlSelf->__PVT__tmp_ram_data_rdata = (QData)((IData)(vlSelf->__PVT__tmp_ram_amoshimd_data_rdata));
    if (vlSelf->__PVT__i_amo_shim__DOT__state_q) {
        if (vlSelf->__PVT__i_amo_shim__DOT__state_q) {
            vlSelf->__PVT__tmp_ram_data_rdata = ((0xcU 
                                                  == (IData)(vlSelf->__PVT__i_amo_shim__DOT__amo_op_q))
                                                  ? 
                                                 ((IData)(vlSelf->__PVT__i_amo_shim__DOT__upper_word_q)
                                                   ? 
                                                  ((QData)((IData)(
                                                                   (1U 
                                                                    & (~ (IData)(vlSelf->__PVT__i_amo_shim__DOT__sc_ok))))) 
                                                   << 0x20U)
                                                   : (QData)((IData)(
                                                                     (1U 
                                                                      & (~ (IData)(vlSelf->__PVT__i_amo_shim__DOT__sc_ok))))))
                                                  : 
                                                 ((IData)(vlSelf->__PVT__i_amo_shim__DOT__upper_word_q)
                                                   ? 
                                                  ((QData)((IData)(__PVT__i_amo_shim__DOT__amo_operand_a)) 
                                                   << 0x20U)
                                                   : (QData)((IData)(__PVT__i_amo_shim__DOT__amo_operand_a))));
        }
    }
    if ((8U & (IData)(vlSelf->__PVT__i_amo_shim__DOT__amo_op_q))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__i_amo_shim__DOT__amo_op_q) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__i_amo_shim__DOT__amo_op_q) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->__PVT__i_amo_shim__DOT__amo_op_q))) {
                    __PVT__i_amo_shim__DOT__adder_operand_a 
                        = (QData)((IData)(__PVT__i_amo_shim__DOT__amo_operand_a));
                }
            }
        }
    } else if ((4U & (IData)(vlSelf->__PVT__i_amo_shim__DOT__amo_op_q))) {
        if ((2U & (IData)(vlSelf->__PVT__i_amo_shim__DOT__amo_op_q))) {
            if ((1U & (IData)(vlSelf->__PVT__i_amo_shim__DOT__amo_op_q))) {
                __PVT__i_amo_shim__DOT__adder_operand_a 
                    = (QData)((IData)(__PVT__i_amo_shim__DOT__amo_operand_a));
            }
        }
    }
    __PVT__i_amo_shim__DOT__adder_sum = (0x3ffffffffULL 
                                         & (__PVT__i_amo_shim__DOT__adder_operand_a 
                                            + vlSelf->__PVT__i_amo_shim__DOT__adder_operand_b));
    vlSelf->__PVT__i_amo_shim__DOT__amo_result = vlSelf->__PVT__i_amo_shim__DOT__amo_operand_b_q;
    if ((8U & (IData)(vlSelf->__PVT__i_amo_shim__DOT__amo_op_q))) {
        if ((4U & (IData)(vlSelf->__PVT__i_amo_shim__DOT__amo_op_q))) {
            vlSelf->__PVT__i_amo_shim__DOT__amo_result 
                = ((2U & (IData)(vlSelf->__PVT__i_amo_shim__DOT__amo_op_q))
                    ? 0U : ((1U & (IData)(vlSelf->__PVT__i_amo_shim__DOT__amo_op_q))
                             ? 0U : ((IData)(vlSelf->__PVT__i_amo_shim__DOT__sc_ok)
                                      ? vlSelf->__PVT__i_amo_shim__DOT__amo_operand_b_q
                                      : ((IData)(vlSelf->__PVT__i_amo_shim__DOT__upper_word_q)
                                          ? (IData)(
                                                    ((QData)((IData)(vlSelf->__PVT__tmp_ram_amoshimd_data_rdata)) 
                                                     >> 0x20U))
                                          : vlSelf->__PVT__tmp_ram_amoshimd_data_rdata))));
        } else if ((2U & (IData)(vlSelf->__PVT__i_amo_shim__DOT__amo_op_q))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__i_amo_shim__DOT__amo_op_q)))) {
                vlSelf->__PVT__i_amo_shim__DOT__amo_result 
                    = ((0ULL == __PVT__i_amo_shim__DOT__adder_sum)
                        ? vlSelf->__PVT__i_amo_shim__DOT__swap_value_q
                        : ((IData)(vlSelf->__PVT__i_amo_shim__DOT__upper_word_q)
                            ? (IData)(((QData)((IData)(vlSelf->__PVT__tmp_ram_amoshimd_data_rdata)) 
                                       >> 0x20U)) : vlSelf->__PVT__tmp_ram_amoshimd_data_rdata));
            }
        } else {
            vlSelf->__PVT__i_amo_shim__DOT__amo_result 
                = ((1U & (IData)(vlSelf->__PVT__i_amo_shim__DOT__amo_op_q))
                    ? ((1U & (IData)((__PVT__i_amo_shim__DOT__adder_sum 
                                      >> 0x20U))) ? __PVT__i_amo_shim__DOT__amo_operand_a
                        : vlSelf->__PVT__i_amo_shim__DOT__amo_operand_b_q)
                    : ((1U & (IData)((__PVT__i_amo_shim__DOT__adder_sum 
                                      >> 0x20U))) ? __PVT__i_amo_shim__DOT__amo_operand_a
                        : vlSelf->__PVT__i_amo_shim__DOT__amo_operand_b_q));
        }
    } else if ((4U & (IData)(vlSelf->__PVT__i_amo_shim__DOT__amo_op_q))) {
        vlSelf->__PVT__i_amo_shim__DOT__amo_result 
            = ((2U & (IData)(vlSelf->__PVT__i_amo_shim__DOT__amo_op_q))
                ? ((1U & (IData)(vlSelf->__PVT__i_amo_shim__DOT__amo_op_q))
                    ? ((1U & (IData)((__PVT__i_amo_shim__DOT__adder_sum 
                                      >> 0x20U))) ? vlSelf->__PVT__i_amo_shim__DOT__amo_operand_b_q
                        : __PVT__i_amo_shim__DOT__amo_operand_a)
                    : ((1U & (IData)((__PVT__i_amo_shim__DOT__adder_sum 
                                      >> 0x20U))) ? vlSelf->__PVT__i_amo_shim__DOT__amo_operand_b_q
                        : __PVT__i_amo_shim__DOT__amo_operand_a))
                : ((1U & (IData)(vlSelf->__PVT__i_amo_shim__DOT__amo_op_q))
                    ? (__PVT__i_amo_shim__DOT__amo_operand_a 
                       ^ vlSelf->__PVT__i_amo_shim__DOT__amo_operand_b_q)
                    : (__PVT__i_amo_shim__DOT__amo_operand_a 
                       | vlSelf->__PVT__i_amo_shim__DOT__amo_operand_b_q)));
    } else if ((2U & (IData)(vlSelf->__PVT__i_amo_shim__DOT__amo_op_q))) {
        vlSelf->__PVT__i_amo_shim__DOT__amo_result 
            = ((1U & (IData)(vlSelf->__PVT__i_amo_shim__DOT__amo_op_q))
                ? (__PVT__i_amo_shim__DOT__amo_operand_a 
                   & vlSelf->__PVT__i_amo_shim__DOT__amo_operand_b_q)
                : (IData)(__PVT__i_amo_shim__DOT__adder_sum));
    } else if ((1U & (~ (IData)(vlSelf->__PVT__i_amo_shim__DOT__amo_op_q)))) {
        vlSelf->__PVT__i_amo_shim__DOT__amo_result = 0U;
    }
}
