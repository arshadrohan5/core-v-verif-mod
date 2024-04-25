// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top_verilator.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtb_top_verilator__Syms.h"
#include "Vtb_top_verilator___024root.h"

VL_INLINE_OPT void Vtb_top_verilator___024root___nba_comb__TOP__8(Vtb_top_verilator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_verilator___024root___nba_comb__TOP__8\n"); );
    // Body
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__fetch_rdata 
        = ((0U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q))
            ? vlSymsp->TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i.__Vcellout__instr_rvalid_stall_i__rdata_o
            : (IData)((vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__mem_q 
                       >> (0x3fU & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__read_pointer_q) 
                                    << 5U)))));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
        = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__fetch_rdata;
    if ((0U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
            = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__fetch_rdata;
    } else if ((1U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
            = ((3U == (3U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__r_instr_h)))
                ? ((vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__fetch_rdata 
                    << 0x10U) | (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__r_instr_h))
                : ((0xffff0000U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__fetch_rdata) 
                   | (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__r_instr_h)));
    } else if ((2U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
            = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__fetch_rdata;
    } else if ((3U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
            = ((3U == (3U & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__fetch_rdata 
                             >> 0x10U))) ? vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__fetch_rdata
                : ((0xffff0000U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__fetch_rdata) 
                   | (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__fetch_rdata 
                      >> 0x10U)));
    }
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__illegal_c_insn = 0U;
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_decompressed = 0U;
    if ((0U == (3U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned))) {
        if ((0x8000U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)) {
            if ((0x4000U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)) {
                if ((0x2000U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)) {
                    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                }
                if ((1U & (~ (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                              >> 0xdU)))) {
                    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_decompressed 
                        = (0x842023U | ((0x4000000U 
                                         & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                            << 0x15U)) 
                                        | ((0x2000000U 
                                            & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                               << 0xdU)) 
                                           | ((0x700000U 
                                               & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                  << 0x12U)) 
                                              | ((0x38000U 
                                                  & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                     << 8U)) 
                                                 | ((0xc00U 
                                                     & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned) 
                                                    | (0x200U 
                                                       & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                          << 3U))))))));
                }
            } else {
                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
            }
        } else if ((0x4000U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)) {
            if ((0x2000U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)) {
                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
            }
            if ((1U & (~ (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                          >> 0xdU)))) {
                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_decompressed 
                    = (0x42403U | ((0x4000000U & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                  << 0x15U)) 
                                   | ((0x3800000U & 
                                       (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                        << 0xdU)) | 
                                      ((0x400000U & 
                                        (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                         << 0x10U)) 
                                       | ((0x38000U 
                                           & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                              << 8U)) 
                                          | (0x380U 
                                             & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                << 5U)))))));
            }
        } else {
            if ((0x2000U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)) {
                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
            } else if ((0U == (0xffU & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                        >> 5U)))) {
                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
            }
            if ((1U & (~ (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                          >> 0xdU)))) {
                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_decompressed 
                    = (0x10413U | ((0x3c000000U & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                   << 0x13U)) 
                                   | ((0x3000000U & 
                                       (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                        << 0xdU)) | 
                                      ((0x800000U & 
                                        (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                         << 0x12U)) 
                                       | ((0x400000U 
                                           & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                              << 0x10U)) 
                                          | (0x380U 
                                             & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                << 5U)))))));
            }
        }
    } else if ((1U == (3U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned))) {
        if ((0x8000U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)) {
            if ((1U & (~ (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                          >> 0xeU)))) {
                if ((1U & (~ (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                              >> 0xdU)))) {
                    if ((0x800U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)) {
                        if ((0x400U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)) {
                            if ((0x1000U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)) {
                                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                            }
                        }
                    } else if ((0x1000U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)) {
                        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                    }
                }
            }
            if ((0x4000U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)) {
                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_decompressed 
                    = (0x40063U | (((- (IData)((1U 
                                                & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                   >> 0xcU)))) 
                                    << 0x1cU) | ((0xc000000U 
                                                  & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                     << 0x15U)) 
                                                 | ((0x2000000U 
                                                     & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                        << 0x17U)) 
                                                    | ((0x38000U 
                                                        & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                           << 8U)) 
                                                       | ((0x1000U 
                                                           & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                              >> 1U)) 
                                                          | ((0xc00U 
                                                              & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned) 
                                                             | ((0x300U 
                                                                 & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                                    << 5U)) 
                                                                | (0x80U 
                                                                   & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                                      >> 5U))))))))));
            } else if ((0x2000U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)) {
                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_decompressed 
                    = (0x6fU | ((0x80000000U & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                << 0x13U)) 
                                | ((0x40000000U & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                   << 0x16U)) 
                                   | ((0x30000000U 
                                       & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                          << 0x13U)) 
                                      | ((0x8000000U 
                                          & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                             << 0x15U)) 
                                         | ((0x4000000U 
                                             & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                << 0x13U)) 
                                            | ((0x2000000U 
                                                & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                   << 0x17U)) 
                                               | ((0x1000000U 
                                                   & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                      << 0xdU)) 
                                                  | ((0xe00000U 
                                                      & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                         << 0x12U)) 
                                                     | ((0x1ff000U 
                                                         & ((- (IData)(
                                                                       (1U 
                                                                        & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                                           >> 0xcU)))) 
                                                            << 0xcU)) 
                                                        | (0x80U 
                                                           & ((~ 
                                                               (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                                >> 0xfU)) 
                                                              << 7U))))))))))));
            } else if ((0x800U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)) {
                if ((0x400U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)) {
                    if ((1U & (~ (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                  >> 0xcU)))) {
                        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_decompressed 
                            = ((0x40U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)
                                ? ((0x20U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)
                                    ? (0x847433U | 
                                       ((0x700000U 
                                         & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                            << 0x12U)) 
                                        | ((0x38000U 
                                            & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                               << 8U)) 
                                           | (0x380U 
                                              & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned))))
                                    : (0x846433U | 
                                       ((0x700000U 
                                         & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                            << 0x12U)) 
                                        | ((0x38000U 
                                            & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                               << 8U)) 
                                           | (0x380U 
                                              & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)))))
                                : ((0x20U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)
                                    ? (0x844433U | 
                                       ((0x700000U 
                                         & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                            << 0x12U)) 
                                        | ((0x38000U 
                                            & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                               << 8U)) 
                                           | (0x380U 
                                              & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned))))
                                    : (0x40840433U 
                                       | ((0x700000U 
                                           & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                              << 0x12U)) 
                                          | ((0x38000U 
                                              & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                 << 8U)) 
                                             | (0x380U 
                                                & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned))))));
                    }
                } else {
                    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_decompressed 
                        = (0x47413U | (((- (IData)(
                                                   (1U 
                                                    & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                       >> 0xcU)))) 
                                        << 0x1aU) | 
                                       ((0x2000000U 
                                         & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                            << 0xdU)) 
                                        | ((0x1f00000U 
                                            & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                               << 0x12U)) 
                                           | ((0x38000U 
                                               & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                  << 8U)) 
                                              | (0x380U 
                                                 & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned))))));
                }
            } else {
                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_decompressed 
                    = ((0x1000U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)
                        ? (0x45413U | ((0x40000000U 
                                        & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                           << 0x14U)) 
                                       | ((0x1f00000U 
                                           & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                              << 0x12U)) 
                                          | ((0x38000U 
                                              & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                 << 8U)) 
                                             | (0x380U 
                                                & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)))))
                        : ((0U == (0x1fU & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                            >> 2U)))
                            ? (0x45413U | ((0x40000000U 
                                            & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                               << 0x14U)) 
                                           | ((0x1f00000U 
                                               & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                  << 0x12U)) 
                                              | ((0x38000U 
                                                  & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                     << 8U)) 
                                                 | (0x380U 
                                                    & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)))))
                            : (0x45413U | ((0x40000000U 
                                            & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                               << 0x14U)) 
                                           | ((0x1f00000U 
                                               & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                  << 0x12U)) 
                                              | ((0x38000U 
                                                  & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                     << 8U)) 
                                                 | (0x380U 
                                                    & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)))))));
            }
        } else if ((0x4000U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)) {
            if ((0x2000U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)) {
                if ((0U == ((0x20U & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                      >> 7U)) | (0x1fU 
                                                 & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                    >> 2U))))) {
                    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                }
                if ((0U != ((0x20U & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                      >> 7U)) | (0x1fU 
                                                 & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                    >> 2U))))) {
                    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_decompressed 
                        = ((2U == (0x1fU & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                            >> 7U)))
                            ? (0x10113U | (((- (IData)(
                                                       (1U 
                                                        & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                           >> 0xcU)))) 
                                            << 0x1dU) 
                                           | ((0x18000000U 
                                               & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                  << 0x18U)) 
                                              | ((0x4000000U 
                                                  & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                     << 0x15U)) 
                                                 | ((0x2000000U 
                                                     & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                        << 0x17U)) 
                                                    | (0x1000000U 
                                                       & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                          << 0x12U)))))))
                            : ((0U == (0x1fU & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                >> 7U)))
                                ? (0x37U | (((- (IData)(
                                                        (1U 
                                                         & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                            >> 0xcU)))) 
                                             << 0x11U) 
                                            | ((0x1f000U 
                                                & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                   << 0xaU)) 
                                               | (0xf80U 
                                                  & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned))))
                                : (0x37U | (((- (IData)(
                                                        (1U 
                                                         & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                            >> 0xcU)))) 
                                             << 0x11U) 
                                            | ((0x1f000U 
                                                & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                   << 0xaU)) 
                                               | (0xf80U 
                                                  & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned))))));
                }
            } else {
                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_decompressed 
                    = ((0U == (0x1fU & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                        >> 7U))) ? 
                       (0x13U | (((- (IData)((1U & 
                                              (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                               >> 0xcU)))) 
                                  << 0x1aU) | ((0x2000000U 
                                                & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                   << 0xdU)) 
                                               | ((0x1f00000U 
                                                   & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                      << 0x12U)) 
                                                  | (0xf80U 
                                                     & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)))))
                        : (0x13U | (((- (IData)((1U 
                                                 & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                    >> 0xcU)))) 
                                     << 0x1aU) | ((0x2000000U 
                                                   & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                      << 0xdU)) 
                                                  | ((0x1f00000U 
                                                      & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                         << 0x12U)) 
                                                     | (0xf80U 
                                                        & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned))))));
            }
        } else {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_decompressed 
                = ((0x2000U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)
                    ? (0x6fU | ((0x80000000U & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                << 0x13U)) 
                                | ((0x40000000U & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                   << 0x16U)) 
                                   | ((0x30000000U 
                                       & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                          << 0x13U)) 
                                      | ((0x8000000U 
                                          & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                             << 0x15U)) 
                                         | ((0x4000000U 
                                             & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                << 0x13U)) 
                                            | ((0x2000000U 
                                                & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                   << 0x17U)) 
                                               | ((0x1000000U 
                                                   & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                      << 0xdU)) 
                                                  | ((0xe00000U 
                                                      & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                         << 0x12U)) 
                                                     | ((0x1ff000U 
                                                         & ((- (IData)(
                                                                       (1U 
                                                                        & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                                           >> 0xcU)))) 
                                                            << 0xcU)) 
                                                        | (0x80U 
                                                           & ((~ 
                                                               (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                                >> 0xfU)) 
                                                              << 7U))))))))))))
                    : (0x13U | (((- (IData)((1U & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                   >> 0xcU)))) 
                                 << 0x1aU) | ((0x2000000U 
                                               & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                  << 0xdU)) 
                                              | ((0x1f00000U 
                                                  & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                     << 0x12U)) 
                                                 | ((0xf8000U 
                                                     & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                        << 8U)) 
                                                    | (0xf80U 
                                                       & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)))))));
        }
    } else if ((2U == (3U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned))) {
        if ((0x8000U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)) {
            if ((0x4000U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)) {
                if ((0x2000U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)) {
                    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                }
                if ((1U & (~ (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                              >> 0xdU)))) {
                    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_decompressed 
                        = (0x12023U | ((0xc000000U 
                                        & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                           << 0x13U)) 
                                       | ((0x2000000U 
                                           & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                              << 0xdU)) 
                                          | ((0x1f00000U 
                                              & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                 << 0x12U)) 
                                             | (0xe00U 
                                                & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)))));
                }
            } else {
                if ((0x2000U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)) {
                    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                } else if ((1U & (~ (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                     >> 0xcU)))) {
                    if ((0U == (0x1fU & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                         >> 2U)))) {
                        if ((0U == (0x1fU & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                             >> 7U)))) {
                            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                        }
                    }
                }
                if ((1U & (~ (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                              >> 0xdU)))) {
                    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_decompressed 
                        = ((0x1000U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)
                            ? ((0U == (0x1fU & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                >> 2U)))
                                ? ((0U == (0x1fU & 
                                           (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                            >> 7U)))
                                    ? 0x100073U : (0xe7U 
                                                   | (0xf8000U 
                                                      & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                         << 8U))))
                                : ((0U == (0x1fU & 
                                           (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                            >> 7U)))
                                    ? (0x33U | ((0x1f00000U 
                                                 & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                    << 0x12U)) 
                                                | ((0xf8000U 
                                                    & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                       << 8U)) 
                                                   | (0xf80U 
                                                      & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned))))
                                    : (0x33U | ((0x1f00000U 
                                                 & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                    << 0x12U)) 
                                                | ((0xf8000U 
                                                    & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                       << 8U)) 
                                                   | (0xf80U 
                                                      & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned))))))
                            : ((0U == (0x1fU & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                >> 2U)))
                                ? (0x67U | (0xf8000U 
                                            & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                               << 8U)))
                                : ((0U == (0x1fU & 
                                           (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                            >> 7U)))
                                    ? (0x33U | ((0x1f00000U 
                                                 & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                    << 0x12U)) 
                                                | (0xf80U 
                                                   & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)))
                                    : (0x33U | ((0x1f00000U 
                                                 & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                    << 0x12U)) 
                                                | (0xf80U 
                                                   & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned))))));
                }
            }
        } else if ((0x4000U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)) {
            if ((0x2000U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)) {
                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
            } else if ((0U == (0x1fU & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                        >> 7U)))) {
                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
            }
            if ((1U & (~ (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                          >> 0xdU)))) {
                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_decompressed 
                    = (0x12003U | ((0xc000000U & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                  << 0x18U)) 
                                   | ((0x2000000U & 
                                       (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                        << 0xdU)) | 
                                      ((0x1c00000U 
                                        & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                           << 0x12U)) 
                                       | (0xf80U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)))));
            }
        } else {
            if ((0x2000U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)) {
                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
            } else if ((0x1000U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)) {
                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
            }
            if ((1U & (~ (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                          >> 0xdU)))) {
                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_decompressed 
                    = ((0x1000U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)
                        ? (0x1013U | ((0x1f00000U & 
                                       (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                        << 0x12U)) 
                                      | ((0xf8000U 
                                          & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                             << 8U)) 
                                         | (0xf80U 
                                            & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned))))
                        : (((0U == (0x1fU & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                             >> 2U))) 
                            | (0U == (0x1fU & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                               >> 7U))))
                            ? (0x1013U | ((0x1f00000U 
                                           & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                              << 0x12U)) 
                                          | ((0xf8000U 
                                              & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                 << 8U)) 
                                             | (0xf80U 
                                                & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned))))
                            : (0x1013U | ((0x1f00000U 
                                           & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                              << 0x12U)) 
                                          | ((0xf8000U 
                                              & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                 << 8U)) 
                                             | (0xf80U 
                                                & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned))))));
            }
        }
    } else {
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_decompressed 
            = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned;
    }
}

