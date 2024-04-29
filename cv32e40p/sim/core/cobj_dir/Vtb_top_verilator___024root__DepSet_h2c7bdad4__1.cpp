// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top_verilator.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtb_top_verilator__Syms.h"
#include "Vtb_top_verilator___024root.h"

VL_INLINE_OPT void Vtb_top_verilator___024root___nba_sequent__TOP__2(Vtb_top_verilator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_verilator___024root___nba_sequent__TOP__2\n"); );
    // Init
    IData/*31:0*/ __Vdly__tb_top_verilator__DOT__cycle_cnt_q;
    __Vdly__tb_top_verilator__DOT__cycle_cnt_q = 0;
    VlWide<3>/*95:0*/ __Vtemp_ha4d157ef__0;
    // Body
    __Vdly__tb_top_verilator__DOT__cycle_cnt_q = vlSelf->tb_top_verilator__DOT__cycle_cnt_q;
    if (VL_UNLIKELY(vlSelf->tests_passed_o)) {
        VL_WRITEF("%Ntb_top_verilator @ %0t: ALL TESTS PASSED\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        VL_FINISH_MT("/home/rohan/core-v-verif/cv32e40p/tb/core/tb_top_verilator.sv", 72, "");
    }
    if (VL_UNLIKELY(vlSelf->tests_failed_o)) {
        VL_WRITEF("%Ntb_top_verilator @ %0t: TEST(S) FAILED!\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        VL_FINISH_MT("/home/rohan/core-v-verif/cv32e40p/tb/core/tb_top_verilator.sv", 76, "");
    }
    if (VL_UNLIKELY(vlSymsp->TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i.exit_valid_o)) {
        if ((0U == vlSymsp->TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i.exit_value_o)) {
            VL_WRITEF("%Ntb_top_verilator @ %0t: EXIT SUCCESS\n",
                      vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                      -12);
        } else {
            VL_WRITEF("%Ntb_top_verilator @ %0t: EXIT FAILURE: %20#\n",
                      vlSymsp->name(),32,vlSymsp->TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i.exit_value_o,
                      -12,64,VL_TIME_UNITED_Q(1));
        }
        VL_FINISH_MT("/home/rohan/core-v-verif/cv32e40p/tb/core/tb_top_verilator.sv", 83, "");
    }
    __Vtemp_ha4d157ef__0[0U] = 0x733d2564U;
    __Vtemp_ha4d157ef__0[1U] = 0x79636c65U;
    __Vtemp_ha4d157ef__0[2U] = 0x6d617863U;
    if (VL_VALUEPLUSARGS_INI(32, VL_CVT_PACK_STR_NW(3, __Vtemp_ha4d157ef__0), 
                             vlSelf->tb_top_verilator__DOT__unnamedblk1__DOT__maxcycles)) {
        if (vlSelf->rst_ni) {
            __Vdly__tb_top_verilator__DOT__cycle_cnt_q 
                = ((IData)(1U) + vlSelf->tb_top_verilator__DOT__cycle_cnt_q);
            if (VL_UNLIKELY((vlSelf->tb_top_verilator__DOT__cycle_cnt_q 
                             >= vlSelf->tb_top_verilator__DOT__unnamedblk1__DOT__maxcycles))) {
                VL_FINISH_MT("/home/rohan/core-v-verif/cv32e40p/tb/core/tb_top_verilator.sv", 62, "");
            }
        } else {
            __Vdly__tb_top_verilator__DOT__cycle_cnt_q = 0U;
        }
    }
    if (vlSelf->rst_ni) {
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__sleep_unit_i__DOT__fetch_enable_q 
            = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__sleep_unit_i__DOT__fetch_enable_d;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__sleep_unit_i__DOT__core_busy_q 
            = (((0U != (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__cnt_q)) 
                | (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__trans_valid)) 
               | ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ctrl_busy) 
                  | ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__apu_active) 
                     | ((0U != (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__cnt_q)) 
                        | (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__data_req)))));
        if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q) {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_q = 0U;
        }
    } else {
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__sleep_unit_i__DOT__fetch_enable_q = 0U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__sleep_unit_i__DOT__core_busy_q = 0U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_q = 0U;
    }
    vlSelf->tb_top_verilator__DOT__cycle_cnt_q = __Vdly__tb_top_verilator__DOT__cycle_cnt_q;
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__sleep_unit_i__DOT__fetch_enable_d 
        = ((IData)(vlSelf->fetch_enable_i) | (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__sleep_unit_i__DOT__fetch_enable_q));
}

VL_INLINE_OPT void Vtb_top_verilator___024root___nba_sequent__TOP__3(Vtb_top_verilator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_verilator___024root___nba_sequent__TOP__3\n"); );
    // Body
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT____Vcellinp__top_i__irq_i 
        = ((vlSymsp->TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i.__PVT__irq_rnd_lines 
            << 0x10U) | ((0x800U & (vlSymsp->TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i.__PVT__irq_rnd_lines 
                                    >> 5U)) | ((0x80U 
                                                & ((0x3fff80U 
                                                    & (vlSymsp->TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i.__PVT__irq_rnd_lines 
                                                       >> 0xaU)) 
                                                   | ((IData)(vlSymsp->TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i.__PVT__irq_timer_q) 
                                                      << 7U))) 
                                               | (8U 
                                                  & (vlSymsp->TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i.__PVT__irq_rnd_lines 
                                                     >> 0xfU)))));
}

