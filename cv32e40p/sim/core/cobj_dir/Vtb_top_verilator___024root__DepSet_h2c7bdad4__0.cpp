// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top_verilator.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtb_top_verilator__Syms.h"
#include "Vtb_top_verilator___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_top_verilator___024root___dump_triggers__ico(Vtb_top_verilator___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_top_verilator___024root___eval_triggers__ico(Vtb_top_verilator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_verilator___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.at(0U) = (0U == vlSelf->__VicoIterCount);
    vlSelf->__VicoTriggered.at(1U) = vlSelf->__Vdpi_export_trigger;
    vlSelf->__Vdpi_export_trigger = 0U;
    vlSelf->__VicoTriggered.at(2U) = ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__div_ready) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__div_ready));
    vlSelf->__Vtrigrprev__TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__div_ready 
        = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__div_ready;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VicoDidInit))))) {
        vlSelf->__VicoDidInit = 1U;
        vlSelf->__VicoTriggered.at(2U) = 1U;
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_top_verilator___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vtb_top_verilator___024root___ico_sequent__TOP__1(Vtb_top_verilator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_verilator___024root___ico_sequent__TOP__1\n"); );
    // Body
    vlSelf->tests_passed_o = vlSymsp->TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i.tests_passed_o;
    vlSelf->tests_failed_o = vlSymsp->TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i.tests_failed_o;
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__count_up 
        = ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__data_req) 
           & (IData)(vlSymsp->TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i.data_gnt_o));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__next_cnt 
        = (3U & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__count_up)
                  ? ((IData)(vlSymsp->TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i.data_rvalid_o)
                      ? (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__cnt_q)
                      : ((IData)(1U) + (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__cnt_q)))
                  : ((IData)(vlSymsp->TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i.data_rvalid_o)
                      ? ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__cnt_q) 
                         - (IData)(1U)) : (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__cnt_q))));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__lsu_ready_ex 
        = (1U & ((~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__data_req_ex)) 
                 | ((0U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__cnt_q))
                     ? (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__count_up)
                     : ((1U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__cnt_q))
                         ? ((IData)(vlSymsp->TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i.data_rvalid_o) 
                            & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__count_up))
                         : (IData)(vlSymsp->TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i.data_rvalid_o)))));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__ctrl_update 
        = ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__lsu_ready_ex) 
           & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__data_req_ex));
}

extern const VlUnpacked<CData/*1:0*/, 64> Vtb_top_verilator__ConstPool__TABLE_hac3edcb1_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vtb_top_verilator__ConstPool__TABLE_hfec0eec6_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vtb_top_verilator__ConstPool__TABLE_h23178acb_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vtb_top_verilator__ConstPool__TABLE_h775a31f3_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vtb_top_verilator__ConstPool__TABLE_h54dbc16c_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vtb_top_verilator__ConstPool__TABLE_hc4e1d8b5_0;

VL_INLINE_OPT void Vtb_top_verilator___024root___ico_comb__TOP__0(Vtb_top_verilator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_verilator___024root___ico_comb__TOP__0\n"); );
    // Init
    CData/*0:0*/ tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__pc_set;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__pc_set = 0;
    CData/*3:0*/ tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__pc_mux_id;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__pc_mux_id = 0;
    CData/*0:0*/ tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_save_cause;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_save_cause = 0;
    CData/*0:0*/ tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_save_id;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_save_id = 0;
    CData/*5:0*/ tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_cause;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_cause = 0;
    CData/*2:0*/ tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__debug_cause;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__debug_cause = 0;
    IData/*31:0*/ tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__branch_addr_n;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__branch_addr_n = 0;
    CData/*0:0*/ tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__fetch_ready;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__fetch_ready = 0;
    CData/*0:0*/ tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_push;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_push = 0;
    CData/*0:0*/ tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_pop;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_pop = 0;
    CData/*0:0*/ tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT____VdfgTmp_hf384d751__0;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT____VdfgTmp_hf384d751__0 = 0;
    CData/*0:0*/ tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__halt_if;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__halt_if = 0;
    CData/*0:0*/ tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__jump_in_dec;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__jump_in_dec = 0;
    CData/*0:0*/ tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__branch_in_id;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__branch_in_id = 0;
    CData/*0:0*/ tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_force_debug_mode;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_force_debug_mode = 0;
    CData/*0:0*/ tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT____VdfgTmp_he43db74a__0;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT____VdfgTmp_he43db74a__0 = 0;
    IData/*31:0*/ tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AddMux_D;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AddMux_D = 0;
    IData/*31:0*/ tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AddTmp_D;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AddTmp_D = 0;
    CData/*0:0*/ tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ARegEn_S;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ARegEn_S = 0;
    CData/*0:0*/ tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResRegEn_S;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResRegEn_S = 0;
    IData/*31:0*/ tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__exception_pc;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__exception_pc = 0;
    CData/*5:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    // Body
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT____VdfgTmp_he43db74a__0 
        = ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__div_ready) 
           & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_ready) 
              & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__lsu_ready_ex) 
                 & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__lsu_ready_wb))));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_valid 
        = (((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_en_ex) 
            | ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mult_en_ex) 
               | ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_access_ex) 
                  | (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__data_req_ex)))) 
           & (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT____VdfgTmp_he43db74a__0));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_ready 
        = ((IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT____VdfgTmp_he43db74a__0) 
           | (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__branch_in_ex));
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_cause = 0U;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_save_id = 0U;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_save_cause = 0U;
    if ((1U & (~ ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                  >> 4U)))) {
        if ((8U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((1U & (~ ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)))) {
                        if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_valid) {
                            if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_q) {
                                tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_cause = 2U;
                            } else if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__ebrk_insn_dec) {
                                tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_cause = 3U;
                            } else if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__ecall_insn_dec) {
                                tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_cause = 0xbU;
                            }
                        }
                    }
                }
                if ((2U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    if ((1U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                        if ((1U & (~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))) {
                            tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_save_id = 1U;
                        }
                    }
                } else if ((1U & (~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)))) {
                    if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_valid) {
                        if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_q) {
                            tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_save_id = 1U;
                        } else if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__ebrk_insn_dec) {
                            tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_save_id = 1U;
                        } else if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__ecall_insn_dec) {
                            tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_save_id = 1U;
                        }
                    }
                }
            }
            if ((4U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if ((1U & (~ ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)))) {
                        tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_save_cause = 1U;
                    }
                }
            } else if ((2U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if ((1U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    if ((1U & (~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))) {
                        tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_save_cause = 1U;
                    }
                }
            } else if ((1U & (~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)))) {
                if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_valid) {
                    if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_q) {
                        tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_save_cause 
                            = (1U & (~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)));
                    } else if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__ebrk_insn_dec) {
                        tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_save_cause = 1U;
                    } else if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__ecall_insn_dec) {
                        tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_save_cause 
                            = (1U & (~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)));
                    }
                }
            }
        } else if ((4U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((1U & (~ ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    if ((1U & (~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__branch_taken_ex)))) {
                        if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__is_fetch_failed_id) {
                            tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_cause = 1U;
                            tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_save_cause 
                                = (1U & (~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)));
                        } else if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_valid_id) {
                            if ((1U & (~ (((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_q) 
                                           | (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__trigger_match)) 
                                          & (~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))))) {
                                if (((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__irq_req_ctrl) 
                                     & (~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))) {
                                    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_cause 
                                        = (0x20U | (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__irq_id_ctrl));
                                    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_save_cause = 1U;
                                }
                            }
                        }
                        if ((1U & (~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__is_fetch_failed_id)))) {
                            if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_valid_id) {
                                if ((1U & (~ (((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_q) 
                                               | (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__trigger_match)) 
                                              & (~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))))) {
                                    if (((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__irq_req_ctrl) 
                                         & (~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))) {
                                        tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_save_id = 1U;
                                    }
                                }
                            }
                        }
                    }
                } else if (((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__irq_req_ctrl) 
                            & (~ ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_q) 
                                  | (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q))))) {
                    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_cause 
                        = (0x20U | (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__irq_id_ctrl));
                    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_save_cause = 1U;
                }
            }
        }
    }
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_NS 
        = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS;
    if ((0U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
        if (((6U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mult_operator_ex)) 
             & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mult_en_ex))) {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_NS = 1U;
        }
    } else if ((1U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_NS = 2U;
    } else if ((2U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_NS = 3U;
    } else if ((3U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_NS = 4U;
    } else if ((4U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
        if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_ready) {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_NS = 0U;
        }
    }
    __Vtableidx3 = (((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_ready) 
                     << 5U) | ((0x10U & ((~ (IData)(
                                                    (0U 
                                                     != (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__Cnt_DP)))) 
                                         << 4U)) | 
                               (((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ABComp_S) 
                                 << 3U) | (((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__div_valid) 
                                            << 2U) 
                                           | (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__State_SP)))));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__State_SN 
        = Vtb_top_verilator__ConstPool__TABLE_hac3edcb1_0
        [__Vtableidx3];
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__div_ready 
        = Vtb_top_verilator__ConstPool__TABLE_hfec0eec6_0
        [__Vtableidx3];
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__LoadEn_S 
        = Vtb_top_verilator__ConstPool__TABLE_h23178acb_0
        [__Vtableidx3];
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ARegEn_S 
        = Vtb_top_verilator__ConstPool__TABLE_h775a31f3_0
        [__Vtableidx3];
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__BRegEn_S 
        = Vtb_top_verilator__ConstPool__TABLE_h54dbc16c_0
        [__Vtableidx3];
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResRegEn_S 
        = Vtb_top_verilator__ConstPool__TABLE_hc4e1d8b5_0
        [__Vtableidx3];
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_ready 
        = ((~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__data_misaligned)) 
           & ((~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__jr_stall)) 
              & ((~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__load_stall)) 
                 & ((~ ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__csr_access) 
                        & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__apu_en_ex) 
                           & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__apu_lat_ex) 
                              >> 1U)))) & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_ready)))));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_n 
        = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_q;
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mcause_n 
        = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mcause_q;
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mepc_n 
        = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mepc_q;
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__depc_n 
        = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__depc_q;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__exception_pc 
        = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__pc_id;
    if ((1U & (~ ((((((((1U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr)) 
                        | (2U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))) 
                       | (3U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))) 
                      | (0x300U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))) 
                     | (0x304U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))) 
                    | (0x305U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))) 
                   | (0x340U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))) 
                  | (0x341U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr)))))) {
        if ((0x342U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))) {
            if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) {
                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mcause_n 
                    = ((0x20U & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int 
                                 >> 0x1aU)) | (0x1fU 
                                               & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int));
            }
        }
    }
    if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__LoadEn_S) {
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__Cnt_DN 
            = (0x3fU & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__div_shift));
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__RemSel_SN 
            = (1U & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operator_ex) 
                     >> 1U));
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__CompInv_SN 
            = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__div_op_a_signed;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DN = 0U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResInv_SN 
            = (((0U != (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cnt_result)) 
                | ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operator_ex) 
                   >> 1U)) & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT____VdfgTmp_hb0784dbb__0));
        tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AddTmp_D = 0U;
        tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AddMux_D 
            = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_b_ex;
    } else {
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__Cnt_DN 
            = (0x3fU & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__Cnt_DP) 
                        - (0U != (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__Cnt_DP))));
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__RemSel_SN 
            = (1U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__RemSel_SP));
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__CompInv_SN 
            = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__CompInv_SP;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DN 
            = ((IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResRegEn_S)
                ? (((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ABComp_S) 
                    << 0x1fU) | (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                 >> 1U)) : vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP);
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResInv_SN 
            = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResInv_SP;
        tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AddTmp_D 
            = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AReg_DP;
        tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AddMux_D 
            = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__BReg_DP;
    }
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__BReg_DN 
        = ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__BRegEn_S)
            ? ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__LoadEn_S)
                ? vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_left_result
                : (((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__CompInv_SP) 
                    << 0x1fU) | (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__BReg_DP 
                                 >> 1U))) : vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__BReg_DP);
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__pc_mux_id = 0U;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__pc_set = 0U;
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__jump_done 
        = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__jump_done_q;
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns 
        = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__halt_if = 0U;
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__halt_id = 0U;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__jump_in_dec 
        = ((2U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__ctrl_transfer_insn)) 
           | (1U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__ctrl_transfer_insn)));
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__branch_in_id 
        = (3U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__ctrl_transfer_insn_in_id));
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_force_debug_mode 
        = (1U & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_q 
                 >> 0xfU));
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__debug_cause = 1U;
    if ((0x10U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 0U;
    } else if ((8U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        if ((4U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((2U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if ((1U & (~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)))) {
                    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__halt_if = 1U;
                    if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__branch_taken_ex) {
                        tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__pc_mux_id = 3U;
                        tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__pc_set = 1U;
                    }
                    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 0xdU;
                }
            } else if ((1U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__halt_if = 1U;
                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__halt_id = 1U;
                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns 
                    = (((((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q) 
                          | (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__trigger_match)) 
                         | ((IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_force_debug_mode) 
                            & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__ebrk_insn_dec))) 
                        | (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_entry_q))
                        ? 0xbU : 0xcU);
            } else {
                tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__pc_set = 1U;
                tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__pc_mux_id = 4U;
                if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_force_wakeup_q) {
                    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__debug_cause = 3U;
                } else if ((4U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_q)) {
                    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__debug_cause = 4U;
                }
                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 5U;
            }
        } else if ((2U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((1U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__pc_set = 1U;
                tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__pc_mux_id = 4U;
                if ((1U & (~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))) {
                    if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__trigger_match) {
                        tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__debug_cause = 2U;
                    } else if (((IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_force_debug_mode) 
                                & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__ebrk_insn_dec))) {
                        tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__debug_cause = 1U;
                    } else if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_entry_q) {
                        tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__debug_cause = 3U;
                    }
                }
                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 5U;
            } else {
                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 5U;
                if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__mret_dec) {
                    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__pc_mux_id 
                        = ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)
                            ? 4U : 5U);
                    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__pc_set = 1U;
                } else if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__uret_dec) {
                    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__pc_mux_id 
                        = ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)
                            ? 4U : 6U);
                    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__pc_set = 1U;
                } else if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__dret_dec) {
                    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__pc_mux_id = 7U;
                    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__pc_set = 1U;
                }
                if ((1U & ((vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_q 
                            >> 2U) & (~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q))))) {
                    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 0xcU;
                }
            }
        } else if ((1U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__halt_if = 1U;
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__halt_id = 1U;
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 5U;
            if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__data_err_q) {
                tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__pc_mux_id = 4U;
                tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__pc_set = 1U;
            } else if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__is_fetch_failed_id) {
                tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__pc_mux_id = 4U;
                tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__pc_set = 1U;
            } else if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_q) {
                tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__pc_mux_id = 4U;
                tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__pc_set = 1U;
                if ((1U & ((vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_q 
                            >> 2U) & (~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q))))) {
                    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 0xcU;
                }
            } else if (((((((((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__ebrk_insn_dec) 
                              | (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__ecall_insn_dec)) 
                             | (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__mret_insn_dec)) 
                            | (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__uret_insn_dec)) 
                           | (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__dret_insn_dec)) 
                          | (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__csr_status)) 
                         | (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__wfi_insn_dec)) 
                        | (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__fencei_insn_dec))) {
                if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__ebrk_insn_dec) {
                    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__pc_mux_id = 4U;
                    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__pc_set = 1U;
                    if ((1U & ((vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_q 
                                >> 2U) & (~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q))))) {
                        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 0xcU;
                    }
                } else if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__ecall_insn_dec) {
                    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__pc_mux_id = 4U;
                    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__pc_set = 1U;
                    if ((1U & ((vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_q 
                                >> 2U) & (~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q))))) {
                        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 0xcU;
                    }
                } else if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__mret_insn_dec) {
                    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 0xaU;
                } else if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__uret_insn_dec) {
                    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 0xaU;
                } else if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__dret_insn_dec) {
                    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 0xaU;
                } else if ((1U & (~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__csr_status)))) {
                    if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__wfi_insn_dec) {
                        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns 
                            = ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_q)
                                ? 0xcU : 3U);
                    } else {
                        tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__pc_mux_id = 1U;
                        tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__pc_set = 1U;
                    }
                }
            }
        } else {
            tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__halt_if = 1U;
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__halt_id = 1U;
            if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_valid) {
                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 9U;
            }
        }
    } else if ((4U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        if ((1U & (~ ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__branch_taken_ex) {
                    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__pc_mux_id = 3U;
                    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__pc_set = 1U;
                } else if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__is_fetch_failed_id) {
                    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__halt_id = 1U;
                    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__halt_if = 1U;
                    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 9U;
                } else if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_valid_id) {
                    if ((((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_q) 
                          | (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__trigger_match)) 
                         & (~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))) {
                        tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__halt_if = 1U;
                        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__halt_id = 1U;
                        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 0xdU;
                    } else if (((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__irq_req_ctrl) 
                                & (~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))) {
                        tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__halt_if = 1U;
                        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__halt_id = 1U;
                        tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__pc_set = 1U;
                        tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__pc_mux_id = 4U;
                    } else {
                        if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec) {
                            tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__halt_if = 1U;
                            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__halt_id = 0U;
                            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns 
                                = ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_ready)
                                    ? 8U : 5U);
                        } else if ((((((((IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__jump_in_dec) 
                                         | (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__ebrk_insn_dec)) 
                                        | (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__wfi_active)) 
                                       | (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__ecall_insn_dec)) 
                                      | (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__fencei_insn_dec)) 
                                     | (((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__mret_insn_dec) 
                                         | (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__uret_insn_dec)) 
                                        | (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__dret_insn_dec))) 
                                    | (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__csr_status))) {
                            if (tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__jump_in_dec) {
                                tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__pc_mux_id = 2U;
                                if ((1U & ((~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__jr_stall)) 
                                           & (~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__jump_done_q))))) {
                                    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__pc_set = 1U;
                                    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__jump_done = 1U;
                                }
                            } else if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__ebrk_insn_dec) {
                                tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__halt_if = 1U;
                                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__halt_id = 0U;
                                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns 
                                    = ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)
                                        ? 0xdU : ((IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_force_debug_mode)
                                                   ? 0xdU
                                                   : 
                                                  ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_ready)
                                                    ? 8U
                                                    : 5U)));
                            } else if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__wfi_active) {
                                tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__halt_if = 1U;
                                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__halt_id = 0U;
                                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns 
                                    = ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_ready)
                                        ? 8U : 5U);
                            } else if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__ecall_insn_dec) {
                                tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__halt_if = 1U;
                                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__halt_id = 0U;
                                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns 
                                    = ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_ready)
                                        ? 8U : 5U);
                            } else if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__fencei_insn_dec) {
                                tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__halt_if = 1U;
                                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__halt_id = 0U;
                                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns 
                                    = ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_ready)
                                        ? 8U : 5U);
                            } else if ((((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__mret_insn_dec) 
                                         | (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__uret_insn_dec)) 
                                        | (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__dret_insn_dec))) {
                                tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__halt_if = 1U;
                                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__halt_id = 0U;
                                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns 
                                    = ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_ready)
                                        ? 8U : 5U);
                            } else if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__csr_status) {
                                tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__halt_if = 1U;
                                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns 
                                    = ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_ready)
                                        ? 8U : 5U);
                            } else {
                                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns 
                                    = ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_ready)
                                        ? 7U : 5U);
                                tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__halt_if = 1U;
                            }
                        }
                        if ((1U & ((vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_q 
                                    >> 2U) & (~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q))))) {
                            tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__halt_if = 1U;
                            if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_ready) {
                                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns 
                                    = (((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec) 
                                        | (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__ecall_insn_dec))
                                        ? 8U : (((~ (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_force_debug_mode)) 
                                                 & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__ebrk_insn_dec))
                                                 ? 8U
                                                 : 
                                                (((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__mret_insn_dec) 
                                                  | (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__uret_insn_dec))
                                                  ? 8U
                                                  : 
                                                 ((IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__branch_in_id)
                                                   ? 0xeU
                                                   : 0xdU))));
                            }
                        }
                    }
                }
            } else {
                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 5U;
                if (((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__irq_req_ctrl) 
                     & (~ ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_q) 
                           | (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q))))) {
                    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__halt_if = 1U;
                    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__halt_id = 1U;
                    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__pc_set = 1U;
                    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__pc_mux_id = 4U;
                }
            }
        }
    } else if ((2U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        if ((1U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__halt_if = 1U;
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__halt_id = 1U;
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 2U;
        } else {
            tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__halt_if = 1U;
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__halt_id = 1U;
            if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__wake_from_sleep) {
                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns 
                    = ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_q)
                        ? 0xcU : 4U);
            }
        }
    } else if ((1U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__pc_mux_id = 0U;
        tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__pc_set = 1U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns 
            = ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_q)
                ? 0xcU : 4U);
    } else if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__sleep_unit_i__DOT__fetch_enable_q) {
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 1U;
    }
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AReg_DN 
        = ((IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ARegEn_S)
            ? (((~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT____VdfgTmp_hb0784dbb__0)) 
                & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__LoadEn_S))
                ? (tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AddTmp_D 
                   + tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AddMux_D)
                : (tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AddTmp_D 
                   - tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AddMux_D))
            : vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AReg_DP);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_n 
        = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_q;
    if ((1U & (~ ((((((((1U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr)) 
                        | (2U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))) 
                       | (3U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))) 
                      | (0x300U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))) 
                     | (0x304U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))) 
                    | (0x305U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))) 
                   | (0x340U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))) 
                  | (0x341U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr)))))) {
        if ((0x342U != (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))) {
            if ((0x7b0U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))) {
                if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) {
                    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_n 
                        = ((0xffff7fffU & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_n) 
                           | (0x8000U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int));
                    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_n 
                        = ((0xffffc3ffU & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_n) 
                           | (0x800U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int));
                    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_n 
                        = (0xfffffdffU & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_n);
                    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_n 
                        = (0xffffffefU & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_n);
                    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_n 
                        = (3U | ((0xfffffff8U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_n) 
                                 | (4U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int)));
                }
            }
        }
    }
    if (((((((((1U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr)) 
               | (2U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))) 
              | (3U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))) 
             | (0x300U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))) 
            | (0x304U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))) 
           | (0x305U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))) 
          | (0x340U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))) 
         | (0x341U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr)))) {
        if ((1U != (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))) {
            if ((2U != (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))) {
                if ((3U != (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))) {
                    if ((0x300U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))) {
                        if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) {
                            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_n 
                                = ((0x40U & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int 
                                             << 6U)) 
                                   | ((0x20U & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int 
                                                << 2U)) 
                                      | ((0x10U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int) 
                                         | ((8U & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int 
                                                   >> 4U)) 
                                            | ((6U 
                                                & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int 
                                                   >> 0xaU)) 
                                               | (1U 
                                                  & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int 
                                                     >> 0x11U)))))));
                        }
                    }
                }
            }
        }
    }
    if (tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_save_cause) {
        if ((1U & (~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__debug_csr_save)))) {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_n 
                = ((0x77U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_n)) 
                   | (8U & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_q) 
                            >> 2U)));
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_n 
                = (0x5fU & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_n));
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_n 
                = (6U | (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_n));
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mcause_n 
                = tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_cause;
        }
    } else if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_restore_mret_id) {
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_n 
            = ((0x5fU & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_n)) 
               | (0x20U & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_q) 
                           << 2U)));
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_n 
            = (0xeU | (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_n));
    }
    if (((((((((1U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr)) 
               | (2U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))) 
              | (3U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))) 
             | (0x300U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))) 
            | (0x304U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))) 
           | (0x305U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))) 
          | (0x340U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))) 
         | (0x341U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr)))) {
        if ((1U != (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))) {
            if ((2U != (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))) {
                if ((3U != (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))) {
                    if ((0x300U != (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))) {
                        if ((0x304U != (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))) {
                            if ((0x305U != (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))) {
                                if ((0x340U != (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))) {
                                    if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) {
                                        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mepc_n 
                                            = (0xfffffffeU 
                                               & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else if ((0x342U != (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))) {
        if ((0x7b0U != (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))) {
            if ((0x7b1U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))) {
                if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) {
                    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__depc_n 
                        = (0xfffffffeU & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int);
                }
            }
        }
    }
    if (tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_save_cause) {
        if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_save_if) {
            tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__exception_pc 
                = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_q;
        } else if (tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_save_id) {
            tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__exception_pc 
                = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__pc_id;
        }
        if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__debug_csr_save) {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__depc_n 
                = tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__exception_pc;
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_n 
                = (3U | vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_n);
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_n 
                = ((0xfffffe3fU & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_n) 
                   | ((IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__debug_cause) 
                      << 6U));
        } else {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mepc_n 
                = tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__exception_pc;
        }
    }
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__clear_instr_valid 
        = ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_ready) 
           | ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__halt_id) 
              | (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__branch_taken_ex)));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_valid 
        = ((~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__halt_id)) 
           & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_ready));
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__branch_addr_n = 0x80U;
    if ((8U & (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__pc_mux_id))) {
        if ((1U & (~ ((IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__pc_mux_id) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__pc_mux_id) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__pc_mux_id)))) {
                    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__branch_addr_n = 0U;
                }
            }
        }
    } else {
        tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__branch_addr_n 
            = ((4U & (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__pc_mux_id))
                ? ((2U & (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__pc_mux_id))
                    ? ((1U & (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__pc_mux_id))
                        ? vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__depc_q
                        : 0U) : ((1U & (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__pc_mux_id))
                                  ? vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mepc_q
                                  : vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__exc_pc))
                : ((2U & (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__pc_mux_id))
                    ? ((1U & (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__pc_mux_id))
                        ? vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_c_ex
                        : vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__jump_target)
                    : ((1U & (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__pc_mux_id))
                        ? ((IData)(4U) + vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__pc_id)
                        : 0x80U)));
    }
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_n 
        = (((0U == (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__pc_mux_id)) 
            & (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__pc_set))
            ? 0U : vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_q);
    if (((((((((1U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr)) 
               | (2U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))) 
              | (3U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))) 
             | (0x300U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))) 
            | (0x304U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))) 
           | (0x305U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))) 
          | (0x340U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))) 
         | (0x341U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr)))) {
        if ((1U != (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))) {
            if ((2U != (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))) {
                if ((3U != (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))) {
                    if ((0x300U != (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))) {
                        if ((0x304U != (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))) {
                            if ((0x305U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))) {
                                if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) {
                                    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_n 
                                        = (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int 
                                           >> 8U);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__branch_req = 0U;
    if (tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__pc_set) {
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__branch_req = 1U;
    }
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__minstret 
        = ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_valid) 
           & ((~ ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec) 
                  | ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__ebrk_insn_dec) 
                     | (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__ecall_insn_dec)))) 
              & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__is_decoding)));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__next_flush_cnt 
        = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__flush_cnt_q;
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__next_state 
        = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state;
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_n 
        = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_q;
    if ((0U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
        if ((3U == (3U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__fetch_rdata))) {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__next_state = 0U;
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_n 
                = ((IData)(4U) + vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_q);
            if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__hwlp_update_pc_q) {
                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_n 
                    = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__hwlp_addr_q;
            }
        } else {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__next_state = 1U;
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_n 
                = ((IData)(2U) + vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_q);
        }
    } else if ((1U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
        if ((3U == (3U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__r_instr_h)))) {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__next_state = 1U;
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_n 
                = ((IData)(4U) + vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_q);
        } else {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__next_state = 2U;
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_n 
                = ((IData)(2U) + vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_q);
        }
    } else if ((2U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
        if ((3U == (3U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__fetch_rdata))) {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__next_state = 0U;
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_n 
                = ((IData)(4U) + vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_q);
        } else {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__next_state = 1U;
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_n 
                = ((IData)(2U) + vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_q);
        }
    } else if ((3U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
        if ((3U == (3U & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__fetch_rdata 
                          >> 0x10U)))) {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__next_state = 1U;
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_n 
                = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_q;
        } else {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__next_state = 0U;
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_n 
                = ((IData)(2U) + vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_q);
        }
    }
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__trans_addr 
        = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__trans_addr_q;
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__trans_valid 
        = ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_req_int) 
           & (2U > (((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__branch_req)
                      ? 0U : (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q)) 
                    + (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__cnt_q))));
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT____VdfgTmp_hf384d751__0 
        = (1U & (~ ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__branch_req) 
                    | (0U < (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__flush_cnt_q)))));
    if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__state_q) {
        if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__state_q) {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__trans_addr 
                = ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__branch_req)
                    ? (0xfffffffcU & tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__branch_addr_n)
                    : vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__trans_addr_q);
        }
    } else {
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__trans_addr 
            = ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__branch_req)
                ? (0xfffffffcU & tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__branch_addr_n)
                : ((IData)(4U) + (0xfffffffcU & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__trans_addr_q)));
    }
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_addr_pmp 
        = ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__state_q)
            ? vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__gen_no_trans_stable__DOT__obi_addr_q
            : (0xfffffffcU & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__trans_addr));
    if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__state_q) {
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__next_state = 1U;
        if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__state_q) {
            if (((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__trans_valid) 
                 & (~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__state_q)))) {
                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__next_state = 0U;
            }
        }
    } else {
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__next_state = 0U;
        if (((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__branch_req) 
             & (~ ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__trans_valid) 
                   & (~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__state_q)))))) {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__next_state = 1U;
        }
    }
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__next_cnt 
        = (3U & (((~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__state_q)) 
                  & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__trans_valid))
                  ? ((IData)(vlSymsp->TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i.instr_rvalid_o)
                      ? (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__cnt_q)
                      : ((IData)(1U) + (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__cnt_q)))
                  : ((IData)(vlSymsp->TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i.instr_rvalid_o)
                      ? ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__cnt_q) 
                         - (IData)(1U)) : (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__cnt_q))));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_req_pmp 
        = ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__state_q) 
           | (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__trans_valid));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__fetch_valid 
        = ((IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT____VdfgTmp_hf384d751__0) 
           & ((0U != (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q)) 
              | (IData)(vlSymsp->TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i.instr_rvalid_o)));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_valid 
        = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__fetch_valid;
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_ready = 1U;
    if ((0U != (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
        if ((1U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
            if ((3U != (3U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__r_instr_h)))) {
                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_valid = 1U;
                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_ready 
                    = (1U & (~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__fetch_valid)));
            }
        } else if ((2U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_valid 
                = (1U & ((~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__aligner_ready_q)) 
                         | (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__fetch_valid)));
        } else if ((3U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
            if ((3U == (3U & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__fetch_rdata 
                              >> 0x10U)))) {
                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_valid = 0U;
            }
        }
    }
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__if_valid 
        = ((~ (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__halt_if)) 
           & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__fetch_valid) 
              & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_ready)));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__update_state = 0U;
    if ((0U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__update_state 
            = ((3U == (3U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__fetch_rdata))
                ? ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__fetch_valid) 
                   & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__if_valid))
                : ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__fetch_valid) 
                   & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__if_valid)));
    } else if ((1U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__update_state 
            = ((3U == (3U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__r_instr_h)))
                ? ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__fetch_valid) 
                   & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__if_valid))
                : (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__if_valid));
    } else if ((2U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__update_state 
            = ((3U == (3U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__fetch_rdata))
                ? (((~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__aligner_ready_q)) 
                    | (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__fetch_valid)) 
                   & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__if_valid))
                : (((~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__aligner_ready_q)) 
                    | (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__fetch_valid)) 
                   & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__if_valid)));
    } else if ((3U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__update_state 
            = ((3U == (3U & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__fetch_rdata 
                             >> 0x10U))) ? ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__fetch_valid) 
                                            & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__if_valid))
                : ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__fetch_valid) 
                   & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__if_valid)));
    }
    if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__branch_req) {
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__next_flush_cnt 
            = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__cnt_q;
        if (((IData)(vlSymsp->TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i.instr_rvalid_o) 
             & (0U < (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__cnt_q)))) {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__next_flush_cnt 
                = (3U & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__cnt_q) 
                         - (IData)(1U)));
        }
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__next_state 
            = ((2U & tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__branch_addr_n)
                ? 3U : 0U);
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_n 
            = (0xfffffffeU & tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__branch_addr_n);
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__update_state = 1U;
    } else if (((IData)(vlSymsp->TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i.instr_rvalid_o) 
                & (0U < (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__flush_cnt_q)))) {
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__next_flush_cnt 
            = (3U & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__flush_cnt_q) 
                     - (IData)(1U)));
    }
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__fetch_ready = 0U;
    if ((1U & (~ (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__pc_set)))) {
        if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__fetch_valid) {
            if (((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_req_int) 
                 & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__if_valid))) {
                tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__fetch_ready 
                    = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_ready;
            }
        }
    }
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_pop 
        = ((0U != (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q)) 
           & (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__fetch_ready));
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_push 
        = ((IData)(vlSymsp->TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i.instr_rvalid_o) 
           & ((IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT____VdfgTmp_hf384d751__0) 
              & ((0U != (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q)) 
                 | (~ (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__fetch_ready)))));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__read_pointer_n 
        = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__read_pointer_q;
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__gate_clock = 1U;
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_n 
        = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q;
    if (((IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_pop) 
         & (0U != (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q)))) {
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__read_pointer_n 
            = (1U & ((IData)(1U) + (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__read_pointer_q)));
    }
    if (((IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_push) 
         & (2U != (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q)))) {
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__gate_clock = 0U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_n 
            = (3U & ((IData)(1U) + (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q)));
    }
    if (((IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_pop) 
         & (0U != (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q)))) {
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_n 
            = (3U & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_push) 
           & (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_pop)) 
          & (2U != (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q))) 
         & (0U != (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q)))) {
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_n 
            = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q;
    }
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__write_pointer_n 
        = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__write_pointer_q;
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__mem_n 
        = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__mem_q;
    if (((IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_push) 
         & (2U != (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q)))) {
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__write_pointer_n 
            = (1U & ((IData)(1U) + (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__write_pointer_q)));
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__mem_n 
            = (((~ (0xffffffffULL << (0x3fU & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__write_pointer_q) 
                                               << 5U)))) 
                & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__mem_n) 
               | ((QData)((IData)(vlSymsp->TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i.__Vcellout__instr_rvalid_stall_i__rdata_o)) 
                  << (0x3fU & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__write_pointer_q) 
                               << 5U))));
    }
}

VL_INLINE_OPT void Vtb_top_verilator___024root___ico_comb__TOP__1(Vtb_top_verilator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_verilator___024root___ico_comb__TOP__1\n"); );
    // Body
    if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__state_q) {
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__next_state = 1U;
        if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__state_q) {
            if (vlSymsp->TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i.__PVT__ram_instr_gnt) {
                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__next_state = 0U;
            }
        }
    } else {
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__next_state = 0U;
        if (((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_req_pmp) 
             & (~ (IData)(vlSymsp->TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i.__PVT__ram_instr_gnt)))) {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__next_state = 1U;
        }
    }
}

void Vtb_top_verilator___024root___ico_sequent__TOP__0(Vtb_top_verilator___024root* vlSelf);
void Vtb_top_verilator_mm_ram__R16___ico_sequent__TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i__0(Vtb_top_verilator_mm_ram__R16* vlSelf);
void Vtb_top_verilator_mm_ram__R16___ico_comb__TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i__0(Vtb_top_verilator_mm_ram__R16* vlSelf);

void Vtb_top_verilator___024root___eval_ico(Vtb_top_verilator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_verilator___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        Vtb_top_verilator___024root___ico_sequent__TOP__0(vlSelf);
    }
    if (vlSelf->__VicoTriggered.at(1U)) {
        Vtb_top_verilator_mm_ram__R16___ico_sequent__TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i__0((&vlSymsp->TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i));
        Vtb_top_verilator___024root___ico_sequent__TOP__1(vlSelf);
    }
    if ((vlSelf->__VicoTriggered.at(1U) | vlSelf->__VicoTriggered.at(2U))) {
        Vtb_top_verilator___024root___ico_comb__TOP__0(vlSelf);
        Vtb_top_verilator_mm_ram__R16___ico_comb__TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i__0((&vlSymsp->TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i));
        Vtb_top_verilator___024root___ico_comb__TOP__1(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_top_verilator___024root___dump_triggers__act(Vtb_top_verilator___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_top_verilator___024root___eval_triggers__act(Vtb_top_verilator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_verilator___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = vlSelf->__Vdpi_export_trigger;
    vlSelf->__Vdpi_export_trigger = 0U;
    vlSelf->__VactTriggered.at(1U) = (((IData)(vlSelf->clk_i) 
                                       & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clk_i))) 
                                      | ((~ (IData)(vlSelf->rst_ni)) 
                                         & (IData)(vlSelf->__Vtrigrprev__TOP__rst_ni)));
    vlSelf->__VactTriggered.at(2U) = ((vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
                                       != vlSelf->__Vtrigrprev__TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes) 
                                      | (0U != ((((
                                                   (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                    ^ 
                                                    vlSelf->__Vtrigrprev__TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U]) 
                                                   | (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                      ^ 
                                                      vlSelf->__Vtrigrprev__TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U])) 
                                                  | (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                     ^ 
                                                     vlSelf->__Vtrigrprev__TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U])) 
                                                 | (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                    ^ 
                                                    vlSelf->__Vtrigrprev__TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U])) 
                                                | (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                   ^ 
                                                   vlSelf->__Vtrigrprev__TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U]))));
    vlSelf->__VactTriggered.at(3U) = (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
                                      != vlSelf->__Vtrigrprev__TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes);
    vlSelf->__VactTriggered.at(4U) = ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__div_ready) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__div_ready));
    vlSelf->__VactTriggered.at(5U) = (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_op_a 
                                      != vlSelf->__Vtrigrprev__TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_op_a);
    vlSelf->__VactTriggered.at(6U) = (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_op_b 
                                      != vlSelf->__Vtrigrprev__TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_op_b);
    vlSelf->__VactTriggered.at(7U) = (((~ (IData)(vlSelf->rst_ni)) 
                                       & (IData)(vlSelf->__Vtrigrprev__TOP__rst_ni)) 
                                      | ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__clk) 
                                         & (~ (IData)(vlSelf->__Vtrigrprev__TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__clk))));
    vlSelf->__VactTriggered.at(8U) = ((IData)(vlSelf->clk_i) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clk_i)));
    vlSelf->__Vtrigrprev__TOP__clk_i = vlSelf->clk_i;
    vlSelf->__Vtrigrprev__TOP__rst_ni = vlSelf->rst_ni;
    vlSelf->__Vtrigrprev__TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
        = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes;
    vlSelf->__Vtrigrprev__TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
        = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U];
    vlSelf->__Vtrigrprev__TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
        = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U];
    vlSelf->__Vtrigrprev__TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
        = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U];
    vlSelf->__Vtrigrprev__TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
        = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U];
    vlSelf->__Vtrigrprev__TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
        = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U];
    vlSelf->__Vtrigrprev__TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__div_ready 
        = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__div_ready;
    vlSelf->__Vtrigrprev__TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_op_a 
        = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_op_a;
    vlSelf->__Vtrigrprev__TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_op_b 
        = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_op_b;
    vlSelf->__Vtrigrprev__TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__clk 
        = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__clk;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.at(2U) = 1U;
        vlSelf->__VactTriggered.at(3U) = 1U;
        vlSelf->__VactTriggered.at(4U) = 1U;
        vlSelf->__VactTriggered.at(5U) = 1U;
        vlSelf->__VactTriggered.at(6U) = 1U;
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_top_verilator___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vtb_top_verilator___024root___act_sequent__TOP__0(Vtb_top_verilator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_verilator___024root___act_sequent__TOP__0\n"); );
    // Body
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__lsu_ready_wb 
        = ((0U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__cnt_q)) 
           | (IData)(vlSymsp->TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i.data_rvalid_o));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__deassert_we = 0U;
    if ((1U & (~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__is_decoding)))) {
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__deassert_we = 1U;
    }
    if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec) {
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__deassert_we = 1U;
    }
    if (((((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__data_req_ex) 
           & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_we_ex)) 
          | ((~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__lsu_ready_wb)) 
             & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_we_wb))) 
         & ((((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__reg_d_ex_is_reg_a_id) 
              | (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__reg_d_ex_is_reg_b_id)) 
             | (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__reg_d_ex_is_reg_c_id)) 
            | (((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__is_decoding) 
                & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_alu_we) 
                   & (~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__data_misaligned)))) 
               & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_waddr_ex) 
                  == (0x1fU & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                               >> 7U))))))) {
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__deassert_we = 1U;
    }
    if (((2U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__ctrl_transfer_insn)) 
         & ((((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_we_wb) 
              & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__reg_d_wb_is_reg_a_id)) 
             | ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_we_ex) 
                & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__reg_d_ex_is_reg_a_id))) 
            | ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_alu_we_fw) 
               & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__reg_d_alu_is_reg_a_id))))) {
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__deassert_we = 1U;
    }
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__load_stall = 0U;
    if (((((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__data_req_ex) 
           & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_we_ex)) 
          | ((~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__lsu_ready_wb)) 
             & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_we_wb))) 
         & ((((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__reg_d_ex_is_reg_a_id) 
              | (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__reg_d_ex_is_reg_b_id)) 
             | (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__reg_d_ex_is_reg_c_id)) 
            | (((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__is_decoding) 
                & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_alu_we) 
                   & (~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__data_misaligned)))) 
               & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_waddr_ex) 
                  == (0x1fU & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                               >> 7U))))))) {
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__load_stall = 1U;
    }
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__alu_en 
        = ((~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__deassert_we)) 
           & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_en));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__mult_int_en 
        = ((~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__deassert_we)) 
           & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__mult_int_en));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__regfile_we_id 
        = ((~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__deassert_we)) 
           & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_mem_we));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__regfile_alu_we_id 
        = ((~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__deassert_we)) 
           & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_alu_we));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__data_req_id 
        = ((~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__deassert_we)) 
           & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__data_req));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__ctrl_transfer_insn_in_id 
        = ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__deassert_we)
            ? 0U : (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__ctrl_transfer_insn));
}

VL_INLINE_OPT void Vtb_top_verilator___024root___act_sequent__TOP__5(Vtb_top_verilator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_verilator___024root___act_sequent__TOP__5\n"); );
    // Body
    vlSelf->tests_passed_o = vlSymsp->TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i.tests_passed_o;
    vlSelf->tests_failed_o = vlSymsp->TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i.tests_failed_o;
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__count_up 
        = ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__data_req) 
           & (IData)(vlSymsp->TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i.data_gnt_o));
}

VL_INLINE_OPT void Vtb_top_verilator___024root___act_comb__TOP__2(Vtb_top_verilator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_verilator___024root___act_comb__TOP__2\n"); );
    // Body
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__next_cnt 
        = (3U & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__count_up)
                  ? ((IData)(vlSymsp->TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i.data_rvalid_o)
                      ? (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__cnt_q)
                      : ((IData)(1U) + (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__cnt_q)))
                  : ((IData)(vlSymsp->TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i.data_rvalid_o)
                      ? ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__cnt_q) 
                         - (IData)(1U)) : (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__cnt_q))));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__lsu_ready_ex 
        = (1U & ((~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__data_req_ex)) 
                 | ((0U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__cnt_q))
                     ? (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__count_up)
                     : ((1U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__cnt_q))
                         ? ((IData)(vlSymsp->TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i.data_rvalid_o) 
                            & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__count_up))
                         : (IData)(vlSymsp->TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i.data_rvalid_o)))));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__ctrl_update 
        = ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__lsu_ready_ex) 
           & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__data_req_ex));
}

VL_INLINE_OPT void Vtb_top_verilator___024root___act_sequent__TOP__6(Vtb_top_verilator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_verilator___024root___act_sequent__TOP__6\n"); );
    // Init
    IData/*31:0*/ tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_h_ext;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_h_ext = 0;
    IData/*31:0*/ tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_b_ext;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_b_ext = 0;
    // Body
    if ((2U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_offset_q))) {
        if ((1U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_offset_q))) {
            if ((0U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__data_sign_ext_q))) {
                tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_b_ext 
                    = (vlSymsp->TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i.data_rdata_o 
                       >> 0x18U);
                tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_h_ext 
                    = ((0xff00U & (vlSymsp->TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i.data_rdata_o 
                                   << 8U)) | (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_q 
                                              >> 0x18U));
            } else if ((2U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__data_sign_ext_q))) {
                tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_b_ext 
                    = (0xffffff00U | (vlSymsp->TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i.data_rdata_o 
                                      >> 0x18U));
                tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_h_ext 
                    = (0xffff0000U | ((0xff00U & (vlSymsp->TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i.data_rdata_o 
                                                  << 8U)) 
                                      | (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_q 
                                         >> 0x18U)));
            } else {
                tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_b_ext 
                    = (((- (IData)((vlSymsp->TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i.data_rdata_o 
                                    >> 0x1fU))) << 8U) 
                       | (vlSymsp->TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i.data_rdata_o 
                          >> 0x18U));
                tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_h_ext 
                    = (((- (IData)((1U & (vlSymsp->TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i.data_rdata_o 
                                          >> 7U)))) 
                        << 0x10U) | ((0xff00U & (vlSymsp->TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i.data_rdata_o 
                                                 << 8U)) 
                                     | (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_q 
                                        >> 0x18U)));
            }
        } else if ((0U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__data_sign_ext_q))) {
            tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_b_ext 
                = (0xffU & (vlSymsp->TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i.data_rdata_o 
                            >> 0x10U));
            tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_h_ext 
                = (vlSymsp->TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i.data_rdata_o 
                   >> 0x10U);
        } else if ((2U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__data_sign_ext_q))) {
            tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_b_ext 
                = (0xffffff00U | (0xffU & (vlSymsp->TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i.data_rdata_o 
                                           >> 0x10U)));
            tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_h_ext 
                = (0xffff0000U | (vlSymsp->TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i.data_rdata_o 
                                  >> 0x10U));
        } else {
            tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_b_ext 
                = (((- (IData)((1U & (vlSymsp->TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i.data_rdata_o 
                                      >> 0x17U)))) 
                    << 8U) | (0xffU & (vlSymsp->TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i.data_rdata_o 
                                       >> 0x10U)));
            tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_h_ext 
                = (((- (IData)((vlSymsp->TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i.data_rdata_o 
                                >> 0x1fU))) << 0x10U) 
                   | (vlSymsp->TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i.data_rdata_o 
                      >> 0x10U));
        }
    } else if ((1U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_offset_q))) {
        if ((0U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__data_sign_ext_q))) {
            tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_b_ext 
                = (0xffU & (vlSymsp->TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i.data_rdata_o 
                            >> 8U));
            tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_h_ext 
                = (0xffffU & (vlSymsp->TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i.data_rdata_o 
                              >> 8U));
        } else if ((2U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__data_sign_ext_q))) {
            tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_b_ext 
                = (0xffffff00U | (0xffU & (vlSymsp->TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i.data_rdata_o 
                                           >> 8U)));
            tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_h_ext 
                = (0xffff0000U | (0xffffU & (vlSymsp->TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i.data_rdata_o 
                                             >> 8U)));
        } else {
            tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_b_ext 
                = (((- (IData)((1U & (vlSymsp->TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i.data_rdata_o 
                                      >> 0xfU)))) << 8U) 
                   | (0xffU & (vlSymsp->TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i.data_rdata_o 
                               >> 8U)));
            tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_h_ext 
                = (((- (IData)((1U & (vlSymsp->TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i.data_rdata_o 
                                      >> 0x17U)))) 
                    << 0x10U) | (0xffffU & (vlSymsp->TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i.data_rdata_o 
                                            >> 8U)));
        }
    } else if ((0U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__data_sign_ext_q))) {
        tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_b_ext 
            = (0xffU & vlSymsp->TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i.data_rdata_o);
        tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_h_ext 
            = (0xffffU & vlSymsp->TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i.data_rdata_o);
    } else if ((2U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__data_sign_ext_q))) {
        tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_b_ext 
            = (0xffffff00U | (0xffU & vlSymsp->TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i.data_rdata_o));
        tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_h_ext 
            = (0xffff0000U | (0xffffU & vlSymsp->TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i.data_rdata_o));
    } else {
        tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_b_ext 
            = (((- (IData)((1U & (vlSymsp->TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i.data_rdata_o 
                                  >> 7U)))) << 8U) 
               | (0xffU & vlSymsp->TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i.data_rdata_o));
        tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_h_ext 
            = (((- (IData)((1U & (vlSymsp->TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i.data_rdata_o 
                                  >> 0xfU)))) << 0x10U) 
               | (0xffffU & vlSymsp->TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i.data_rdata_o));
    }
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__data_rdata_ext 
        = ((2U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__data_type_q))
            ? tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_b_ext
            : ((1U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__data_type_q))
                ? tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_h_ext
                : ((2U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_offset_q))
                    ? ((1U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_offset_q))
                        ? ((vlSymsp->TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i.data_rdata_o 
                            << 8U) | (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_q 
                                      >> 0x18U)) : 
                       ((vlSymsp->TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i.data_rdata_o 
                         << 0x10U) | (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_q 
                                      >> 0x10U))) : 
                   ((1U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_offset_q))
                     ? ((vlSymsp->TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i.data_rdata_o 
                         << 0x18U) | (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_q 
                                      >> 8U)) : vlSymsp->TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i.data_rdata_o))));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__lsu_rdata 
        = ((IData)(vlSymsp->TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i.data_rvalid_o)
            ? vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__data_rdata_ext
            : vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_q);
}