void Vtb_top_verilator___024root___nba_sequent__TOP__0(Vtb_top_verilator___024root* vlSelf);
void Vtb_top_verilator___024root___nba_sequent__TOP__1(Vtb_top_verilator___024root* vlSelf);
void Vtb_top_verilator_mm_ram__R16___nba_sequent__TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i__0(Vtb_top_verilator_mm_ram__R16* vlSelf);
void Vtb_top_verilator___024root___nba_sequent__TOP__2(Vtb_top_verilator___024root* vlSelf);
void Vtb_top_verilator_mm_ram__R16___nba_sequent__TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i__1(Vtb_top_verilator_mm_ram__R16* vlSelf);
void Vtb_top_verilator___024root___act_sequent__TOP__1(Vtb_top_verilator___024root* vlSelf);
void Vtb_top_verilator___024root___act_sequent__TOP__2(Vtb_top_verilator___024root* vlSelf);
void Vtb_top_verilator___024root___act_sequent__TOP__3(Vtb_top_verilator___024root* vlSelf);
void Vtb_top_verilator___024root___act_sequent__TOP__4(Vtb_top_verilator___024root* vlSelf);
void Vtb_top_verilator___024root___nba_sequent__TOP__3(Vtb_top_verilator___024root* vlSelf);
void Vtb_top_verilator_mm_ram__R16___nba_comb__TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i__0(Vtb_top_verilator_mm_ram__R16* vlSelf);
void Vtb_top_verilator___024root___act_comb__TOP__0(Vtb_top_verilator___024root* vlSelf);
void Vtb_top_verilator___024root___act_comb__TOP__1(Vtb_top_verilator___024root* vlSelf);
void Vtb_top_verilator___024root___nba_comb__TOP__6(Vtb_top_verilator___024root* vlSelf);
void Vtb_top_verilator_mm_ram__R16___ico_sequent__TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i__0(Vtb_top_verilator_mm_ram__R16* vlSelf);
void Vtb_top_verilator___024root___ico_sequent__TOP__1(Vtb_top_verilator___024root* vlSelf);
void Vtb_top_verilator_mm_ram__R16___nba_comb__TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i__2(Vtb_top_verilator_mm_ram__R16* vlSelf);
void Vtb_top_verilator___024root___act_sequent__TOP__6(Vtb_top_verilator___024root* vlSelf);
void Vtb_top_verilator___024root___act_comb__TOP__3(Vtb_top_verilator___024root* vlSelf);
void Vtb_top_verilator___024root___act_comb__TOP__4(Vtb_top_verilator___024root* vlSelf);
void Vtb_top_verilator_mm_ram__R16___ico_comb__TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i__0(Vtb_top_verilator_mm_ram__R16* vlSelf);
void Vtb_top_verilator___024root___ico_comb__TOP__1(Vtb_top_verilator___024root* vlSelf);
void Vtb_top_verilator___024root___act_comb__TOP__6(Vtb_top_verilator___024root* vlSelf);
void Vtb_top_verilator___024root___act_comb__TOP__7(Vtb_top_verilator___024root* vlSelf);