VL_INLINE_OPT void Vtb_top_verilator___024root___nba_comb__TOP__16(Vtb_top_verilator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_verilator___024root___nba_comb__TOP__16\n"); );
    // Init
    CData/*2:0*/ tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__exc_pc_mux_id;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__exc_pc_mux_id = 0;
    CData/*4:0*/ tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__m_exc_vec_pc_mux_id;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__m_exc_vec_pc_mux_id = 0;
    CData/*4:0*/ tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__exc_cause;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__exc_cause = 0;
    CData/*1:0*/ tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__trap_addr_mux;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__trap_addr_mux = 0;
    IData/*23:0*/ tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__trap_base_addr;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__trap_base_addr = 0;
    CData/*4:0*/ tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__exc_vec_pc_mux;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__exc_vec_pc_mux = 0;
    CData/*0:0*/ tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__debug_wfi_no_sleep;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__debug_wfi_no_sleep = 0;
    // Body
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__wb_valid 
        = ((0U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__cnt_q)) 
           | (IData)(vlSymsp->TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i.data_rvalid_o));
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__debug_wfi_no_sleep 
        = (1U & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q) 
                 | ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_q) 
                    | ((vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_q 
                        >> 2U) | (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__trigger_match)))));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_entry_n 
        = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_entry_q;
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__wake_from_sleep 
        = ((0U != (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT____Vcellinp__top_i__irq_i 
                   & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mie_bypass)) 
           | ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q) 
              | (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_q)));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__irq_ack = 0U;
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__irq_id_out = 0U;
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_save_if = 0U;
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__is_decoding = 0U;
    if ((0x10U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__is_decoding = 0U;
    } else if ((8U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        if ((4U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((2U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if ((1U & (~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)))) {
                    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__is_decoding = 0U;
                }
            } else {
                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__is_decoding = 0U;
            }
        } else {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__is_decoding = 0U;
        }
    } else if ((4U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        if ((1U & (~ ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__branch_taken_ex) {
                    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__is_decoding = 0U;
                } else if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__is_fetch_failed_id) {
                    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__is_decoding = 0U;
                } else if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_valid_id) {
                    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__is_decoding = 1U;
                    if ((((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_q) 
                          | (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__trigger_match)) 
                         & (~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))) {
                        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__is_decoding = 1U;
                    } else if (((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__irq_req_ctrl) 
                                & (~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))) {
                        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__is_decoding = 0U;
                    }
                } else {
                    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__is_decoding = 0U;
                }
            } else {
                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__is_decoding = 0U;
            }
        }
    } else {
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__is_decoding = 0U;
    }
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__exc_cause = 0U;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__trap_addr_mux = 0U;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__exc_pc_mux_id = 1U;
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_n 
        = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_q;
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__alu_operator = 3U;
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel = 0U;
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__wfi_active 
        = ((~ (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__debug_wfi_no_sleep)) 
           & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__wfi_insn_dec));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel = 0U;
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
                                                             != 
                                                             (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                                              >> 0x14U))) {
                                                            if (
                                                                (0x105U 
                                                                 == 
                                                                 (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                                                  >> 0x14U))) {
                                                                if (tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__debug_wfi_no_sleep) {
                                                                    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__alu_operator = 0x18U;
                                                                    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel = 0U;
                                                                    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel = 2U;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel = 0U;
                                    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel = 2U;
                                }
                            }
                        }
                    }
                }
            } else if ((8U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                if ((4U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                    if ((2U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                        if ((1U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__alu_operator = 0x18U;
                            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel = 3U;
                            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel = 2U;
                        }
                    }
                }
            } else if ((4U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                if ((2U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                    if ((1U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__alu_operator = 0x18U;
                        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel = 3U;
                        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel = 2U;
                    }
                }
            } else if ((2U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                if ((1U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                    if ((0x4000U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__alu_operator 
                            = ((0x2000U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)
                                ? ((0x1000U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)
                                    ? 0xbU : 1U) : 
                               ((0x1000U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)
                                 ? 0xaU : 0U));
                    } else if ((1U & (~ (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                         >> 0xdU)))) {
                        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__alu_operator 
                            = ((0x1000U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)
                                ? 0xdU : 0xcU);
                    }
                }
            }
        } else if ((0x10U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
            if ((1U & (~ (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                          >> 3U)))) {
                if ((1U & (~ (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                              >> 2U)))) {
                    if ((2U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                        if ((1U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                            if ((0U != (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_fs_q))) {
                                if ((vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                     >> 0x1fU)) {
                                    if ((0x40000000U 
                                         & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                                        if ((0x20000000U 
                                             & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                                            if ((0x10000000U 
                                                 & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                                         >> 0x1bU)))) {
                                                    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel = 3U;
                                                }
                                            } else if (
                                                       (1U 
                                                        & (~ 
                                                           (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                                            >> 0x1bU)))) {
                                                if (
                                                    (0U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                                         >> 0xcU)))) {
                                                    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel = 3U;
                                                }
                                            }
                                        }
                                    }
                                } else if ((1U & (~ 
                                                  (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                                   >> 0x1eU)))) {
                                    if ((1U & (~ (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                                  >> 0x1dU)))) {
                                        if ((1U & (~ 
                                                   (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                                    >> 0x1cU)))) {
                                            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel = 3U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else if ((0x20U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
        if ((0x10U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
            if ((1U & (~ (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                          >> 3U)))) {
                if ((4U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                    if ((2U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                        if ((1U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__alu_operator = 0x18U;
                            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel = 2U;
                            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel = 2U;
                        }
                    }
                } else if ((2U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                    if ((1U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                        if ((3U != (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                    >> 0x1eU))) {
                            if ((2U != (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                        >> 0x1eU))) {
                                if ((0x40000000U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                                    if ((1U & (~ (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                                  >> 0x1dU)))) {
                                        if ((1U & (~ 
                                                   (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                                    >> 0x1cU)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                                     >> 0x1bU)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                                         >> 0x1aU)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                                             >> 0x19U)))) {
                                                        if (
                                                            (0x4000U 
                                                             & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                                                     >> 0xdU)))) {
                                                                if (
                                                                    (0x1000U 
                                                                     & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                                                                    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__alu_operator = 0x24U;
                                                                }
                                                            }
                                                        } else if (
                                                                   (1U 
                                                                    & (~ 
                                                                       (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                                                        >> 0xdU)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                                                     >> 0xcU)))) {
                                                                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__alu_operator = 0x19U;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else if ((1U & (~ 
                                                  (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                                   >> 0x1dU)))) {
                                    if ((1U & (~ (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                                  >> 0x1cU)))) {
                                        if ((1U & (~ 
                                                   (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                                    >> 0x1bU)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                                     >> 0x1aU)))) {
                                                if (
                                                    (0x2000000U 
                                                     & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                                                    if (
                                                        (0x4000U 
                                                         & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                                                        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__alu_operator 
                                                            = 
                                                            ((0x2000U 
                                                              & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)
                                                              ? 
                                                             ((0x1000U 
                                                               & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)
                                                               ? 0x32U
                                                               : 0x33U)
                                                              : 
                                                             ((0x1000U 
                                                               & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)
                                                               ? 0x30U
                                                               : 0x31U));
                                                    }
                                                } else {
                                                    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__alu_operator 
                                                        = 
                                                        ((0x4000U 
                                                          & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)
                                                          ? 
                                                         ((0x2000U 
                                                           & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)
                                                           ? 
                                                          ((0x1000U 
                                                            & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)
                                                            ? 0x15U
                                                            : 0x2eU)
                                                           : 
                                                          ((0x1000U 
                                                            & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)
                                                            ? 0x25U
                                                            : 0x2fU))
                                                          : 
                                                         ((0x2000U 
                                                           & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)
                                                           ? 
                                                          ((0x1000U 
                                                            & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)
                                                            ? 3U
                                                            : 2U)
                                                           : 
                                                          ((0x1000U 
                                                            & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)
                                                            ? 0x27U
                                                            : 0x18U)));
                                                }
                                            }
                                        }
                                    }
                                }
                                if ((1U & (~ (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                              >> 0x1eU)))) {
                                    if ((1U & (~ (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                                  >> 0x1dU)))) {
                                        if ((1U & (~ 
                                                   (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                                    >> 0x1cU)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                                     >> 0x1bU)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                                         >> 0x1aU)))) {
                                                    if (
                                                        (0x2000000U 
                                                         & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                                                        if (
                                                            (0x4000U 
                                                             & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                                                            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel = 3U;
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
        } else if ((1U & (~ (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                             >> 3U)))) {
            if ((4U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                if ((2U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                    if ((1U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                        if ((0U != (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_fs_q))) {
                            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__alu_operator = 0x18U;
                            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel = 1U;
                            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel = 2U;
                        }
                    }
                }
            } else if ((2U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                if ((1U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__alu_operator = 0x18U;
                    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel = 1U;
                    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel = 2U;
                }
            }
        }
    } else if ((0x10U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
        if ((1U & (~ (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                      >> 3U)))) {
            if ((4U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                if ((2U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                    if ((1U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__alu_operator = 0x18U;
                        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel = 2U;
                        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel = 2U;
                    }
                }
            } else if ((2U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                if ((1U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                    if ((0x4000U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                        if ((0x2000U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__alu_operator 
                                = ((0x1000U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)
                                    ? 0x15U : 0x2eU);
                        } else if ((0x1000U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                            if ((0U == (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                        >> 0x19U))) {
                                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__alu_operator = 0x25U;
                            } else if ((0x20U == (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                                  >> 0x19U))) {
                                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__alu_operator = 0x24U;
                            }
                        } else {
                            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__alu_operator = 0x2fU;
                        }
                    } else {
                        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__alu_operator 
                            = ((0x2000U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)
                                ? ((0x1000U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)
                                    ? 3U : 2U) : ((0x1000U 
                                                   & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)
                                                   ? 0x27U
                                                   : 0x18U));
                    }
                    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel = 0U;
                    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel = 2U;
                }
            }
        }
    } else if ((1U & (~ (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                         >> 3U)))) {
        if ((4U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
            if ((2U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                if ((1U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                    if ((0U != (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_fs_q))) {
                        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__alu_operator = 0x18U;
                        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel = 0U;
                        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel = 2U;
                    }
                }
            }
        } else if ((2U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
            if ((1U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__alu_operator = 0x18U;
                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel = 0U;
                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel = 2U;
            }
        }
    }
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ctrl_busy = 1U;
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_force_wakeup_n 
        = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_force_wakeup_q;
    if ((1U & (~ ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                  >> 4U)))) {
        if ((8U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((1U & (~ ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    if ((1U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_entry_n = 0U;
                    }
                }
                if ((1U & (~ ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                              >> 1U)))) {
                    if ((1U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                        if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__data_err_q) {
                            tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__exc_cause 
                                = ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__data_we_ex)
                                    ? 5U : 7U);
                            tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__trap_addr_mux = 0U;
                        } else if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__is_fetch_failed_id) {
                            tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__exc_cause = 1U;
                            tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__trap_addr_mux = 0U;
                        } else if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_q) {
                            tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__trap_addr_mux = 0U;
                        } else if (((((((((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__ebrk_insn_dec) 
                                          | (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__ecall_insn_dec)) 
                                         | (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__mret_insn_dec)) 
                                        | (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__uret_insn_dec)) 
                                       | (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__dret_insn_dec)) 
                                      | (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__csr_status)) 
                                     | (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__wfi_insn_dec)) 
                                    | (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__fencei_insn_dec))) {
                            if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__ebrk_insn_dec) {
                                tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__trap_addr_mux = 0U;
                            } else if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__ecall_insn_dec) {
                                tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__trap_addr_mux = 0U;
                            }
                        }
                        if ((1U & (~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__data_err_q)))) {
                            if ((1U & (~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__is_fetch_failed_id)))) {
                                if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_q) {
                                    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_n = 0U;
                                }
                            }
                        }
                    }
                }
            }
            if ((4U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if ((1U & (~ ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)))) {
                        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_save_if = 1U;
                        tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__exc_pc_mux_id = 2U;
                        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_force_wakeup_n = 0U;
                    }
                }
            } else {
                if ((2U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    if ((1U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                        tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__exc_pc_mux_id = 2U;
                    } else if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__mret_dec) {
                        tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__exc_pc_mux_id = 3U;
                    } else if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__uret_dec) {
                        tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__exc_pc_mux_id = 3U;
                    }
                } else if ((1U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__data_err_q) {
                        tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__exc_pc_mux_id = 0U;
                    } else if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__is_fetch_failed_id) {
                        tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__exc_pc_mux_id 
                            = ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)
                                ? 3U : 0U);
                    } else if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_q) {
                        tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__exc_pc_mux_id 
                            = ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)
                                ? 3U : 0U);
                    } else if (((((((((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__ebrk_insn_dec) 
                                      | (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__ecall_insn_dec)) 
                                     | (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__mret_insn_dec)) 
                                    | (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__uret_insn_dec)) 
                                   | (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__dret_insn_dec)) 
                                  | (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__csr_status)) 
                                 | (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__wfi_insn_dec)) 
                                | (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__fencei_insn_dec))) {
                        if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__ebrk_insn_dec) {
                            tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__exc_pc_mux_id = 0U;
                        } else if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__ecall_insn_dec) {
                            tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__exc_pc_mux_id 
                                = ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)
                                    ? 3U : 0U);
                        }
                    }
                }
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
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__mret_insn_dec)))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__uret_insn_dec)))) {
                                                        if (
                                                            (1U 
                                                             & (~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__dret_insn_dec)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__csr_status)))) {
                                                                if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__wfi_insn_dec) {
                                                                    if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_q) {
                                                                        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_force_wakeup_n = 1U;
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
                    }
                }
            }
        } else {
            if ((4U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if ((1U & (~ ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                              >> 1U)))) {
                    if ((1U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                        if ((1U & (~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__branch_taken_ex)))) {
                            if ((1U & (~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__is_fetch_failed_id)))) {
                                if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_valid_id) {
                                    if ((((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_q) 
                                          | (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__trigger_match)) 
                                         & (~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))) {
                                        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_entry_n = 1U;
                                    }
                                    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_n = 0U;
                                    if ((1U & (~ (((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_q) 
                                                   | (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__trigger_match)) 
                                                  & (~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))))) {
                                        if (((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__irq_req_ctrl) 
                                             & (~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))) {
                                            tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__exc_cause 
                                                = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__irq_id_ctrl;
                                            tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__trap_addr_mux = 0U;
                                            tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__exc_pc_mux_id = 1U;
                                        }
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__irq_req_ctrl) 
                                                    & (~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))))) {
                                            if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec) {
                                                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_n = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                            if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__is_fetch_failed_id) {
                                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_save_if = 1U;
                            }
                        }
                    } else if (((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__irq_req_ctrl) 
                                & (~ ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_q) 
                                      | (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q))))) {
                        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_save_if = 1U;
                        tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__exc_cause 
                            = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__irq_id_ctrl;
                        tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__trap_addr_mux = 0U;
                        tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__exc_pc_mux_id = 1U;
                    }
                }
            }
            if ((1U & (~ ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    if ((1U & (~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)))) {
                        if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__wake_from_sleep) {
                            if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_q) {
                                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_force_wakeup_n = 1U;
                            }
                        }
                    }
                } else if ((1U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_q) {
                        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_force_wakeup_n = 1U;
                    }
                }
            }
        }
        if ((1U & (~ ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                      >> 3U)))) {
            if ((4U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if ((1U & (~ ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                              >> 1U)))) {
                    if ((1U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                        if ((1U & (~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__branch_taken_ex)))) {
                            if ((1U & (~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__is_fetch_failed_id)))) {
                                if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_valid_id) {
                                    if ((1U & (~ (((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_q) 
                                                   | (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__trigger_match)) 
                                                  & (~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))))) {
                                        if (((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__irq_req_ctrl) 
                                             & (~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))) {
                                            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__irq_ack = 1U;
                                            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__irq_id_out 
                                                = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__irq_id_ctrl;
                                        }
                                    }
                                }
                            }
                        }
                    } else if (((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__irq_req_ctrl) 
                                & (~ ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_q) 
                                      | (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q))))) {
                        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__irq_ack = 1U;
                        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__irq_id_out 
                            = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__irq_id_ctrl;
                    }
                }
            }
            if ((1U & (~ ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    if ((1U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ctrl_busy = 0U;
                    } else if ((1U & (~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__wake_from_sleep)))) {
                        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ctrl_busy = 0U;
                    }
                }
            }
        }
    }
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__sleep_unit_i__DOT__clock_en 
        = ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__sleep_unit_i__DOT__fetch_enable_q) 
           & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__sleep_unit_i__DOT__core_busy_q) 
              | (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__wake_from_sleep)));
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__m_exc_vec_pc_mux_id 
        = ((0U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_mode_q))
            ? 0U : (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__exc_cause));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__imm_b 
        = ((8U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel))
            ? ((4U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel))
                ? vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__imm_i_type
                : ((2U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel))
                    ? ((1U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel))
                        ? (((- (IData)((1U & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                              >> 0x18U)))) 
                            << 5U) | (0x1fU & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                               >> 0x14U)))
                        : vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__imm_i_type)
                    : ((1U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel))
                        ? ((((IData)(1U) << (0x1fU 
                                             & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                                >> 0x14U))) 
                            - (IData)(1U)) >> 1U) : 
                       ((0x10000U & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                     >> 4U)) | (1U 
                                                & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                                   >> 0x19U))))))
            : ((4U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel))
                ? ((2U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel))
                    ? ((1U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel))
                        ? (IData)(vlSelf->__VdfgTmp_h9edd808c__0)
                        : (((- (IData)((1U & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                              >> 0x18U)))) 
                            << 6U) | (IData)(vlSelf->__VdfgTmp_h9edd808c__0)))
                    : ((1U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel))
                        ? (0x1fU & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                    >> 0x19U)) : (0x1fU 
                                                  & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                                     >> 0x14U))))
                : ((2U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel))
                    ? ((1U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel))
                        ? ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__is_compressed_id)
                            ? 2U : 4U) : (0xfffff000U 
                                          & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id))
                    : ((1U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel))
                        ? (((- (IData)((vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                        >> 0x1fU))) 
                            << 0xcU) | ((0xfe0U & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                                   >> 0x14U)) 
                                        | (0x1fU & 
                                           (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                            >> 7U))))
                        : vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__imm_i_type))));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__apu_read_regs_valid 
        = ((5U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__apu_read_regs_valid)) 
           | (2U & (((4U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel))
                      ? (IData)((0U == (3U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel))))
                      : (IData)((2U != (3U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel))))) 
                    << 1U)));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__apu_read_regs 
        = ((0x3f03fU & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__apu_read_regs) 
           | (((4U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel))
                ? (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_rb_id)
                : ((2U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel))
                    ? ((1U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel))
                        ? (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_ra_id)
                        : (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_rb_id))
                    : ((1U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel))
                        ? (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_rc_id)
                        : (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_rb_id)))) 
              << 6U));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__apu_read_regs_valid 
        = ((3U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__apu_read_regs_valid)) 
           | (((1U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__alu_op_c_mux_sel)) 
               | ((0U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__alu_op_c_mux_sel)) 
                  & (((4U != (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__alu_op_a_mux_sel)) 
                      & (2U != (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__ctrl_transfer_target_mux_sel))) 
                     & (4U != (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel))))) 
              << 2U));
    if ((1U & (~ (IData)(vlSelf->clk_i)))) {
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__sleep_unit_i__DOT__core_clock_gate_i__DOT__clk_en 
            = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__sleep_unit_i__DOT__clock_en;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__fpu_gen__DOT__core_clock_gate_i__DOT__clk_en 
            = (1U & (~ ((~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__sleep_unit_i__DOT__clock_en)) 
                        & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__sleep_unit_i__DOT__fetch_enable_q))));
    }
    if ((0U == (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__trap_addr_mux))) {
        tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__trap_base_addr 
            = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_q;
        tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__exc_vec_pc_mux 
            = tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__m_exc_vec_pc_mux_id;
    } else if ((1U == (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__trap_addr_mux))) {
        tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__trap_base_addr = 0U;
        tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__exc_vec_pc_mux = 0U;
    } else {
        tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__trap_base_addr 
            = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_q;
        tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__exc_vec_pc_mux 
            = tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__m_exc_vec_pc_mux_id;
    }
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__exc_pc 
        = ((4U & (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__exc_pc_mux_id))
            ? (tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__trap_base_addr 
               << 8U) : ((2U & (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__exc_pc_mux_id))
                          ? ((1U & (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__exc_pc_mux_id))
                              ? 0U : 0x1a110800U) : 
                         ((1U & (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__exc_pc_mux_id))
                           ? ((tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__trap_base_addr 
                               << 8U) | ((IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__exc_vec_pc_mux) 
                                         << 2U)) : 
                          (tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__trap_base_addr 
                           << 8U))));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__gen_apu__DOT__apu_disp_i__DOT____VdfgTmp_h038f00cb__0 
        = ((((0x3fU & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__apu_read_regs 
                       >> 0xcU)) == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__apu_waddr_ex)) 
            & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__apu_read_regs_valid) 
               >> 2U)) | ((((0x3fU & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__apu_read_regs 
                                      >> 6U)) == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__apu_waddr_ex)) 
                           & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__apu_read_regs_valid) 
                              >> 1U)) | (((0x3fU & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__apu_read_regs) 
                                          == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__apu_waddr_ex)) 
                                         & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__apu_read_regs_valid))));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__gen_apu__DOT__apu_disp_i__DOT____VdfgTmp_h853d1515__0 
        = (((((0x3fU & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__apu_read_regs 
                        >> 0xcU)) == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__gen_apu__DOT__apu_disp_i__DOT__addr_inflight)) 
             & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__apu_read_regs_valid) 
                >> 2U)) | ((((0x3fU & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__apu_read_regs 
                                       >> 6U)) == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__gen_apu__DOT__apu_disp_i__DOT__addr_inflight)) 
                            & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__apu_read_regs_valid) 
                               >> 1U)) | (((0x3fU & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__apu_read_regs) 
                                           == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__gen_apu__DOT__apu_disp_i__DOT__addr_inflight)) 
                                          & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__apu_read_regs_valid)))) 
           & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__gen_apu__DOT__apu_disp_i__DOT__valid_inflight));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__gen_apu__DOT__apu_disp_i__DOT____VdfgTmp_h965f4222__0 
        = (((((0x3fU & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__apu_read_regs 
                        >> 0xcU)) == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__gen_apu__DOT__apu_disp_i__DOT__addr_waiting)) 
             & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__apu_read_regs_valid) 
                >> 2U)) | ((((0x3fU & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__apu_read_regs 
                                       >> 6U)) == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__gen_apu__DOT__apu_disp_i__DOT__addr_waiting)) 
                            & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__apu_read_regs_valid) 
                               >> 1U)) | (((0x3fU & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__apu_read_regs) 
                                           == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__gen_apu__DOT__apu_disp_i__DOT__addr_waiting)) 
                                          & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__apu_read_regs_valid)))) 
           & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__gen_apu__DOT__apu_disp_i__DOT__valid_waiting));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__clk 
        = ((IData)(vlSelf->clk_i) & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__sleep_unit_i__DOT__core_clock_gate_i__DOT__clk_en));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__fpu_gen__DOT__fp_wrapper_i__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__genblk1__DOT__i_fpnew_divsqrt_multi_th__DOT__i_divsqrt_thead__DOT__x_pa_fdsu_ctrl__DOT__ex1_pipe_clk 
        = ((IData)(vlSelf->clk_i) & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__fpu_gen__DOT__core_clock_gate_i__DOT__clk_en));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__apu_read_dep_for_jalr 
        = ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__is_decoding) 
           & (((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__gen_apu__DOT__apu_disp_i__DOT____VdfgTmp_h038f00cb__0) 
               & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__apu_en_ex)) 
              | ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__gen_apu__DOT__apu_disp_i__DOT____VdfgTmp_h853d1515__0) 
                 | (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__gen_apu__DOT__apu_disp_i__DOT____VdfgTmp_h965f4222__0))));
}