VL_INLINE_OPT void Vtb_top_verilator___024root___act_comb__TOP__4(Vtb_top_verilator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_verilator___024root___act_comb__TOP__4\n"); );
    // Init
    CData/*0:0*/ tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__pc_set;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__pc_set = 0;
    CData/*3:0*/ tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__pc_mux_id;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__pc_mux_id = 0;
    CData/*0:0*/ tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_save_cause;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_save_cause = 0;
    CData/*0:0*/ tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_save_id;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_save_id = 0;
    CData/*5:0*/ tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_cause;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_cause = 0;
    CData/*2:0*/ tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__debug_cause;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__debug_cause = 0;
    IData/*31:0*/ tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__branch_addr_n;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__branch_addr_n = 0;
    CData/*0:0*/ tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__fetch_ready;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__fetch_ready = 0;
    CData/*0:0*/ tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_push;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_push = 0;
    CData/*0:0*/ tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_pop;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_pop = 0;
    CData/*0:0*/ tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT____VdfgTmp_hf384d751__0;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT____VdfgTmp_hf384d751__0 = 0;
    CData/*0:0*/ tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__halt_if;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__halt_if = 0;
    CData/*0:0*/ tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__jump_in_dec;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__jump_in_dec = 0;
    CData/*0:0*/ tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__branch_in_id;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__branch_in_id = 0;
    CData/*0:0*/ tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_force_debug_mode;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_force_debug_mode = 0;
    CData/*0:0*/ tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT____VdfgTmp_he43db74a__0;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT____VdfgTmp_he43db74a__0 = 0;
    IData/*31:0*/ tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AddMux_D;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AddMux_D = 0;
    IData/*31:0*/ tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AddTmp_D;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AddTmp_D = 0;
    CData/*0:0*/ tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ARegEn_S;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ARegEn_S = 0;
    CData/*0:0*/ tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResRegEn_S;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResRegEn_S = 0;
    IData/*31:0*/ tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__exception_pc;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__exception_pc = 0;
    CData/*5:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    // Body
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT____VdfgTmp_he43db74a__0 
        = ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__div_ready) 
           & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_ready) 
              & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__lsu_ready_ex) 
                 & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__lsu_ready_wb))));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_valid 
        = (((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_en_ex) 
            | ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mult_en_ex) 
               | ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_access_ex) 
                  | (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__data_req_ex)))) 
           & (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT____VdfgTmp_he43db74a__0));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_ready 
        = ((IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT____VdfgTmp_he43db74a__0) 
           | (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__branch_in_ex));
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_cause = 0U;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_save_id = 0U;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_save_cause = 0U;
    if ((1U & (~ ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                  >> 4U)))) {
        if ((8U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((1U & (~ ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)))) {
                        if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_valid) {
                            if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_q) {
                                tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_cause = 2U;
                            } else if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__ebrk_insn_dec) {
                                tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_cause = 3U;
                            } else if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__ecall_insn_dec) {
                                tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_cause = 0xbU;
                            }
                        }
                    }
                }
                if ((2U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    if ((1U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                        if ((1U & (~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))) {
                            tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_save_id = 1U;
                        }
                    }
                } else if ((1U & (~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)))) {
                    if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_valid) {
                        if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_q) {
                            tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_save_id = 1U;
                        } else if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__ebrk_insn_dec) {
                            tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_save_id = 1U;
                        } else if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__ecall_insn_dec) {
                            tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_save_id = 1U;
                        }
                    }
                }
            }
            if ((4U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if ((1U & (~ ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)))) {
                        tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_save_cause = 1U;
                    }
                }
            } else if ((2U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if ((1U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    if ((1U & (~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))) {
                        tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_save_cause = 1U;
                    }
                }
            } else if ((1U & (~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)))) {
                if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_valid) {
                    if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_q) {
                        tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_save_cause 
                            = (1U & (~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)));
                    } else if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__ebrk_insn_dec) {
                        tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_save_cause = 1U;
                    } else if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__ecall_insn_dec) {
                        tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_save_cause 
                            = (1U & (~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)));
                    }
                }
            }
        } else if ((4U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((1U & (~ ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    if ((1U & (~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__branch_taken_ex)))) {
                        if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__is_fetch_failed_id) {
                            tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_cause = 1U;
                            tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_save_cause 
                                = (1U & (~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)));
                        } else if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_valid_id) {
                            if ((1U & (~ (((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_q) 
                                           | (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__trigger_match)) 
                                          & (~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))))) {
                                if (((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__irq_req_ctrl) 
                                     & (~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))) {
                                    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_cause 
                                        = (0x20U | (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__irq_id_ctrl));
                                    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_save_cause = 1U;
                                }
                            }
                        }
                        if ((1U & (~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__is_fetch_failed_id)))) {
                            if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_valid_id) {
                                if ((1U & (~ (((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_q) 
                                               | (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__trigger_match)) 
                                              & (~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))))) {
                                    if (((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__irq_req_ctrl) 
                                         & (~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))) {
                                        tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_save_id = 1U;
                                    }
                                }
                            }
                        }
                    }
                } else if (((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__irq_req_ctrl) 
                            & (~ ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_q) 
                                  | (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q))))) {
                    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_cause 
                        = (0x20U | (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__irq_id_ctrl));
                    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_save_cause = 1U;
                }
            }
        }
    }
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_NS 
        = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS;
    if ((0U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
        if (((6U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mult_operator_ex)) 
             & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mult_en_ex))) {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_NS = 1U;
        }
    } else if ((1U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_NS = 2U;
    } else if ((2U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_NS = 3U;
    } else if ((3U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_NS = 4U;
    } else if ((4U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
        if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_ready) {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_NS = 0U;
        }
    }
    __Vtableidx3 = (((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_ready) 
                     << 5U) | ((0x10U & ((~ (IData)(
                                                    (0U 
                                                     != (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__Cnt_DP)))) 
                                         << 4U)) | 
                               (((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ABComp_S) 
                                 << 3U) | (((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__div_valid) 
                                            << 2U) 
                                           | (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__State_SP)))));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__State_SN 
        = Vtb_top_verilator__ConstPool__TABLE_hac3edcb1_0
        [__Vtableidx3];
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__div_ready 
        = Vtb_top_verilator__ConstPool__TABLE_hfec0eec6_0
        [__Vtableidx3];
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__LoadEn_S 
        = Vtb_top_verilator__ConstPool__TABLE_h23178acb_0
        [__Vtableidx3];
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ARegEn_S 
        = Vtb_top_verilator__ConstPool__TABLE_h775a31f3_0
        [__Vtableidx3];
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__BRegEn_S 
        = Vtb_top_verilator__ConstPool__TABLE_h54dbc16c_0
        [__Vtableidx3];
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResRegEn_S 
        = Vtb_top_verilator__ConstPool__TABLE_hc4e1d8b5_0
        [__Vtableidx3];
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_ready 
        = ((~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__data_misaligned)) 
           & ((~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__jr_stall)) 
              & ((~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__load_stall)) 
                 & ((~ ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__csr_access) 
                        & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__apu_en_ex) 
                           & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__apu_lat_ex) 
                              >> 1U)))) & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_ready)))));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_n 
        = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_q;
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mcause_n 
        = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mcause_q;
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mepc_n 
        = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mepc_q;
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__depc_n 
        = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__depc_q;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__exception_pc 
        = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__pc_id;
    if ((1U & (~ ((((((((1U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr)) 
                        | (2U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))) 
                       | (3U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))) 
                      | (0x300U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))) 
                     | (0x304U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))) 
                    | (0x305U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))) 
                   | (0x340U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))) 
                  | (0x341U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr)))))) {
        if ((0x342U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))) {
            if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) {
                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mcause_n 
                    = ((0x20U & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int 
                                 >> 0x1aU)) | (0x1fU 
                                               & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int));
            }
        }
    }
    if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__LoadEn_S) {
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__RemSel_SN 
            = (1U & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operator_ex) 
                     >> 1U));
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__CompInv_SN 
            = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__div_op_a_signed;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DN = 0U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResInv_SN 
            = (((0U != (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cnt_result)) 
                | ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operator_ex) 
                   >> 1U)) & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT____VdfgTmp_hb0784dbb__0));
        tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AddTmp_D = 0U;
        tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AddMux_D 
            = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_b_ex;
    } else {
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__RemSel_SN 
            = (1U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__RemSel_SP));
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__CompInv_SN 
            = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__CompInv_SP;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DN 
            = ((IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResRegEn_S)
                ? (((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ABComp_S) 
                    << 0x1fU) | (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                 >> 1U)) : vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP);
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResInv_SN 
            = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResInv_SP;
        tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AddTmp_D 
            = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AReg_DP;
        tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AddMux_D 
            = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__BReg_DP;
    }
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__pc_mux_id = 0U;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__pc_set = 0U;
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__jump_done 
        = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__jump_done_q;
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns 
        = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__halt_if = 0U;
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__halt_id = 0U;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__jump_in_dec 
        = ((2U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__ctrl_transfer_insn)) 
           | (1U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__ctrl_transfer_insn)));
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__branch_in_id 
        = (3U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__ctrl_transfer_insn_in_id));
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_force_debug_mode 
        = (1U & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_q 
                 >> 0xfU));
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__debug_cause = 1U;
    if ((0x10U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 0U;
    } else if ((8U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        if ((4U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((2U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if ((1U & (~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)))) {
                    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__halt_if = 1U;
                    if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__branch_taken_ex) {
                        tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__pc_mux_id = 3U;
                        tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__pc_set = 1U;
                    }
                    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 0xdU;
                }
            } else if ((1U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__halt_if = 1U;
                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__halt_id = 1U;
                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns 
                    = (((((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q) 
                          | (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__trigger_match)) 
                         | ((IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_force_debug_mode) 
                            & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__ebrk_insn_dec))) 
                        | (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_entry_q))
                        ? 0xbU : 0xcU);
            } else {
                tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__pc_set = 1U;
                tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__pc_mux_id = 4U;
                if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_force_wakeup_q) {
                    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__debug_cause = 3U;
                } else if ((4U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_q)) {
                    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__debug_cause = 4U;
                }
                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 5U;
            }
        } else if ((2U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((1U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__pc_set = 1U;
                tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__pc_mux_id = 4U;
                if ((1U & (~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))) {
                    if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__trigger_match) {
                        tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__debug_cause = 2U;
                    } else if (((IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_force_debug_mode) 
                                & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__ebrk_insn_dec))) {
                        tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__debug_cause = 1U;
                    } else if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_entry_q) {
                        tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__debug_cause = 3U;
                    }
                }
                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 5U;
            } else {
                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 5U;
                if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__mret_dec) {
                    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__pc_mux_id 
                        = ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)
                            ? 4U : 5U);
                    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__pc_set = 1U;
                } else if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__uret_dec) {
                    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__pc_mux_id 
                        = ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)
                            ? 4U : 6U);
                    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__pc_set = 1U;
                } else if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__dret_dec) {
                    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__pc_mux_id = 7U;
                    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__pc_set = 1U;
                }
                if ((1U & ((vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_q 
                            >> 2U) & (~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q))))) {
                    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 0xcU;
                }
            }
        } else if ((1U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__halt_if = 1U;
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__halt_id = 1U;
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 5U;
            if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__data_err_q) {
                tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__pc_mux_id = 4U;
                tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__pc_set = 1U;
            } else if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__is_fetch_failed_id) {
                tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__pc_mux_id = 4U;
                tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__pc_set = 1U;
            } else if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_q) {
                tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__pc_mux_id = 4U;
                tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__pc_set = 1U;
                if ((1U & ((vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_q 
                            >> 2U) & (~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q))))) {
                    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 0xcU;
                }
            } else if (((((((((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__ebrk_insn_dec) 
                              | (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__ecall_insn_dec)) 
                             | (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__mret_insn_dec)) 
                            | (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__uret_insn_dec)) 
                           | (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__dret_insn_dec)) 
                          | (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__csr_status)) 
                         | (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__wfi_insn_dec)) 
                        | (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__fencei_insn_dec))) {
                if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__ebrk_insn_dec) {
                    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__pc_mux_id = 4U;
                    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__pc_set = 1U;
                    if ((1U & ((vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_q 
                                >> 2U) & (~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q))))) {
                        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 0xcU;
                    }
                } else if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__ecall_insn_dec) {
                    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__pc_mux_id = 4U;
                    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__pc_set = 1U;
                    if ((1U & ((vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_q 
                                >> 2U) & (~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q))))) {
                        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 0xcU;
                    }
                } else if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__mret_insn_dec) {
                    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 0xaU;
                } else if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__uret_insn_dec) {
                    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 0xaU;
                } else if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__dret_insn_dec) {
                    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 0xaU;
                } else if ((1U & (~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__csr_status)))) {
                    if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__wfi_insn_dec) {
                        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns 
                            = ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_q)
                                ? 0xcU : 3U);
                    } else {
                        tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__pc_mux_id = 1U;
                        tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__pc_set = 1U;
                    }
                }
            }
        } else {
            tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__halt_if = 1U;
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__halt_id = 1U;
            if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_valid) {
                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 9U;
            }
        }
    } else if ((4U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        if ((1U & (~ ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__branch_taken_ex) {
                    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__pc_mux_id = 3U;
                    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__pc_set = 1U;
                } else if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__is_fetch_failed_id) {
                    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__halt_id = 1U;
                    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__halt_if = 1U;
                    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 9U;
                } else if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_valid_id) {
                    if ((((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_q) 
                          | (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__trigger_match)) 
                         & (~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))) {
                        tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__halt_if = 1U;
                        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__halt_id = 1U;
                        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 0xdU;
                    } else if (((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__irq_req_ctrl) 
                                & (~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))) {
                        tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__halt_if = 1U;
                        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__halt_id = 1U;
                        tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__pc_set = 1U;
                        tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__pc_mux_id = 4U;
                    } else {
                        if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec) {
                            tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__halt_if = 1U;
                            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__halt_id = 0U;
                            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns 
                                = ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_ready)
                                    ? 8U : 5U);
                        } else if ((((((((IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__jump_in_dec) 
                                         | (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__ebrk_insn_dec)) 
                                        | (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__wfi_active)) 
                                       | (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__ecall_insn_dec)) 
                                      | (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__fencei_insn_dec)) 
                                     | (((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__mret_insn_dec) 
                                         | (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__uret_insn_dec)) 
                                        | (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__dret_insn_dec))) 
                                    | (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__csr_status))) {
                            if (tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__jump_in_dec) {
                                tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__pc_mux_id = 2U;
                                if ((1U & ((~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__jr_stall)) 
                                           & (~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__jump_done_q))))) {
                                    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__pc_set = 1U;
                                    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__jump_done = 1U;
                                }
                            } else if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__ebrk_insn_dec) {
                                tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__halt_if = 1U;
                                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__halt_id = 0U;
                                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns 
                                    = ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)
                                        ? 0xdU : ((IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_force_debug_mode)
                                                   ? 0xdU
                                                   : 
                                                  ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_ready)
                                                    ? 8U
                                                    : 5U)));
                            } else if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__wfi_active) {
                                tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__halt_if = 1U;
                                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__halt_id = 0U;
                                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns 
                                    = ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_ready)
                                        ? 8U : 5U);
                            } else if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__ecall_insn_dec) {
                                tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__halt_if = 1U;
                                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__halt_id = 0U;
                                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns 
                                    = ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_ready)
                                        ? 8U : 5U);
                            } else if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__fencei_insn_dec) {
                                tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__halt_if = 1U;
                                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__halt_id = 0U;
                                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns 
                                    = ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_ready)
                                        ? 8U : 5U);
                            } else if ((((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__mret_insn_dec) 
                                         | (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__uret_insn_dec)) 
                                        | (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__dret_insn_dec))) {
                                tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__halt_if = 1U;
                                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__halt_id = 0U;
                                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns 
                                    = ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_ready)
                                        ? 8U : 5U);
                            } else if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__csr_status) {
                                tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__halt_if = 1U;
                                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns 
                                    = ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_ready)
                                        ? 8U : 5U);
                            } else {
                                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns 
                                    = ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_ready)
                                        ? 7U : 5U);
                                tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__halt_if = 1U;
                            }
                        }
                        if ((1U & ((vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_q 
                                    >> 2U) & (~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q))))) {
                            tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__halt_if = 1U;
                            if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_ready) {
                                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns 
                                    = (((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec) 
                                        | (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__ecall_insn_dec))
                                        ? 8U : (((~ (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_force_debug_mode)) 
                                                 & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__ebrk_insn_dec))
                                                 ? 8U
                                                 : 
                                                (((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__mret_insn_dec) 
                                                  | (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__uret_insn_dec))
                                                  ? 8U
                                                  : 
                                                 ((IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__branch_in_id)
                                                   ? 0xeU
                                                   : 0xdU))));
                            }
                        }
                    }
                }
            } else {
                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 5U;
                if (((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__irq_req_ctrl) 
                     & (~ ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_q) 
                           | (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q))))) {
                    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__halt_if = 1U;
                    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__halt_id = 1U;
                    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__pc_set = 1U;
                    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__pc_mux_id = 4U;
                }
            }
        }
    } else if ((2U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        if ((1U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__halt_if = 1U;
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__halt_id = 1U;
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 2U;
        } else {
            tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__halt_if = 1U;
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__halt_id = 1U;
            if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__wake_from_sleep) {
                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns 
                    = ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_q)
                        ? 0xcU : 4U);
            }
        }
    } else if ((1U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__pc_mux_id = 0U;
        tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__pc_set = 1U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns 
            = ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_q)
                ? 0xcU : 4U);
    } else if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__sleep_unit_i__DOT__fetch_enable_q) {
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 1U;
    }
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AReg_DN 
        = ((IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ARegEn_S)
            ? (((~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT____VdfgTmp_hb0784dbb__0)) 
                & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__LoadEn_S))
                ? (tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AddTmp_D 
                   + tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AddMux_D)
                : (tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AddTmp_D 
                   - tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AddMux_D))
            : vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AReg_DP);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_n 
        = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_q;
    if ((1U & (~ ((((((((1U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr)) 
                        | (2U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))) 
                       | (3U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))) 
                      | (0x300U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))) 
                     | (0x304U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))) 
                    | (0x305U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))) 
                   | (0x340U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))) 
                  | (0x341U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr)))))) {
        if ((0x342U != (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))) {
            if ((0x7b0U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))) {
                if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) {
                    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_n 
                        = ((0xffff7fffU & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_n) 
                           | (0x8000U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int));
                    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_n 
                        = ((0xffffc3ffU & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_n) 
                           | (0x800U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int));
                    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_n 
                        = (0xfffffdffU & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_n);
                    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_n 
                        = (0xffffffefU & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_n);
                    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_n 
                        = (3U | ((0xfffffff8U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_n) 
                                 | (4U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int)));
                }
            }
        }
    }
    if (((((((((1U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr)) 
               | (2U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))) 
              | (3U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))) 
             | (0x300U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))) 
            | (0x304U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))) 
           | (0x305U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))) 
          | (0x340U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))) 
         | (0x341U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr)))) {
        if ((1U != (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))) {
            if ((2U != (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))) {
                if ((3U != (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))) {
                    if ((0x300U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))) {
                        if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) {
                            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_n 
                                = ((0x40U & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int 
                                             << 6U)) 
                                   | ((0x20U & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int 
                                                << 2U)) 
                                      | ((0x10U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int) 
                                         | ((8U & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int 
                                                   >> 4U)) 
                                            | ((6U 
                                                & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int 
                                                   >> 0xaU)) 
                                               | (1U 
                                                  & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int 
                                                     >> 0x11U)))))));
                        }
                    }
                }
            }
        }
    }
    if (tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_save_cause) {
        if ((1U & (~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__debug_csr_save)))) {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_n 
                = ((0x77U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_n)) 
                   | (8U & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_q) 
                            >> 2U)));
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_n 
                = (0x5fU & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_n));
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_n 
                = (6U | (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_n));
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mcause_n 
                = tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_cause;
        }
    } else if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_restore_mret_id) {
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_n 
            = ((0x5fU & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_n)) 
               | (0x20U & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_q) 
                           << 2U)));
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_n 
            = (0xeU | (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_n));
    }
    if (((((((((1U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr)) 
               | (2U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))) 
              | (3U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))) 
             | (0x300U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))) 
            | (0x304U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))) 
           | (0x305U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))) 
          | (0x340U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))) 
         | (0x341U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr)))) {
        if ((1U != (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))) {
            if ((2U != (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))) {
                if ((3U != (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))) {
                    if ((0x300U != (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))) {
                        if ((0x304U != (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))) {
                            if ((0x305U != (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))) {
                                if ((0x340U != (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))) {
                                    if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) {
                                        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mepc_n 
                                            = (0xfffffffeU 
                                               & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else if ((0x342U != (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))) {
        if ((0x7b0U != (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))) {
            if ((0x7b1U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))) {
                if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) {
                    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__depc_n 
                        = (0xfffffffeU & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int);
                }
            }
        }
    }
    if (tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_save_cause) {
        if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_save_if) {
            tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__exception_pc 
                = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_q;
        } else if (tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_save_id) {
            tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__exception_pc 
                = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__pc_id;
        }
        if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__debug_csr_save) {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__depc_n 
                = tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__exception_pc;
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_n 
                = (3U | vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_n);
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_n 
                = ((0xfffffe3fU & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_n) 
                   | ((IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__debug_cause) 
                      << 6U));
        } else {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mepc_n 
                = tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__exception_pc;
        }
    }
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__clear_instr_valid 
        = ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_ready) 
           | ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__halt_id) 
              | (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__branch_taken_ex)));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_valid 
        = ((~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__halt_id)) 
           & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_ready));
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__branch_addr_n = 0x80U;
    if ((8U & (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__pc_mux_id))) {
        if ((1U & (~ ((IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__pc_mux_id) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__pc_mux_id) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__pc_mux_id)))) {
                    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__branch_addr_n = 0U;
                }
            }
        }
    } else {
        tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__branch_addr_n 
            = ((4U & (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__pc_mux_id))
                ? ((2U & (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__pc_mux_id))
                    ? ((1U & (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__pc_mux_id))
                        ? vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__depc_q
                        : 0U) : ((1U & (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__pc_mux_id))
                                  ? vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mepc_q
                                  : vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__exc_pc))
                : ((2U & (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__pc_mux_id))
                    ? ((1U & (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__pc_mux_id))
                        ? vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_c_ex
                        : vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__jump_target)
                    : ((1U & (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__pc_mux_id))
                        ? ((IData)(4U) + vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__pc_id)
                        : 0x80U)));
    }
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_n 
        = (((0U == (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__pc_mux_id)) 
            & (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__pc_set))
            ? 0U : vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_q);
    if (((((((((1U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr)) 
               | (2U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))) 
              | (3U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))) 
             | (0x300U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))) 
            | (0x304U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))) 
           | (0x305U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))) 
          | (0x340U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))) 
         | (0x341U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr)))) {
        if ((1U != (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))) {
            if ((2U != (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))) {
                if ((3U != (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))) {
                    if ((0x300U != (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))) {
                        if ((0x304U != (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))) {
                            if ((0x305U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))) {
                                if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) {
                                    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_n 
                                        = (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int 
                                           >> 8U);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__branch_req = 0U;
    if (tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__pc_set) {
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__branch_req = 1U;
    }
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__minstret 
        = ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_valid) 
           & ((~ ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec) 
                  | ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__ebrk_insn_dec) 
                     | (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__ecall_insn_dec)))) 
              & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__is_decoding)));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__next_flush_cnt 
        = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__flush_cnt_q;
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__next_state 
        = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state;
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_n 
        = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_q;
    if ((0U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
        if ((3U == (3U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__fetch_rdata))) {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__next_state = 0U;
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_n 
                = ((IData)(4U) + vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_q);
            if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__hwlp_update_pc_q) {
                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_n 
                    = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__hwlp_addr_q;
            }
        } else {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__next_state = 1U;
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_n 
                = ((IData)(2U) + vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_q);
        }
    } else if ((1U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
        if ((3U == (3U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__r_instr_h)))) {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__next_state = 1U;
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_n 
                = ((IData)(4U) + vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_q);
        } else {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__next_state = 2U;
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_n 
                = ((IData)(2U) + vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_q);
        }
    } else if ((2U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
        if ((3U == (3U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__fetch_rdata))) {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__next_state = 0U;
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_n 
                = ((IData)(4U) + vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_q);
        } else {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__next_state = 1U;
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_n 
                = ((IData)(2U) + vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_q);
        }
    } else if ((3U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
        if ((3U == (3U & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__fetch_rdata 
                          >> 0x10U)))) {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__next_state = 1U;
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_n 
                = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_q;
        } else {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__next_state = 0U;
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_n 
                = ((IData)(2U) + vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_q);
        }
    }
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__trans_addr 
        = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__trans_addr_q;
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__trans_valid 
        = ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_req_int) 
           & (2U > (((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__branch_req)
                      ? 0U : (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q)) 
                    + (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__cnt_q))));
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT____VdfgTmp_hf384d751__0 
        = (1U & (~ ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__branch_req) 
                    | (0U < (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__flush_cnt_q)))));
    if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__state_q) {
        if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__state_q) {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__trans_addr 
                = ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__branch_req)
                    ? (0xfffffffcU & tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__branch_addr_n)
                    : vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__trans_addr_q);
        }
    } else {
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__trans_addr 
            = ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__branch_req)
                ? (0xfffffffcU & tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__branch_addr_n)
                : ((IData)(4U) + (0xfffffffcU & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__trans_addr_q)));
    }
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_addr_pmp 
        = ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__state_q)
            ? vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__gen_no_trans_stable__DOT__obi_addr_q
            : (0xfffffffcU & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__trans_addr));
    if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__state_q) {
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__next_state = 1U;
        if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__state_q) {
            if (((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__trans_valid) 
                 & (~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__state_q)))) {
                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__next_state = 0U;
            }
        }
    } else {
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__next_state = 0U;
        if (((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__branch_req) 
             & (~ ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__trans_valid) 
                   & (~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__state_q)))))) {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__next_state = 1U;
        }
    }
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__next_cnt 
        = (3U & (((~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__state_q)) 
                  & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__trans_valid))
                  ? ((IData)(vlSymsp->TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i.instr_rvalid_o)
                      ? (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__cnt_q)
                      : ((IData)(1U) + (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__cnt_q)))
                  : ((IData)(vlSymsp->TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i.instr_rvalid_o)
                      ? ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__cnt_q) 
                         - (IData)(1U)) : (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__cnt_q))));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_req_pmp 
        = ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__state_q) 
           | (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__trans_valid));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__fetch_valid 
        = ((IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT____VdfgTmp_hf384d751__0) 
           & ((0U != (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q)) 
              | (IData)(vlSymsp->TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i.instr_rvalid_o)));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_valid 
        = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__fetch_valid;
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_ready = 1U;
    if ((0U != (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
        if ((1U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
            if ((3U != (3U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__r_instr_h)))) {
                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_valid = 1U;
                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_ready 
                    = (1U & (~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__fetch_valid)));
            }
        } else if ((2U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_valid 
                = (1U & ((~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__aligner_ready_q)) 
                         | (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__fetch_valid)));
        } else if ((3U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
            if ((3U == (3U & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__fetch_rdata 
                              >> 0x10U)))) {
                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_valid = 0U;
            }
        }
    }
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__if_valid 
        = ((~ (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__halt_if)) 
           & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__fetch_valid) 
              & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_ready)));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__update_state = 0U;
    if ((0U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__update_state 
            = ((3U == (3U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__fetch_rdata))
                ? ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__fetch_valid) 
                   & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__if_valid))
                : ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__fetch_valid) 
                   & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__if_valid)));
    } else if ((1U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__update_state 
            = ((3U == (3U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__r_instr_h)))
                ? ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__fetch_valid) 
                   & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__if_valid))
                : (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__if_valid));
    } else if ((2U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__update_state 
            = ((3U == (3U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__fetch_rdata))
                ? (((~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__aligner_ready_q)) 
                    | (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__fetch_valid)) 
                   & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__if_valid))
                : (((~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__aligner_ready_q)) 
                    | (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__fetch_valid)) 
                   & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__if_valid)));
    } else if ((3U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__update_state 
            = ((3U == (3U & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__fetch_rdata 
                             >> 0x10U))) ? ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__fetch_valid) 
                                            & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__if_valid))
                : ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__fetch_valid) 
                   & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__if_valid)));
    }
    if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__branch_req) {
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__next_flush_cnt 
            = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__cnt_q;
        if (((IData)(vlSymsp->TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i.instr_rvalid_o) 
             & (0U < (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__cnt_q)))) {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__next_flush_cnt 
                = (3U & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__cnt_q) 
                         - (IData)(1U)));
        }
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__next_state 
            = ((2U & tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__branch_addr_n)
                ? 3U : 0U);
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_n 
            = (0xfffffffeU & tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__branch_addr_n);
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__update_state = 1U;
    } else if (((IData)(vlSymsp->TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i.instr_rvalid_o) 
                & (0U < (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__flush_cnt_q)))) {
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__next_flush_cnt 
            = (3U & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__flush_cnt_q) 
                     - (IData)(1U)));
    }
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__fetch_ready = 0U;
    if ((1U & (~ (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__pc_set)))) {
        if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__fetch_valid) {
            if (((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_req_int) 
                 & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__if_valid))) {
                tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__fetch_ready 
                    = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_ready;
            }
        }
    }
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_pop 
        = ((0U != (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q)) 
           & (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__fetch_ready));
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_push 
        = ((IData)(vlSymsp->TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i.instr_rvalid_o) 
           & ((IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT____VdfgTmp_hf384d751__0) 
              & ((0U != (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q)) 
                 | (~ (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__fetch_ready)))));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__read_pointer_n 
        = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__read_pointer_q;
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__gate_clock = 1U;
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_n 
        = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q;
    if (((IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_pop) 
         & (0U != (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q)))) {
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__read_pointer_n 
            = (1U & ((IData)(1U) + (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__read_pointer_q)));
    }
    if (((IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_push) 
         & (2U != (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q)))) {
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__gate_clock = 0U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_n 
            = (3U & ((IData)(1U) + (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q)));
    }
    if (((IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_pop) 
         & (0U != (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q)))) {
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_n 
            = (3U & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_push) 
           & (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_pop)) 
          & (2U != (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q))) 
         & (0U != (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q)))) {
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_n 
            = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q;
    }
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__write_pointer_n 
        = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__write_pointer_q;
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__mem_n 
        = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__mem_q;
    if (((IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_push) 
         & (2U != (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q)))) {
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__write_pointer_n 
            = (1U & ((IData)(1U) + (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__write_pointer_q)));
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__mem_n 
            = (((~ (0xffffffffULL << (0x3fU & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__write_pointer_q) 
                                               << 5U)))) 
                & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__mem_n) 
               | ((QData)((IData)(vlSymsp->TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i.__Vcellout__instr_rvalid_stall_i__rdata_o)) 
                  << (0x3fU & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__write_pointer_q) 
                               << 5U))));
    }
}

void Vtb_top_verilator_mm_ram__R16___act_sequent__TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i__0(Vtb_top_verilator_mm_ram__R16* vlSelf);
void Vtb_top_verilator_mm_ram__R16___act_sequent__TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i__1(Vtb_top_verilator_mm_ram__R16* vlSelf);
void Vtb_top_verilator___024root___act_sequent__TOP__1(Vtb_top_verilator___024root* vlSelf);
void Vtb_top_verilator___024root___act_sequent__TOP__2(Vtb_top_verilator___024root* vlSelf);
void Vtb_top_verilator___024root___act_sequent__TOP__3(Vtb_top_verilator___024root* vlSelf);
void Vtb_top_verilator___024root___act_sequent__TOP__4(Vtb_top_verilator___024root* vlSelf);
void Vtb_top_verilator___024root___act_comb__TOP__0(Vtb_top_verilator___024root* vlSelf);
void Vtb_top_verilator___024root___act_comb__TOP__1(Vtb_top_verilator___024root* vlSelf);
void Vtb_top_verilator_mm_ram__R16___act_sequent__TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i__3(Vtb_top_verilator_mm_ram__R16* vlSelf);
void Vtb_top_verilator___024root___act_comb__TOP__3(Vtb_top_verilator___024root* vlSelf);
void Vtb_top_verilator___024root___act_comb__TOP__6(Vtb_top_verilator___024root* vlSelf);
void Vtb_top_verilator___024root___act_comb__TOP__7(Vtb_top_verilator___024root* vlSelf);

void Vtb_top_verilator___024root___eval_act(Vtb_top_verilator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_verilator___024root___eval_act\n"); );
    // Body
    if (vlSelf->__VpreTriggered.at(1U)) {
        Vtb_top_verilator_mm_ram__R16___act_sequent__TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i__0((&vlSymsp->TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i));
    }
    if (vlSelf->__VactTriggered.at(1U)) {
        Vtb_top_verilator_mm_ram__R16___act_sequent__TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i__1((&vlSymsp->TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i));
        Vtb_top_verilator___024root___act_sequent__TOP__0(vlSelf);
    }
    if (vlSelf->__VactTriggered.at(5U)) {
        Vtb_top_verilator___024root___act_sequent__TOP__1(vlSelf);
    }
    if (vlSelf->__VactTriggered.at(6U)) {
        Vtb_top_verilator___024root___act_sequent__TOP__2(vlSelf);
    }
    if (vlSelf->__VactTriggered.at(2U)) {
        Vtb_top_verilator___024root___act_sequent__TOP__3(vlSelf);
    }
    if (vlSelf->__VactTriggered.at(3U)) {
        Vtb_top_verilator___024root___act_sequent__TOP__4(vlSelf);
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        Vtb_top_verilator_mm_ram__R16___ico_sequent__TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i__0((&vlSymsp->TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i));
        Vtb_top_verilator___024root___act_sequent__TOP__5(vlSelf);
    }
    if ((vlSelf->__VactTriggered.at(5U) | vlSelf->__VactTriggered.at(6U))) {
        Vtb_top_verilator___024root___act_comb__TOP__0(vlSelf);
    }
    if ((vlSelf->__VactTriggered.at(2U) | vlSelf->__VactTriggered.at(3U))) {
        Vtb_top_verilator___024root___act_comb__TOP__1(vlSelf);
    }
    if ((vlSelf->__VactTriggered.at(0U) | vlSelf->__VactTriggered.at(1U))) {
        Vtb_top_verilator___024root___act_comb__TOP__2(vlSelf);
    }
    if (vlSelf->__VactTriggered.at(1U)) {
        Vtb_top_verilator_mm_ram__R16___act_sequent__TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i__3((&vlSymsp->TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i));
        Vtb_top_verilator___024root___act_sequent__TOP__6(vlSelf);
    }
    if ((((vlSelf->__VactTriggered.at(2U) | vlSelf->__VactTriggered.at(3U)) 
          | vlSelf->__VactTriggered.at(5U)) | vlSelf->__VactTriggered.at(6U))) {
        Vtb_top_verilator___024root___act_comb__TOP__3(vlSelf);
    }
    if (((vlSelf->__VactTriggered.at(0U) | vlSelf->__VactTriggered.at(1U)) 
         | vlSelf->__VactTriggered.at(4U))) {
        Vtb_top_verilator___024root___act_comb__TOP__4(vlSelf);
        Vtb_top_verilator_mm_ram__R16___ico_comb__TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i__0((&vlSymsp->TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i));
        Vtb_top_verilator___024root___ico_comb__TOP__1(vlSelf);
    }
    if (((((vlSelf->__VactTriggered.at(1U) | vlSelf->__VactTriggered.at(2U)) 
           | vlSelf->__VactTriggered.at(3U)) | vlSelf->__VactTriggered.at(5U)) 
         | vlSelf->__VactTriggered.at(6U))) {
        Vtb_top_verilator___024root___act_comb__TOP__6(vlSelf);
    }
    if (((((vlSelf->__VactTriggered.at(0U) | vlSelf->__VactTriggered.at(1U)) 
           | vlSelf->__VactTriggered.at(2U)) | vlSelf->__VactTriggered.at(3U)) 
         | vlSelf->__VactTriggered.at(4U))) {
        Vtb_top_verilator___024root___act_comb__TOP__7(vlSelf);
    }
}

extern const VlUnpacked<CData/*3:0*/, 512> Vtb_top_verilator__ConstPool__TABLE_h54c568fa_0;

VL_INLINE_OPT void Vtb_top_verilator___024root___nba_sequent__TOP__0(Vtb_top_verilator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_verilator___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_we_wb_power;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_we_wb_power = 0;
    CData/*0:0*/ tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_alu_we_fw_power;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_alu_we_fw_power = 0;
    CData/*0:0*/ tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__rega_used_dec;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__rega_used_dec = 0;
    CData/*0:0*/ tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__regb_used_dec;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__regb_used_dec = 0;
    CData/*0:0*/ tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__regc_used_dec;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__regc_used_dec = 0;
    CData/*1:0*/ tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__regc_mux;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__regc_mux = 0;
    CData/*0:0*/ tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__imm_a_mux_sel;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__imm_a_mux_sel = 0;
    CData/*1:0*/ tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__ctrl_transfer_target_mux_sel;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__ctrl_transfer_target_mux_sel = 0;
    CData/*0:0*/ tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT____VdfgTmp_h6f26da3e__0;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT____VdfgTmp_h6f26da3e__0 = 0;
    IData/*31:0*/ tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual = 0;
    IData/*31:0*/ tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_rev;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_rev = 0;
    IData/*31:0*/ tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg_rev;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg_rev = 0;
    CData/*0:0*/ tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_b_negate;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_b_negate = 0;
    IData/*31:0*/ tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_a;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_a = 0;
    IData/*31:0*/ tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_b;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_b = 0;
    QData/*35:0*/ tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a = 0;
    QData/*35:0*/ tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b = 0;
    CData/*3:0*/ tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal = 0;
    CData/*3:0*/ tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater = 0;
    CData/*3:0*/ tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed = 0;
    CData/*3:0*/ tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_vec;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_vec = 0;
    CData/*3:0*/ tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater_vec;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater_vec = 0;
    CData/*3:0*/ tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__sel_minmax;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__sel_minmax = 0;
    IData/*31:0*/ tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__minmax_b;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__minmax_b = 0;
    CData/*1:0*/ tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg0_sel;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg0_sel = 0;
    CData/*0:0*/ tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT____VdfgTmp_h1a4ddd03__0;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT____VdfgTmp_h1a4ddd03__0 = 0;
    CData/*1:0*/ tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_subword;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_subword = 0;
    CData/*1:0*/ tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_signed;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_signed = 0;
    CData/*0:0*/ tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_shift_arith;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_shift_arith = 0;
    IData/*16:0*/ tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT____VdfgTmp_hee2f451c__0;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT____VdfgTmp_hee2f451c__0 = 0;
    CData/*0:0*/ tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT____VdfgTmp_ha99777ac__0;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT____VdfgTmp_ha99777ac__0 = 0;
    IData/*16:0*/ tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT____VdfgTmp_h84d06556__0;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT____VdfgTmp_h84d06556__0 = 0;
    IData/*16:0*/ tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT____VdfgTmp_hde673cc7__0;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT____VdfgTmp_hde673cc7__0 = 0;
    IData/*31:0*/ tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_mie_wdata;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_mie_wdata = 0;
    CData/*0:0*/ tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_mie_we;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_mie_we = 0;
    CData/*0:0*/ tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_we;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_we = 0;
    CData/*0:0*/ tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hf978b0df__0;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hf978b0df__0 = 0;
    CData/*0:0*/ tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hfae5cc51__0;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hfae5cc51__0 = 0;
    CData/*0:0*/ tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hfa9e50d1__0;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hfa9e50d1__0 = 0;
    CData/*0:0*/ tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hfa0d4e0a__0;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hfa0d4e0a__0 = 0;
    CData/*0:0*/ tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hfaa6217c__0;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hfaa6217c__0 = 0;
    CData/*0:0*/ tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hfa9200dc__0;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hfa9200dc__0 = 0;
    CData/*0:0*/ tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hfa8eff7a__0;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hfa8eff7a__0 = 0;
    CData/*0:0*/ tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hf97d8181__0;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hf97d8181__0 = 0;
    CData/*0:0*/ tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hfa14c80e__0;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hfa14c80e__0 = 0;
    CData/*0:0*/ tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hfa012312__0;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hfa012312__0 = 0;
    CData/*0:0*/ tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hfa006cd7__0;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hfa006cd7__0 = 0;
    CData/*0:0*/ tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hfaab2034__0;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hfaab2034__0 = 0;
    CData/*0:0*/ tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hf79b507d__0;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hf79b507d__0 = 0;
    CData/*0:0*/ tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hf797f536__0;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hf797f536__0 = 0;
    CData/*0:0*/ tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hf7937230__0;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hf7937230__0 = 0;
    CData/*0:0*/ tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hf7af7218__0;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hf7af7218__0 = 0;
    CData/*0:0*/ tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hf78bef5f__0;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hf78bef5f__0 = 0;
    CData/*0:0*/ tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hb2f596dc__0;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hb2f596dc__0 = 0;
    CData/*0:0*/ tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hb2fa0736__0;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hb2fa0736__0 = 0;
    CData/*0:0*/ tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hf79889aa__0;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hf79889aa__0 = 0;
    CData/*0:0*/ tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hb2fe703b__0;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hb2fe703b__0 = 0;
    CData/*0:0*/ tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hb265d378__0;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hb265d378__0 = 0;
    CData/*0:0*/ tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hb2e9a33a__0;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hb2e9a33a__0 = 0;
    CData/*0:0*/ tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hf78c5516__0;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hf78c5516__0 = 0;
    CData/*0:0*/ tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hf645039a__0;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hf645039a__0 = 0;
    CData/*0:0*/ tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hf7a41e6e__0;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hf7a41e6e__0 = 0;
    CData/*0:0*/ tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hf7a322dc__0;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hf7a322dc__0 = 0;
    CData/*0:0*/ tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hb2fa6057__0;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hb2fa6057__0 = 0;
    CData/*0:0*/ tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hb2cbdefc__0;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hb2cbdefc__0 = 0;
    CData/*0:0*/ tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hb2246737__0;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hb2246737__0 = 0;
    CData/*0:0*/ tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hf7d10b3a__0;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hf7d10b3a__0 = 0;
    CData/*0:0*/ tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hf7d5534e__0;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hf7d5534e__0 = 0;
    CData/*0:0*/ tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h01bd208f__0;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h01bd208f__0 = 0;
    CData/*0:0*/ tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hbe3c22b2__0;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hbe3c22b2__0 = 0;
    CData/*0:0*/ tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h7e7737ea__0;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h7e7737ea__0 = 0;
    SData/*8:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    if ((1U & (~ (IData)(vlSelf->rst_ni)))) {
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__hwlp_addr_q = 0U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mult_clpx_shift_ex = 0U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mult_dot_op_c_ex = 0U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__apu_lat_ex = 0U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mult_clpx_img_ex = 0U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mult_is_clpx_ex = 0U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mult_dot_op_a_ex = 0U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mult_dot_signed_ex = 0U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mult_dot_op_b_ex = 0U;
    }
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__state_q 
        = ((IData)(vlSelf->rst_ni) & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__next_state));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mhpmevent_minstret 
        = ((IData)(vlSelf->rst_ni) & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__minstret));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mhpmevent_store 
        = ((IData)(vlSelf->rst_ni) & (((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__minstret) 
                                       & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__data_req_id)) 
                                      & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__data_we_id)));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mhpmevent_load 
        = ((IData)(vlSelf->rst_ni) & (((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__minstret) 
                                       & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__data_req_id)) 
                                      & (~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__data_we_id))));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResInv_SP 
        = ((IData)(vlSelf->rst_ni) & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResInv_SN));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__RemSel_SP 
        = ((IData)(vlSelf->rst_ni) & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__RemSel_SN));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__CompInv_SP 
        = ((IData)(vlSelf->rst_ni) & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__CompInv_SN));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[3U] 
        = ((0xffff0000U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[3U]) 
           | ((IData)(vlSelf->rst_ni) ? (0xffffU & 
                                         vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[3U])
               : 0U));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mhpmevent_imiss 
        = ((IData)(vlSelf->rst_ni) & (~ ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__branch_req) 
                                         | (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__fetch_valid))));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mhpmevent_compressed 
        = ((IData)(vlSelf->rst_ni) & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__minstret) 
                                      & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__is_compressed_id)));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mhpmevent_jump 
        = ((IData)(vlSelf->rst_ni) & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__minstret) 
                                      & ((1U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__ctrl_transfer_insn_in_id)) 
                                         | (2U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__ctrl_transfer_insn_in_id)))));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_entry_q 
        = ((IData)(vlSelf->rst_ni) & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_entry_n));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_force_wakeup_q 
        = ((IData)(vlSelf->rst_ni) & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_force_wakeup_n));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__data_err_q = 0U;
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_q 
        = ((0xfffffffeU & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_q) 
           | (1U & ((~ (IData)(vlSelf->rst_ni)) | vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_n)));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_q 
        = ((0xfffffff3U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_q) 
           | ((8U & (((~ (IData)(vlSelf->rst_ni)) << 3U) 
                     | (0xfffffff8U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_n))) 
              | (4U & (((~ (IData)(vlSelf->rst_ni)) 
                        << 2U) | (0xfffffffcU & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_n)))));
    if (vlSelf->rst_ni) {
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_q 
            = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_n;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__jump_done_q 
            = ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__jump_done) 
               & (~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_ready)));
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mhpmevent_branch_taken 
            = ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mhpmevent_branch) 
               & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result) 
                  >> 3U));
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[0U] = 0U;
        if ((1U & (~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__gate_clock)))) {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__mem_q 
                = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__mem_n;
        }
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
            = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DN;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__Cnt_DP 
            = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__Cnt_DN;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__BReg_DP 
            = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__BReg_DN;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__State_SP 
            = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__State_SN;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__dscratch0_q 
            = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__dscratch0_n;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__dscratch1_q 
            = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__dscratch1_n;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mscratch_q 
            = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mscratch_n;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mcause_q 
            = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mcause_n;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__flush_cnt_q 
            = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__next_flush_cnt;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AReg_DP 
            = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AReg_DN;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_q 
            = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_n;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_mode_q 
            = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_mode_n;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__depc_q 
            = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__depc_n;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mepc_q 
            = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mepc_n;
        if (((~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__state_q)) 
             & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__next_state))) {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__gen_no_trans_stable__DOT__obi_addr_q 
                = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_addr_pmp;
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__gen_no_trans_stable__DOT__obi_we_q 
                = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__obi_we_o;
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__gen_no_trans_stable__DOT__obi_be_q 
                = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__obi_be_o;
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__gen_no_trans_stable__DOT__obi_wdata_q 
                = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__obi_wdata_o;
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__gen_no_trans_stable__DOT__obi_atop_q 
                = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__obi_atop_o;
        }
        if (((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__branch_req) 
             | ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__trans_valid) 
                & (~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__state_q))))) {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__trans_addr_q 
                = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__trans_addr;
        }
        if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__branch_req) {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__read_pointer_q = 0U;
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__write_pointer_q = 0U;
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q = 0U;
        } else {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__read_pointer_q 
                = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__read_pointer_n;
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__write_pointer_q 
                = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__write_pointer_n;
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q 
                = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_n;
        }
        if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_save) {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_carry_q 
                = (1U & ((~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_clearcarry)) 
                         & (IData)((vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_mac 
                                    >> 0x20U))));
        } else if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_ready) {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_carry_q = 0U;
        }
        if ((1U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower)) {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0U] 
                = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int;
        } else if ((1U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_upper)) {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[1U] 
                = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int;
        } else if ((1U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_increment)) {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0U] 
                = (IData)((((QData)((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[1U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0U]))));
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[1U] 
                = (IData)(((((QData)((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[1U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0U]))) 
                           >> 0x20U));
        }
        if ((4U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower)) {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[4U] 
                = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int;
        } else if ((4U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_upper)) {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[5U] 
                = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int;
        } else if ((4U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_increment)) {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[4U] 
                = (IData)((((QData)((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[5U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[4U]))));
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[5U] 
                = (IData)(((((QData)((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[5U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[4U]))) 
                           >> 0x20U));
        }
        if ((8U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower)) {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[6U] 
                = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int;
        } else if ((8U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_upper)) {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[7U] 
                = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int;
        } else if ((8U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_increment)) {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[6U] 
                = (IData)((((QData)((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[7U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[6U]))));
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[7U] 
                = (IData)(((((QData)((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[7U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[6U]))) 
                           >> 0x20U));
        }
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mhpmevent_jr_stall 
            = (((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__jr_stall) 
                & (~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__halt_id))) 
               & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__id_valid_q));
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mhpmevent_ld_stall 
            = (((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__load_stall) 
                & (~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__halt_id))) 
               & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__id_valid_q));
        if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__update_state) {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__hwlp_update_pc_q = 0U;
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__aligner_ready_q 
                = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_ready;
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state 
                = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__next_state;
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__r_instr_h 
                = (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__fetch_rdata 
                   >> 0x10U);
        }
        if (((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__if_valid) 
             & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_valid))) {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__illegal_c_insn_id 
                = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__illegal_c_insn;
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_valid_id = 1U;
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__is_fetch_failed_id = 0U;
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__pc_id 
                = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_q;
        } else if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__clear_instr_valid) {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_valid_id = 0U;
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__is_fetch_failed_id = 0U;
        }
        if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__update_state) {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_q 
                = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_n;
        }
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_q 
            = (6U | (0x28U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_n)));
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs 
            = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_q 
            = (0xffff0888U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT____Vcellinp__top_i__irq_i);
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS 
            = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_NS;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_q 
            = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_n;
        if (((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hebd32772__0) 
             & (0x7a1U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr)))) {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_control_exec_q 
                = (1U & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int 
                         >> 2U));
        }
        if (((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hebd32772__0) 
             & (0x7a2U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr)))) {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_q 
                = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int;
        }
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mie_q 
            = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mie_n;
        if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_valid) {
            if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_we_ex) {
                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__regfile_we_lsu = 1U;
                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__regfile_waddr_lsu 
                    = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_waddr_ex;
            } else {
                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__regfile_we_lsu = 0U;
            }
        } else if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__lsu_ready_wb) {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__regfile_we_lsu = 0U;
        }
        if ((2U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_dec)) {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[1U] 
                = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_alu_wdata_fw;
        } else if ((2U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[1U] 
                = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__lsu_rdata;
        }
        if ((4U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_dec)) {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[2U] 
                = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_alu_wdata_fw;
        } else if ((4U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[2U] 
                = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__lsu_rdata;
        }
        if ((8U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_dec)) {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[3U] 
                = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_alu_wdata_fw;
        } else if ((8U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[3U] 
                = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__lsu_rdata;
        }
        if ((0x10U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_dec)) {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[4U] 
                = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_alu_wdata_fw;
        } else if ((0x10U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[4U] 
                = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__lsu_rdata;
        }
        if ((0x20U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_dec)) {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[5U] 
                = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_alu_wdata_fw;
        } else if ((0x20U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[5U] 
                = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__lsu_rdata;
        }
        if ((0x40U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_dec)) {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[6U] 
                = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_alu_wdata_fw;
        } else if ((0x40U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[6U] 
                = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__lsu_rdata;
        }
        if ((0x80U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_dec)) {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[7U] 
                = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_alu_wdata_fw;
        } else if ((0x80U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[7U] 
                = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__lsu_rdata;
        }
        if ((0x100U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_dec)) {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[8U] 
                = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_alu_wdata_fw;
        } else if ((0x100U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[8U] 
                = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__lsu_rdata;
        }
        if ((0x200U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_dec)) {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[9U] 
                = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_alu_wdata_fw;
        } else if ((0x200U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[9U] 
                = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__lsu_rdata;
        }
        if ((0x400U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_dec)) {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[0xaU] 
                = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_alu_wdata_fw;
        } else if ((0x400U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[0xaU] 
                = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__lsu_rdata;
        }
        if ((0x800U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_dec)) {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[0xbU] 
                = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_alu_wdata_fw;
        } else if ((0x800U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[0xbU] 
                = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__lsu_rdata;
        }
        if ((0x1000U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_dec)) {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[0xcU] 
                = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_alu_wdata_fw;
        } else if ((0x1000U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[0xcU] 
                = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__lsu_rdata;
        }
        if ((0x2000U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_dec)) {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[0xdU] 
                = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_alu_wdata_fw;
        } else if ((0x2000U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[0xdU] 
                = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__lsu_rdata;
        }
        if ((0x4000U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_dec)) {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[0xeU] 
                = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_alu_wdata_fw;
        } else if ((0x4000U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[0xeU] 
                = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__lsu_rdata;
        }
        if ((0x8000U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_dec)) {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[0xfU] 
                = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_alu_wdata_fw;
        } else if ((0x8000U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[0xfU] 
                = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__lsu_rdata;
        }
        if ((0x10000U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_dec)) {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[0x10U] 
                = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_alu_wdata_fw;
        } else if ((0x10000U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[0x10U] 
                = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__lsu_rdata;
        }
        if ((0x20000U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_dec)) {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[0x11U] 
                = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_alu_wdata_fw;
        } else if ((0x20000U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[0x11U] 
                = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__lsu_rdata;
        }
        if ((0x40000U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_dec)) {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[0x12U] 
                = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_alu_wdata_fw;
        } else if ((0x40000U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[0x12U] 
                = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__lsu_rdata;
        }
        if ((0x80000U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_dec)) {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[0x13U] 
                = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_alu_wdata_fw;
        } else if ((0x80000U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[0x13U] 
                = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__lsu_rdata;
        }
        if ((0x100000U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_dec)) {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[0x14U] 
                = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_alu_wdata_fw;
        } else if ((0x100000U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[0x14U] 
                = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__lsu_rdata;
        }
        if ((0x200000U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_dec)) {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[0x15U] 
                = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_alu_wdata_fw;
        } else if ((0x200000U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[0x15U] 
                = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__lsu_rdata;
        }
        if ((0x400000U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_dec)) {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[0x16U] 
                = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_alu_wdata_fw;
        } else if ((0x400000U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[0x16U] 
                = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__lsu_rdata;
        }
        if ((0x800000U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_dec)) {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[0x17U] 
                = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_alu_wdata_fw;
        } else if ((0x800000U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[0x17U] 
                = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__lsu_rdata;
        }
        if ((0x1000000U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_dec)) {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[0x18U] 
                = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_alu_wdata_fw;
        } else if ((0x1000000U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[0x18U] 
                = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__lsu_rdata;
        }
        if ((0x2000000U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_dec)) {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[0x19U] 
                = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_alu_wdata_fw;
        } else if ((0x2000000U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[0x19U] 
                = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__lsu_rdata;
        }
        if ((0x4000000U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_dec)) {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[0x1aU] 
                = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_alu_wdata_fw;
        } else if ((0x4000000U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[0x1aU] 
                = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__lsu_rdata;
        }
        if ((0x8000000U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_dec)) {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[0x1bU] 
                = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_alu_wdata_fw;
        } else if ((0x8000000U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[0x1bU] 
                = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__lsu_rdata;
        }
        if ((0x10000000U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_dec)) {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[0x1cU] 
                = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_alu_wdata_fw;
        } else if ((0x10000000U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[0x1cU] 
                = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__lsu_rdata;
        }
        if ((0x20000000U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_dec)) {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[0x1dU] 
                = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_alu_wdata_fw;
        } else if ((0x20000000U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[0x1dU] 
                = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__lsu_rdata;
        }
        if ((0x40000000U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_dec)) {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[0x1eU] 
                = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_alu_wdata_fw;
        } else if ((0x40000000U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[0x1eU] 
                = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__lsu_rdata;
        }
        if ((vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_dec 
             >> 0x1fU)) {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[0x1fU] 
                = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_alu_wdata_fw;
        } else if ((vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_dec 
                    >> 0x1fU)) {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[0x1fU] 
                = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__lsu_rdata;
        }
        if ((1U & (~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__data_misaligned)))) {
            if ((1U & (~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mult_multicycle)))) {
                if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_valid) {
                    if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__mult_int_en) {
                        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mult_imm_ex = 0U;
                        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mult_operand_b_ex 
                            = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__operand_b;
                        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mult_operand_a_ex 
                            = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__alu_operand_a;
                        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mult_sel_subword_ex = 0U;
                        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mult_signed_mode_ex 
                            = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__mult_signed_mode;
                        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mult_operator_ex 
                            = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__mult_operator;
                    }
                    if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__alu_en) {
                        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_is_clpx_ex = 0U;
                        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__bmask_a_ex = 0U;
                        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__bmask_b_ex = 0U;
                        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_is_subrot_ex = 0U;
                        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_vec_mode_ex = 0U;
                        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operator_ex 
                            = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__alu_operator;
                        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__imm_vec_ext_ex 
                            = ((2U & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                      >> 0x13U)) | 
                               (1U & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                      >> 0x19U)));
                        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_clpx_shift_ex 
                            = (3U & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                     >> 0xdU));
                        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_en_ex = 1U;
                    } else {
                        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_en_ex = 0U;
                    }
                    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mult_en_ex 
                        = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__mult_int_en;
                    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__apu_en_ex = 0U;
                    if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__data_req_id) {
                        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__data_reg_offset_ex = 0U;
                    }
                    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__branch_in_ex 
                        = (3U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__ctrl_transfer_insn_in_id));
                    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_op_ex 
                        = ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__deassert_we)
                            ? 0U : (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op));
                    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__data_req_ex 
                        = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__data_req_id;
                    if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__regfile_alu_we_id) {
                        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_alu_waddr_ex 
                            = (0x1fU & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                        >> 7U));
                    }
                } else if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_ready) {
                    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_en_ex = 1U;
                    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mult_en_ex = 0U;
                    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__apu_en_ex = 0U;
                    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__branch_in_ex = 0U;
                    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_op_ex = 0U;
                    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__data_req_ex = 0U;
                    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operator_ex = 3U;
                }
            }
            if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mult_multicycle) {
                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mult_operand_c_ex 
                    = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__operand_c_fw_id;
            } else if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_valid) {
                if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__mult_int_en) {
                    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mult_operand_c_ex 
                        = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__operand_c;
                }
            }
        }
        if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__ctrl_update) {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__data_sign_ext_q 
                = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__data_sign_ext_ex;
        }
        if ((1U & (~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__data_misaligned)))) {
            if ((1U & (~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mult_multicycle)))) {
                if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_valid) {
                    if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__data_req_id) {
                        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__data_sign_ext_ex 
                            = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__data_sign_ext_id;
                    }
                }
            }
        }
        if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__ctrl_update) {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_offset_q 
                = (3U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__data_addr_int);
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__data_type_q 
                = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__data_type_ex;
        }
        if ((1U & (~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__data_misaligned)))) {
            if ((1U & (~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mult_multicycle)))) {
                if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_valid) {
                    if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__data_req_id) {
                        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__data_type_ex 
                            = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__data_type_id;
                    }
                }
            }
        }
        if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__data_misaligned) {
            if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_ready) {
                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_alu_we_ex = 0U;
            }
        } else if ((1U & (~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mult_multicycle)))) {
            if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_valid) {
                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_alu_we_ex 
                    = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__regfile_alu_we_id;
            } else if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_ready) {
                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_alu_we_ex = 0U;
            } else if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_access_ex) {
                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_alu_we_ex = 0U;
            }
        }
        if ((1U & (~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__data_misaligned)))) {
            if ((1U & (~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mult_multicycle)))) {
                if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_valid) {
                    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_access_ex 
                        = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__csr_access;
                    if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__regfile_we_id) {
                        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_we_ex = 1U;
                        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_waddr_ex 
                            = (0x1fU & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                        >> 7U));
                    } else {
                        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_we_ex = 0U;
                    }
                } else if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_ready) {
                    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_we_ex = 0U;
                }
            }
        }
        if (((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__if_valid) 
             & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_valid))) {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__is_compressed_id 
                = (3U != (3U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned));
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_decompressed;
        }
        if (((IData)(vlSymsp->TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i.data_rvalid_o) 
             & (~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__data_we_q)))) {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_q 
                = (((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__data_misaligned_ex) 
                    | (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__data_misaligned))
                    ? vlSymsp->TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i.data_rdata_o
                    : vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__data_rdata_ext);
        }
        if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__data_misaligned) {
            if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_ready) {
                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_b_ex = 4U;
                if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__useincr_addr_ex) {
                    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex 
                        = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__operand_a_fw_id;
                }
                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__data_misaligned_ex = 1U;
                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__useincr_addr_ex = 1U;
            }
        } else if ((1U & (~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mult_multicycle)))) {
            if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_valid) {
                if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__alu_en) {
                    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_b_ex 
                        = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__operand_b;
                    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex 
                        = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__alu_operand_a;
                }
                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__data_misaligned_ex = 0U;
                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__useincr_addr_ex = 1U;
            } else if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_ready) {
                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__data_misaligned_ex = 0U;
            }
        }
        if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__ctrl_update) {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__data_we_q 
                = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__data_we_ex;
        }
    } else {
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_q = 0U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__jump_done_q = 0U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mhpmevent_branch_taken = 0U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[0U] = 0U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__hwlp_update_pc_q = 0U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__aligner_ready_q = 0U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__mem_q = 0ULL;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state = 0U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP = 0U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__Cnt_DP = 0U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__r_instr_h = 0U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__BReg_DP = 0U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__State_SP = 0U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__dscratch0_q = 0U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__dscratch1_q = 0U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mscratch_q = 0U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mcause_q = 0U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__flush_cnt_q = 0U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AReg_DP = 0U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_q = 0U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_mode_q = 1U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__depc_q = 0U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mepc_q = 0U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__gen_no_trans_stable__DOT__obi_addr_q = 0U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__gen_no_trans_stable__DOT__obi_we_q = 0U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__gen_no_trans_stable__DOT__obi_be_q = 0U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__gen_no_trans_stable__DOT__obi_wdata_q = 0U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__gen_no_trans_stable__DOT__obi_atop_q = 0U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__trans_addr_q = 0U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__read_pointer_q = 0U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__write_pointer_q = 0U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q = 0U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_carry_q = 0U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0U] = 0U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[1U] = 0U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[4U] = 0U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[5U] = 0U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[6U] = 0U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[7U] = 0U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mult_imm_ex = 0U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mult_operand_b_ex = 0U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mult_operand_a_ex = 0U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mult_operand_c_ex = 0U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mult_sel_subword_ex = 0U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mhpmevent_jr_stall = 0U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mhpmevent_ld_stall = 0U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__data_sign_ext_q = 0U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mult_signed_mode_ex = 0U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__illegal_c_insn_id = 0U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_is_clpx_ex = 0U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_valid_id = 0U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__is_fetch_failed_id = 0U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_q = 6U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs = 0U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_q = 0U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mult_operator_ex = 0U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS = 0U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__pc_id = 0U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_en_ex = 0U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_q = 0x40000003U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mult_en_ex = 0U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__apu_en_ex = 0U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__data_reg_offset_ex = 0U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__bmask_a_ex = 0U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__branch_in_ex = 0U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__bmask_b_ex = 0U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_control_exec_q = 0U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_q = 0U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mie_q = 0U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_offset_q = 0U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__data_type_q = 0U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__regfile_we_lsu = 0U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_op_ex = 0U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__data_req_ex = 0U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[1U] = 0U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[2U] = 0U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[3U] = 0U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[4U] = 0U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[5U] = 0U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[6U] = 0U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[7U] = 0U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[8U] = 0U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[9U] = 0U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[0xaU] = 0U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[0xbU] = 0U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[0xcU] = 0U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[0xdU] = 0U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[0xeU] = 0U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[0xfU] = 0U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[0x10U] = 0U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[0x11U] = 0U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[0x12U] = 0U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[0x13U] = 0U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[0x14U] = 0U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[0x15U] = 0U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[0x16U] = 0U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[0x17U] = 0U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[0x18U] = 0U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[0x19U] = 0U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[0x1aU] = 0U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[0x1bU] = 0U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[0x1cU] = 0U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[0x1dU] = 0U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[0x1eU] = 0U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[0x1fU] = 0U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_alu_we_ex = 0U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_is_subrot_ex = 0U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_vec_mode_ex = 0U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_q = 0U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_b_ex = 0U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operator_ex = 3U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex = 0U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__imm_vec_ext_ex = 0U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_clpx_shift_ex = 0U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_alu_waddr_ex = 0U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__regfile_waddr_lsu = 0U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__is_compressed_id = 0U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__data_sign_ext_ex = 0U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_q = 0U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__data_type_ex = 0U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_access_ex = 0U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__data_we_q = 0U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__data_misaligned_ex = 0U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__useincr_addr_ex = 0U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_we_ex = 0U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_waddr_ex = 0U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id = 0U;
    }
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__OutMux_D 
        = ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__RemSel_SP)
            ? vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AReg_DP
            : ((vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                << 0x1fU) | ((0x40000000U & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                             << 0x1dU)) 
                             | ((0x20000000U & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                                << 0x1bU)) 
                                | ((0x10000000U & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                                   << 0x19U)) 
                                   | ((0x8000000U & 
                                       (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                        << 0x17U)) 
                                      | ((0x4000000U 
                                          & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                             << 0x15U)) 
                                         | ((0x2000000U 
                                             & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                                << 0x13U)) 
                                            | ((0x1000000U 
                                                & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                                   << 0x11U)) 
                                               | ((0x800000U 
                                                   & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                                      << 0xfU)) 
                                                  | ((0x400000U 
                                                      & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                                         << 0xdU)) 
                                                     | ((0x200000U 
                                                         & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                                            << 0xbU)) 
                                                        | ((0x100000U 
                                                            & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                                               << 9U)) 
                                                           | ((0x80000U 
                                                               & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                                                  << 7U)) 
                                                              | ((0x40000U 
                                                                  & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                                                     << 5U)) 
                                                                 | ((0x20000U 
                                                                     & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                                                        << 3U)) 
                                                                    | ((0x10000U 
                                                                        & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                                                           << 1U)) 
                                                                       | ((0x8000U 
                                                                           & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                                                              >> 1U)) 
                                                                          | ((0x4000U 
                                                                              & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                                                                >> 3U)) 
                                                                             | ((0x2000U 
                                                                                & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                                                                >> 5U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                                                                >> 7U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                                                                >> 9U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                                                                >> 0xbU)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                                                                >> 0xdU)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                                                                >> 0xfU)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                                                                >> 0x11U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                                                                >> 0x13U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                                                                >> 0x15U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                                                                >> 0x17U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                                                                >> 0x19U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                                                                >> 0x1bU)) 
                                                                                | ((2U 
                                                                                & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                                                                >> 0x1dU)) 
                                                                                | (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                                                                >> 0x1fU)))))))))))))))))))))))))))))))));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__state_q 
        = ((IData)(vlSelf->rst_ni) & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__next_state));
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT____VdfgTmp_ha99777ac__0 
        = ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mult_clpx_img_ex) 
           & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mult_is_clpx_ex));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[1U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0U])))));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[1U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[1U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0U])))) 
                   >> 0x20U));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[2U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[3U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[2U])))));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[3U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[3U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[2U])))) 
                   >> 0x20U));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[4U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[5U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[4U])))));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[5U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[5U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[4U])))) 
                   >> 0x20U));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[6U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[7U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[6U])))));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[7U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[7U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[6U])))) 
                   >> 0x20U));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[8U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[9U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[8U])))));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[9U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[9U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[8U])))) 
                   >> 0x20U));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0xaU] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0xbU])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0xaU])))));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0xbU] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0xbU])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0xaU])))) 
                   >> 0x20U));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0xcU] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0xdU])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0xcU])))));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0xdU] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0xdU])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0xcU])))) 
                   >> 0x20U));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0xeU] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0xfU])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0xeU])))));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0xfU] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0xfU])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0xeU])))) 
                   >> 0x20U));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x10U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x11U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x10U])))));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x11U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x11U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x10U])))) 
                   >> 0x20U));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x12U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x13U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x12U])))));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x13U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x13U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x12U])))) 
                   >> 0x20U));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x14U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x15U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x14U])))));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x15U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x15U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x14U])))) 
                   >> 0x20U));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x16U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x17U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x16U])))));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x17U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x17U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x16U])))) 
                   >> 0x20U));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x18U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x19U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x18U])))));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x19U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x19U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x18U])))) 
                   >> 0x20U));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x1aU] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x1bU])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x1aU])))));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x1bU] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x1bU])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x1aU])))) 
                   >> 0x20U));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x1cU] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x1dU])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x1cU])))));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x1dU] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x1dU])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x1cU])))) 
                   >> 0x20U));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x1eU] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x1fU])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x1eU])))));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x1fU] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x1fU])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x1eU])))) 
                   >> 0x20U));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x20U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x21U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x20U])))));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x21U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x21U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x20U])))) 
                   >> 0x20U));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x22U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x23U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x22U])))));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x23U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x23U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x22U])))) 
                   >> 0x20U));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x24U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x25U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x24U])))));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x25U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x25U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x24U])))) 
                   >> 0x20U));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x26U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x27U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x26U])))));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x27U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x27U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x26U])))) 
                   >> 0x20U));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x28U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x29U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x28U])))));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x29U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x29U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x28U])))) 
                   >> 0x20U));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x2aU] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x2bU])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x2aU])))));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x2bU] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x2bU])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x2aU])))) 
                   >> 0x20U));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x2cU] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x2dU])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x2cU])))));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x2dU] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x2dU])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x2cU])))) 
                   >> 0x20U));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x2eU] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x2fU])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x2eU])))));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x2fU] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x2fU])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x2eU])))) 
                   >> 0x20U));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x30U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x31U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x30U])))));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x31U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x31U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x30U])))) 
                   >> 0x20U));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x32U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x33U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x32U])))));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x33U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x33U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x32U])))) 
                   >> 0x20U));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x34U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x35U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x34U])))));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x35U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x35U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x34U])))) 
                   >> 0x20U));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x36U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x37U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x36U])))));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x37U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x37U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x36U])))) 
                   >> 0x20U));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x38U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x39U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x38U])))));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x39U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x39U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x38U])))) 
                   >> 0x20U));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x3aU] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x3bU])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x3aU])))));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x3bU] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x3bU])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x3aU])))) 
                   >> 0x20U));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x3cU] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x3dU])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x3cU])))));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x3dU] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x3dU])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x3cU])))) 
                   >> 0x20U));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x3eU] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x3fU])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x3eU])))));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x3fU] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x3fU])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0x3eU])))) 
                   >> 0x20U));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__id_valid_q 
        = ((IData)(vlSelf->rst_ni) & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_valid));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mhpmevent_branch 
        = ((IData)(vlSelf->rst_ni) & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__minstret) 
                                      & (3U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__ctrl_transfer_insn_in_id))));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT____VdfgTmp_ha7611102__0 
        = (IData)((((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mult_dot_signed_ex) 
                    >> 1U) & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mult_dot_op_a_ex 
                              >> 0xfU)));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT____VdfgTmp_ha42c51ca__0 
        = (IData)((((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mult_dot_signed_ex) 
                    >> 1U) & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mult_dot_op_a_ex 
                              >> 0x1fU)));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT____VdfgTmp_h4c4298a7__0 
        = (1U & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mult_dot_signed_ex) 
                 & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mult_dot_op_b_ex 
                    >> 0xfU)));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT____VdfgTmp_hb3bd7a45__0 
        = ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mult_dot_signed_ex) 
           & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mult_dot_op_b_ex 
              >> 0x1fU));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_req_int = 1U;
    if ((0x10U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_req_int = 0U;
    } else if ((1U & (~ ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                         >> 3U)))) {
        if ((1U & (~ ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                      >> 2U)))) {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_req_int 
                = (IData)((1U == (3U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))));
        }
    }
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_clearcarry = 0U;
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_save = 0U;
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_imm = 0U;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_shift_arith = 0U;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_subword = 0U;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_signed = 0U;
    if ((0U != (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
        if ((1U != (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
            if ((2U != (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                if ((3U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_clearcarry = 1U;
                }
            }
            if ((2U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_shift_arith = 1U;
                tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_subword = 2U;
                tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_signed 
                    = (2U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mult_signed_mode_ex));
            } else if ((3U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_shift_arith = 1U;
                tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_subword = 1U;
                tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_signed 
                    = (1U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mult_signed_mode_ex));
            } else if ((4U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_subword = 3U;
                tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_signed 
                    = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mult_signed_mode_ex;
            }
        }
        if ((1U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_imm = 0x10U;
        } else if ((2U != (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
            if ((3U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_imm = 0x10U;
            }
        }
    }
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mulh_active = 1U;
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_ready = 0U;
    if ((0U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_save = 0U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mulh_active = 0U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_ready = 1U;
        if (((6U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mult_operator_ex)) 
             & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mult_en_ex))) {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_ready = 0U;
        }
    } else {
        if ((1U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_save = 0U;
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mulh_active = 1U;
        } else if ((2U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_save = 1U;
        } else if ((3U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_save = 1U;
        }
        if ((1U != (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
            if ((2U != (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                if ((3U != (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                    if ((4U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_ready = 1U;
                    }
                }
            }
        }
    }
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bmask 
        = ((~ ((IData)(0xfffffffeU) << (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__bmask_a_ex))) 
           << (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__bmask_b_ex));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__trigger_match 
        = ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_control_exec_q) 
           & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_q 
              == vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__pc_id));
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_we_wb_power = 0U;
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_we_wb = 0U;
    if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__regfile_we_lsu) {
        tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_we_wb_power = 1U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_we_wb = 1U;
    }
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int = 1U;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_mie_we = 1U;
    if ((1U & (~ ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_op_ex) 
                  >> 1U)))) {
        if ((1U & (~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_op_ex)))) {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int = 0U;
            tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_mie_we = 0U;
        }
    }
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_alu_we_fw_power 
        = ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_alu_we_ex) 
           & (~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__apu_en_ex)));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_alu_we_fw 
        = ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_alu_we_ex) 
           & (~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__apu_en_ex)));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_through = 0xfU;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg0_sel = 2U;
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg1_sel = 1U;
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__div_valid 
        = ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_en_ex) 
           & ((0x31U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operator_ex)) 
              | ((0x30U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operator_ex)) 
                 | ((0x33U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operator_ex)) 
                    | (0x32U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operator_ex))))));
    __Vtableidx2 = (((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_vec_mode_ex) 
                     << 7U) | (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operator_ex));
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed 
        = Vtb_top_verilator__ConstPool__TABLE_h54c568fa_0
        [__Vtableidx2];
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_arithmetic 
        = ((0x24U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operator_ex)) 
           | ((0x28U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operator_ex)) 
              | ((0x18U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operator_ex)) 
                 | ((0x19U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operator_ex)) 
                    | ((0x1cU == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operator_ex)) 
                       | (0x1dU == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operator_ex)))))));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_left 
        = ((0x27U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operator_ex)) 
           | ((0x2aU == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operator_ex)) 
              | ((0x37U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operator_ex)) 
                 | ((0x35U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operator_ex)) 
                    | ((0x31U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operator_ex)) 
                       | ((0x30U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operator_ex)) 
                          | ((0x33U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operator_ex)) 
                             | ((0x32U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operator_ex)) 
                                | (0x49U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operator_ex))))))))));
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT____VdfgTmp_h1a4ddd03__0 
        = ((0x1eU == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operator_ex)) 
           | (0x1fU == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operator_ex)));
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_b_negate 
        = ((0x19U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operator_ex)) 
           | ((0x1dU == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operator_ex)) 
              | ((0x1bU == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operator_ex)) 
                 | ((0x1fU == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operator_ex)) 
                    | (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_is_subrot_ex)))));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_clip 
        = (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex 
           == ((0x17U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operator_ex))
                ? 0U : (~ vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_b_ex)));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cnt_result 
        = (0x3fU & ((0x1fU & ((0xfU & ((7U & ((3U & 
                                               ((1U 
                                                 & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex) 
                                                + (1U 
                                                   & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex 
                                                      >> 1U)))) 
                                              + (3U 
                                                 & ((1U 
                                                     & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex 
                                                        >> 2U)) 
                                                    + 
                                                    (1U 
                                                     & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex 
                                                        >> 3U)))))) 
                                       + (7U & ((3U 
                                                 & ((1U 
                                                     & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex 
                                                        >> 4U)) 
                                                    + 
                                                    (1U 
                                                     & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex 
                                                        >> 5U)))) 
                                                + (3U 
                                                   & ((1U 
                                                       & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex 
                                                          >> 6U)) 
                                                      + 
                                                      (1U 
                                                       & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex 
                                                          >> 7U)))))))) 
                              + (0xfU & ((7U & ((3U 
                                                 & ((1U 
                                                     & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex 
                                                        >> 8U)) 
                                                    + 
                                                    (1U 
                                                     & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex 
                                                        >> 9U)))) 
                                                + (3U 
                                                   & ((1U 
                                                       & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex 
                                                          >> 0xaU)) 
                                                      + 
                                                      (1U 
                                                       & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex 
                                                          >> 0xbU)))))) 
                                         + (7U & ((3U 
                                                   & ((1U 
                                                       & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex 
                                                          >> 0xcU)) 
                                                      + 
                                                      (1U 
                                                       & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex 
                                                          >> 0xdU)))) 
                                                  + 
                                                  (3U 
                                                   & ((1U 
                                                       & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex 
                                                          >> 0xeU)) 
                                                      + 
                                                      (1U 
                                                       & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex 
                                                          >> 0xfU)))))))))) 
                    + (0x1fU & ((0xfU & ((7U & ((3U 
                                                 & ((1U 
                                                     & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex 
                                                        >> 0x10U)) 
                                                    + 
                                                    (1U 
                                                     & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex 
                                                        >> 0x11U)))) 
                                                + (3U 
                                                   & ((1U 
                                                       & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex 
                                                          >> 0x12U)) 
                                                      + 
                                                      (1U 
                                                       & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex 
                                                          >> 0x13U)))))) 
                                         + (7U & ((3U 
                                                   & ((1U 
                                                       & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex 
                                                          >> 0x14U)) 
                                                      + 
                                                      (1U 
                                                       & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex 
                                                          >> 0x15U)))) 
                                                  + 
                                                  (3U 
                                                   & ((1U 
                                                       & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex 
                                                          >> 0x16U)) 
                                                      + 
                                                      (1U 
                                                       & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex 
                                                          >> 0x17U)))))))) 
                                + (0xfU & ((7U & ((3U 
                                                   & ((1U 
                                                       & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex 
                                                          >> 0x18U)) 
                                                      + 
                                                      (1U 
                                                       & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex 
                                                          >> 0x19U)))) 
                                                  + 
                                                  (3U 
                                                   & ((1U 
                                                       & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex 
                                                          >> 0x1aU)) 
                                                      + 
                                                      (1U 
                                                       & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex 
                                                          >> 0x1bU)))))) 
                                           + (7U & 
                                              ((3U 
                                                & ((1U 
                                                    & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex 
                                                       >> 0x1cU)) 
                                                   + 
                                                   (1U 
                                                    & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex 
                                                       >> 0x1dU)))) 
                                               + (3U 
                                                  & ((1U 
                                                      & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex 
                                                         >> 0x1eU)) 
                                                     + 
                                                     (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex 
                                                      >> 0x1fU)))))))))));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__div_op_a_signed 
        = ((vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex 
            >> 0x1fU) & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operator_ex));
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg_rev 
        = (((~ vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex) 
            << 0x1fU) | ((0x40000000U & ((~ (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex 
                                             >> 1U)) 
                                         << 0x1eU)) 
                         | ((0x20000000U & ((~ (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex 
                                                >> 2U)) 
                                            << 0x1dU)) 
                            | ((0x10000000U & ((~ (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex 
                                                   >> 3U)) 
                                               << 0x1cU)) 
                               | ((0x8000000U & ((~ 
                                                  (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex 
                                                   >> 4U)) 
                                                 << 0x1bU)) 
                                  | ((0x4000000U & 
                                      ((~ (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex 
                                           >> 5U)) 
                                       << 0x1aU)) | 
                                     ((0x2000000U & 
                                       ((~ (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex 
                                            >> 6U)) 
                                        << 0x19U)) 
                                      | ((0x1000000U 
                                          & ((~ (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex 
                                                 >> 7U)) 
                                             << 0x18U)) 
                                         | ((0x800000U 
                                             & ((~ 
                                                 (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex 
                                                  >> 8U)) 
                                                << 0x17U)) 
                                            | ((0x400000U 
                                                & ((~ 
                                                    (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex 
                                                     >> 9U)) 
                                                   << 0x16U)) 
                                               | ((0x200000U 
                                                   & ((~ 
                                                       (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex 
                                                        >> 0xaU)) 
                                                      << 0x15U)) 
                                                  | ((0x100000U 
                                                      & ((~ 
                                                          (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex 
                                                           >> 0xbU)) 
                                                         << 0x14U)) 
                                                     | ((0x80000U 
                                                         & ((~ 
                                                             (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex 
                                                              >> 0xcU)) 
                                                            << 0x13U)) 
                                                        | ((0x40000U 
                                                            & ((~ 
                                                                (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex 
                                                                 >> 0xdU)) 
                                                               << 0x12U)) 
                                                           | ((0x20000U 
                                                               & ((~ 
                                                                   (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex 
                                                                    >> 0xeU)) 
                                                                  << 0x11U)) 
                                                              | ((0x10000U 
                                                                  & ((~ 
                                                                      (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex 
                                                                       >> 0xfU)) 
                                                                     << 0x10U)) 
                                                                 | ((0x8000U 
                                                                     & ((~ 
                                                                         (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex 
                                                                          >> 0x10U)) 
                                                                        << 0xfU)) 
                                                                    | ((0x4000U 
                                                                        & ((~ 
                                                                            (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex 
                                                                             >> 0x11U)) 
                                                                           << 0xeU)) 
                                                                       | ((0x2000U 
                                                                           & ((~ 
                                                                               (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex 
                                                                                >> 0x12U)) 
                                                                              << 0xdU)) 
                                                                          | ((0x1000U 
                                                                              & ((~ 
                                                                                (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex 
                                                                                >> 0x13U)) 
                                                                                << 0xcU)) 
                                                                             | ((0x800U 
                                                                                & ((~ 
                                                                                (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex 
                                                                                >> 0x14U)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((~ 
                                                                                (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex 
                                                                                >> 0x15U)) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((~ 
                                                                                (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex 
                                                                                >> 0x16U)) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((~ 
                                                                                (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex 
                                                                                >> 0x17U)) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((~ 
                                                                                (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex 
                                                                                >> 0x18U)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((~ 
                                                                                (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex 
                                                                                >> 0x19U)) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((~ 
                                                                                (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex 
                                                                                >> 0x1aU)) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((~ 
                                                                                (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex 
                                                                                >> 0x1bU)) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((~ 
                                                                                (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex 
                                                                                >> 0x1cU)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((~ 
                                                                                (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex 
                                                                                >> 0x1dU)) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((~ 
                                                                                (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex 
                                                                                >> 0x1eU)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (~ 
                                                                                (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex 
                                                                                >> 0x1fU))))))))))))))))))))))))))))))))));
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_vec 
        = ((((vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex 
              >> 0x18U) == (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_b_ex 
                            >> 0x18U)) << 3U) | (((
                                                   (0xffU 
                                                    & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex 
                                                       >> 0x10U)) 
                                                   == 
                                                   (0xffU 
                                                    & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_b_ex 
                                                       >> 0x10U))) 
                                                  << 2U) 
                                                 | ((((0xffU 
                                                       & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex 
                                                          >> 8U)) 
                                                      == 
                                                      (0xffU 
                                                       & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_b_ex 
                                                          >> 8U))) 
                                                     << 1U) 
                                                    | ((0xffU 
                                                        & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex) 
                                                       == 
                                                       (0xffU 
                                                        & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_b_ex)))));
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_rev 
        = ((vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex 
            << 0x1fU) | ((0x40000000U & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex 
                                         << 0x1dU)) 
                         | ((0x20000000U & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex 
                                            << 0x1bU)) 
                            | ((0x10000000U & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex 
                                               << 0x19U)) 
                               | ((0x8000000U & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex 
                                                 << 0x17U)) 
                                  | ((0x4000000U & 
                                      (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex 
                                       << 0x15U)) | 
                                     ((0x2000000U & 
                                       (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex 
                                        << 0x13U)) 
                                      | ((0x1000000U 
                                          & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex 
                                             << 0x11U)) 
                                         | ((0x800000U 
                                             & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex 
                                                << 0xfU)) 
                                            | ((0x400000U 
                                                & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex 
                                                   << 0xdU)) 
                                               | ((0x200000U 
                                                   & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex 
                                                      << 0xbU)) 
                                                  | ((0x100000U 
                                                      & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex 
                                                         << 9U)) 
                                                     | ((0x80000U 
                                                         & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex 
                                                            << 7U)) 
                                                        | ((0x40000U 
                                                            & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex 
                                                               << 5U)) 
                                                           | ((0x20000U 
                                                               & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex 
                                                                  << 3U)) 
                                                              | ((0x10000U 
                                                                  & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex 
                                                                     << 1U)) 
                                                                 | ((0x8000U 
                                                                     & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex 
                                                                        >> 1U)) 
                                                                    | ((0x4000U 
                                                                        & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex 
                                                                           >> 3U)) 
                                                                       | ((0x2000U 
                                                                           & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex 
                                                                              >> 5U)) 
                                                                          | ((0x1000U 
                                                                              & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex 
                                                                                >> 7U)) 
                                                                             | ((0x800U 
                                                                                & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex 
                                                                                >> 9U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex 
                                                                                >> 0xbU)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex 
                                                                                >> 0xdU)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex 
                                                                                >> 0xfU)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex 
                                                                                >> 0x11U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex 
                                                                                >> 0x13U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex 
                                                                                >> 0x15U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex 
                                                                                >> 0x17U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex 
                                                                                >> 0x19U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex 
                                                                                >> 0x1bU)) 
                                                                                | ((2U 
                                                                                & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex 
                                                                                >> 0x1dU)) 
                                                                                | (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex 
                                                                                >> 0x1fU))))))))))))))))))))))))))))))));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel = 0U;
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel = 0U;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT____VdfgTmp_hde673cc7__0 
        = (((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT____VdfgTmp_h4c4298a7__0) 
            << 0x10U) | (0xffffU & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mult_dot_op_b_ex));
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT____VdfgTmp_h84d06556__0 
        = (((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT____VdfgTmp_hb3bd7a45__0) 
            << 0x10U) | (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mult_dot_op_b_ex 
                         >> 0x10U));
    if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mulh_active) {
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_shift_arith 
            = (1U & (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_shift_arith));
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_signed 
            = tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_signed;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_subword 
            = (3U & (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_subword));
    } else {
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_shift_arith 
            = (1U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mult_signed_mode_ex));
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_signed 
            = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mult_signed_mode_ex;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_subword 
            = (3U & (- (IData)((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mult_sel_subword_ex))));
    }
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_dec 
        = ((((0x1fU == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__regfile_waddr_lsu)) 
             & (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_we_wb_power)) 
            << 0x1fU) | ((((0x1eU == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__regfile_waddr_lsu)) 
                           & (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_we_wb_power)) 
                          << 0x1eU) | ((((0x1dU == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__regfile_waddr_lsu)) 
                                         & (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_we_wb_power)) 
                                        << 0x1dU) | 
                                       ((((0x1cU == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__regfile_waddr_lsu)) 
                                          & (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_we_wb_power)) 
                                         << 0x1cU) 
                                        | ((((0x1bU 
                                              == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__regfile_waddr_lsu)) 
                                             & (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_we_wb_power)) 
                                            << 0x1bU) 
                                           | ((((0x1aU 
                                                 == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__regfile_waddr_lsu)) 
                                                & (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_we_wb_power)) 
                                               << 0x1aU) 
                                              | ((((0x19U 
                                                    == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__regfile_waddr_lsu)) 
                                                   & (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_we_wb_power)) 
                                                  << 0x19U) 
                                                 | ((((0x18U 
                                                       == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__regfile_waddr_lsu)) 
                                                      & (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_we_wb_power)) 
                                                     << 0x18U) 
                                                    | ((((0x17U 
                                                          == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__regfile_waddr_lsu)) 
                                                         & (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_we_wb_power)) 
                                                        << 0x17U) 
                                                       | ((((0x16U 
                                                             == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__regfile_waddr_lsu)) 
                                                            & (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_we_wb_power)) 
                                                           << 0x16U) 
                                                          | ((((0x15U 
                                                                == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__regfile_waddr_lsu)) 
                                                               & (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_we_wb_power)) 
                                                              << 0x15U) 
                                                             | ((((0x14U 
                                                                   == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__regfile_waddr_lsu)) 
                                                                  & (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_we_wb_power)) 
                                                                 << 0x14U) 
                                                                | ((((0x13U 
                                                                      == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__regfile_waddr_lsu)) 
                                                                     & (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_we_wb_power)) 
                                                                    << 0x13U) 
                                                                   | ((((0x12U 
                                                                         == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__regfile_waddr_lsu)) 
                                                                        & (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_we_wb_power)) 
                                                                       << 0x12U) 
                                                                      | ((((0x11U 
                                                                            == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__regfile_waddr_lsu)) 
                                                                           & (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_we_wb_power)) 
                                                                          << 0x11U) 
                                                                         | ((((0x10U 
                                                                               == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__regfile_waddr_lsu)) 
                                                                              & (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_we_wb_power)) 
                                                                             << 0x10U) 
                                                                            | ((((0xfU 
                                                                                == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__regfile_waddr_lsu)) 
                                                                                & (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_we_wb_power)) 
                                                                                << 0xfU) 
                                                                               | ((((0xeU 
                                                                                == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__regfile_waddr_lsu)) 
                                                                                & (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_we_wb_power)) 
                                                                                << 0xeU) 
                                                                                | ((((0xdU 
                                                                                == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__regfile_waddr_lsu)) 
                                                                                & (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_we_wb_power)) 
                                                                                << 0xdU) 
                                                                                | ((((0xcU 
                                                                                == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__regfile_waddr_lsu)) 
                                                                                & (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_we_wb_power)) 
                                                                                << 0xcU) 
                                                                                | ((((0xbU 
                                                                                == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__regfile_waddr_lsu)) 
                                                                                & (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_we_wb_power)) 
                                                                                << 0xbU) 
                                                                                | ((((0xaU 
                                                                                == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__regfile_waddr_lsu)) 
                                                                                & (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_we_wb_power)) 
                                                                                << 0xaU) 
                                                                                | ((((9U 
                                                                                == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__regfile_waddr_lsu)) 
                                                                                & (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_we_wb_power)) 
                                                                                << 9U) 
                                                                                | ((((8U 
                                                                                == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__regfile_waddr_lsu)) 
                                                                                & (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_we_wb_power)) 
                                                                                << 8U) 
                                                                                | ((((7U 
                                                                                == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__regfile_waddr_lsu)) 
                                                                                & (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_we_wb_power)) 
                                                                                << 7U) 
                                                                                | ((((6U 
                                                                                == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__regfile_waddr_lsu)) 
                                                                                & (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_we_wb_power)) 
                                                                                << 6U) 
                                                                                | ((((5U 
                                                                                == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__regfile_waddr_lsu)) 
                                                                                & (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_we_wb_power)) 
                                                                                << 5U) 
                                                                                | ((((4U 
                                                                                == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__regfile_waddr_lsu)) 
                                                                                & (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_we_wb_power)) 
                                                                                << 4U) 
                                                                                | ((((3U 
                                                                                == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__regfile_waddr_lsu)) 
                                                                                & (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_we_wb_power)) 
                                                                                << 3U) 
                                                                                | ((((2U 
                                                                                == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__regfile_waddr_lsu)) 
                                                                                & (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_we_wb_power)) 
                                                                                << 2U) 
                                                                                | ((((1U 
                                                                                == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__regfile_waddr_lsu)) 
                                                                                & (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_we_wb_power)) 
                                                                                << 1U) 
                                                                                | ((0U 
                                                                                == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__regfile_waddr_lsu)) 
                                                                                & (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_we_wb_power)))))))))))))))))))))))))))))))));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_dec 
        = ((((0x1fU == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_alu_waddr_ex)) 
             & (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_alu_we_fw_power)) 
            << 0x1fU) | ((((0x1eU == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_alu_waddr_ex)) 
                           & (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_alu_we_fw_power)) 
                          << 0x1eU) | ((((0x1dU == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_alu_waddr_ex)) 
                                         & (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_alu_we_fw_power)) 
                                        << 0x1dU) | 
                                       ((((0x1cU == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_alu_waddr_ex)) 
                                          & (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_alu_we_fw_power)) 
                                         << 0x1cU) 
                                        | ((((0x1bU 
                                              == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_alu_waddr_ex)) 
                                             & (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_alu_we_fw_power)) 
                                            << 0x1bU) 
                                           | ((((0x1aU 
                                                 == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_alu_waddr_ex)) 
                                                & (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_alu_we_fw_power)) 
                                               << 0x1aU) 
                                              | ((((0x19U 
                                                    == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_alu_waddr_ex)) 
                                                   & (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_alu_we_fw_power)) 
                                                  << 0x19U) 
                                                 | ((((0x18U 
                                                       == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_alu_waddr_ex)) 
                                                      & (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_alu_we_fw_power)) 
                                                     << 0x18U) 
                                                    | ((((0x17U 
                                                          == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_alu_waddr_ex)) 
                                                         & (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_alu_we_fw_power)) 
                                                        << 0x17U) 
                                                       | ((((0x16U 
                                                             == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_alu_waddr_ex)) 
                                                            & (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_alu_we_fw_power)) 
                                                           << 0x16U) 
                                                          | ((((0x15U 
                                                                == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_alu_waddr_ex)) 
                                                               & (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_alu_we_fw_power)) 
                                                              << 0x15U) 
                                                             | ((((0x14U 
                                                                   == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_alu_waddr_ex)) 
                                                                  & (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_alu_we_fw_power)) 
                                                                 << 0x14U) 
                                                                | ((((0x13U 
                                                                      == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_alu_waddr_ex)) 
                                                                     & (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_alu_we_fw_power)) 
                                                                    << 0x13U) 
                                                                   | ((((0x12U 
                                                                         == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_alu_waddr_ex)) 
                                                                        & (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_alu_we_fw_power)) 
                                                                       << 0x12U) 
                                                                      | ((((0x11U 
                                                                            == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_alu_waddr_ex)) 
                                                                           & (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_alu_we_fw_power)) 
                                                                          << 0x11U) 
                                                                         | ((((0x10U 
                                                                               == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_alu_waddr_ex)) 
                                                                              & (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_alu_we_fw_power)) 
                                                                             << 0x10U) 
                                                                            | ((((0xfU 
                                                                                == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_alu_waddr_ex)) 
                                                                                & (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_alu_we_fw_power)) 
                                                                                << 0xfU) 
                                                                               | ((((0xeU 
                                                                                == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_alu_waddr_ex)) 
                                                                                & (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_alu_we_fw_power)) 
                                                                                << 0xeU) 
                                                                                | ((((0xdU 
                                                                                == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_alu_waddr_ex)) 
                                                                                & (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_alu_we_fw_power)) 
                                                                                << 0xdU) 
                                                                                | ((((0xcU 
                                                                                == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_alu_waddr_ex)) 
                                                                                & (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_alu_we_fw_power)) 
                                                                                << 0xcU) 
                                                                                | ((((0xbU 
                                                                                == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_alu_waddr_ex)) 
                                                                                & (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_alu_we_fw_power)) 
                                                                                << 0xbU) 
                                                                                | ((((0xaU 
                                                                                == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_alu_waddr_ex)) 
                                                                                & (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_alu_we_fw_power)) 
                                                                                << 0xaU) 
                                                                                | ((((9U 
                                                                                == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_alu_waddr_ex)) 
                                                                                & (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_alu_we_fw_power)) 
                                                                                << 9U) 
                                                                                | ((((8U 
                                                                                == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_alu_waddr_ex)) 
                                                                                & (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_alu_we_fw_power)) 
                                                                                << 8U) 
                                                                                | ((((7U 
                                                                                == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_alu_waddr_ex)) 
                                                                                & (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_alu_we_fw_power)) 
                                                                                << 7U) 
                                                                                | ((((6U 
                                                                                == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_alu_waddr_ex)) 
                                                                                & (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_alu_we_fw_power)) 
                                                                                << 6U) 
                                                                                | ((((5U 
                                                                                == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_alu_waddr_ex)) 
                                                                                & (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_alu_we_fw_power)) 
                                                                                << 5U) 
                                                                                | ((((4U 
                                                                                == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_alu_waddr_ex)) 
                                                                                & (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_alu_we_fw_power)) 
                                                                                << 4U) 
                                                                                | ((((3U 
                                                                                == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_alu_waddr_ex)) 
                                                                                & (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_alu_we_fw_power)) 
                                                                                << 3U) 
                                                                                | ((((2U 
                                                                                == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_alu_waddr_ex)) 
                                                                                & (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_alu_we_fw_power)) 
                                                                                << 2U) 
                                                                                | ((((1U 
                                                                                == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_alu_waddr_ex)) 
                                                                                & (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_alu_we_fw_power)) 
                                                                                << 1U) 
                                                                                | ((0U 
                                                                                == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_alu_waddr_ex)) 
                                                                                & (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_alu_we_fw_power)))))))))))))))))))))))))))))))));
    if ((1U & (~ ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operator_ex) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operator_ex))) {
            if ((0x10U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operator_ex))) {
                if ((8U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operator_ex))) {
                    if ((1U & (~ ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operator_ex) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operator_ex) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operator_ex))) {
                                if ((3U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_vec_mode_ex))) {
                                    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_through = 0xcU;
                                }
                            } else if ((3U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_vec_mode_ex))) {
                                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_through = 3U;
                            }
                        }
                    }
                }
            }
            if ((1U & (~ ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operator_ex) 
                          >> 4U)))) {
                if ((8U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operator_ex))) {
                    if ((4U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operator_ex))) {
                        if ((1U & (~ ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operator_ex) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operator_ex))) {
                                if ((3U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_vec_mode_ex))) {
                                    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg0_sel = 0U;
                                } else if ((2U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_vec_mode_ex))) {
                                    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg0_sel = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in 
        = ((2U & (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg0_sel))
            ? vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex
            : ((1U & (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg0_sel))
                ? ((vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex 
                    << 0x10U) | (0xffffU & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex))
                : ((vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex 
                    << 0x18U) | ((0xff0000U & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex 
                                               << 0x10U)) 
                                 | ((0xff00U & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex 
                                                << 8U)) 
                                    | (0xffU & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex))))));
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater_vec 
        = ((VL_GTS_III(9, ((((vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex 
                              >> 0x1fU) & ((IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed) 
                                           >> 3U)) 
                            << 8U) | (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex 
                                      >> 0x18U)), (
                                                   (((vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_b_ex 
                                                      >> 0x1fU) 
                                                     & ((IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed) 
                                                        >> 3U)) 
                                                    << 8U) 
                                                   | (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_b_ex 
                                                      >> 0x18U))) 
            << 3U) | ((VL_GTS_III(9, ((0x100U & ((vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex 
                                                  >> 0xfU) 
                                                 & ((IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed) 
                                                    << 6U))) 
                                      | (0xffU & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex 
                                                  >> 0x10U))), 
                                  ((0x100U & ((vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_b_ex 
                                               >> 0xfU) 
                                              & ((IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed) 
                                                 << 6U))) 
                                   | (0xffU & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_b_ex 
                                               >> 0x10U)))) 
                       << 2U) | ((VL_GTS_III(9, ((0x100U 
                                                  & ((vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex 
                                                      >> 7U) 
                                                     & ((IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed) 
                                                        << 7U))) 
                                                 | (0xffU 
                                                    & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex 
                                                       >> 8U))), 
                                             ((0x100U 
                                               & ((vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_b_ex 
                                                   >> 7U) 
                                                  & ((IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed) 
                                                     << 7U))) 
                                              | (0xffU 
                                                 & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_b_ex 
                                                    >> 8U)))) 
                                  << 1U) | VL_GTS_III(9, 
                                                      ((0x100U 
                                                        & ((vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex 
                                                            << 1U) 
                                                           & ((IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed) 
                                                              << 8U))) 
                                                       | (0xffU 
                                                          & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex)), 
                                                      ((0x100U 
                                                        & ((vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_b_ex 
                                                            << 1U) 
                                                           & ((IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed) 
                                                              << 8U))) 
                                                       | (0xffU 
                                                          & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_b_ex))))));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_use_round 
        = ((0x18U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operator_ex)) 
           | ((0x19U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operator_ex)) 
              | ((0x1cU == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operator_ex)) 
                 | ((0x1dU == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operator_ex)) 
                    | ((0x1aU == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operator_ex)) 
                       | ((0x1bU == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operator_ex)) 
                          | (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT____VdfgTmp_h1a4ddd03__0)))))));
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_b 
        = ((IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_b_negate)
            ? ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_is_subrot_ex)
                ? (~ ((vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex 
                       << 0x10U) | (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_b_ex 
                                    >> 0x10U))) : (~ vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_b_ex))
            : vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_b_ex);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ABComp_S 
        = (((vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AReg_DP 
             == vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__BReg_DP) 
            | ((vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AReg_DP 
                > vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__BReg_DP) 
               ^ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__CompInv_SP))) 
           & ((0U != vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AReg_DP) 
              | (0U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cnt_result))));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT____VdfgTmp_hb0784dbb__0 
        = (1U & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operator_ex) 
                 & ((vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_b_ex 
                     >> 0x1fU) ^ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__div_op_a_signed))));
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_a 
        = ((0x14U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operator_ex))
            ? (~ vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex)
            : ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_is_subrot_ex)
                ? ((vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_b_ex 
                    << 0x10U) | (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex 
                                 >> 0x10U)) : vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex));
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a 
        = (((QData)((IData)((1U | (0x1feU & (tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_a 
                                             >> 0x17U))))) 
            << 0x1bU) | (QData)((IData)((0x40201U | 
                                         (((0x7f80000U 
                                            & (tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_a 
                                               << 3U)) 
                                           | (0x3fc00U 
                                              & (tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_a 
                                                 << 2U))) 
                                          | (0x1feU 
                                             & (tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_a 
                                                << 1U)))))));
    if ((1U & (~ ((IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_b_negate) 
                  | ((0x14U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operator_ex)) 
                     | (0x16U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operator_ex))))))) {
        if ((2U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_vec_mode_ex))) {
            tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a 
                = (0xffffbffffULL & tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a);
        } else if ((3U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_vec_mode_ex))) {
            tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a 
                = (0xffffffdffULL & tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a);
            tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a 
                = (0xffffbffffULL & tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a);
            tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a 
                = (0xff7ffffffULL & tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a);
        }
    }
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal 
        = (0xfU & (- (IData)((IData)((0xfU == (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_vec))))));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input = 0U;
    if ((0x36U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operator_ex))) {
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
            = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex;
    } else if ((((0x30U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operator_ex)) 
                 | (0x32U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operator_ex))) 
                | (0x37U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operator_ex)))) {
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
            = tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_rev;
    } else if ((((0x31U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operator_ex)) 
                 | (0x33U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operator_ex))) 
                | (0x35U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operator_ex)))) {
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
            = ((vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex 
                >> 0x1fU) ? tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg_rev
                : tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_rev);
    }
    if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__state_q) {
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__obi_be_o 
            = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__gen_no_trans_stable__DOT__obi_be_q;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__obi_wdata_o 
            = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__gen_no_trans_stable__DOT__obi_wdata_q;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__obi_atop_o 
            = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__gen_no_trans_stable__DOT__obi_atop_q;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__obi_we_o 
            = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__gen_no_trans_stable__DOT__obi_we_q;
    } else {
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__obi_be_o = 0xfU;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__obi_wdata_o = 0U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__obi_atop_o = 0U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__obi_we_o = 0U;
    }
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT____VdfgTmp_hee2f451c__0 
        = ((IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT____VdfgTmp_ha99777ac__0)
            ? tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT____VdfgTmp_hde673cc7__0
            : tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT____VdfgTmp_h84d06556__0);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr 
        = ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_access_ex)
            ? (0xfffU & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_b_ex)
            : 0U);
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater 
        = (0xfU & (- (IData)((1U & (((IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater_vec) 
                                     >> 3U) | (((IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_vec) 
                                                >> 3U) 
                                               & (((IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater_vec) 
                                                   >> 2U) 
                                                  | (((IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_vec) 
                                                      >> 2U) 
                                                     & (((IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater_vec) 
                                                         >> 1U) 
                                                        | (((IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_vec) 
                                                            >> 1U) 
                                                           & (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater_vec)))))))))));
    if ((2U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_vec_mode_ex))) {
        tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal 
            = ((0xcU & (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal)) 
               | (3U & (- (IData)((IData)((3U == (3U 
                                                  & (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_vec))))))));
        tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal 
            = ((3U & (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal)) 
               | (0xcU & ((- (IData)((IData)((0xcU 
                                              == (0xcU 
                                                  & (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_vec)))))) 
                          << 2U)));
        tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater 
            = ((0xcU & (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater)) 
               | (3U & (- (IData)((1U & (((IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater_vec) 
                                          >> 1U) | 
                                         (((IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_vec) 
                                           >> 1U) & (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater_vec))))))));
        tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater 
            = ((3U & (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater)) 
               | (0xcU & ((- (IData)((1U & (((IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater_vec) 
                                             >> 3U) 
                                            | (((IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_vec) 
                                                >> 3U) 
                                               & ((IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater_vec) 
                                                  >> 2U)))))) 
                          << 2U)));
    } else if ((3U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_vec_mode_ex))) {
        tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal 
            = tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_vec;
        tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater 
            = tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater_vec;
    }
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b 
        = (((QData)((IData)((0x1feU & (tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_b 
                                       >> 0x17U)))) 
            << 0x1bU) | (QData)((IData)(((0x7f80000U 
                                          & (tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_b 
                                             << 3U)) 
                                         | ((0x3fc00U 
                                             & (tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_b 
                                                << 2U)) 
                                            | (0x1feU 
                                               & (tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_b 
                                                  << 1U)))))));
    if (((IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_b_negate) 
         | ((0x14U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operator_ex)) 
            | (0x16U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operator_ex))))) {
        tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b 
            = (1ULL | tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b);
        if ((2U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_vec_mode_ex))) {
            tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b 
                = (0x40000ULL | tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b);
        } else if ((3U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_vec_mode_ex))) {
            tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b 
                = (0x200ULL | tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b);
            tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b 
                = (0x40000ULL | tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b);
            tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b 
                = (0x8000000ULL | tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b);
        }
    }
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__data_addr_int 
        = ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__useincr_addr_ex)
            ? (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex 
               + vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_b_ex)
            : vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_result 
        = (0x1ffffffffULL & (VL_EXTENDS_QI(33,32, (IData)(
                                                          (0x3ffffffffULL 
                                                           & VL_MULS_QQQ(34, 
                                                                         (0x3ffffffffULL 
                                                                          & VL_EXTENDS_QI(34,17, 
                                                                                (((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT____VdfgTmp_ha7611102__0) 
                                                                                << 0x10U) 
                                                                                | (0xffffU 
                                                                                & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mult_dot_op_a_ex)))), 
                                                                         (0x3ffffffffULL 
                                                                          & VL_EXTENDS_QI(34,17, 
                                                                                ((IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT____VdfgTmp_ha99777ac__0)
                                                                                 ? tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT____VdfgTmp_h84d06556__0
                                                                                 : tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT____VdfgTmp_hde673cc7__0))))))) 
                             + (VL_EXTENDS_QI(33,32, (IData)(
                                                             (0x3ffffffffULL 
                                                              & VL_MULS_QQQ(34, 
                                                                            (0x3ffffffffULL 
                                                                             & VL_EXTENDS_QI(34,17, 
                                                                                (0x1ffffU 
                                                                                & ((((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT____VdfgTmp_ha42c51ca__0) 
                                                                                << 0x10U) 
                                                                                | (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mult_dot_op_a_ex 
                                                                                >> 0x10U)) 
                                                                                ^ 
                                                                                (- (IData)(
                                                                                ((~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mult_clpx_img_ex)) 
                                                                                & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mult_is_clpx_ex)))))))), 
                                                                            (0x3ffffffffULL 
                                                                             & VL_EXTENDS_QI(34,17, tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT____VdfgTmp_hee2f451c__0)))))) 
                                + VL_EXTENDS_QI(33,32, 
                                                ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mult_is_clpx_ex)
                                                  ? 
                                                 (VL_EXTENDS_II(32,17, tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT____VdfgTmp_hee2f451c__0) 
                                                  & (- (IData)(
                                                               (1U 
                                                                & (~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mult_clpx_img_ex))))))
                                                  : vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mult_dot_op_c_ex)))));
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_we 
        = ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
           & ((0x323U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr)) 
              | ((0x324U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr)) 
                 | ((0x325U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr)) 
                    | ((0x326U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr)) 
                       | ((0x327U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr)) 
                          | ((0x328U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr)) 
                             | ((0x329U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr)) 
                                | ((0x32aU == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr)) 
                                   | ((0x32bU == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr)) 
                                      | ((0x32cU == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr)) 
                                         | ((0x32dU 
                                             == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr)) 
                                            | ((0x32eU 
                                                == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr)) 
                                               | ((0x32fU 
                                                   == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr)) 
                                                  | ((0x330U 
                                                      == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr)) 
                                                     | ((0x331U 
                                                         == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr)) 
                                                        | ((0x332U 
                                                            == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr)) 
                                                           | ((0x333U 
                                                               == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr)) 
                                                              | ((0x334U 
                                                                  == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr)) 
                                                                 | ((0x335U 
                                                                     == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr)) 
                                                                    | ((0x336U 
                                                                        == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr)) 
                                                                       | ((0x337U 
                                                                           == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr)) 
                                                                          | ((0x338U 
                                                                              == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr)) 
                                                                             | ((0x339U 
                                                                                == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr)) 
                                                                                | ((0x33aU 
                                                                                == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr)) 
                                                                                | ((0x33bU 
                                                                                == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr)) 
                                                                                | ((0x33cU 
                                                                                == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr)) 
                                                                                | ((0x33dU 
                                                                                == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr)) 
                                                                                | ((0x33eU 
                                                                                == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr)) 
                                                                                | (0x33fU 
                                                                                == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr)))))))))))))))))))))))))))))));
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hf978b0df__0 
        = ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
           & (0xb1fU == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr)));
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hfae5cc51__0 
        = ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
           & (0xb1eU == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr)));
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hfa9e50d1__0 
        = ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
           & (0xb1dU == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr)));
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hfa0d4e0a__0 
        = ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
           & (0xb1cU == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr)));
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hfaa6217c__0 
        = ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
           & (0xb1bU == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr)));
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hfa9200dc__0 
        = ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
           & (0xb1aU == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr)));
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hfa8eff7a__0 
        = ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
           & (0xb19U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr)));
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hf97d8181__0 
        = ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
           & (0xb18U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr)));
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hfa14c80e__0 
        = ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
           & (0xb17U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr)));
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hfa012312__0 
        = ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
           & (0xb16U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr)));
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hfa006cd7__0 
        = ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
           & (0xb15U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr)));
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hfaab2034__0 
        = ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
           & (0xb14U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr)));
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hf79b507d__0 
        = ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
           & (0xb13U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr)));
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hf797f536__0 
        = ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
           & (0xb12U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr)));
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hf7937230__0 
        = ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
           & (0xb11U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr)));
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hf7af7218__0 
        = ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
           & (0xb10U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr)));
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hf78bef5f__0 
        = ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
           & (0xb0fU == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr)));
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hb2f596dc__0 
        = ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
           & (0xb0eU == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr)));
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hb2fa0736__0 
        = ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
           & (0xb0dU == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr)));
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hf79889aa__0 
        = ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
           & (0xb0cU == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr)));
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hb2fe703b__0 
        = ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
           & (0xb0bU == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr)));
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hb265d378__0 
        = ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
           & (0xb0aU == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr)));
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hb2e9a33a__0 
        = ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
           & (0xb09U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr)));
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hf78c5516__0 
        = ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
           & (0xb08U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr)));
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hf645039a__0 
        = ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
           & (0xb07U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr)));
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hf7a41e6e__0 
        = ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
           & (0xb06U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr)));
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hf7a322dc__0 
        = ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
           & (0xb05U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr)));
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hb2fa6057__0 
        = ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
           & (0xb04U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr)));
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hf7d10b3a__0 
        = ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
           & (0xb01U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr)));
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hb2cbdefc__0 
        = ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
           & (0xb03U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr)));
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hb2246737__0 
        = ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
           & (0xb02U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr)));
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hf7d5534e__0 
        = ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
           & (0xb00U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr)));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_rdata_int 
        = ((0x800U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))
            ? ((0x400U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))
                ? ((0x200U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))
                    ? ((0x100U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))
                        ? ((0x80U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))
                            ? 0U : ((0x40U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))
                                     ? 0U : ((0x20U 
                                              & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))
                                              ? 0U : 
                                             ((0x10U 
                                               & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))
                                               ? ((8U 
                                                   & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))
                                                   ? 0U
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))
                                                    ? 0U
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))
                                                      ? 0U
                                                      : 4U)
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))
                                                      ? 0x602U
                                                      : 0U))))
                                               : 0U))))
                        : 0U) : ((0x100U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))
                                  ? 0U : ((0x80U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))
                                           ? ((0x40U 
                                               & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))
                                               ? 0U
                                               : ((0x20U 
                                                   & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))
                                                   ? 0U
                                                   : 
                                                  ((0x10U 
                                                    & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))
                                                    ? 
                                                   (((0U 
                                                      == 
                                                      (0x1fU 
                                                       & ((IData)(0x20U) 
                                                          + 
                                                          (0x7c0U 
                                                           & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr) 
                                                              << 6U)))))
                                                      ? 0U
                                                      : 
                                                     (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                      (((IData)(0x1fU) 
                                                        + 
                                                        (0x7ffU 
                                                         & ((IData)(0x20U) 
                                                            + 
                                                            (0x7c0U 
                                                             & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr) 
                                                                << 6U))))) 
                                                       >> 5U)] 
                                                      << 
                                                      ((IData)(0x20U) 
                                                       - 
                                                       (0x1fU 
                                                        & ((IData)(0x20U) 
                                                           + 
                                                           (0x7c0U 
                                                            & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr) 
                                                               << 6U))))))) 
                                                    | (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                       (0x3fU 
                                                        & (((IData)(0x20U) 
                                                            + 
                                                            (0x7c0U 
                                                             & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr) 
                                                                << 6U))) 
                                                           >> 5U))] 
                                                       >> 
                                                       (0x1fU 
                                                        & ((IData)(0x20U) 
                                                           + 
                                                           (0x7c0U 
                                                            & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr) 
                                                               << 6U))))))
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))
                                                     ? 
                                                    (((0U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(0x20U) 
                                                           + 
                                                           (0x7c0U 
                                                            & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr) 
                                                               << 6U)))))
                                                       ? 0U
                                                       : 
                                                      (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                       (((IData)(0x1fU) 
                                                         + 
                                                         (0x7ffU 
                                                          & ((IData)(0x20U) 
                                                             + 
                                                             (0x7c0U 
                                                              & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr) 
                                                                 << 6U))))) 
                                                        >> 5U)] 
                                                       << 
                                                       ((IData)(0x20U) 
                                                        - 
                                                        (0x1fU 
                                                         & ((IData)(0x20U) 
                                                            + 
                                                            (0x7c0U 
                                                             & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr) 
                                                                << 6U))))))) 
                                                     | (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                        (0x3fU 
                                                         & (((IData)(0x20U) 
                                                             + 
                                                             (0x7c0U 
                                                              & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr) 
                                                                 << 6U))) 
                                                            >> 5U))] 
                                                        >> 
                                                        (0x1fU 
                                                         & ((IData)(0x20U) 
                                                            + 
                                                            (0x7c0U 
                                                             & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr) 
                                                                << 6U))))))
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))
                                                      ? 
                                                     (((0U 
                                                        == 
                                                        (0x1fU 
                                                         & ((IData)(0x20U) 
                                                            + 
                                                            (0x7c0U 
                                                             & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr) 
                                                                << 6U)))))
                                                        ? 0U
                                                        : 
                                                       (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                        (((IData)(0x1fU) 
                                                          + 
                                                          (0x7ffU 
                                                           & ((IData)(0x20U) 
                                                              + 
                                                              (0x7c0U 
                                                               & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr) 
                                                                  << 6U))))) 
                                                         >> 5U)] 
                                                        << 
                                                        ((IData)(0x20U) 
                                                         - 
                                                         (0x1fU 
                                                          & ((IData)(0x20U) 
                                                             + 
                                                             (0x7c0U 
                                                              & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr) 
                                                                 << 6U))))))) 
                                                      | (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                         (0x3fU 
                                                          & (((IData)(0x20U) 
                                                              + 
                                                              (0x7c0U 
                                                               & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr) 
                                                                  << 6U))) 
                                                             >> 5U))] 
                                                         >> 
                                                         (0x1fU 
                                                          & ((IData)(0x20U) 
                                                             + 
                                                             (0x7c0U 
                                                              & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr) 
                                                                 << 6U))))))
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))
                                                       ? 
                                                      (((0U 
                                                         == 
                                                         (0x1fU 
                                                          & ((IData)(0x20U) 
                                                             + 
                                                             (0x7c0U 
                                                              & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr) 
                                                                 << 6U)))))
                                                         ? 0U
                                                         : 
                                                        (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                         (((IData)(0x1fU) 
                                                           + 
                                                           (0x7ffU 
                                                            & ((IData)(0x20U) 
                                                               + 
                                                               (0x7c0U 
                                                                & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr) 
                                                                   << 6U))))) 
                                                          >> 5U)] 
                                                         << 
                                                         ((IData)(0x20U) 
                                                          - 
                                                          (0x1fU 
                                                           & ((IData)(0x20U) 
                                                              + 
                                                              (0x7c0U 
                                                               & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr) 
                                                                  << 6U))))))) 
                                                       | (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                          (0x3fU 
                                                           & (((IData)(0x20U) 
                                                               + 
                                                               (0x7c0U 
                                                                & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr) 
                                                                   << 6U))) 
                                                              >> 5U))] 
                                                          >> 
                                                          (0x1fU 
                                                           & ((IData)(0x20U) 
                                                              + 
                                                              (0x7c0U 
                                                               & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr) 
                                                                  << 6U))))))
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))
                                                        ? 0U
                                                        : 
                                                       (((0U 
                                                          == 
                                                          (0x1fU 
                                                           & ((IData)(0x20U) 
                                                              + 
                                                              (0x7c0U 
                                                               & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr) 
                                                                  << 6U)))))
                                                          ? 0U
                                                          : 
                                                         (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                          (((IData)(0x1fU) 
                                                            + 
                                                            (0x7ffU 
                                                             & ((IData)(0x20U) 
                                                                + 
                                                                (0x7c0U 
                                                                 & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr) 
                                                                    << 6U))))) 
                                                           >> 5U)] 
                                                          << 
                                                          ((IData)(0x20U) 
                                                           - 
                                                           (0x1fU 
                                                            & ((IData)(0x20U) 
                                                               + 
                                                               (0x7c0U 
                                                                & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr) 
                                                                   << 6U))))))) 
                                                        | (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                           (0x3fU 
                                                            & (((IData)(0x20U) 
                                                                + 
                                                                (0x7c0U 
                                                                 & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr) 
                                                                    << 6U))) 
                                                               >> 5U))] 
                                                           >> 
                                                           (0x1fU 
                                                            & ((IData)(0x20U) 
                                                               + 
                                                               (0x7c0U 
                                                                & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr) 
                                                                   << 6U)))))))))))))
                                           : ((0x40U 
                                               & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))
                                               ? 0U
                                               : ((0x20U 
                                                   & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))
                                                   ? 0U
                                                   : 
                                                  ((0x10U 
                                                    & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))
                                                    ? 
                                                   vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                   (0x3eU 
                                                    & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr) 
                                                       << 1U))]
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))
                                                     ? 
                                                    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                    (0x3eU 
                                                     & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr) 
                                                        << 1U))]
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))
                                                      ? 
                                                     vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                     (0x3eU 
                                                      & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr) 
                                                         << 1U))]
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))
                                                       ? 
                                                      vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                      (0x3eU 
                                                       & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr) 
                                                          << 1U))]
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))
                                                        ? 0U
                                                        : 
                                                       vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                       (0x3eU 
                                                        & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr) 
                                                           << 1U))]))))))))))
                : ((0x200U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))
                    ? ((0x100U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))
                        ? ((0x80U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))
                            ? ((0x40U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))
                                ? 0U : ((0x20U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))
                                         ? 0U : ((0x10U 
                                                  & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))
                                                  ? 
                                                 (((0U 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(0x20U) 
                                                        + 
                                                        (0x7c0U 
                                                         & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr) 
                                                            << 6U)))))
                                                    ? 0U
                                                    : 
                                                   (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                    (((IData)(0x1fU) 
                                                      + 
                                                      (0x7ffU 
                                                       & ((IData)(0x20U) 
                                                          + 
                                                          (0x7c0U 
                                                           & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr) 
                                                              << 6U))))) 
                                                     >> 5U)] 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & ((IData)(0x20U) 
                                                         + 
                                                         (0x7c0U 
                                                          & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr) 
                                                             << 6U))))))) 
                                                  | (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                     (0x3fU 
                                                      & (((IData)(0x20U) 
                                                          + 
                                                          (0x7c0U 
                                                           & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr) 
                                                              << 6U))) 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x1fU 
                                                      & ((IData)(0x20U) 
                                                         + 
                                                         (0x7c0U 
                                                          & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr) 
                                                             << 6U))))))
                                                  : 
                                                 ((8U 
                                                   & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))
                                                   ? 
                                                  (((0U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(0x20U) 
                                                         + 
                                                         (0x7c0U 
                                                          & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr) 
                                                             << 6U)))))
                                                     ? 0U
                                                     : 
                                                    (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                     (((IData)(0x1fU) 
                                                       + 
                                                       (0x7ffU 
                                                        & ((IData)(0x20U) 
                                                           + 
                                                           (0x7c0U 
                                                            & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr) 
                                                               << 6U))))) 
                                                      >> 5U)] 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & ((IData)(0x20U) 
                                                          + 
                                                          (0x7c0U 
                                                           & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr) 
                                                              << 6U))))))) 
                                                   | (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                      (0x3fU 
                                                       & (((IData)(0x20U) 
                                                           + 
                                                           (0x7c0U 
                                                            & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr) 
                                                               << 6U))) 
                                                          >> 5U))] 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(0x20U) 
                                                          + 
                                                          (0x7c0U 
                                                           & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr) 
                                                              << 6U))))))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))
                                                    ? 
                                                   (((0U 
                                                      == 
                                                      (0x1fU 
                                                       & ((IData)(0x20U) 
                                                          + 
                                                          (0x7c0U 
                                                           & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr) 
                                                              << 6U)))))
                                                      ? 0U
                                                      : 
                                                     (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                      (((IData)(0x1fU) 
                                                        + 
                                                        (0x7ffU 
                                                         & ((IData)(0x20U) 
                                                            + 
                                                            (0x7c0U 
                                                             & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr) 
                                                                << 6U))))) 
                                                       >> 5U)] 
                                                      << 
                                                      ((IData)(0x20U) 
                                                       - 
                                                       (0x1fU 
                                                        & ((IData)(0x20U) 
                                                           + 
                                                           (0x7c0U 
                                                            & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr) 
                                                               << 6U))))))) 
                                                    | (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                       (0x3fU 
                                                        & (((IData)(0x20U) 
                                                            + 
                                                            (0x7c0U 
                                                             & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr) 
                                                                << 6U))) 
                                                           >> 5U))] 
                                                       >> 
                                                       (0x1fU 
                                                        & ((IData)(0x20U) 
                                                           + 
                                                           (0x7c0U 
                                                            & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr) 
                                                               << 6U))))))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))
                                                     ? 
                                                    (((0U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(0x20U) 
                                                           + 
                                                           (0x7c0U 
                                                            & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr) 
                                                               << 6U)))))
                                                       ? 0U
                                                       : 
                                                      (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                       (((IData)(0x1fU) 
                                                         + 
                                                         (0x7ffU 
                                                          & ((IData)(0x20U) 
                                                             + 
                                                             (0x7c0U 
                                                              & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr) 
                                                                 << 6U))))) 
                                                        >> 5U)] 
                                                       << 
                                                       ((IData)(0x20U) 
                                                        - 
                                                        (0x1fU 
                                                         & ((IData)(0x20U) 
                                                            + 
                                                            (0x7c0U 
                                                             & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr) 
                                                                << 6U))))))) 
                                                     | (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                        (0x3fU 
                                                         & (((IData)(0x20U) 
                                                             + 
                                                             (0x7c0U 
                                                              & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr) 
                                                                 << 6U))) 
                                                            >> 5U))] 
                                                        >> 
                                                        (0x1fU 
                                                         & ((IData)(0x20U) 
                                                            + 
                                                            (0x7c0U 
                                                             & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr) 
                                                                << 6U))))))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))
                                                      ? 0U
                                                      : 
                                                     (((0U 
                                                        == 
                                                        (0x1fU 
                                                         & ((IData)(0x20U) 
                                                            + 
                                                            (0x7c0U 
                                                             & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr) 
                                                                << 6U)))))
                                                        ? 0U
                                                        : 
                                                       (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                        (((IData)(0x1fU) 
                                                          + 
                                                          (0x7ffU 
                                                           & ((IData)(0x20U) 
                                                              + 
                                                              (0x7c0U 
                                                               & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr) 
                                                                  << 6U))))) 
                                                         >> 5U)] 
                                                        << 
                                                        ((IData)(0x20U) 
                                                         - 
                                                         (0x1fU 
                                                          & ((IData)(0x20U) 
                                                             + 
                                                             (0x7c0U 
                                                              & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr) 
                                                                 << 6U))))))) 
                                                      | (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                         (0x3fU 
                                                          & (((IData)(0x20U) 
                                                              + 
                                                              (0x7c0U 
                                                               & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr) 
                                                                  << 6U))) 
                                                             >> 5U))] 
                                                         >> 
                                                         (0x1fU 
                                                          & ((IData)(0x20U) 
                                                             + 
                                                             (0x7c0U 
                                                              & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr) 
                                                                 << 6U)))))))))))))
                            : ((0x40U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))
                                ? 0U : ((0x20U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))
                                         ? 0U : ((0x10U 
                                                  & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))
                                                  ? 
                                                 vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                 (0x3eU 
                                                  & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr) 
                                                     << 1U))]
                                                  : 
                                                 ((8U 
                                                   & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))
                                                   ? 
                                                  vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                  (0x3eU 
                                                   & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr) 
                                                      << 1U))]
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))
                                                    ? 
                                                   vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                   (0x3eU 
                                                    & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr) 
                                                       << 1U))]
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))
                                                     ? 
                                                    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                    (0x3eU 
                                                     & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr) 
                                                        << 1U))]
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))
                                                      ? 0U
                                                      : 
                                                     vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                     (0x3eU 
                                                      & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr) 
                                                         << 1U))]))))))))
                        : 0U) : 0U)) : ((0x400U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))
                                         ? ((0x200U 
                                             & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))
                                             ? ((0x100U 
                                                 & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))
                                                 ? 
                                                ((0x80U 
                                                  & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))
                                                  ? 
                                                 ((0x40U 
                                                   & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))
                                                   ? 0U
                                                   : 
                                                  ((0x20U 
                                                    & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))
                                                    ? 
                                                   ((0x10U 
                                                     & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))
                                                     ? 
                                                    ((8U 
                                                      & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))
                                                      ? 0U
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))
                                                       ? 0U
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))
                                                         ? vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__dscratch1_q
                                                         : vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__dscratch0_q)
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))
                                                         ? vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__depc_q
                                                         : vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_q))))
                                                     : 
                                                    ((8U 
                                                      & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))
                                                      ? 0U
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))
                                                        ? 0U
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))
                                                         ? 0U
                                                         : 4U))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))
                                                         ? 0U
                                                         : vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_q)
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))
                                                         ? 
                                                        (0x28001040U 
                                                         | ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_control_exec_q) 
                                                            << 2U))
                                                         : 0U)))))
                                                    : 0U))
                                                  : 0U)
                                                 : 0U)
                                             : 0U) : 
                                        ((0x200U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))
                                          ? ((0x100U 
                                              & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))
                                              ? ((0x80U 
                                                  & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))
                                                  ? 0U
                                                  : 
                                                 ((0x40U 
                                                   & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))
                                                   ? 
                                                  ((0x20U 
                                                    & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))
                                                    ? 0U
                                                    : 
                                                   ((0x10U 
                                                     & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))
                                                     ? 0U
                                                     : 
                                                    ((8U 
                                                      & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))
                                                      ? 0U
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))
                                                        ? 0U
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))
                                                         ? 0U
                                                         : vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_q))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))
                                                         ? 0U
                                                         : 
                                                        ((0x80000000U 
                                                          & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mcause_q) 
                                                             << 0x1aU)) 
                                                         | (0x1fU 
                                                            & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mcause_q))))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))
                                                         ? vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mepc_q
                                                         : vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mscratch_q))))))
                                                   : 
                                                  ((0x20U 
                                                    & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))
                                                    ? 
                                                   ((0x10U 
                                                     & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))
                                                     ? 
                                                    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[
                                                    (0x1fU 
                                                     & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))]
                                                     : 
                                                    ((8U 
                                                      & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))
                                                      ? 
                                                     vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[
                                                     (0x1fU 
                                                      & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))]
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))
                                                       ? 
                                                      vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[
                                                      (0x1fU 
                                                       & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))]
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))
                                                         ? 
                                                        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[
                                                        (0x1fU 
                                                         & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))]
                                                         : 0U)
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))
                                                         ? 0U
                                                         : vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_q)))))
                                                    : 
                                                   ((0x10U 
                                                     & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))
                                                     ? 0U
                                                     : 
                                                    ((8U 
                                                      & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))
                                                      ? 0U
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))
                                                        ? 0U
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))
                                                         ? 
                                                        ((vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_q 
                                                          << 8U) 
                                                         | (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_mode_q))
                                                         : vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mie_q))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))
                                                        ? 0U
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))
                                                         ? 0x40001104U
                                                         : 
                                                        ((0x20000U 
                                                          & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_q) 
                                                             << 0x11U)) 
                                                         | ((0x1800U 
                                                             & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_q) 
                                                                << 0xaU)) 
                                                            | ((0x80U 
                                                                & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_q) 
                                                                   << 4U)) 
                                                               | ((0x10U 
                                                                   & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_q)) 
                                                                  | ((8U 
                                                                      & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_q) 
                                                                         >> 2U)) 
                                                                     | (1U 
                                                                        & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_q) 
                                                                           >> 6U)))))))))))))))
                                              : 0U)
                                          : 0U)));
    if ((2U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_op_ex))) {
        if ((1U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_op_ex))) {
            tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_mie_wdata 
                = ((~ vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex) 
                   & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mie_q);
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int 
                = ((~ vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex) 
                   & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_rdata_int);
        } else {
            tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_mie_wdata 
                = (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex 
                   | vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mie_q);
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int 
                = (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex 
                   | vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_rdata_int);
        }
    } else {
        tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_mie_wdata 
            = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int 
            = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex;
    }
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mie_bypass 
        = (((0x304U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr)) 
            & (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_mie_we))
            ? (0xffff0888U & tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_mie_wdata)
            : vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mie_q);
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__sel_minmax 
        = (0xfU & ((IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater) 
                   ^ (- (IData)(((0x10U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operator_ex)) 
                                 | ((0x11U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operator_ex)) 
                                    | ((0x16U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operator_ex)) 
                                       | (0x17U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operator_ex)))))))));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result 
        = tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal;
    if ((1U & (~ ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operator_ex) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operator_ex))) {
            if ((0x10U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operator_ex))) {
                if ((8U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operator_ex))) {
                    if ((4U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operator_ex))) {
                        if ((2U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operator_ex))) {
                            if ((0x3eU == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operator_ex))) {
                                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg1_sel = 3U;
                            }
                            if ((3U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_vec_mode_ex))) {
                                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel = 0xeU;
                                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel 
                                    = (0xffU & (((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__imm_vec_ext_ex) 
                                                 << 6U) 
                                                | (((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__imm_vec_ext_ex) 
                                                    << 4U) 
                                                   | (((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__imm_vec_ext_ex) 
                                                       << 2U) 
                                                      | (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__imm_vec_ext_ex)))));
                            } else {
                                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel = 0xcU;
                                if ((2U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_vec_mode_ex))) {
                                    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel 
                                        = ((0xfU & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel)) 
                                           | (0x50U 
                                              | ((0x80U 
                                                  & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__imm_vec_ext_ex) 
                                                     << 7U)) 
                                                 | (0x20U 
                                                    & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__imm_vec_ext_ex) 
                                                       << 5U)))));
                                    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel 
                                        = ((0xf0U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel)) 
                                           | (4U | 
                                              ((8U 
                                                & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__imm_vec_ext_ex) 
                                                   << 3U)) 
                                               | (2U 
                                                  & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__imm_vec_ext_ex) 
                                                     << 1U)))));
                                }
                            }
                        }
                    } else {
                        if ((1U & (~ ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operator_ex) 
                                      >> 1U)))) {
                            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg1_sel = 0U;
                        }
                        if ((2U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operator_ex))) {
                            if ((1U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operator_ex))) {
                                if ((3U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_vec_mode_ex))) {
                                    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel 
                                        = ((3U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel)) 
                                           | ((8U & 
                                               ((~ 
                                                 (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_b_ex 
                                                  >> 0x1aU)) 
                                                << 3U)) 
                                              | (4U 
                                                 & ((~ 
                                                     (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_b_ex 
                                                      >> 0x12U)) 
                                                    << 2U))));
                                    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel 
                                        = ((0xcU & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel)) 
                                           | ((2U & 
                                               ((~ 
                                                 (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_b_ex 
                                                  >> 0xaU)) 
                                                << 1U)) 
                                              | (1U 
                                                 & (~ 
                                                    (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_b_ex 
                                                     >> 2U)))));
                                } else if ((2U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_vec_mode_ex))) {
                                    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel 
                                        = ((3U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel)) 
                                           | ((8U & 
                                               ((~ 
                                                 (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_b_ex 
                                                  >> 0x11U)) 
                                                << 3U)) 
                                              | (4U 
                                                 & ((~ 
                                                     (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_b_ex 
                                                      >> 0x11U)) 
                                                    << 2U))));
                                    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel 
                                        = ((0xcU & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel)) 
                                           | ((2U & 
                                               ((~ 
                                                 (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_b_ex 
                                                  >> 1U)) 
                                                << 1U)) 
                                              | (1U 
                                                 & (~ 
                                                    (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_b_ex 
                                                     >> 1U)))));
                                }
                            }
                            if ((3U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_vec_mode_ex))) {
                                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel 
                                    = ((3U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel)) 
                                       | ((0xc0U & 
                                           (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_b_ex 
                                            >> 0x12U)) 
                                          | ((0x30U 
                                              & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_b_ex 
                                                 >> 0xcU)) 
                                             | (0xcU 
                                                & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_b_ex 
                                                   >> 6U)))));
                                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel 
                                    = ((0xfcU & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel)) 
                                       | (3U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_b_ex));
                            } else if ((2U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_vec_mode_ex))) {
                                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel 
                                    = ((0xfU & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel)) 
                                       | (0x40U | (
                                                   (0x80U 
                                                    & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_b_ex 
                                                       >> 9U)) 
                                                   | (0x20U 
                                                      & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_b_ex 
                                                         >> 0xbU)))));
                                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel 
                                    = ((0xf0U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel)) 
                                       | (4U | ((8U 
                                                 & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_b_ex 
                                                    << 3U)) 
                                                | (2U 
                                                   & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_b_ex 
                                                      << 1U)))));
                            }
                        } else if ((1U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operator_ex))) {
                            if ((3U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_vec_mode_ex))) {
                                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel = 4U;
                                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel = 0U;
                            } else {
                                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel = 3U;
                                if ((2U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_vec_mode_ex))) {
                                    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel = 0xeeU;
                                }
                            }
                        } else if ((3U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_vec_mode_ex))) {
                            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel = 1U;
                            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel = 0U;
                        } else {
                            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel = 3U;
                            if ((2U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_vec_mode_ex))) {
                                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel = 0x44U;
                            }
                        }
                    }
                }
            } else if ((8U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operator_ex))) {
                if ((4U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operator_ex))) {
                    if ((1U & (~ ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operator_ex) 
                                  >> 1U)))) {
                        if ((1U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operator_ex))) {
                            if ((3U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_vec_mode_ex))) {
                                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel 
                                    = ((2U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__imm_vec_ext_ex))
                                        ? ((1U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__imm_vec_ext_ex))
                                            ? 7U : 0xbU)
                                        : ((1U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__imm_vec_ext_ex))
                                            ? 0xdU : 0xeU));
                            } else if ((2U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_vec_mode_ex))) {
                                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel 
                                    = ((3U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel)) 
                                       | ((8U & ((~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__imm_vec_ext_ex)) 
                                                 << 3U)) 
                                          | (4U & (
                                                   (~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__imm_vec_ext_ex)) 
                                                   << 2U))));
                                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel 
                                    = ((0xcU & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel)) 
                                       | ((2U & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__imm_vec_ext_ex) 
                                                 << 1U)) 
                                          | (1U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__imm_vec_ext_ex))));
                            }
                            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel = 0xe4U;
                        }
                    }
                }
            }
        }
        if ((1U & (~ ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operator_ex) 
                      >> 5U)))) {
            if ((1U & (~ ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operator_ex) 
                          >> 4U)))) {
                if ((8U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operator_ex))) {
                    if ((4U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operator_ex))) {
                        if ((1U & (~ ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operator_ex) 
                                      >> 1U)))) {
                            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result 
                                = (0xfU & ((1U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operator_ex))
                                            ? (~ (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal))
                                            : (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal)));
                        }
                    } else {
                        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result 
                            = ((2U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operator_ex))
                                ? ((IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater) 
                                   | (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal))
                                : (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater));
                    }
                } else {
                    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result 
                        = (0xfU & ((4U & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operator_ex))
                                    ? (~ (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater))
                                    : (~ ((IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater) 
                                          | (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal)))));
                }
            }
        }
    }
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_result_expanded 
        = (0x1fffffffffULL & (VL_EXTENDS_QQ(37,36, tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a) 
                              + VL_EXTENDS_QQ(37,36, tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b)));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__clpx_shift_result 
        = (0xffffU & VL_SHIFTRS_III(17,17,2, (0x1ffffU 
                                              & (IData)(
                                                        (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_result 
                                                         >> 0xfU))), (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mult_clpx_shift_ex)));
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h01bd208f__0 
        = ((~ (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hb2cbdefc__0)) 
           & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
              & (0xb83U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))));
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hbe3c22b2__0 
        = ((~ (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hb2246737__0)) 
           & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
              & (0xb82U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
        = (((IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hf978b0df__0) 
            << 0x1fU) | (((IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hfae5cc51__0) 
                          << 0x1eU) | (((IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hfa9e50d1__0) 
                                        << 0x1dU) | 
                                       (((IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hfa0d4e0a__0) 
                                         << 0x1cU) 
                                        | (((IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hfaa6217c__0) 
                                            << 0x1bU) 
                                           | (((IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hfa9200dc__0) 
                                               << 0x1aU) 
                                              | (((IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hfa8eff7a__0) 
                                                  << 0x19U) 
                                                 | (((IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hf97d8181__0) 
                                                     << 0x18U) 
                                                    | (((IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hfa14c80e__0) 
                                                        << 0x17U) 
                                                       | (((IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hfa012312__0) 
                                                           << 0x16U) 
                                                          | (((IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hfa006cd7__0) 
                                                              << 0x15U) 
                                                             | (((IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hfaab2034__0) 
                                                                 << 0x14U) 
                                                                | (((IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hf79b507d__0) 
                                                                    << 0x13U) 
                                                                   | (((IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hf797f536__0) 
                                                                       << 0x12U) 
                                                                      | (((IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hf7937230__0) 
                                                                          << 0x11U) 
                                                                         | (((IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hf7af7218__0) 
                                                                             << 0x10U) 
                                                                            | (((IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hf78bef5f__0) 
                                                                                << 0xfU) 
                                                                               | (((IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hb2f596dc__0) 
                                                                                << 0xeU) 
                                                                                | (((IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hb2fa0736__0) 
                                                                                << 0xdU) 
                                                                                | (((IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hf79889aa__0) 
                                                                                << 0xcU) 
                                                                                | (((IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hb2fe703b__0) 
                                                                                << 0xbU) 
                                                                                | (((IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hb265d378__0) 
                                                                                << 0xaU) 
                                                                                | (((IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hb2e9a33a__0) 
                                                                                << 9U) 
                                                                                | (((IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hf78c5516__0) 
                                                                                << 8U) 
                                                                                | (((IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hf645039a__0) 
                                                                                << 7U) 
                                                                                | (((IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hf7a41e6e__0) 
                                                                                << 6U) 
                                                                                | (((IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hf7a322dc__0) 
                                                                                << 5U) 
                                                                                | (((IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hb2fa6057__0) 
                                                                                << 4U) 
                                                                                | (((IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hb2cbdefc__0) 
                                                                                << 3U) 
                                                                                | (((IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hb2246737__0) 
                                                                                << 2U) 
                                                                                | (((IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hf7d10b3a__0) 
                                                                                << 1U) 
                                                                                | (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hf7d5534e__0))))))))))))))))))))))))))))))));
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h7e7737ea__0 
        = ((~ (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hf7d5534e__0)) 
           & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
              & (0xb80U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))));
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual 
        = (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_q 
           & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mie_bypass);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__branch_taken_ex 
        = (((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result) 
            >> 3U) & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__branch_in_ex));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_result 
        = (((IData)((vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_result_expanded 
                     >> 0x1cU)) << 0x18U) | ((0xff0000U 
                                              & ((IData)(
                                                         (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_result_expanded 
                                                          >> 0x13U)) 
                                                 << 0x10U)) 
                                             | ((0xff00U 
                                                 & ((IData)(
                                                            (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_result_expanded 
                                                             >> 0xaU)) 
                                                    << 8U)) 
                                                | (0xffU 
                                                   & (IData)(
                                                             (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_result_expanded 
                                                              >> 1U))))));
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__minmax_b 
        = ((0x14U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operator_ex))
            ? vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_result
            : vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_b_ex);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__mult_operator = 2U;
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__mult_signed_mode = 0U;
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__data_type_id = 0U;
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__data_sign_ext_id = 0U;
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__mult_int_en = 0U;
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_mem_we = 0U;
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__data_req = 0U;
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_en = 1U;
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__alu_op_c_mux_sel = 0U;
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__alu_op_a_mux_sel = 0U;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__imm_a_mux_sel = 1U;
    vlSelf->__VdfgTmp_h9edd808c__0 = ((0x3eU & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                                >> 0x13U)) 
                                      | (1U & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                               >> 0x19U)));
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__ctrl_transfer_target_mux_sel = 1U;
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__imm_i_type 
        = (((- (IData)((vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                        >> 0x1fU))) << 0xcU) | (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                                >> 0x14U));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__regfile_data_ra_id 
        = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[
        (0x1fU & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                  >> 0xfU))];
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__dret_dec = 0U;
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__mret_dec = 0U;
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__uret_dec = 0U;
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__csr_access = 0U;
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__uret_insn_dec = 0U;
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__mret_insn_dec = 0U;
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__fencei_insn_dec = 0U;
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__ebrk_insn_dec = 0U;
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__ecall_insn_dec = 0U;
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_alu_we = 0U;
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__wfi_insn_dec = 0U;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__regb_used_dec = 0U;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__regc_used_dec = 0U;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__regc_mux = 3U;
    if ((1U & (~ (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                  >> 6U)))) {
        if ((0x20U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
            if ((0x10U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                if ((1U & (~ (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                  >> 2U)))) {
                        if ((2U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                            if ((1U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                                if ((3U != (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                            >> 0x1eU))) {
                                    if ((2U != (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                                >> 0x1eU))) {
                                        if ((1U & (~ 
                                                   (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                                    >> 0x1eU)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                                     >> 0x1dU)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                                         >> 0x1cU)))) {
                                                    if (
                                                        (1U 
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
                                                                    (1U 
                                                                     & (~ 
                                                                        (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                                                         >> 0xeU)))) {
                                                                    if (
                                                                        (0x2000U 
                                                                         & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                                                                        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__mult_operator = 6U;
                                                                        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__mult_signed_mode 
                                                                            = 
                                                                            ((0x1000U 
                                                                              & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)
                                                                              ? 0U
                                                                              : 1U);
                                                                        tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__regc_used_dec = 1U;
                                                                    } else if (
                                                                               (0x1000U 
                                                                                & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                                                                        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__mult_operator = 6U;
                                                                        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__mult_signed_mode = 3U;
                                                                        tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__regc_used_dec = 1U;
                                                                    } else {
                                                                        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__mult_operator = 0U;
                                                                    }
                                                                    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__mult_int_en = 1U;
                                                                    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_en = 0U;
                                                                    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__regc_mux = 3U;
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
            if ((1U & (~ (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                          >> 4U)))) {
                if ((1U & (~ (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                  >> 2U)))) {
                        if ((2U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                            if ((1U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                                if ((0U == (7U & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                                  >> 0xcU)))) {
                                    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__data_type_id = 2U;
                                } else if ((1U == (7U 
                                                   & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                                      >> 0xcU)))) {
                                    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__data_type_id = 1U;
                                } else if ((2U == (7U 
                                                   & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                                      >> 0xcU)))) {
                                    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__data_type_id = 0U;
                                }
                                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__data_req = 1U;
                                if ((0U != (7U & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                                  >> 0xcU)))) {
                                    if ((1U != (7U 
                                                & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                                   >> 0xcU)))) {
                                        if ((2U != 
                                             (7U & 
                                              (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                               >> 0xcU)))) {
                                            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__data_req = 0U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else if ((1U & (~ (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                             >> 4U)))) {
            if ((1U & (~ (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                          >> 3U)))) {
                if ((1U & (~ (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                              >> 2U)))) {
                    if ((2U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                        if ((1U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                            if ((0x4000U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                                if ((1U & (~ (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                              >> 0xdU)))) {
                                    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__data_type_id 
                                        = ((0x1000U 
                                            & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)
                                            ? 1U : 2U);
                                }
                            } else if ((0x2000U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                                if ((1U & (~ (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                              >> 0xcU)))) {
                                    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__data_type_id = 0U;
                                }
                            } else {
                                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__data_type_id 
                                    = ((0x1000U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)
                                        ? 1U : 2U);
                            }
                            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__data_req = 1U;
                        }
                    }
                }
            }
        }
        if ((1U & (~ (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                      >> 5U)))) {
            if ((1U & (~ (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                          >> 4U)))) {
                if ((1U & (~ (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                  >> 2U)))) {
                        if ((2U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                            if ((1U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__data_sign_ext_id 
                                    = (1U & (~ (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                                >> 0xeU)));
                                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_mem_we = 1U;
                            }
                        }
                    }
                }
                if ((8U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                    if ((4U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                        if ((2U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                            if ((1U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                                if ((0U == (7U & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                                  >> 0xcU)))) {
                                    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__fencei_insn_dec = 1U;
                                } else if ((1U == (7U 
                                                   & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                                      >> 0xcU)))) {
                                    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__fencei_insn_dec = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__ctrl_transfer_insn = 0U;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__rega_used_dec = 0U;
    if ((0x40U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
        if ((0x20U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
            if ((1U & (~ (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                          >> 4U)))) {
                if ((1U & (~ (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                  >> 2U)))) {
                        if ((2U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                            if ((1U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__alu_op_c_mux_sel = 2U;
                                tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__regb_used_dec = 1U;
                            }
                        }
                    }
                }
                if ((8U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                    if ((4U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                        if ((2U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                            if ((1U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                                tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__ctrl_transfer_target_mux_sel = 1U;
                                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__ctrl_transfer_insn = 1U;
                            }
                        }
                    }
                } else if ((4U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                    if ((2U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                        if ((1U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                            tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__ctrl_transfer_target_mux_sel = 2U;
                            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__ctrl_transfer_insn = 2U;
                            if ((0U != (7U & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                              >> 0xcU)))) {
                                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__ctrl_transfer_insn = 0U;
                            }
                        }
                    }
                } else if ((2U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                    if ((1U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                        tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__ctrl_transfer_target_mux_sel = 3U;
                        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__ctrl_transfer_insn = 3U;
                    }
                }
            }
            if ((0x10U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                if ((1U & (~ (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                  >> 2U)))) {
                        if ((2U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                            if ((1U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                                if ((0U != (7U & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                                  >> 0xcU)))) {
                                    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__alu_op_a_mux_sel 
                                        = ((0x4000U 
                                            & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)
                                            ? 2U : 0U);
                                    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__imm_a_mux_sel = 0U;
                                    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__csr_access = 1U;
                                    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_alu_we = 1U;
                                    if ((1U & (~ (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                                  >> 0xeU)))) {
                                        tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__rega_used_dec = 1U;
                                    }
                                }
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
                                                            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__dret_dec = 1U;
                                                        }
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
                                                                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__wfi_insn_dec = 1U;
                                                            }
                                                        }
                                                    }
                                                    if (
                                                        (2U 
                                                         == 
                                                         (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                                          >> 0x14U))) {
                                                        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__uret_dec = 1U;
                                                        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__uret_insn_dec = 0U;
                                                    }
                                                }
                                                if (
                                                    (0x302U 
                                                     == 
                                                     (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                                      >> 0x14U))) {
                                                    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__mret_dec = 1U;
                                                    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__mret_insn_dec = 1U;
                                                }
                                            }
                                            if ((1U 
                                                 == 
                                                 (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                                  >> 0x14U))) {
                                                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__ebrk_insn_dec = 1U;
                                            }
                                        }
                                        if ((0U == 
                                             (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                              >> 0x14U))) {
                                            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__ecall_insn_dec = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if ((8U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                    if ((4U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                        if ((2U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                            if ((1U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__alu_op_a_mux_sel = 1U;
                                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_alu_we = 1U;
                            }
                        }
                    }
                } else if ((4U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                    if ((2U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                        if ((1U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__alu_op_a_mux_sel = 1U;
                            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_alu_we = 1U;
                            if ((0U != (7U & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                              >> 0xcU)))) {
                                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_alu_we = 0U;
                            }
                        }
                    }
                }
                if ((1U & (~ (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                              >> 3U)))) {
                    if ((4U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                        if ((2U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                            if ((1U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                                tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__rega_used_dec = 1U;
                            }
                        }
                    } else if ((2U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                        if ((1U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                            tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__rega_used_dec = 1U;
                        }
                    }
                }
            }
        }
    } else if ((0x20U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
        if ((1U & (~ (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                      >> 4U)))) {
            if ((1U & (~ (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                          >> 3U)))) {
                if ((1U & (~ (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                              >> 2U)))) {
                    if ((2U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                        if ((1U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__alu_op_c_mux_sel = 1U;
                        }
                    }
                }
            }
        }
        if ((0x10U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
            if ((1U & (~ (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                          >> 3U)))) {
                if ((4U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                    if ((2U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                        if ((1U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__alu_op_a_mux_sel = 2U;
                            tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__imm_a_mux_sel = 1U;
                            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_alu_we = 1U;
                        }
                    }
                } else if ((2U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                    if ((1U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                        if ((3U != (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                    >> 0x1eU))) {
                            if ((2U != (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                        >> 0x1eU))) {
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
                                                            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__alu_op_a_mux_sel = 3U;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_alu_we = 1U;
                            }
                        }
                    }
                }
                if ((1U & (~ (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                              >> 2U)))) {
                    if ((2U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                        if ((1U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                            if ((3U != (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                        >> 0x1eU))) {
                                if ((2U != (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                            >> 0x1eU))) {
                                    if ((1U & (~ (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                                  >> 0x1cU)))) {
                                        tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__regb_used_dec = 1U;
                                    }
                                    if ((1U & (~ (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                                  >> 0x1eU)))) {
                                        if ((1U & (~ 
                                                   (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                                    >> 0x1dU)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                                     >> 0x1cU)))) {
                                                if (
                                                    (1U 
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
                                                                tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__regb_used_dec = 1U;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__rega_used_dec = 1U;
                                }
                            }
                        }
                    }
                }
            }
        } else if ((1U & (~ (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                             >> 3U)))) {
            if ((1U & (~ (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                          >> 2U)))) {
                if ((2U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                    if ((1U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                        tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__regb_used_dec = 1U;
                        tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__rega_used_dec = 1U;
                    }
                }
            }
        }
    } else if ((0x10U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
        if ((1U & (~ (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                      >> 3U)))) {
            if ((4U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                if ((2U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                    if ((1U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__alu_op_a_mux_sel = 1U;
                        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_alu_we = 1U;
                    }
                }
            } else if ((2U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                if ((1U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_alu_we = 1U;
                }
            }
            if ((1U & (~ (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                          >> 2U)))) {
                if ((2U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                    if ((1U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                        tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__rega_used_dec = 1U;
                    }
                }
            }
        }
    } else if ((1U & (~ (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                         >> 3U)))) {
        if ((1U & (~ (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                      >> 2U)))) {
            if ((2U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                if ((1U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__rega_used_dec = 1U;
                }
            }
        }
    }
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_increment 
        = ((((~ (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hb2cbdefc__0)) 
             & ((~ (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h01bd208f__0)) 
                & ((~ (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_q 
                       >> 3U)) & (0U != ((1U | (((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mhpmevent_compressed) 
                                                 << 0xaU) 
                                                | (((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mhpmevent_branch_taken) 
                                                    << 9U) 
                                                   | (((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mhpmevent_branch) 
                                                       << 8U) 
                                                      | (((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mhpmevent_jump) 
                                                          << 7U) 
                                                         | (((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mhpmevent_store) 
                                                             << 6U) 
                                                            | (((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mhpmevent_load) 
                                                                << 5U) 
                                                               | (((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mhpmevent_imiss) 
                                                                   << 4U) 
                                                                  | (((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mhpmevent_jr_stall) 
                                                                      << 3U) 
                                                                     | (((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mhpmevent_ld_stall) 
                                                                         << 2U) 
                                                                        | ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mhpmevent_minstret) 
                                                                           << 1U))))))))))) 
                                         & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[3U]))))) 
            << 3U) | ((((~ (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hb2246737__0)) 
                        & ((~ (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hbe3c22b2__0)) 
                           & ((~ (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_q 
                                  >> 2U)) & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mhpmevent_minstret)))) 
                       << 2U) | (1U & ((~ (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hf7d5534e__0)) 
                                       & (~ ((IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h7e7737ea__0) 
                                             | vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_q))))));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_upper 
        = ((((~ (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hf978b0df__0)) 
             & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                & (0xb9fU == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr)))) 
            << 0x1fU) | ((((~ (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hfae5cc51__0)) 
                           & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                              & (0xb9eU == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr)))) 
                          << 0x1eU) | ((((~ (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hfa9e50d1__0)) 
                                         & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                            & (0xb9dU 
                                               == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr)))) 
                                        << 0x1dU) | 
                                       ((((~ (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hfa0d4e0a__0)) 
                                          & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                             & (0xb9cU 
                                                == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr)))) 
                                         << 0x1cU) 
                                        | ((((~ (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hfaa6217c__0)) 
                                             & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                & (0xb9bU 
                                                   == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr)))) 
                                            << 0x1bU) 
                                           | ((((~ (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hfa9200dc__0)) 
                                                & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                   & (0xb9aU 
                                                      == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr)))) 
                                               << 0x1aU) 
                                              | ((((~ (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hfa8eff7a__0)) 
                                                   & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                      & (0xb99U 
                                                         == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr)))) 
                                                  << 0x19U) 
                                                 | ((((~ (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hf97d8181__0)) 
                                                      & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                         & (0xb98U 
                                                            == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr)))) 
                                                     << 0x18U) 
                                                    | ((((~ (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hfa14c80e__0)) 
                                                         & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                            & (0xb97U 
                                                               == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr)))) 
                                                        << 0x17U) 
                                                       | ((((~ (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hfa012312__0)) 
                                                            & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                               & (0xb96U 
                                                                  == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr)))) 
                                                           << 0x16U) 
                                                          | ((((~ (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hfa006cd7__0)) 
                                                               & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                                  & (0xb95U 
                                                                     == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr)))) 
                                                              << 0x15U) 
                                                             | ((((~ (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hfaab2034__0)) 
                                                                  & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                                     & (0xb94U 
                                                                        == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr)))) 
                                                                 << 0x14U) 
                                                                | ((((~ (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hf79b507d__0)) 
                                                                     & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                                        & (0xb93U 
                                                                           == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr)))) 
                                                                    << 0x13U) 
                                                                   | ((((~ (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hf797f536__0)) 
                                                                        & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                                           & (0xb92U 
                                                                              == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr)))) 
                                                                       << 0x12U) 
                                                                      | ((((~ (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hf7937230__0)) 
                                                                           & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                                              & (0xb91U 
                                                                                == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr)))) 
                                                                          << 0x11U) 
                                                                         | ((((~ (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hf7af7218__0)) 
                                                                              & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                                                & (0xb90U 
                                                                                == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr)))) 
                                                                             << 0x10U) 
                                                                            | ((((~ (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hf78bef5f__0)) 
                                                                                & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                                                & (0xb8fU 
                                                                                == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr)))) 
                                                                                << 0xfU) 
                                                                               | ((((~ (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hb2f596dc__0)) 
                                                                                & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                                                & (0xb8eU 
                                                                                == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr)))) 
                                                                                << 0xeU) 
                                                                                | ((((~ (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hb2fa0736__0)) 
                                                                                & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                                                & (0xb8dU 
                                                                                == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr)))) 
                                                                                << 0xdU) 
                                                                                | ((((~ (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hf79889aa__0)) 
                                                                                & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                                                & (0xb8cU 
                                                                                == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr)))) 
                                                                                << 0xcU) 
                                                                                | ((((~ (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hb2fe703b__0)) 
                                                                                & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                                                & (0xb8bU 
                                                                                == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr)))) 
                                                                                << 0xbU) 
                                                                                | ((((~ (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hb265d378__0)) 
                                                                                & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                                                & (0xb8aU 
                                                                                == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr)))) 
                                                                                << 0xaU) 
                                                                                | ((((~ (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hb2e9a33a__0)) 
                                                                                & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                                                & (0xb89U 
                                                                                == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr)))) 
                                                                                << 9U) 
                                                                                | ((((~ (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hf78c5516__0)) 
                                                                                & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                                                & (0xb88U 
                                                                                == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr)))) 
                                                                                << 8U) 
                                                                                | ((((~ (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hf645039a__0)) 
                                                                                & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                                                & (0xb87U 
                                                                                == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr)))) 
                                                                                << 7U) 
                                                                                | ((((~ (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hf7a41e6e__0)) 
                                                                                & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                                                & (0xb86U 
                                                                                == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr)))) 
                                                                                << 6U) 
                                                                                | ((((~ (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hf7a322dc__0)) 
                                                                                & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                                                & (0xb85U 
                                                                                == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr)))) 
                                                                                << 5U) 
                                                                                | ((((~ (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hb2fa6057__0)) 
                                                                                & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                                                & (0xb84U 
                                                                                == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr)))) 
                                                                                << 4U) 
                                                                                | (((IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h01bd208f__0) 
                                                                                << 3U) 
                                                                                | (((IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hbe3c22b2__0) 
                                                                                << 2U) 
                                                                                | ((((~ (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hf7d10b3a__0)) 
                                                                                & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                                                & (0xb81U 
                                                                                == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr)))) 
                                                                                << 1U) 
                                                                                | (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_h7e7737ea__0))))))))))))))))))))))))))))))));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__dscratch1_n 
        = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__dscratch1_q;
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__dscratch0_n 
        = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__dscratch0_q;
    if ((1U & (~ ((((((((1U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr)) 
                        | (2U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))) 
                       | (3U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))) 
                      | (0x300U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))) 
                     | (0x304U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))) 
                    | (0x305U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))) 
                   | (0x340U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))) 
                  | (0x341U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr)))))) {
        if ((0x342U != (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))) {
            if ((0x7b0U != (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))) {
                if ((0x7b1U != (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))) {
                    if ((0x7b2U != (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))) {
                        if ((0x7b3U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))) {
                            if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) {
                                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__dscratch1_n 
                                    = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int;
                            }
                        }
                    }
                    if ((0x7b2U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))) {
                        if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) {
                            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__dscratch0_n 
                                = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int;
                        }
                    }
                }
            }
        }
    }
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mscratch_n 
        = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mscratch_q;
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mie_n 
        = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mie_q;
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_mode_n 
        = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_mode_q;
    if (((((((((1U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr)) 
               | (2U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))) 
              | (3U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))) 
             | (0x300U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))) 
            | (0x304U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))) 
           | (0x305U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))) 
          | (0x340U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))) 
         | (0x341U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr)))) {
        if ((1U != (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))) {
            if ((2U != (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))) {
                if ((3U != (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))) {
                    if ((0x300U != (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))) {
                        if ((0x304U != (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))) {
                            if ((0x305U != (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))) {
                                if ((0x340U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))) {
                                    if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) {
                                        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mscratch_n 
                                            = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int;
                                    }
                                }
                            }
                            if ((0x305U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))) {
                                if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) {
                                    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_mode_n 
                                        = (1U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int);
                                }
                            }
                        }
                        if ((0x304U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr))) {
                            if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) {
                                vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mie_n 
                                    = (0xffff0888U 
                                       & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int);
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_n 
        = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_q;
    if (((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
         & (0x320U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr)))) {
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_n 
            = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int;
    }
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[0U] 
        = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[0U];
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[1U] 
        = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[1U];
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[2U] 
        = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[2U];
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[3U] 
        = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[3U];
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[4U] 
        = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[4U];
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[5U] 
        = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[5U];
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[6U] 
        = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[6U];
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[7U] 
        = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[7U];
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[8U] 
        = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[8U];
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[9U] 
        = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[9U];
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[0xaU] 
        = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[0xaU];
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[0xbU] 
        = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[0xbU];
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[0xcU] 
        = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[0xcU];
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[0xdU] 
        = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[0xdU];
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[0xeU] 
        = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[0xeU];
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[0xfU] 
        = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[0xfU];
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[0x10U] 
        = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[0x10U];
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[0x11U] 
        = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[0x11U];
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[0x12U] 
        = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[0x12U];
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[0x13U] 
        = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[0x13U];
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[0x14U] 
        = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[0x14U];
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[0x15U] 
        = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[0x15U];
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[0x16U] 
        = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[0x16U];
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[0x17U] 
        = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[0x17U];
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[0x18U] 
        = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[0x18U];
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[0x19U] 
        = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[0x19U];
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[0x1aU] 
        = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[0x1aU];
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[0x1bU] 
        = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[0x1bU];
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[0x1cU] 
        = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[0x1cU];
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[0x1dU] 
        = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[0x1dU];
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[0x1eU] 
        = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[0x1eU];
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[0x1fU] 
        = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[0x1fU];
    if (tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_we) {
        VL_ASSIGNSEL_WI(1024,32,(0x3e0U & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr) 
                                           << 5U)), vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n, vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int);
    }
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__irq_id_ctrl 
        = ((tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual 
            >> 0x1fU) ? 0x1fU : ((0x40000000U & tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                  ? 0x1eU : ((0x20000000U 
                                              & tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                              ? 0x1dU
                                              : ((0x10000000U 
                                                  & tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                  ? 0x1cU
                                                  : 
                                                 ((0x8000000U 
                                                   & tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                   ? 0x1bU
                                                   : 
                                                  ((0x4000000U 
                                                    & tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                    ? 0x1aU
                                                    : 
                                                   ((0x2000000U 
                                                     & tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                     ? 0x19U
                                                     : 
                                                    ((0x1000000U 
                                                      & tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                      ? 0x18U
                                                      : 
                                                     ((0x800000U 
                                                       & tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                       ? 0x17U
                                                       : 
                                                      ((0x400000U 
                                                        & tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                        ? 0x16U
                                                        : 
                                                       ((0x200000U 
                                                         & tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                         ? 0x15U
                                                         : 
                                                        ((0x100000U 
                                                          & tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                          ? 0x14U
                                                          : 
                                                         ((0x80000U 
                                                           & tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                           ? 0x13U
                                                           : 
                                                          ((0x40000U 
                                                            & tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                            ? 0x12U
                                                            : 
                                                           ((0x20000U 
                                                             & tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                             ? 0x11U
                                                             : 
                                                            ((0x10000U 
                                                              & tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                              ? 0x10U
                                                              : 
                                                             ((0x8000U 
                                                               & tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                               ? 0xfU
                                                               : 
                                                              ((0x4000U 
                                                                & tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                                ? 0xeU
                                                                : 
                                                               ((0x2000U 
                                                                 & tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                                 ? 0xdU
                                                                 : 
                                                                ((0x1000U 
                                                                  & tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                                  ? 0xcU
                                                                  : 
                                                                 ((0x800U 
                                                                   & tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                                   ? 0xbU
                                                                   : 
                                                                  ((8U 
                                                                    & tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                                    ? 3U
                                                                    : 
                                                                   ((0x80U 
                                                                     & tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                                     ? 7U
                                                                     : 
                                                                    ((0x400U 
                                                                      & tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                                      ? 0xaU
                                                                      : 
                                                                     ((4U 
                                                                       & tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                                       ? 2U
                                                                       : 
                                                                      ((0x40U 
                                                                        & tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                                        ? 6U
                                                                        : 
                                                                       ((0x200U 
                                                                         & tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                                         ? 9U
                                                                         : 
                                                                        ((2U 
                                                                          & tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                                          ? 1U
                                                                          : 
                                                                         ((0x20U 
                                                                           & tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                                           ? 5U
                                                                           : 
                                                                          ((0x100U 
                                                                            & tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                                            ? 8U
                                                                            : 
                                                                           ((1U 
                                                                             & tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                                             ? 0U
                                                                             : 
                                                                            ((0x10U 
                                                                              & tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                                              ? 4U
                                                                              : 7U))))))))))))))))))))))))))))))));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__irq_req_ctrl 
        = ((0U != tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual) 
           & ((~ (IData)((4U == (0x804U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_q)))) 
              & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_q) 
                 >> 5U)));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a 
        = ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_left)
            ? tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_rev
            : ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_use_round)
                ? (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_result 
                   + (((0x1cU == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operator_ex)) 
                       | ((0x1dU == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operator_ex)) 
                          | (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT____VdfgTmp_h1a4ddd03__0)))
                       ? (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bmask 
                          >> 1U) : 0U)) : vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex));
    if (tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__imm_a_mux_sel) {
        if (tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__imm_a_mux_sel) {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__imm_a = 0U;
        }
    } else {
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__imm_a 
            = (0x1fU & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                        >> 0xfU));
    }
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__jump_target 
        = ((1U == (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__ctrl_transfer_target_mux_sel))
            ? (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__pc_id 
               + (((- (IData)((vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                               >> 0x1fU))) << 0x14U) 
                  | ((0xff000U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id) 
                     | ((0x800U & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                   >> 9U)) | (0x7feU 
                                              & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                                 >> 0x14U))))))
            : ((3U == (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__ctrl_transfer_target_mux_sel))
                ? (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__pc_id 
                   + (((- (IData)((vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                   >> 0x1fU))) << 0xdU) 
                      | ((0x1000U & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                     >> 0x13U)) | (
                                                   (0x800U 
                                                    & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                                       << 4U)) 
                                                   | ((0x7e0U 
                                                       & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                                          >> 0x14U)) 
                                                      | (0x1eU 
                                                         & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                                            >> 7U)))))))
                : ((2U == (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__ctrl_transfer_target_mux_sel))
                    ? (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__regfile_data_ra_id 
                       + vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__imm_i_type)
                    : (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__regfile_data_ra_id 
                       + vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__imm_i_type))));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT____VdfgTmp_h44ac4589__0 
        = ((IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__regb_used_dec) 
           & (0U != (0x1fU & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                              >> 0x14U))));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_rc_id 
        = ((2U & (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__regc_mux))
            ? ((1U & (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__regc_mux))
                ? 0U : (0x1fU & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                 >> 0xfU))) : ((1U 
                                                & (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__regc_mux))
                                                ? (0x1fU 
                                                   & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                                      >> 7U))
                                                : (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                                   >> 0x1bU)));
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT____VdfgTmp_h6f26da3e__0 
        = ((IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__rega_used_dec) 
           & (0U != (0x1fU & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                              >> 0xfU))));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__result_minmax 
        = ((((8U & (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__sel_minmax))
              ? (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex 
                 >> 0x18U) : (tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__minmax_b 
                              >> 0x18U)) << 0x18U) 
           | ((0xff0000U & (((4U & (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__sel_minmax))
                              ? (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex 
                                 >> 0x10U) : (tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__minmax_b 
                                              >> 0x10U)) 
                            << 0x10U)) | ((0xff00U 
                                           & (((2U 
                                                & (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__sel_minmax))
                                                ? (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex 
                                                   >> 8U)
                                                : (tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__minmax_b 
                                                   >> 8U)) 
                                              << 8U)) 
                                          | (0xffU 
                                             & ((1U 
                                                 & (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__sel_minmax))
                                                 ? vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex
                                                 : tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__minmax_b)))));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT____VdfgTmp_h9d86fdda__0 
        = ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_arithmetic) 
           & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a 
              >> 0x1fU));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT____VdfgTmp_h9df3e3be__0 
        = ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_arithmetic) 
           & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a 
              >> 0xfU));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__reg_d_ex_is_reg_b_id 
        = (((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_waddr_ex) 
            == (0x1fU & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                         >> 0x14U))) & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT____VdfgTmp_h44ac4589__0));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT____VdfgTmp_h405ab6f1__0 
        = ((IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__regc_used_dec) 
           & (0U != (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_rc_id)));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__reg_d_wb_is_reg_a_id 
        = (((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__regfile_waddr_lsu) 
            == (0x1fU & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                         >> 0xfU))) & (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT____VdfgTmp_h6f26da3e__0));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__reg_d_alu_is_reg_a_id 
        = (((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_alu_waddr_ex) 
            == (0x1fU & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                         >> 0xfU))) & (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT____VdfgTmp_h6f26da3e__0));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__reg_d_ex_is_reg_a_id 
        = (((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_waddr_ex) 
            == (0x1fU & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                         >> 0xfU))) & (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT____VdfgTmp_h6f26da3e__0));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__reg_d_ex_is_reg_c_id 
        = (((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_rc_id) 
            == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_waddr_ex)) 
           & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT____VdfgTmp_h405ab6f1__0));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__jr_stall 
        = ((2U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__ctrl_transfer_insn)) 
           & ((((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_we_wb) 
                & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__reg_d_wb_is_reg_a_id)) 
               | ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_we_ex) 
                  & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__reg_d_ex_is_reg_a_id))) 
              | ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_alu_we_fw) 
                 & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__reg_d_alu_is_reg_a_id))));
}

VL_INLINE_OPT void Vtb_top_verilator___024root___nba_sequent__TOP__1(Vtb_top_verilator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_verilator___024root___nba_sequent__TOP__1\n"); );
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
        if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q) {
            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_q = 0U;
        }
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__sleep_unit_i__DOT__core_busy_q 
            = (((0U != (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__cnt_q)) 
                | (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__trans_valid)) 
               | ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ctrl_busy) 
                  | ((0U != (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__cnt_q)) 
                     | (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__data_req))));
    } else {
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__sleep_unit_i__DOT__fetch_enable_q = 0U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_q = 0U;
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__sleep_unit_i__DOT__core_busy_q = 0U;
    }
    vlSelf->tb_top_verilator__DOT__cycle_cnt_q = __Vdly__tb_top_verilator__DOT__cycle_cnt_q;
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__sleep_unit_i__DOT__fetch_enable_d 
        = ((IData)(vlSelf->fetch_enable_i) | (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__sleep_unit_i__DOT__fetch_enable_q));
}

VL_INLINE_OPT void Vtb_top_verilator___024root___nba_sequent__TOP__2(Vtb_top_verilator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_verilator___024root___nba_sequent__TOP__2\n"); );
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

VL_INLINE_OPT void Vtb_top_verilator___024root___nba_comb__TOP__6(Vtb_top_verilator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_verilator___024root___nba_comb__TOP__6\n"); );
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
    CData/*3:0*/ tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel = 0;
    // Body
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__debug_wfi_no_sleep 
        = (1U & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q) 
                 | ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_q) 
                    | ((vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_q 
                        >> 2U) | (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__trigger_match)))));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__wake_from_sleep 
        = ((0U != (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT____Vcellinp__top_i__irq_i 
                   & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mie_bypass)) 
           | ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q) 
              | (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_q)));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_entry_n 
        = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_entry_q;
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
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__lsu_ready_wb 
        = ((0U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__cnt_q)) 
           | (IData)(vlSymsp->TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i.data_rvalid_o));
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__exc_cause = 0U;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__trap_addr_mux = 0U;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__exc_pc_mux_id = 1U;
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_n 
        = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_q;
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__alu_operator = 3U;
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel = 0U;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel = 0U;
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
                                                                    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel = 2U;
                                                                    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel = 0U;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel = 2U;
                                    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel = 0U;
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
                            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel = 2U;
                            tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel = 3U;
                        }
                    }
                }
            } else if ((4U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                if ((2U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                    if ((1U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__alu_operator = 0x18U;
                        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel = 2U;
                        tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel = 3U;
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
        }
    } else if ((0x20U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
        if ((0x10U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
            if ((1U & (~ (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                          >> 3U)))) {
                if ((4U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                    if ((2U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                        if ((1U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__alu_operator = 0x18U;
                            vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel = 2U;
                            tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel = 2U;
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
            if ((1U & (~ (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                          >> 2U)))) {
                if ((2U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                    if ((1U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__alu_operator = 0x18U;
                        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel = 2U;
                        tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel = 1U;
                    }
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
                        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel = 2U;
                        tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel = 2U;
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
                    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel = 2U;
                    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel = 0U;
                }
            }
        }
    } else if ((1U & (~ (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                         >> 3U)))) {
        if ((1U & (~ (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                      >> 2U)))) {
            if ((2U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                if ((1U & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id)) {
                    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__alu_operator = 0x18U;
                    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel = 2U;
                    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel = 0U;
                }
            }
        }
    }
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__wfi_active 
        = ((~ (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__debug_wfi_no_sleep)) 
           & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__wfi_insn_dec));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ctrl_busy = 1U;
    if ((1U & (~ (IData)(vlSelf->clk_i)))) {
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__sleep_unit_i__DOT__core_clock_gate_i__DOT__clk_en 
            = ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__sleep_unit_i__DOT__fetch_enable_q) 
               & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__sleep_unit_i__DOT__core_busy_q) 
                  | (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__wake_from_sleep)));
    }
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
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__deassert_we = 0U;
    if ((1U & (~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__is_decoding)))) {
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__deassert_we = 1U;
    }
    if (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec) {
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__deassert_we = 1U;
    }
    if (((((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__data_req_ex) 
           & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_we_ex)) 
          | ((~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__lsu_ready_wb)) 
             & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_we_wb))) 
         & ((((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__reg_d_ex_is_reg_a_id) 
              | (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__reg_d_ex_is_reg_b_id)) 
             | (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__reg_d_ex_is_reg_c_id)) 
            | (((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__is_decoding) 
                & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_alu_we) 
                   & (~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__data_misaligned)))) 
               & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_waddr_ex) 
                  == (0x1fU & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                               >> 7U))))))) {
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__deassert_we = 1U;
    }
    if (((2U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__ctrl_transfer_insn)) 
         & ((((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_we_wb) 
              & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__reg_d_wb_is_reg_a_id)) 
             | ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_we_ex) 
                & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__reg_d_ex_is_reg_a_id))) 
            | ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_alu_we_fw) 
               & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__reg_d_alu_is_reg_a_id))))) {
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__deassert_we = 1U;
    }
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__load_stall = 0U;
    if (((((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__data_req_ex) 
           & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_we_ex)) 
          | ((~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__lsu_ready_wb)) 
             & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_we_wb))) 
         & ((((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__reg_d_ex_is_reg_a_id) 
              | (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__reg_d_ex_is_reg_b_id)) 
             | (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__reg_d_ex_is_reg_c_id)) 
            | (((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__is_decoding) 
                & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_alu_we) 
                   & (~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__data_misaligned)))) 
               & ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_waddr_ex) 
                  == (0x1fU & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                               >> 7U))))))) {
        vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__load_stall = 1U;
    }
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__m_exc_vec_pc_mux_id 
        = ((0U == (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_mode_q))
            ? 0U : (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__exc_cause));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__imm_b 
        = ((8U & (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel))
            ? ((4U & (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel))
                ? vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__imm_i_type
                : ((2U & (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel))
                    ? ((1U & (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel))
                        ? (((- (IData)((1U & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                              >> 0x18U)))) 
                            << 5U) | (0x1fU & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                               >> 0x14U)))
                        : vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__imm_i_type)
                    : ((1U & (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel))
                        ? ((((IData)(1U) << (0x1fU 
                                             & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                                >> 0x14U))) 
                            - (IData)(1U)) >> 1U) : 
                       ((0x10000U & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                     >> 4U)) | (1U 
                                                & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                                   >> 0x19U))))))
            : ((4U & (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel))
                ? ((2U & (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel))
                    ? ((1U & (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel))
                        ? (IData)(vlSelf->__VdfgTmp_h9edd808c__0)
                        : (((- (IData)((1U & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                              >> 0x18U)))) 
                            << 6U) | (IData)(vlSelf->__VdfgTmp_h9edd808c__0)))
                    : ((1U & (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel))
                        ? (0x1fU & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                    >> 0x19U)) : (0x1fU 
                                                  & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                                     >> 0x14U))))
                : ((2U & (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel))
                    ? ((1U & (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel))
                        ? ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__is_compressed_id)
                            ? 2U : 4U) : (0xfffff000U 
                                          & vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id))
                    : ((1U & (IData)(tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel))
                        ? (((- (IData)((vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                        >> 0x1fU))) 
                            << 0xcU) | ((0xfe0U & (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                                   >> 0x14U)) 
                                        | (0x1fU & 
                                           (vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id 
                                            >> 7U))))
                        : vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__imm_i_type))));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__clk 
        = ((IData)(vlSelf->clk_i) & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__sleep_unit_i__DOT__core_clock_gate_i__DOT__clk_en));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__alu_en 
        = ((~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__deassert_we)) 
           & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_en));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__mult_int_en 
        = ((~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__deassert_we)) 
           & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__mult_int_en));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__regfile_we_id 
        = ((~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__deassert_we)) 
           & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_mem_we));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__regfile_alu_we_id 
        = ((~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__deassert_we)) 
           & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_alu_we));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__data_req_id 
        = ((~ (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__deassert_we)) 
           & (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__data_req));
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__ctrl_transfer_insn_in_id 
        = ((IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__deassert_we)
            ? 0U : (IData)(vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__ctrl_transfer_insn));
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
}
