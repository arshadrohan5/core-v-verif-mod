// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top_verilator.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtb_top_verilator___024root.h"

VL_ATTR_COLD void Vtb_top_verilator___024root___eval_static(Vtb_top_verilator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_verilator___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vtb_top_verilator___024root___eval_initial__TOP(Vtb_top_verilator___024root* vlSelf);

VL_ATTR_COLD void Vtb_top_verilator___024root___eval_initial(Vtb_top_verilator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_verilator___024root___eval_initial\n"); );
    // Body
    Vtb_top_verilator___024root___eval_initial__TOP(vlSelf);
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
    vlSelf->__Vtrigrprev__TOP__clk_i = vlSelf->clk_i;
    vlSelf->__Vtrigrprev__TOP__rst_ni = vlSelf->rst_ni;
    vlSelf->__Vtrigrprev__TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__clk 
        = vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__clk;
}

VL_ATTR_COLD void Vtb_top_verilator___024root___eval_final(Vtb_top_verilator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_verilator___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vtb_top_verilator___024root___eval_triggers__stl(Vtb_top_verilator___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_top_verilator___024root___dump_triggers__stl(Vtb_top_verilator___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vtb_top_verilator___024root___eval_stl(Vtb_top_verilator___024root* vlSelf);

VL_ATTR_COLD void Vtb_top_verilator___024root___eval_settle(Vtb_top_verilator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_verilator___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vtb_top_verilator___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vtb_top_verilator___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("/home/rohan/core-v-verif/cv32e40p/tb/core/tb_top_verilator.sv", 14, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vtb_top_verilator___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_top_verilator___024root___dump_triggers__stl(Vtb_top_verilator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_verilator___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
    if (vlSelf->__VstlTriggered.at(1U)) {
        VL_DBG_MSGF("         'stl' region trigger index 1 is active: @([hybrid] tb_top_verilator.cv32e40p_tb_wrapper_i.top_i.core_i.ex_stage_i.alu_i.ff_one_i.sel_nodes or [hybrid] tb_top_verilator.cv32e40p_tb_wrapper_i.top_i.core_i.ex_stage_i.alu_i.ff_one_i.index_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(2U)) {
        VL_DBG_MSGF("         'stl' region trigger index 2 is active: @([hybrid] tb_top_verilator.cv32e40p_tb_wrapper_i.top_i.core_i.ex_stage_i.alu_i.ff_one_i.sel_nodes)\n");
    }
    if (vlSelf->__VstlTriggered.at(3U)) {
        VL_DBG_MSGF("         'stl' region trigger index 3 is active: @([hybrid] tb_top_verilator.cv32e40p_tb_wrapper_i.top_i.core_i.ex_stage_i.alu_i.div_ready)\n");
    }
    if (vlSelf->__VstlTriggered.at(4U)) {
        VL_DBG_MSGF("         'stl' region trigger index 4 is active: @([hybrid] tb_top_verilator.cv32e40p_tb_wrapper_i.top_i.core_i.ex_stage_i.mult_i.short_op_a)\n");
    }
    if (vlSelf->__VstlTriggered.at(5U)) {
        VL_DBG_MSGF("         'stl' region trigger index 5 is active: @([hybrid] tb_top_verilator.cv32e40p_tb_wrapper_i.top_i.core_i.ex_stage_i.mult_i.short_op_b)\n");
    }
}
#endif  // VL_DEBUG

extern const VlWide<32>/*1023:0*/ Vtb_top_verilator__ConstPool__CONST_hd6b7ba52_0;

VL_ATTR_COLD void Vtb_top_verilator___024root___stl_comb__TOP__9(Vtb_top_verilator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_verilator___024root___stl_comb__TOP__9\n"); );
    // Init
    IData/*31:0*/ tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__operand_b_fw_id;
    tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__operand_b_fw_id = 0;
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

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_top_verilator___024root___dump_triggers__ico(Vtb_top_verilator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_verilator___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VicoTriggered.at(0U)) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
    if (vlSelf->__VicoTriggered.at(1U)) {
        VL_DBG_MSGF("         'ico' region trigger index 1 is active: Internal 'ico' trigger - DPI export trigger\n");
    }
    if (vlSelf->__VicoTriggered.at(2U)) {
        VL_DBG_MSGF("         'ico' region trigger index 2 is active: @([hybrid] tb_top_verilator.cv32e40p_tb_wrapper_i.top_i.core_i.ex_stage_i.alu_i.div_ready)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_top_verilator___024root___dump_triggers__act(Vtb_top_verilator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_verilator___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: Internal 'act' trigger - DPI export trigger\n");
    }
    if (vlSelf->__VactTriggered.at(1U)) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge clk_i or negedge rst_ni)\n");
    }
    if (vlSelf->__VactTriggered.at(2U)) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([hybrid] tb_top_verilator.cv32e40p_tb_wrapper_i.top_i.core_i.ex_stage_i.alu_i.ff_one_i.sel_nodes or [hybrid] tb_top_verilator.cv32e40p_tb_wrapper_i.top_i.core_i.ex_stage_i.alu_i.ff_one_i.index_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(3U)) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @([hybrid] tb_top_verilator.cv32e40p_tb_wrapper_i.top_i.core_i.ex_stage_i.alu_i.ff_one_i.sel_nodes)\n");
    }
    if (vlSelf->__VactTriggered.at(4U)) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @([hybrid] tb_top_verilator.cv32e40p_tb_wrapper_i.top_i.core_i.ex_stage_i.alu_i.div_ready)\n");
    }
    if (vlSelf->__VactTriggered.at(5U)) {
        VL_DBG_MSGF("         'act' region trigger index 5 is active: @([hybrid] tb_top_verilator.cv32e40p_tb_wrapper_i.top_i.core_i.ex_stage_i.mult_i.short_op_a)\n");
    }
    if (vlSelf->__VactTriggered.at(6U)) {
        VL_DBG_MSGF("         'act' region trigger index 6 is active: @([hybrid] tb_top_verilator.cv32e40p_tb_wrapper_i.top_i.core_i.ex_stage_i.mult_i.short_op_b)\n");
    }
    if (vlSelf->__VactTriggered.at(7U)) {
        VL_DBG_MSGF("         'act' region trigger index 7 is active: @(negedge rst_ni or posedge tb_top_verilator.cv32e40p_tb_wrapper_i.top_i.core_i.clk)\n");
    }
    if (vlSelf->__VactTriggered.at(8U)) {
        VL_DBG_MSGF("         'act' region trigger index 8 is active: @(posedge clk_i)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_top_verilator___024root___dump_triggers__nba(Vtb_top_verilator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_verilator___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: Internal 'nba' trigger - DPI export trigger\n");
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge clk_i or negedge rst_ni)\n");
    }
    if (vlSelf->__VnbaTriggered.at(2U)) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([hybrid] tb_top_verilator.cv32e40p_tb_wrapper_i.top_i.core_i.ex_stage_i.alu_i.ff_one_i.sel_nodes or [hybrid] tb_top_verilator.cv32e40p_tb_wrapper_i.top_i.core_i.ex_stage_i.alu_i.ff_one_i.index_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(3U)) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @([hybrid] tb_top_verilator.cv32e40p_tb_wrapper_i.top_i.core_i.ex_stage_i.alu_i.ff_one_i.sel_nodes)\n");
    }
    if (vlSelf->__VnbaTriggered.at(4U)) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @([hybrid] tb_top_verilator.cv32e40p_tb_wrapper_i.top_i.core_i.ex_stage_i.alu_i.div_ready)\n");
    }
    if (vlSelf->__VnbaTriggered.at(5U)) {
        VL_DBG_MSGF("         'nba' region trigger index 5 is active: @([hybrid] tb_top_verilator.cv32e40p_tb_wrapper_i.top_i.core_i.ex_stage_i.mult_i.short_op_a)\n");
    }
    if (vlSelf->__VnbaTriggered.at(6U)) {
        VL_DBG_MSGF("         'nba' region trigger index 6 is active: @([hybrid] tb_top_verilator.cv32e40p_tb_wrapper_i.top_i.core_i.ex_stage_i.mult_i.short_op_b)\n");
    }
    if (vlSelf->__VnbaTriggered.at(7U)) {
        VL_DBG_MSGF("         'nba' region trigger index 7 is active: @(negedge rst_ni or posedge tb_top_verilator.cv32e40p_tb_wrapper_i.top_i.core_i.clk)\n");
    }
    if (vlSelf->__VnbaTriggered.at(8U)) {
        VL_DBG_MSGF("         'nba' region trigger index 8 is active: @(posedge clk_i)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_top_verilator___024root___ctor_var_reset(Vtb_top_verilator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_verilator___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk_i = VL_RAND_RESET_I(1);
    vlSelf->rst_ni = VL_RAND_RESET_I(1);
    vlSelf->fetch_enable_i = VL_RAND_RESET_I(1);
    vlSelf->tests_passed_o = VL_RAND_RESET_I(1);
    vlSelf->tests_failed_o = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cycle_cnt_q = 0;
    VL_RAND_RESET_W(1024, vlSelf->tb_top_verilator__DOT__load_prog__DOT__firmware);
    vlSelf->tb_top_verilator__DOT__unnamedblk1__DOT__maxcycles = 0;
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__data_req = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__data_addr = VL_RAND_RESET_I(32);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__irq_ack = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__irq_id_out = VL_RAND_RESET_I(5);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT____Vcellinp__top_i__irq_i = VL_RAND_RESET_I(32);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_valid_id = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_rdata_id = VL_RAND_RESET_I(32);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__is_compressed_id = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__illegal_c_insn_id = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__is_fetch_failed_id = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__clear_instr_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__pc_id = VL_RAND_RESET_I(32);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__is_decoding = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__useincr_addr_ex = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__data_misaligned = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mult_multicycle = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__branch_in_ex = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ctrl_busy = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_en_ex = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operator_ex = VL_RAND_RESET_I(7);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_a_ex = VL_RAND_RESET_I(32);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_b_ex = VL_RAND_RESET_I(32);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_c_ex = VL_RAND_RESET_I(32);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__bmask_a_ex = VL_RAND_RESET_I(5);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__bmask_b_ex = VL_RAND_RESET_I(5);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__imm_vec_ext_ex = VL_RAND_RESET_I(2);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_vec_mode_ex = VL_RAND_RESET_I(2);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_is_clpx_ex = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_is_subrot_ex = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_clpx_shift_ex = VL_RAND_RESET_I(2);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mult_operator_ex = VL_RAND_RESET_I(3);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mult_operand_a_ex = VL_RAND_RESET_I(32);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mult_operand_b_ex = VL_RAND_RESET_I(32);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mult_operand_c_ex = VL_RAND_RESET_I(32);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mult_en_ex = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mult_sel_subword_ex = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mult_signed_mode_ex = VL_RAND_RESET_I(2);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mult_imm_ex = VL_RAND_RESET_I(5);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mult_dot_op_a_ex = VL_RAND_RESET_I(32);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mult_dot_op_b_ex = VL_RAND_RESET_I(32);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mult_dot_op_c_ex = VL_RAND_RESET_I(32);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mult_dot_signed_ex = VL_RAND_RESET_I(2);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mult_is_clpx_ex = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mult_clpx_shift_ex = VL_RAND_RESET_I(2);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mult_clpx_img_ex = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__apu_en_ex = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__apu_lat_ex = VL_RAND_RESET_I(2);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_waddr_ex = VL_RAND_RESET_I(6);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_we_ex = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_we_wb = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_alu_waddr_ex = VL_RAND_RESET_I(6);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_alu_we_ex = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_alu_we_fw = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__regfile_alu_wdata_fw = VL_RAND_RESET_I(32);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_access_ex = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_op_ex = VL_RAND_RESET_I(2);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_addr = VL_RAND_RESET_I(12);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__data_we_ex = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__data_type_ex = VL_RAND_RESET_I(2);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__data_sign_ext_ex = VL_RAND_RESET_I(2);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__data_reg_offset_ex = VL_RAND_RESET_I(2);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__data_req_ex = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__data_misaligned_ex = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__lsu_rdata = VL_RAND_RESET_I(32);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_ready = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_ready = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__lsu_ready_ex = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__lsu_ready_wb = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_req_int = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mie_bypass = VL_RAND_RESET_I(32);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_save_if = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__csr_restore_mret_id = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__debug_csr_save = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__trigger_match = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mhpmevent_minstret = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mhpmevent_load = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mhpmevent_store = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mhpmevent_jump = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mhpmevent_branch = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mhpmevent_branch_taken = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mhpmevent_compressed = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mhpmevent_jr_stall = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mhpmevent_imiss = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__mhpmevent_ld_stall = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__wake_from_sleep = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_req_pmp = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_addr_pmp = VL_RAND_RESET_I(32);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__sleep_unit_i__DOT__fetch_enable_q = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__sleep_unit_i__DOT__fetch_enable_d = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__sleep_unit_i__DOT__core_busy_q = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__sleep_unit_i__DOT__core_clock_gate_i__DOT__clk_en = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__if_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__branch_req = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__fetch_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__fetch_rdata = VL_RAND_RESET_I(32);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__exc_pc = VL_RAND_RESET_I(32);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_ready = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__illegal_c_insn = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned = VL_RAND_RESET_I(32);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__instr_decompressed = VL_RAND_RESET_I(32);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__trans_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__trans_addr = VL_RAND_RESET_I(32);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__state_q = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__next_state = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__cnt_q = VL_RAND_RESET_I(2);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__next_cnt = VL_RAND_RESET_I(2);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__flush_cnt_q = VL_RAND_RESET_I(2);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__next_flush_cnt = VL_RAND_RESET_I(2);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__trans_addr_q = VL_RAND_RESET_I(32);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__gate_clock = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__read_pointer_n = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__read_pointer_q = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__write_pointer_n = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__write_pointer_q = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_n = VL_RAND_RESET_I(2);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q = VL_RAND_RESET_I(2);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__mem_n = VL_RAND_RESET_Q(64);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__mem_q = VL_RAND_RESET_Q(64);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__obi_we_o = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__obi_be_o = VL_RAND_RESET_I(4);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__obi_wdata_o = VL_RAND_RESET_I(32);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__obi_atop_o = VL_RAND_RESET_I(6);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__state_q = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__next_state = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__gen_no_trans_stable__DOT__obi_addr_q = VL_RAND_RESET_I(32);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__gen_no_trans_stable__DOT__obi_we_q = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__gen_no_trans_stable__DOT__obi_be_q = VL_RAND_RESET_I(4);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__gen_no_trans_stable__DOT__obi_wdata_q = VL_RAND_RESET_I(32);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__gen_no_trans_stable__DOT__obi_atop_q = VL_RAND_RESET_I(6);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__next_state = VL_RAND_RESET_I(3);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__r_instr_h = VL_RAND_RESET_I(16);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__hwlp_addr_q = VL_RAND_RESET_I(32);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_q = VL_RAND_RESET_I(32);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_n = VL_RAND_RESET_I(32);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__update_state = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__aligner_ready_q = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__hwlp_update_pc_q = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__deassert_we = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__ebrk_insn_dec = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__mret_insn_dec = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__uret_insn_dec = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__dret_insn_dec = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__ecall_insn_dec = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__wfi_insn_dec = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__fencei_insn_dec = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__branch_taken_ex = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__ctrl_transfer_insn_in_id = VL_RAND_RESET_I(2);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__jr_stall = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__load_stall = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__halt_id = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__imm_i_type = VL_RAND_RESET_I(32);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__imm_a = VL_RAND_RESET_I(32);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__imm_b = VL_RAND_RESET_I(32);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__jump_target = VL_RAND_RESET_I(32);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__irq_req_ctrl = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__irq_id_ctrl = VL_RAND_RESET_I(5);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_rc_id = VL_RAND_RESET_I(6);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__regfile_alu_we_id = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__regfile_data_ra_id = VL_RAND_RESET_I(32);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__alu_en = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__alu_operator = VL_RAND_RESET_I(7);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__alu_op_a_mux_sel = VL_RAND_RESET_I(3);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel = VL_RAND_RESET_I(3);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__alu_op_c_mux_sel = VL_RAND_RESET_I(2);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__mult_operator = VL_RAND_RESET_I(3);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__mult_int_en = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__mult_signed_mode = VL_RAND_RESET_I(2);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__regfile_we_id = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__data_we_id = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__data_type_id = VL_RAND_RESET_I(2);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__data_sign_ext_id = VL_RAND_RESET_I(2);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__data_req_id = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__csr_access = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__csr_status = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__operand_a_fw_mux_sel = VL_RAND_RESET_I(2);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__operand_b_fw_mux_sel = VL_RAND_RESET_I(2);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__operand_c_fw_mux_sel = VL_RAND_RESET_I(2);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__operand_a_fw_id = VL_RAND_RESET_I(32);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__operand_c_fw_id = VL_RAND_RESET_I(32);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__operand_b = VL_RAND_RESET_I(32);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__operand_c = VL_RAND_RESET_I(32);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__alu_operand_a = VL_RAND_RESET_I(32);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__reg_d_ex_is_reg_a_id = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__reg_d_ex_is_reg_b_id = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__reg_d_ex_is_reg_c_id = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__reg_d_wb_is_reg_a_id = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__reg_d_alu_is_reg_a_id = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__mret_dec = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__uret_dec = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__dret_dec = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__id_valid_q = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__minstret = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT____VdfgTmp_h44ac4589__0 = 0;
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT____VdfgTmp_h405ab6f1__0 = 0;
    VL_RAND_RESET_W(1024, vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_dec = VL_RAND_RESET_I(32);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_dec = VL_RAND_RESET_I(32);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_mem_we = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_alu_we = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__data_req = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__ctrl_transfer_insn = VL_RAND_RESET_I(2);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op = VL_RAND_RESET_I(2);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_en = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__mult_int_en = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs = VL_RAND_RESET_I(5);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = VL_RAND_RESET_I(5);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__jump_done = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__jump_done_q = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__data_err_q = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_n = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_q = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_n = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_entry_q = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_entry_n = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_force_wakeup_q = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_force_wakeup_n = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_q = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__wfi_active = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_q = VL_RAND_RESET_I(32);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_result = VL_RAND_RESET_I(32);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_result = VL_RAND_RESET_I(32);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__regfile_we_lsu = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__regfile_waddr_lsu = VL_RAND_RESET_I(6);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mulh_active = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__div_shift = VL_RAND_RESET_I(6);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__div_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bmask = VL_RAND_RESET_I(32);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_result = VL_RAND_RESET_I(32);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_result_expanded = VL_RAND_RESET_Q(37);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_left = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_use_round = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_arithmetic = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a = VL_RAND_RESET_I(32);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_left_result = VL_RAND_RESET_I(32);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_clip = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result = VL_RAND_RESET_I(4);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__result_minmax = VL_RAND_RESET_I(32);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel = VL_RAND_RESET_I(8);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel = VL_RAND_RESET_I(4);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg1_sel = VL_RAND_RESET_I(2);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_through = VL_RAND_RESET_I(4);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in = VL_RAND_RESET_I(32);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__pack_result = VL_RAND_RESET_I(32);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input = VL_RAND_RESET_I(32);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cnt_result = VL_RAND_RESET_I(6);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__div_ready = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__div_op_a_signed = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT____VdfgTmp_h9d86fdda__0 = 0;
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT____VdfgTmp_h9df3e3be__0 = 0;
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP = VL_RAND_RESET_I(32);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DN = VL_RAND_RESET_I(32);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AReg_DP = VL_RAND_RESET_I(32);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AReg_DN = VL_RAND_RESET_I(32);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__BReg_DP = VL_RAND_RESET_I(32);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__BReg_DN = VL_RAND_RESET_I(32);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__RemSel_SN = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__RemSel_SP = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__CompInv_SN = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__CompInv_SP = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResInv_SN = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResInv_SP = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__OutMux_D = VL_RAND_RESET_I(32);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__Cnt_DP = VL_RAND_RESET_I(6);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__Cnt_DN = VL_RAND_RESET_I(6);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__BRegEn_S = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ABComp_S = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__LoadEn_S = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__State_SN = VL_RAND_RESET_I(2);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__State_SP = VL_RAND_RESET_I(2);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT____VdfgTmp_hb0784dbb__0 = 0;
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_op_a = VL_RAND_RESET_I(17);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_op_b = VL_RAND_RESET_I(17);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_mac = VL_RAND_RESET_Q(34);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_subword = VL_RAND_RESET_I(2);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_signed = VL_RAND_RESET_I(2);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_shift_arith = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_imm = VL_RAND_RESET_I(5);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_carry_q = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_save = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_clearcarry = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_ready = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS = VL_RAND_RESET_I(3);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_NS = VL_RAND_RESET_I(3);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_result = VL_RAND_RESET_Q(33);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__clpx_shift_result = VL_RAND_RESET_I(16);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT____VdfgTmp_ha7611102__0 = 0;
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT____VdfgTmp_ha42c51ca__0 = 0;
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT____VdfgTmp_h4c4298a7__0 = 0;
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT____VdfgTmp_hb3bd7a45__0 = 0;
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__cnt_q = VL_RAND_RESET_I(2);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__next_cnt = VL_RAND_RESET_I(2);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__count_up = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__ctrl_update = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__data_addr_int = VL_RAND_RESET_I(32);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__data_type_q = VL_RAND_RESET_I(2);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_offset_q = VL_RAND_RESET_I(2);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__data_sign_ext_q = VL_RAND_RESET_I(2);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__data_we_q = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__wdata_offset = VL_RAND_RESET_I(2);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_q = VL_RAND_RESET_I(32);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__data_rdata_ext = VL_RAND_RESET_I(32);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int = VL_RAND_RESET_I(32);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_rdata_int = VL_RAND_RESET_I(32);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mepc_q = VL_RAND_RESET_I(32);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mepc_n = VL_RAND_RESET_I(32);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_q = VL_RAND_RESET_I(32);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_n = VL_RAND_RESET_I(32);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__depc_q = VL_RAND_RESET_I(32);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__depc_n = VL_RAND_RESET_I(32);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__dscratch0_q = VL_RAND_RESET_I(32);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__dscratch0_n = VL_RAND_RESET_I(32);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__dscratch1_q = VL_RAND_RESET_I(32);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__dscratch1_n = VL_RAND_RESET_I(32);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mscratch_q = VL_RAND_RESET_I(32);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mscratch_n = VL_RAND_RESET_I(32);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_q = VL_RAND_RESET_I(7);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_n = VL_RAND_RESET_I(7);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mcause_q = VL_RAND_RESET_I(6);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mcause_n = VL_RAND_RESET_I(6);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_n = VL_RAND_RESET_I(24);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_q = VL_RAND_RESET_I(24);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_mode_n = VL_RAND_RESET_I(2);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_mode_q = VL_RAND_RESET_I(2);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mie_q = VL_RAND_RESET_I(32);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mie_n = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(2048, vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q);
    VL_RAND_RESET_W(1024, vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q);
    VL_RAND_RESET_W(1024, vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_q = VL_RAND_RESET_I(32);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_n = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(2048, vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower = VL_RAND_RESET_I(32);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_upper = VL_RAND_RESET_I(32);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_increment = VL_RAND_RESET_I(32);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_control_exec_q = VL_RAND_RESET_I(1);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_q = VL_RAND_RESET_I(32);
    vlSelf->tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__cs_registers_i__DOT____VdfgTmp_hebd32772__0 = 0;
    vlSelf->__VdfgTmp_h9edd808c__0 = 0;
    vlSelf->__Vdpi_export_trigger = 0;
    vlSelf->__Vtrigrprev__TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vtrigrprev__TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes);
    vlSelf->__Vtrigrprev__TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__div_ready = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_op_a = VL_RAND_RESET_I(17);
    vlSelf->__Vtrigrprev__TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_op_b = VL_RAND_RESET_I(17);
    vlSelf->__VstlDidInit = 0;
    vlSelf->__VicoDidInit = 0;
    vlSelf->__Vtrigrprev__TOP__clk_i = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__rst_ni = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
}