VL_INLINE_OPT void Vtb_top_verilator___024root___nba_comb__TOP__48(Vtb_top_verilator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_verilator___024root___nba_comb__TOP__48\n"); );
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
            if ((1U & (~ (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                          >> 0xeU)))) {
                if ((1U & (~ (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                              >> 0xdU)))) {
                    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                }
            }
            if ((0x4000U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)) {
                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_decompressed 
                    = ((0x2000U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)
                        ? (0x842027U | ((0x4000000U 
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
                                                          << 3U))))))))
                        : (0x842023U | ((0x4000000U 
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
                                                          << 3U)))))))));
            } else if ((0x2000U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)) {
                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_decompressed 
                    = (0x843027U | ((0xc000000U & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
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
                                             | (0xc00U 
                                                & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned))))));
            }
        } else {
            if ((1U & (~ (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                          >> 0xeU)))) {
                if ((1U & (~ (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                              >> 0xdU)))) {
                    if ((0U == (0xffU & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                         >> 5U)))) {
                        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                    }
                }
            }
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_decompressed 
                = ((0x4000U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)
                    ? ((0x2000U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)
                        ? (0x42407U | ((0x4000000U 
                                        & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                           << 0x15U)) 
                                       | ((0x3800000U 
                                           & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                              << 0xdU)) 
                                          | ((0x400000U 
                                              & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                 << 0x10U)) 
                                             | ((0x38000U 
                                                 & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                    << 8U)) 
                                                | (0x380U 
                                                   & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                      << 5U)))))))
                        : (0x42403U | ((0x4000000U 
                                        & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                           << 0x15U)) 
                                       | ((0x3800000U 
                                           & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                              << 0xdU)) 
                                          | ((0x400000U 
                                              & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                 << 0x10U)) 
                                             | ((0x38000U 
                                                 & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                    << 8U)) 
                                                | (0x380U 
                                                   & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                      << 5U))))))))
                    : ((0x2000U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)
                        ? (0x43407U | ((0xc000000U 
                                        & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                           << 0x15U)) 
                                       | ((0x3800000U 
                                           & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                              << 0xdU)) 
                                          | ((0x38000U 
                                              & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                 << 8U)) 
                                             | (0x380U 
                                                & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                   << 5U))))))
                        : (0x10413U | ((0x3c000000U 
                                        & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                           << 0x13U)) 
                                       | ((0x3000000U 
                                           & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                              << 0xdU)) 
                                          | ((0x800000U 
                                              & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                 << 0x12U)) 
                                             | ((0x400000U 
                                                 & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                    << 0x10U)) 
                                                | (0x380U 
                                                   & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                      << 5U)))))))));
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
            if ((1U & (~ (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                          >> 0xeU)))) {
                if ((1U & (~ (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                              >> 0xdU)))) {
                    if ((1U & (~ (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                  >> 0xcU)))) {
                        if ((0U == (0x1fU & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                             >> 2U)))) {
                            if ((0U == (0x1fU & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                 >> 7U)))) {
                                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                            }
                        }
                    }
                }
            }
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_decompressed 
                = ((0x4000U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)
                    ? ((0x2000U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)
                        ? (0x12027U | ((0xc000000U 
                                        & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                           << 0x13U)) 
                                       | ((0x2000000U 
                                           & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                              << 0xdU)) 
                                          | ((0x1f00000U 
                                              & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                 << 0x12U)) 
                                             | (0xe00U 
                                                & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)))))
                        : (0x12023U | ((0xc000000U 
                                        & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                           << 0x13U)) 
                                       | ((0x2000000U 
                                           & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                              << 0xdU)) 
                                          | ((0x1f00000U 
                                              & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                 << 0x12U)) 
                                             | (0xe00U 
                                                & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned))))))
                    : ((0x2000U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)
                        ? (0x13027U | ((0x1c000000U 
                                        & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                           << 0x13U)) 
                                       | ((0x2000000U 
                                           & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                              << 0xdU)) 
                                          | ((0x1f00000U 
                                              & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                 << 0x12U)) 
                                             | (0xc00U 
                                                & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)))))
                        : ((0x1000U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)
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
                                                   & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned))))))));
        } else if ((0x4000U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)) {
            if ((1U & (~ (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                          >> 0xdU)))) {
                if ((0U == (0x1fU & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                     >> 7U)))) {
                    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                }
            }
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_decompressed 
                = ((0x2000U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)
                    ? (0x12007U | ((0xc000000U & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                  << 0x18U)) 
                                   | ((0x2000000U & 
                                       (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                        << 0xdU)) | 
                                      ((0x1c00000U 
                                        & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                           << 0x12U)) 
                                       | (0xf80U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)))))
                    : (0x12003U | ((0xc000000U & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                  << 0x18U)) 
                                   | ((0x2000000U & 
                                       (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                        << 0xdU)) | 
                                      ((0x1c00000U 
                                        & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                           << 0x12U)) 
                                       | (0xf80U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned))))));
        } else {
            if ((1U & (~ (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                          >> 0xdU)))) {
                if ((0x1000U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)) {
                    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                }
            }
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_decompressed 
                = ((0x2000U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)
                    ? (0x13007U | ((0x1c000000U & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                   << 0x18U)) 
                                   | ((0x2000000U & 
                                       (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                        << 0xdU)) | 
                                      ((0x1800000U 
                                        & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                           << 0x12U)) 
                                       | (0xf80U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)))))
                    : ((0x1000U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)
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
                                                & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)))))));
        }
    } else {
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_decompressed 
            = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned;
    }
}