void Vtb_top_verilator___024root___eval_nba(Vtb_top_verilator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_verilator___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(7U)) {
        Vtb_top_verilator___024root___nba_sequent__TOP__0(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vtb_top_verilator___024root___nba_sequent__TOP__1(vlSelf);
        Vtb_top_verilator_mm_ram__R16___nba_sequent__TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i__0((&vlSymsp->TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i));
        Vtb_top_verilator___024root___nba_sequent__TOP__2(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(8U)) {
        Vtb_top_verilator_mm_ram__R16___nba_sequent__TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i__1((&vlSymsp->TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i));
    }
    if ((vlSelf->__VnbaTriggered.at(5U) | vlSelf->__VnbaTriggered.at(7U))) {
        Vtb_top_verilator___024root___act_sequent__TOP__1(vlSelf);
    }
    if ((vlSelf->__VnbaTriggered.at(6U) | vlSelf->__VnbaTriggered.at(7U))) {
        Vtb_top_verilator___024root___act_sequent__TOP__2(vlSelf);
    }
    if ((vlSelf->__VnbaTriggered.at(2U) | vlSelf->__VnbaTriggered.at(7U))) {
        Vtb_top_verilator___024root___act_sequent__TOP__3(vlSelf);
    }
    if ((vlSelf->__VnbaTriggered.at(3U) | vlSelf->__VnbaTriggered.at(7U))) {
        Vtb_top_verilator___024root___act_sequent__TOP__4(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(7U)) {
        Vtb_top_verilator___024root___nba_sequent__TOP__3(vlSelf);
    }
    if ((vlSelf->__VnbaTriggered.at(1U) | vlSelf->__VnbaTriggered.at(8U))) {
        Vtb_top_verilator_mm_ram__R16___nba_comb__TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i__0((&vlSymsp->TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i));
    }
    if (((vlSelf->__VnbaTriggered.at(5U) | vlSelf->__VnbaTriggered.at(6U)) 
         | vlSelf->__VnbaTriggered.at(7U))) {
        Vtb_top_verilator___024root___act_comb__TOP__0(vlSelf);
    }
    if (((vlSelf->__VnbaTriggered.at(2U) | vlSelf->__VnbaTriggered.at(3U)) 
         | vlSelf->__VnbaTriggered.at(7U))) {
        Vtb_top_verilator___024root___act_comb__TOP__1(vlSelf);
    }
    if ((vlSelf->__VnbaTriggered.at(1U) | vlSelf->__VnbaTriggered.at(7U))) {
        Vtb_top_verilator___024root___nba_comb__TOP__6(vlSelf);
    }
    if ((((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(1U)) 
          | vlSelf->__VnbaTriggered.at(7U)) | vlSelf->__VnbaTriggered.at(8U))) {
        Vtb_top_verilator_mm_ram__R16___ico_sequent__TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i__0((&vlSymsp->TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i));
        Vtb_top_verilator___024root___ico_sequent__TOP__1(vlSelf);
    }
    if (((vlSelf->__VnbaTriggered.at(1U) | vlSelf->__VnbaTriggered.at(7U)) 
         | vlSelf->__VnbaTriggered.at(8U))) {
        Vtb_top_verilator___024root___nba_comb__TOP__8(vlSelf);
        Vtb_top_verilator_mm_ram__R16___nba_comb__TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i__2((&vlSymsp->TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i));
        Vtb_top_verilator___024root___act_sequent__TOP__6(vlSelf);
    }
    if (((((vlSelf->__VnbaTriggered.at(2U) | vlSelf->__VnbaTriggered.at(3U)) 
           | vlSelf->__VnbaTriggered.at(5U)) | vlSelf->__VnbaTriggered.at(6U)) 
         | vlSelf->__VnbaTriggered.at(7U))) {
        Vtb_top_verilator___024root___act_comb__TOP__3(vlSelf);
    }
    if (((((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(1U)) 
           | vlSelf->__VnbaTriggered.at(4U)) | vlSelf->__VnbaTriggered.at(7U)) 
         | vlSelf->__VnbaTriggered.at(8U))) {
        Vtb_top_verilator___024root___act_comb__TOP__4(vlSelf);
        Vtb_top_verilator_mm_ram__R16___ico_comb__TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i__0((&vlSymsp->TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i));
        Vtb_top_verilator___024root___ico_comb__TOP__1(vlSelf);
    }
    if (((((((vlSelf->__VnbaTriggered.at(1U) | vlSelf->__VnbaTriggered.at(2U)) 
             | vlSelf->__VnbaTriggered.at(3U)) | vlSelf->__VnbaTriggered.at(5U)) 
           | vlSelf->__VnbaTriggered.at(6U)) | vlSelf->__VnbaTriggered.at(7U)) 
         | vlSelf->__VnbaTriggered.at(8U))) {
        Vtb_top_verilator___024root___act_comb__TOP__6(vlSelf);
    }
    if (((((((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(1U)) 
             | vlSelf->__VnbaTriggered.at(2U)) | vlSelf->__VnbaTriggered.at(3U)) 
           | vlSelf->__VnbaTriggered.at(4U)) | vlSelf->__VnbaTriggered.at(7U)) 
         | vlSelf->__VnbaTriggered.at(8U))) {
        Vtb_top_verilator___024root___act_comb__TOP__7(vlSelf);
    }
}