VL_INLINE_OPT void Vtb_top_verilator___024root___nba_comb__TOP__72(Vtb_top_verilator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_verilator___024root___nba_comb__TOP__72\n"); );
    // Body
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_wdata 
        = ((IData)(vlSymsp->TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i.data_rvalid_o)
            ? vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__data_rdata_ext
            : vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_q);
    if ((1U & (~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__regfile_we_lsu)))) {
        if (((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__fflags_we) 
             & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__apu_active) 
                & (3U != (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__gen_apu__DOT__apu_disp_i__DOT__apu_lat))))) {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_wdata 
                = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__apu_result;
        }
    }
}

void Vtb_top_verilator___024root___nba_sequent__TOP__0(Vtb_top_verilator___024root* vlSelf);
void Vtb_top_verilator___024root___nba_sequent__TOP__1(Vtb_top_verilator___024root* vlSelf);
void Vtb_top_verilator_mm_ram__R16___nba_sequent__TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i__0(Vtb_top_verilator_mm_ram__R16* vlSelf);
void Vtb_top_verilator___024root___nba_sequent__TOP__4(Vtb_top_verilator___024root* vlSelf);
void Vtb_top_verilator_mm_ram__R16___nba_sequent__TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i__1(Vtb_top_verilator_mm_ram__R16* vlSelf);
void Vtb_top_verilator___024root___act_sequent__TOP__22(Vtb_top_verilator___024root* vlSelf);
void Vtb_top_verilator___024root___act_sequent__TOP__23(Vtb_top_verilator___024root* vlSelf);
void Vtb_top_verilator___024root___act_sequent__TOP__20(Vtb_top_verilator___024root* vlSelf);
void Vtb_top_verilator___024root___act_sequent__TOP__21(Vtb_top_verilator___024root* vlSelf);
void Vtb_top_verilator___024root___nba_sequent__TOP__5(Vtb_top_verilator___024root* vlSelf);
void Vtb_top_verilator___024root___act_sequent__TOP__10(Vtb_top_verilator___024root* vlSelf);
void Vtb_top_verilator___024root___act_sequent__TOP__11(Vtb_top_verilator___024root* vlSelf);
void Vtb_top_verilator___024root___act_sequent__TOP__13(Vtb_top_verilator___024root* vlSelf);
void Vtb_top_verilator___024root___act_sequent__TOP__12(Vtb_top_verilator___024root* vlSelf);
void Vtb_top_verilator___024root___nba_comb__TOP__8(Vtb_top_verilator___024root* vlSelf);
void Vtb_top_verilator___024root___nba_comb__TOP__9(Vtb_top_verilator___024root* vlSelf);
void Vtb_top_verilator___024root___act_sequent__TOP__14(Vtb_top_verilator___024root* vlSelf);
void Vtb_top_verilator___024root___act_sequent__TOP__16(Vtb_top_verilator___024root* vlSelf);
void Vtb_top_verilator___024root___act_sequent__TOP__17(Vtb_top_verilator___024root* vlSelf);
void Vtb_top_verilator___024root___act_sequent__TOP__18(Vtb_top_verilator___024root* vlSelf);
void Vtb_top_verilator_mm_ram__R16___nba_comb__TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i__0(Vtb_top_verilator_mm_ram__R16* vlSelf);
void Vtb_top_verilator___024root___act_comb__TOP__13(Vtb_top_verilator___024root* vlSelf);
void Vtb_top_verilator___024root___act_comb__TOP__12(Vtb_top_verilator___024root* vlSelf);
void Vtb_top_verilator_mm_ram__R16___ico_sequent__TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i__0(Vtb_top_verilator_mm_ram__R16* vlSelf);
void Vtb_top_verilator___024root___ico_sequent__TOP__1(Vtb_top_verilator___024root* vlSelf);
void Vtb_top_verilator___024root___nba_comb__TOP__18(Vtb_top_verilator___024root* vlSelf);
void Vtb_top_verilator___024root___act_sequent__TOP__32(Vtb_top_verilator___024root* vlSelf);
void Vtb_top_verilator___024root___act_sequent__TOP__33(Vtb_top_verilator___024root* vlSelf);
void Vtb_top_verilator___024root___act_sequent__TOP__34(Vtb_top_verilator___024root* vlSelf);
void Vtb_top_verilator___024root___act_sequent__TOP__38(Vtb_top_verilator___024root* vlSelf);
void Vtb_top_verilator___024root___act_sequent__TOP__39(Vtb_top_verilator___024root* vlSelf);
void Vtb_top_verilator___024root___act_sequent__TOP__40(Vtb_top_verilator___024root* vlSelf);
void Vtb_top_verilator___024root___act_sequent__TOP__41(Vtb_top_verilator___024root* vlSelf);
void Vtb_top_verilator___024root___act_sequent__TOP__42(Vtb_top_verilator___024root* vlSelf);
void Vtb_top_verilator___024root___act_sequent__TOP__43(Vtb_top_verilator___024root* vlSelf);
void Vtb_top_verilator___024root___act_sequent__TOP__30(Vtb_top_verilator___024root* vlSelf);
void Vtb_top_verilator___024root___act_sequent__TOP__31(Vtb_top_verilator___024root* vlSelf);
void Vtb_top_verilator___024root___act_sequent__TOP__36(Vtb_top_verilator___024root* vlSelf);
void Vtb_top_verilator___024root___act_sequent__TOP__37(Vtb_top_verilator___024root* vlSelf);
void Vtb_top_verilator___024root___act_sequent__TOP__44(Vtb_top_verilator___024root* vlSelf);
void Vtb_top_verilator___024root___act_comb__TOP__4(Vtb_top_verilator___024root* vlSelf);
void Vtb_top_verilator___024root___act_sequent__TOP__35(Vtb_top_verilator___024root* vlSelf);
void Vtb_top_verilator___024root___act_sequent__TOP__26(Vtb_top_verilator___024root* vlSelf);
void Vtb_top_verilator___024root___nba_comb__TOP__36(Vtb_top_verilator___024root* vlSelf);
void Vtb_top_verilator___024root___act_sequent__TOP__28(Vtb_top_verilator___024root* vlSelf);
void Vtb_top_verilator___024root___act_sequent__TOP__29(Vtb_top_verilator___024root* vlSelf);
void Vtb_top_verilator___024root___act_comb__TOP__3(Vtb_top_verilator___024root* vlSelf);
void Vtb_top_verilator___024root___act_comb__TOP__1(Vtb_top_verilator___024root* vlSelf);
void Vtb_top_verilator___024root___act_comb__TOP__2(Vtb_top_verilator___024root* vlSelf);
void Vtb_top_verilator___024root___act_comb__TOP__5(Vtb_top_verilator___024root* vlSelf);
void Vtb_top_verilator___024root___act_comb__TOP__6(Vtb_top_verilator___024root* vlSelf);
void Vtb_top_verilator___024root___act_comb__TOP__7(Vtb_top_verilator___024root* vlSelf);
void Vtb_top_verilator___024root___act_comb__TOP__8(Vtb_top_verilator___024root* vlSelf);
void Vtb_top_verilator___024root___act_comb__TOP__9(Vtb_top_verilator___024root* vlSelf);
void Vtb_top_verilator___024root___nba_comb__TOP__47(Vtb_top_verilator___024root* vlSelf);
void Vtb_top_verilator_mm_ram__R16___nba_comb__TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i__2(Vtb_top_verilator_mm_ram__R16* vlSelf);
void Vtb_top_verilator___024root___act_sequent__TOP__45(Vtb_top_verilator___024root* vlSelf);
void Vtb_top_verilator___024root___act_comb__TOP__11(Vtb_top_verilator___024root* vlSelf);
void Vtb_top_verilator___024root___act_comb__TOP__14(Vtb_top_verilator___024root* vlSelf);
void Vtb_top_verilator___024root___act_comb__TOP__15(Vtb_top_verilator___024root* vlSelf);
void Vtb_top_verilator___024root___act_comb__TOP__18(Vtb_top_verilator___024root* vlSelf);
void Vtb_top_verilator___024root___nba_comb__TOP__54(Vtb_top_verilator___024root* vlSelf);
void Vtb_top_verilator___024root___nba_comb__TOP__55(Vtb_top_verilator___024root* vlSelf);
void Vtb_top_verilator___024root___act_comb__TOP__19(Vtb_top_verilator___024root* vlSelf);
void Vtb_top_verilator___024root___act_comb__TOP__20(Vtb_top_verilator___024root* vlSelf);
void Vtb_top_verilator___024root___act_comb__TOP__21(Vtb_top_verilator___024root* vlSelf);
void Vtb_top_verilator___024root___act_comb__TOP__22(Vtb_top_verilator___024root* vlSelf);
void Vtb_top_verilator___024root___act_comb__TOP__23(Vtb_top_verilator___024root* vlSelf);
void Vtb_top_verilator___024root___act_comb__TOP__24(Vtb_top_verilator___024root* vlSelf);
void Vtb_top_verilator___024root___act_comb__TOP__25(Vtb_top_verilator___024root* vlSelf);
void Vtb_top_verilator___024root___act_comb__TOP__26(Vtb_top_verilator___024root* vlSelf);
void Vtb_top_verilator___024root___act_comb__TOP__27(Vtb_top_verilator___024root* vlSelf);
void Vtb_top_verilator___024root___nba_comb__TOP__65(Vtb_top_verilator___024root* vlSelf);
void Vtb_top_verilator___024root___nba_comb__TOP__66(Vtb_top_verilator___024root* vlSelf);
void Vtb_top_verilator___024root___act_comb__TOP__30(Vtb_top_verilator___024root* vlSelf);
void Vtb_top_verilator___024root___act_comb__TOP__34(Vtb_top_verilator___024root* vlSelf);
void Vtb_top_verilator___024root___act_comb__TOP__31(Vtb_top_verilator___024root* vlSelf);
void Vtb_top_verilator___024root___act_comb__TOP__32(Vtb_top_verilator___024root* vlSelf);
void Vtb_top_verilator_mm_ram__R16___ico_comb__TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i__0(Vtb_top_verilator_mm_ram__R16* vlSelf);
void Vtb_top_verilator___024root___ico_comb__TOP__1(Vtb_top_verilator___024root* vlSelf);
void Vtb_top_verilator___024root___nba_comb__TOP__73(Vtb_top_verilator___024root* vlSelf);
void Vtb_top_verilator___024root___act_comb__TOP__35(Vtb_top_verilator___024root* vlSelf);
void Vtb_top_verilator___024root___act_comb__TOP__36(Vtb_top_verilator___024root* vlSelf);
void Vtb_top_verilator___024root___nba_comb__TOP__76(Vtb_top_verilator___024root* vlSelf);

void Vtb_top_verilator___024root___eval_nba(Vtb_top_verilator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_verilator___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0x3aU)) {
        Vtb_top_verilator___024root___nba_sequent__TOP__0(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(0x3bU)) {
        Vtb_top_verilator___024root___nba_sequent__TOP__1(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(2U)) {
        Vtb_top_verilator___024root___nba_sequent__TOP__2(vlSelf);
        Vtb_top_verilator_mm_ram__R16___nba_sequent__TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i__0((&vlSymsp->TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i));
        Vtb_top_verilator___024root___nba_sequent__TOP__3(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vtb_top_verilator___024root___nba_sequent__TOP__4(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(0x3cU)) {
        Vtb_top_verilator_mm_ram__R16___nba_sequent__TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i__1((&vlSymsp->TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i));
    }
    if ((vlSelf->__VnbaTriggered.at(0x21U) | vlSelf->__VnbaTriggered.at(0x3aU))) {
        Vtb_top_verilator___024root___act_sequent__TOP__22(vlSelf);
    }
    if ((vlSelf->__VnbaTriggered.at(0x22U) | vlSelf->__VnbaTriggered.at(0x3aU))) {
        Vtb_top_verilator___024root___act_sequent__TOP__23(vlSelf);
    }
    if ((vlSelf->__VnbaTriggered.at(3U) | vlSelf->__VnbaTriggered.at(0x3aU))) {
        Vtb_top_verilator___024root___act_sequent__TOP__20(vlSelf);
    }
    if ((vlSelf->__VnbaTriggered.at(4U) | vlSelf->__VnbaTriggered.at(0x3aU))) {
        Vtb_top_verilator___024root___act_sequent__TOP__21(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(0x3aU)) {
        Vtb_top_verilator___024root___nba_sequent__TOP__5(vlSelf);
    }
    if ((vlSelf->__VnbaTriggered.at(1U) | vlSelf->__VnbaTriggered.at(0x1aU))) {
        Vtb_top_verilator___024root___act_sequent__TOP__10(vlSelf);
    }
    if ((vlSelf->__VnbaTriggered.at(1U) | vlSelf->__VnbaTriggered.at(0x1eU))) {
        Vtb_top_verilator___024root___act_sequent__TOP__11(vlSelf);
    }
    if ((vlSelf->__VnbaTriggered.at(1U) | vlSelf->__VnbaTriggered.at(0x2cU))) {
        Vtb_top_verilator___024root___act_sequent__TOP__13(vlSelf);
    }
    if ((vlSelf->__VnbaTriggered.at(1U) | vlSelf->__VnbaTriggered.at(0x1fU))) {
        Vtb_top_verilator___024root___act_sequent__TOP__12(vlSelf);
    }
    if ((vlSelf->__VnbaTriggered.at(1U) | vlSelf->__VnbaTriggered.at(0x3bU))) {
        Vtb_top_verilator___024root___nba_comb__TOP__8(vlSelf);
    }
    if ((vlSelf->__VnbaTriggered.at(1U) | vlSelf->__VnbaTriggered.at(0x1cU))) {
        Vtb_top_verilator___024root___nba_comb__TOP__9(vlSelf);
    }
    if ((vlSelf->__VnbaTriggered.at(1U) | vlSelf->__VnbaTriggered.at(0x1dU))) {
        Vtb_top_verilator___024root___act_sequent__TOP__14(vlSelf);
    }
    if ((vlSelf->__VnbaTriggered.at(1U) | vlSelf->__VnbaTriggered.at(0x19U))) {
        Vtb_top_verilator___024root___act_sequent__TOP__16(vlSelf);
    }
    if ((vlSelf->__VnbaTriggered.at(1U) | vlSelf->__VnbaTriggered.at(0x1bU))) {
        Vtb_top_verilator___024root___act_sequent__TOP__17(vlSelf);
    }
    if ((vlSelf->__VnbaTriggered.at(1U) | vlSelf->__VnbaTriggered.at(0x20U))) {
        Vtb_top_verilator___024root___act_sequent__TOP__18(vlSelf);
    }
    if ((vlSelf->__VnbaTriggered.at(2U) | vlSelf->__VnbaTriggered.at(0x3cU))) {
        Vtb_top_verilator_mm_ram__R16___nba_comb__TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i__0((&vlSymsp->TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i));
    }
    if (((vlSelf->__VnbaTriggered.at(0x21U) | vlSelf->__VnbaTriggered.at(0x22U)) 
         | vlSelf->__VnbaTriggered.at(0x3aU))) {
        Vtb_top_verilator___024root___act_comb__TOP__13(vlSelf);
    }
    if (((vlSelf->__VnbaTriggered.at(3U) | vlSelf->__VnbaTriggered.at(4U)) 
         | vlSelf->__VnbaTriggered.at(0x3aU))) {
        Vtb_top_verilator___024root___act_comb__TOP__12(vlSelf);
    }
    if ((vlSelf->__VnbaTriggered.at(2U) | vlSelf->__VnbaTriggered.at(0x3aU))) {
        Vtb_top_verilator___024root___nba_comb__TOP__16(vlSelf);
    }
    if ((((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(2U)) 
          | vlSelf->__VnbaTriggered.at(0x3aU)) | vlSelf->__VnbaTriggered.at(0x3cU))) {
        Vtb_top_verilator_mm_ram__R16___ico_sequent__TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i__0((&vlSymsp->TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i));
        Vtb_top_verilator___024root___ico_sequent__TOP__1(vlSelf);
    }
    if ((vlSelf->__VnbaTriggered.at(0x39U) | vlSelf->__VnbaTriggered.at(0x3aU))) {
        Vtb_top_verilator___024root___nba_comb__TOP__18(vlSelf);
    }
    if ((vlSelf->__VnbaTriggered.at(0x1fU) | vlSelf->__VnbaTriggered.at(0x3aU))) {
        Vtb_top_verilator___024root___act_sequent__TOP__32(vlSelf);
    }
    if ((vlSelf->__VnbaTriggered.at(0x1eU) | vlSelf->__VnbaTriggered.at(0x3aU))) {
        Vtb_top_verilator___024root___act_sequent__TOP__33(vlSelf);
    }
    if ((vlSelf->__VnbaTriggered.at(0x1aU) | vlSelf->__VnbaTriggered.at(0x3aU))) {
        Vtb_top_verilator___024root___act_sequent__TOP__34(vlSelf);
    }
    if ((vlSelf->__VnbaTriggered.at(0x2aU) | vlSelf->__VnbaTriggered.at(0x3aU))) {
        Vtb_top_verilator___024root___act_sequent__TOP__38(vlSelf);
    }
    if ((vlSelf->__VnbaTriggered.at(0x29U) | vlSelf->__VnbaTriggered.at(0x3aU))) {
        Vtb_top_verilator___024root___act_sequent__TOP__39(vlSelf);
    }
    if ((vlSelf->__VnbaTriggered.at(0x34U) | vlSelf->__VnbaTriggered.at(0x3aU))) {
        Vtb_top_verilator___024root___act_sequent__TOP__40(vlSelf);
    }
    if ((vlSelf->__VnbaTriggered.at(0x33U) | vlSelf->__VnbaTriggered.at(0x3aU))) {
        Vtb_top_verilator___024root___act_sequent__TOP__41(vlSelf);
    }
    if ((vlSelf->__VnbaTriggered.at(0x38U) | vlSelf->__VnbaTriggered.at(0x3aU))) {
        Vtb_top_verilator___024root___act_sequent__TOP__42(vlSelf);
    }
    if ((vlSelf->__VnbaTriggered.at(0x37U) | vlSelf->__VnbaTriggered.at(0x3aU))) {
        Vtb_top_verilator___024root___act_sequent__TOP__43(vlSelf);
    }
    if ((vlSelf->__VnbaTriggered.at(0x12U) | vlSelf->__VnbaTriggered.at(0x3aU))) {
        Vtb_top_verilator___024root___act_sequent__TOP__30(vlSelf);
    }
    if ((vlSelf->__VnbaTriggered.at(0x11U) | vlSelf->__VnbaTriggered.at(0x3aU))) {
        Vtb_top_verilator___024root___act_sequent__TOP__31(vlSelf);
    }
    if ((vlSelf->__VnbaTriggered.at(0xbU) | vlSelf->__VnbaTriggered.at(0x3aU))) {
        Vtb_top_verilator___024root___act_sequent__TOP__36(vlSelf);
    }
    if ((vlSelf->__VnbaTriggered.at(0xcU) | vlSelf->__VnbaTriggered.at(0x3aU))) {
        Vtb_top_verilator___024root___act_sequent__TOP__37(vlSelf);
    }
    if ((vlSelf->__VnbaTriggered.at(0xdU) | vlSelf->__VnbaTriggered.at(0x3aU))) {
        Vtb_top_verilator___024root___act_sequent__TOP__44(vlSelf);
    }
    if ((((vlSelf->__VnbaTriggered.at(1U) | vlSelf->__VnbaTriggered.at(0x15U)) 
          | vlSelf->__VnbaTriggered.at(0x1eU)) | vlSelf->__VnbaTriggered.at(0x3aU))) {
        Vtb_top_verilator___024root___act_comb__TOP__4(vlSelf);
    }
    if ((((vlSelf->__VnbaTriggered.at(1U) | vlSelf->__VnbaTriggered.at(0xeU)) 
          | vlSelf->__VnbaTriggered.at(0x3aU)) | vlSelf->__VnbaTriggered.at(0x3bU))) {
        Vtb_top_verilator___024root___act_sequent__TOP__35(vlSelf);
    }
    if (((vlSelf->__VnbaTriggered.at(1U) | vlSelf->__VnbaTriggered.at(0x2cU)) 
         | vlSelf->__VnbaTriggered.at(0x3bU))) {
        Vtb_top_verilator___024root___act_sequent__TOP__26(vlSelf);
    }
    if (((vlSelf->__VnbaTriggered.at(1U) | vlSelf->__VnbaTriggered.at(0xfU)) 
         | vlSelf->__VnbaTriggered.at(0x3bU))) {
        Vtb_top_verilator___024root___nba_comb__TOP__36(vlSelf);
    }
    if (((vlSelf->__VnbaTriggered.at(1U) | vlSelf->__VnbaTriggered.at(0x30U)) 
         | vlSelf->__VnbaTriggered.at(0x3bU))) {
        Vtb_top_verilator___024root___act_sequent__TOP__28(vlSelf);
    }
    if (((vlSelf->__VnbaTriggered.at(1U) | vlSelf->__VnbaTriggered.at(0x2fU)) 
         | vlSelf->__VnbaTriggered.at(0x3bU))) {
        Vtb_top_verilator___024root___act_sequent__TOP__29(vlSelf);
    }
    if ((((vlSelf->__VnbaTriggered.at(1U) | vlSelf->__VnbaTriggered.at(0x2bU)) 
          | vlSelf->__VnbaTriggered.at(0x2cU)) | vlSelf->__VnbaTriggered.at(0x3bU))) {
        Vtb_top_verilator___024root___act_comb__TOP__3(vlSelf);
    }
    if (((vlSelf->__VnbaTriggered.at(1U) | vlSelf->__VnbaTriggered.at(0x1cU)) 
         | vlSelf->__VnbaTriggered.at(0x26U))) {
        Vtb_top_verilator___024root___act_comb__TOP__1(vlSelf);
    }
    if (((vlSelf->__VnbaTriggered.at(1U) | vlSelf->__VnbaTriggered.at(0x1cU)) 
         | vlSelf->__VnbaTriggered.at(0x25U))) {
        Vtb_top_verilator___024root___act_comb__TOP__2(vlSelf);
    }
    if (((vlSelf->__VnbaTriggered.at(1U) | vlSelf->__VnbaTriggered.at(0x1dU)) 
         | vlSelf->__VnbaTriggered.at(0x23U))) {
        Vtb_top_verilator___024root___act_comb__TOP__5(vlSelf);
    }
    if (((vlSelf->__VnbaTriggered.at(1U) | vlSelf->__VnbaTriggered.at(0x1dU)) 
         | vlSelf->__VnbaTriggered.at(0x24U))) {
        Vtb_top_verilator___024root___act_comb__TOP__6(vlSelf);
    }
    if (((vlSelf->__VnbaTriggered.at(1U) | vlSelf->__VnbaTriggered.at(0x18U)) 
         | vlSelf->__VnbaTriggered.at(0x19U))) {
        Vtb_top_verilator___024root___act_comb__TOP__7(vlSelf);
    }
    if (((vlSelf->__VnbaTriggered.at(1U) | vlSelf->__VnbaTriggered.at(0x18U)) 
         | vlSelf->__VnbaTriggered.at(0x1bU))) {
        Vtb_top_verilator___024root___act_comb__TOP__8(vlSelf);
    }
    if (((vlSelf->__VnbaTriggered.at(1U) | vlSelf->__VnbaTriggered.at(0x18U)) 
         | vlSelf->__VnbaTriggered.at(0x20U))) {
        Vtb_top_verilator___024root___act_comb__TOP__9(vlSelf);
    }
    if (((((vlSelf->__VnbaTriggered.at(1U) | vlSelf->__VnbaTriggered.at(6U)) 
           | vlSelf->__VnbaTriggered.at(0x19U)) | vlSelf->__VnbaTriggered.at(0x1bU)) 
         | vlSelf->__VnbaTriggered.at(0x20U))) {
        Vtb_top_verilator___024root___nba_comb__TOP__47(vlSelf);
    }
    if (((vlSelf->__VnbaTriggered.at(2U) | vlSelf->__VnbaTriggered.at(0x3aU)) 
         | vlSelf->__VnbaTriggered.at(0x3cU))) {
        Vtb_top_verilator___024root___nba_comb__TOP__48(vlSelf);
        Vtb_top_verilator_mm_ram__R16___nba_comb__TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i__2((&vlSymsp->TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i));
        Vtb_top_verilator___024root___act_sequent__TOP__45(vlSelf);
    }
    if (((vlSelf->__VnbaTriggered.at(2U) | vlSelf->__VnbaTriggered.at(0x19U)) 
         | vlSelf->__VnbaTriggered.at(0x3aU))) {
        Vtb_top_verilator___024root___act_comb__TOP__11(vlSelf);
    }
    if (((vlSelf->__VnbaTriggered.at(0x11U) | vlSelf->__VnbaTriggered.at(0x39U)) 
         | vlSelf->__VnbaTriggered.at(0x3aU))) {
        Vtb_top_verilator___024root___act_comb__TOP__14(vlSelf);
    }
    if (((vlSelf->__VnbaTriggered.at(0x10U) | vlSelf->__VnbaTriggered.at(0x39U)) 
         | vlSelf->__VnbaTriggered.at(0x3aU))) {
        Vtb_top_verilator___024root___act_comb__TOP__15(vlSelf);
    }
    if (((vlSelf->__VnbaTriggered.at(0xbU) | vlSelf->__VnbaTriggered.at(0xcU)) 
         | vlSelf->__VnbaTriggered.at(0x3aU))) {
        Vtb_top_verilator___024root___act_comb__TOP__18(vlSelf);
    }
    if (((((vlSelf->__VnbaTriggered.at(1U) | vlSelf->__VnbaTriggered.at(7U)) 
           | vlSelf->__VnbaTriggered.at(0xeU)) | vlSelf->__VnbaTriggered.at(0x3aU)) 
         | vlSelf->__VnbaTriggered.at(0x3bU))) {
        Vtb_top_verilator___024root___nba_comb__TOP__54(vlSelf);
    }
    if ((((vlSelf->__VnbaTriggered.at(1U) | vlSelf->__VnbaTriggered.at(0xfU)) 
          | vlSelf->__VnbaTriggered.at(0x3aU)) | vlSelf->__VnbaTriggered.at(0x3bU))) {
        Vtb_top_verilator___024root___nba_comb__TOP__55(vlSelf);
    }
    if ((((((vlSelf->__VnbaTriggered.at(1U) | vlSelf->__VnbaTriggered.at(0x1cU)) 
            | vlSelf->__VnbaTriggered.at(0x1dU)) | vlSelf->__VnbaTriggered.at(0x23U)) 
          | vlSelf->__VnbaTriggered.at(0x24U)) | vlSelf->__VnbaTriggered.at(0x25U))) {
        Vtb_top_verilator___024root___act_comb__TOP__19(vlSelf);
    }
    if (((((vlSelf->__VnbaTriggered.at(1U) | vlSelf->__VnbaTriggered.at(9U)) 
           | vlSelf->__VnbaTriggered.at(0x18U)) | vlSelf->__VnbaTriggered.at(0x1bU)) 
         | vlSelf->__VnbaTriggered.at(0x1eU))) {
        Vtb_top_verilator___024root___act_comb__TOP__20(vlSelf);
    }
    if ((((((vlSelf->__VnbaTriggered.at(1U) | vlSelf->__VnbaTriggered.at(0x18U)) 
            | vlSelf->__VnbaTriggered.at(0x1bU)) | vlSelf->__VnbaTriggered.at(0x1eU)) 
          | vlSelf->__VnbaTriggered.at(0x33U)) | vlSelf->__VnbaTriggered.at(0x3aU))) {
        Vtb_top_verilator___024root___act_comb__TOP__21(vlSelf);
    }
    if (((((vlSelf->__VnbaTriggered.at(1U) | vlSelf->__VnbaTriggered.at(8U)) 
           | vlSelf->__VnbaTriggered.at(0x18U)) | vlSelf->__VnbaTriggered.at(0x1aU)) 
         | vlSelf->__VnbaTriggered.at(0x1bU))) {
        Vtb_top_verilator___024root___act_comb__TOP__22(vlSelf);
    }
    if ((((((vlSelf->__VnbaTriggered.at(1U) | vlSelf->__VnbaTriggered.at(0x18U)) 
            | vlSelf->__VnbaTriggered.at(0x1aU)) | vlSelf->__VnbaTriggered.at(0x1bU)) 
          | vlSelf->__VnbaTriggered.at(0x37U)) | vlSelf->__VnbaTriggered.at(0x3aU))) {
        Vtb_top_verilator___024root___act_comb__TOP__23(vlSelf);
    }
    if (((((vlSelf->__VnbaTriggered.at(1U) | vlSelf->__VnbaTriggered.at(0xaU)) 
           | vlSelf->__VnbaTriggered.at(0x18U)) | vlSelf->__VnbaTriggered.at(0x1fU)) 
         | vlSelf->__VnbaTriggered.at(0x20U))) {
        Vtb_top_verilator___024root___act_comb__TOP__24(vlSelf);
    }
    if ((((((vlSelf->__VnbaTriggered.at(1U) | vlSelf->__VnbaTriggered.at(0x18U)) 
            | vlSelf->__VnbaTriggered.at(0x1fU)) | vlSelf->__VnbaTriggered.at(0x20U)) 
          | vlSelf->__VnbaTriggered.at(0x29U)) | vlSelf->__VnbaTriggered.at(0x3aU))) {
        Vtb_top_verilator___024root___act_comb__TOP__25(vlSelf);
    }
    if (((((vlSelf->__VnbaTriggered.at(1U) | vlSelf->__VnbaTriggered.at(0x17U)) 
           | vlSelf->__VnbaTriggered.at(0x18U)) | vlSelf->__VnbaTriggered.at(0x20U)) 
         | vlSelf->__VnbaTriggered.at(0x2cU))) {
        Vtb_top_verilator___024root___act_comb__TOP__26(vlSelf);
    }
    if ((((((vlSelf->__VnbaTriggered.at(1U) | vlSelf->__VnbaTriggered.at(0x18U)) 
            | vlSelf->__VnbaTriggered.at(0x20U)) | vlSelf->__VnbaTriggered.at(0x2cU)) 
          | vlSelf->__VnbaTriggered.at(0x2fU)) | vlSelf->__VnbaTriggered.at(0x3bU))) {
        Vtb_top_verilator___024root___act_comb__TOP__27(vlSelf);
    }
    if ((((((vlSelf->__VnbaTriggered.at(1U) | vlSelf->__VnbaTriggered.at(6U)) 
            | vlSelf->__VnbaTriggered.at(0x19U)) | vlSelf->__VnbaTriggered.at(0x1bU)) 
          | vlSelf->__VnbaTriggered.at(0x20U)) | vlSelf->__VnbaTriggered.at(0x3aU))) {
        Vtb_top_verilator___024root___nba_comb__TOP__65(vlSelf);
    }
    if (((((((vlSelf->__VnbaTriggered.at(1U) | vlSelf->__VnbaTriggered.at(2U)) 
             | vlSelf->__VnbaTriggered.at(6U)) | vlSelf->__VnbaTriggered.at(0x19U)) 
           | vlSelf->__VnbaTriggered.at(0x1bU)) | vlSelf->__VnbaTriggered.at(0x20U)) 
         | vlSelf->__VnbaTriggered.at(0x3aU))) {
        Vtb_top_verilator___024root___nba_comb__TOP__66(vlSelf);
    }
    if ((((vlSelf->__VnbaTriggered.at(0x10U) | vlSelf->__VnbaTriggered.at(0x11U)) 
          | vlSelf->__VnbaTriggered.at(0x39U)) | vlSelf->__VnbaTriggered.at(0x3aU))) {
        Vtb_top_verilator___024root___act_comb__TOP__30(vlSelf);
    }
    if ((((((vlSelf->__VnbaTriggered.at(1U) | vlSelf->__VnbaTriggered.at(0xbU)) 
            | vlSelf->__VnbaTriggered.at(0xcU)) | vlSelf->__VnbaTriggered.at(0x16U)) 
          | vlSelf->__VnbaTriggered.at(0x1fU)) | vlSelf->__VnbaTriggered.at(0x3aU))) {
        Vtb_top_verilator___024root___act_comb__TOP__34(vlSelf);
    }
    if (((((((vlSelf->__VnbaTriggered.at(1U) | vlSelf->__VnbaTriggered.at(2U)) 
             | vlSelf->__VnbaTriggered.at(7U)) | vlSelf->__VnbaTriggered.at(0xeU)) 
           | vlSelf->__VnbaTriggered.at(0x19U)) | vlSelf->__VnbaTriggered.at(0x3aU)) 
         | vlSelf->__VnbaTriggered.at(0x3bU))) {
        Vtb_top_verilator___024root___act_comb__TOP__31(vlSelf);
    }
    if ((((((((((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(1U)) 
                | vlSelf->__VnbaTriggered.at(2U)) | vlSelf->__VnbaTriggered.at(5U)) 
              | vlSelf->__VnbaTriggered.at(7U)) | vlSelf->__VnbaTriggered.at(0xeU)) 
            | vlSelf->__VnbaTriggered.at(0x19U)) | vlSelf->__VnbaTriggered.at(0x3aU)) 
          | vlSelf->__VnbaTriggered.at(0x3bU)) | vlSelf->__VnbaTriggered.at(0x3cU))) {
        Vtb_top_verilator___024root___act_comb__TOP__32(vlSelf);
        Vtb_top_verilator_mm_ram__R16___ico_comb__TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i__0((&vlSymsp->TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i));
        Vtb_top_verilator___024root___ico_comb__TOP__1(vlSelf);
    }
    if ((((((((vlSelf->__VnbaTriggered.at(1U) | vlSelf->__VnbaTriggered.at(2U)) 
              | vlSelf->__VnbaTriggered.at(6U)) | vlSelf->__VnbaTriggered.at(0x19U)) 
            | vlSelf->__VnbaTriggered.at(0x1bU)) | vlSelf->__VnbaTriggered.at(0x20U)) 
          | vlSelf->__VnbaTriggered.at(0x3aU)) | vlSelf->__VnbaTriggered.at(0x3cU))) {
        Vtb_top_verilator___024root___nba_comb__TOP__72(vlSelf);
    }
    if (((((((((((vlSelf->__VnbaTriggered.at(1U) | vlSelf->__VnbaTriggered.at(2U)) 
                 | vlSelf->__VnbaTriggered.at(3U)) 
                | vlSelf->__VnbaTriggered.at(4U)) | vlSelf->__VnbaTriggered.at(6U)) 
              | vlSelf->__VnbaTriggered.at(0x19U)) 
             | vlSelf->__VnbaTriggered.at(0x1bU)) | vlSelf->__VnbaTriggered.at(0x20U)) 
           | vlSelf->__VnbaTriggered.at(0x21U)) | vlSelf->__VnbaTriggered.at(0x22U)) 
         | vlSelf->__VnbaTriggered.at(0x3aU))) {
        Vtb_top_verilator___024root___nba_comb__TOP__73(vlSelf);
    }
    if (((((((vlSelf->__VnbaTriggered.at(1U) | vlSelf->__VnbaTriggered.at(0x10U)) 
             | vlSelf->__VnbaTriggered.at(0x11U)) | vlSelf->__VnbaTriggered.at(0x13U)) 
           | vlSelf->__VnbaTriggered.at(0x1aU)) | vlSelf->__VnbaTriggered.at(0x39U)) 
         | vlSelf->__VnbaTriggered.at(0x3aU))) {
        Vtb_top_verilator___024root___act_comb__TOP__35(vlSelf);
    }
    if ((((((((((((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(1U)) 
                  | vlSelf->__VnbaTriggered.at(2U)) 
                 | vlSelf->__VnbaTriggered.at(3U)) 
                | vlSelf->__VnbaTriggered.at(4U)) | vlSelf->__VnbaTriggered.at(5U)) 
              | vlSelf->__VnbaTriggered.at(7U)) | vlSelf->__VnbaTriggered.at(0xeU)) 
            | vlSelf->__VnbaTriggered.at(0x19U)) | vlSelf->__VnbaTriggered.at(0x3aU)) 
          | vlSelf->__VnbaTriggered.at(0x3bU)) | vlSelf->__VnbaTriggered.at(0x3cU))) {
        Vtb_top_verilator___024root___act_comb__TOP__36(vlSelf);
    }
    if ((((((((((((vlSelf->__VnbaTriggered.at(1U) | vlSelf->__VnbaTriggered.at(2U)) 
                  | vlSelf->__VnbaTriggered.at(3U)) 
                 | vlSelf->__VnbaTriggered.at(4U)) 
                | vlSelf->__VnbaTriggered.at(6U)) | vlSelf->__VnbaTriggered.at(0x19U)) 
              | vlSelf->__VnbaTriggered.at(0x1bU)) 
             | vlSelf->__VnbaTriggered.at(0x20U)) | vlSelf->__VnbaTriggered.at(0x21U)) 
           | vlSelf->__VnbaTriggered.at(0x22U)) | vlSelf->__VnbaTriggered.at(0x3aU)) 
         | vlSelf->__VnbaTriggered.at(0x3cU))) {
        Vtb_top_verilator___024root___nba_comb__TOP__76(vlSelf);
    }
}
