// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top_verilator.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtb_top_verilator__Syms.h"
#include "Vtb_top_verilator_mm_ram__R16.h"

extern const VlUnpacked<CData/*3:0*/, 64> Vtb_top_verilator__ConstPool__TABLE_hec80b023_0;

VL_ATTR_COLD void Vtb_top_verilator_mm_ram__R16___stl_sequent__TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i__0(Vtb_top_verilator_mm_ram__R16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_verilator_mm_ram__R16___stl_sequent__TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i__0\n"); );
    // Init
    CData/*0:0*/ __PVT__ram_amoshimd_data_gnt;
    __PVT__ram_amoshimd_data_gnt = 0;
    CData/*0:0*/ __PVT__ram_data_req;
    __PVT__ram_data_req = 0;
    CData/*0:0*/ __PVT__ram_data_gnt;
    __PVT__ram_data_gnt = 0;
    CData/*0:0*/ __PVT__data_req_dec;
    __PVT__data_req_dec = 0;
    CData/*0:0*/ __PVT__data_we_dec;
    __PVT__data_we_dec = 0;
    CData/*0:0*/ __PVT__perip_gnt;
    __PVT__perip_gnt = 0;
    IData/*31:0*/ __PVT__i_amo_shim__DOT__amo_operand_a;
    __PVT__i_amo_shim__DOT__amo_operand_a = 0;
    QData/*33:0*/ __PVT__i_amo_shim__DOT__adder_sum;
    __PVT__i_amo_shim__DOT__adder_sum = 0;
    QData/*32:0*/ __PVT__i_amo_shim__DOT__adder_operand_a;
    __PVT__i_amo_shim__DOT__adder_operand_a = 0;
    CData/*5:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    VlWide<3>/*95:0*/ __Vtemp_h79e307c5__0;
    // Body
    vlSelf->__PVT__i_amo_shim__DOT__adder_operand_b 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelf->__PVT__i_amo_shim__DOT__amo_operand_b_q));
    __Vtableidx1 = vlSelf->__PVT__ram_data_atop;
    vlSelf->__PVT__ram_data_atop_conv = Vtb_top_verilator__ConstPool__TABLE_hec80b023_0
        [__Vtableidx1];
    vlSelf->__PVT__instr_rvalid_stall_i__DOT__fifo_empty 
        = ((IData)(vlSelf->__PVT__instr_rvalid_stall_i__DOT__rptr) 
           == (IData)(vlSelf->__PVT__instr_rvalid_stall_i__DOT__wptr));
    vlSelf->__PVT__instr_rvalid_stall_i__DOT__current_delay 
        = (0xfU & (IData)((vlSelf->__PVT__instr_rvalid_stall_i__DOT__fifo
                           [(7U & (IData)(vlSelf->__PVT__instr_rvalid_stall_i__DOT__rptr))] 
                           >> 0x20U)));
    vlSelf->__PVT__i_amo_shim__DOT__sc_ok = ((IData)(vlSelf->__PVT__i_amo_shim__DOT__reserv_valid_q) 
                                             & (vlSelf->__PVT__i_amo_shim__DOT__addr_q 
                                                == vlSelf->__PVT__i_amo_shim__DOT__reserv_q));
    __PVT__i_amo_shim__DOT__amo_operand_a = ((IData)(vlSelf->__PVT__i_amo_shim__DOT__upper_word_q)
                                              ? 0U : vlSelf->__PVT__tmp_ram_amoshimd_data_rdata);
    vlSelf->__PVT__data_rvalid_stall_i__DOT__fifo_empty 
        = ((IData)(vlSelf->__PVT__data_rvalid_stall_i__DOT__rptr) 
           == (IData)(vlSelf->__PVT__data_rvalid_stall_i__DOT__wptr));
    vlSelf->__PVT__data_rvalid_stall_i__DOT__current_delay 
        = (0xfU & (IData)((vlSelf->__PVT__data_rvalid_stall_i__DOT__fifo
                           [(7U & (IData)(vlSelf->__PVT__data_rvalid_stall_i__DOT__rptr))] 
                           >> 0x20U)));
    vlSelf->tests_passed_o = 0U;
    vlSelf->tests_failed_o = 0U;
    vlSelf->exit_value_o = 0U;
    vlSelf->exit_valid_o = 0U;
    __PVT__perip_gnt = 0U;
    __PVT__data_req_dec = 0U;
    vlSelf->__PVT__data_addr_dec = 0U;
    vlSelf->__PVT__data_wdata_dec = 0U;
    __PVT__data_we_dec = 0U;
    vlSelf->__PVT__data_be_dec = 0U;
    vlSelf->__PVT__print_wdata = 0U;
    vlSelf->__PVT__print_valid = 0U;
    vlSelf->__PVT__timer_wdata = 0U;
    vlSelf->__PVT__timer_reg_valid = 0U;
    vlSelf->__PVT__timer_val_valid = 0U;
    vlSelf->__PVT__sig_end_d = vlSelf->__PVT__sig_end_q;
    vlSelf->__PVT__sig_begin_d = vlSelf->__PVT__sig_begin_q;
    vlSelf->__PVT__rnd_stall_req = 0U;
    vlSelf->__PVT__rnd_stall_addr = 0U;
    vlSelf->__PVT__rnd_stall_wdata = 0U;
    vlSelf->__PVT__rnd_stall_we = 0U;
    vlSelf->__PVT__transaction = 1U;
    if ((8U & (IData)(vlSelf->__PVT__i_amo_shim__DOT__amo_op_q))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__i_amo_shim__DOT__amo_op_q) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSelf->__PVT__i_amo_shim__DOT__amo_op_q))) {
                if ((1U & (~ (IData)(vlSelf->__PVT__i_amo_shim__DOT__amo_op_q)))) {
                    vlSelf->__PVT__i_amo_shim__DOT__adder_operand_b 
                        = (0x1ffffffffULL & (- VL_EXTENDS_QI(33,32, vlSelf->__PVT__i_amo_shim__DOT__amo_operand_b_q)));
                }
            } else {
                vlSelf->__PVT__i_amo_shim__DOT__adder_operand_b 
                    = (0x1ffffffffULL & ((1U & (IData)(vlSelf->__PVT__i_amo_shim__DOT__amo_op_q))
                                          ? (- (QData)((IData)(vlSelf->__PVT__i_amo_shim__DOT__amo_operand_b_q)))
                                          : (- VL_EXTENDS_QI(33,32, vlSelf->__PVT__i_amo_shim__DOT__amo_operand_b_q))));
            }
        }
    } else if ((4U & (IData)(vlSelf->__PVT__i_amo_shim__DOT__amo_op_q))) {
        if ((2U & (IData)(vlSelf->__PVT__i_amo_shim__DOT__amo_op_q))) {
            vlSelf->__PVT__i_amo_shim__DOT__adder_operand_b 
                = (0x1ffffffffULL & ((1U & (IData)(vlSelf->__PVT__i_amo_shim__DOT__amo_op_q))
                                      ? (- (QData)((IData)(vlSelf->__PVT__i_amo_shim__DOT__amo_operand_b_q)))
                                      : (- VL_EXTENDS_QI(33,32, vlSelf->__PVT__i_amo_shim__DOT__amo_operand_b_q))));
        }
    }
    if (vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__data_req) {
        if (vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__data_we_ex) {
            if ((0x400000U > vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__data_addr)) {
                __PVT__data_req_dec = vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__data_req;
                vlSelf->__PVT__data_addr_dec = (0x3fffffU 
                                                & vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__data_addr);
                vlSelf->__PVT__data_wdata_dec = ((2U 
                                                  & (IData)(vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__wdata_offset))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__wdata_offset))
                                                   ? 
                                                  ((vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_c_ex 
                                                    << 0x18U) 
                                                   | (vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_c_ex 
                                                      >> 8U))
                                                   : 
                                                  ((vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_c_ex 
                                                    << 0x10U) 
                                                   | (vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_c_ex 
                                                      >> 0x10U)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__wdata_offset))
                                                   ? 
                                                  ((vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_c_ex 
                                                    << 8U) 
                                                   | (vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_c_ex 
                                                      >> 0x18U))
                                                   : vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_c_ex));
                __PVT__data_we_dec = vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__data_we_ex;
                vlSelf->__PVT__data_be_dec = ((2U & (IData)(vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__data_type_ex))
                                               ? ((2U 
                                                   & vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__data_addr_int)
                                                   ? 
                                                  ((1U 
                                                    & vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__data_addr_int)
                                                    ? 8U
                                                    : 4U)
                                                   : 
                                                  ((1U 
                                                    & vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__data_addr_int)
                                                    ? 2U
                                                    : 1U))
                                               : ((1U 
                                                   & (IData)(vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__data_type_ex))
                                                   ? 
                                                  ((IData)(vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__data_misaligned_ex)
                                                    ? 1U
                                                    : 
                                                   ((2U 
                                                     & vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__data_addr_int)
                                                     ? 
                                                    ((1U 
                                                      & vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__data_addr_int)
                                                      ? 8U
                                                      : 0xcU)
                                                     : 
                                                    ((1U 
                                                      & vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__data_addr_int)
                                                      ? 6U
                                                      : 3U)))
                                                   : 
                                                  ((IData)(vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__data_misaligned_ex)
                                                    ? 
                                                   ((2U 
                                                     & vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__data_addr_int)
                                                     ? 
                                                    ((1U 
                                                      & vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__data_addr_int)
                                                      ? 7U
                                                      : 3U)
                                                     : 
                                                    ((1U 
                                                      & vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__data_addr_int)
                                                      ? 1U
                                                      : 0U))
                                                    : 
                                                   ((2U 
                                                     & vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__data_addr_int)
                                                     ? 
                                                    ((1U 
                                                      & vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__data_addr_int)
                                                      ? 8U
                                                      : 0xcU)
                                                     : 
                                                    ((1U 
                                                      & vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__data_addr_int)
                                                      ? 0xeU
                                                      : 0xfU)))));
                vlSelf->__PVT__transaction = 0U;
            } else if ((0x10000000U == vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__data_addr)) {
                vlSelf->__PVT__print_wdata = ((2U & (IData)(vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__wdata_offset))
                                               ? ((1U 
                                                   & (IData)(vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__wdata_offset))
                                                   ? 
                                                  ((vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_c_ex 
                                                    << 0x18U) 
                                                   | (vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_c_ex 
                                                      >> 8U))
                                                   : 
                                                  ((vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_c_ex 
                                                    << 0x10U) 
                                                   | (vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_c_ex 
                                                      >> 0x10U)))
                                               : ((1U 
                                                   & (IData)(vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__wdata_offset))
                                                   ? 
                                                  ((vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_c_ex 
                                                    << 8U) 
                                                   | (vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_c_ex 
                                                      >> 0x18U))
                                                   : vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_c_ex));
                vlSelf->__PVT__print_valid = vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__data_req;
                __PVT__perip_gnt = 1U;
            } else if ((0x20000000U == vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__data_addr)) {
                if ((0x75bcd15U == ((2U & (IData)(vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__wdata_offset))
                                     ? ((1U & (IData)(vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__wdata_offset))
                                         ? ((vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_c_ex 
                                             << 0x18U) 
                                            | (vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_c_ex 
                                               >> 8U))
                                         : ((vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_c_ex 
                                             << 0x10U) 
                                            | (vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_c_ex 
                                               >> 0x10U)))
                                     : ((1U & (IData)(vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__wdata_offset))
                                         ? ((vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_c_ex 
                                             << 8U) 
                                            | (vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_c_ex 
                                               >> 0x18U))
                                         : vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_c_ex)))) {
                    vlSelf->tests_passed_o = 1U;
                } else if ((1U == ((2U & (IData)(vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__wdata_offset))
                                    ? ((1U & (IData)(vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__wdata_offset))
                                        ? ((vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_c_ex 
                                            << 0x18U) 
                                           | (vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_c_ex 
                                              >> 8U))
                                        : ((vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_c_ex 
                                            << 0x10U) 
                                           | (vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_c_ex 
                                              >> 0x10U)))
                                    : ((1U & (IData)(vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__wdata_offset))
                                        ? ((vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_c_ex 
                                            << 8U) 
                                           | (vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_c_ex 
                                              >> 0x18U))
                                        : vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_c_ex)))) {
                    vlSelf->tests_failed_o = 1U;
                }
                __PVT__perip_gnt = 1U;
            } else if ((0x20000004U == vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__data_addr)) {
                vlSelf->exit_valid_o = 1U;
                vlSelf->exit_value_o = ((2U & (IData)(vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__wdata_offset))
                                         ? ((1U & (IData)(vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__wdata_offset))
                                             ? ((vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_c_ex 
                                                 << 0x18U) 
                                                | (vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_c_ex 
                                                   >> 8U))
                                             : ((vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_c_ex 
                                                 << 0x10U) 
                                                | (vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_c_ex 
                                                   >> 0x10U)))
                                         : ((1U & (IData)(vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__wdata_offset))
                                             ? ((vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_c_ex 
                                                 << 8U) 
                                                | (vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_c_ex 
                                                   >> 0x18U))
                                             : vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_c_ex));
                __PVT__perip_gnt = 1U;
            } else if ((0x20000008U == vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__data_addr)) {
                vlSelf->__PVT__sig_begin_d = ((2U & (IData)(vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__wdata_offset))
                                               ? ((1U 
                                                   & (IData)(vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__wdata_offset))
                                                   ? 
                                                  ((vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_c_ex 
                                                    << 0x18U) 
                                                   | (vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_c_ex 
                                                      >> 8U))
                                                   : 
                                                  ((vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_c_ex 
                                                    << 0x10U) 
                                                   | (vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_c_ex 
                                                      >> 0x10U)))
                                               : ((1U 
                                                   & (IData)(vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__wdata_offset))
                                                   ? 
                                                  ((vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_c_ex 
                                                    << 8U) 
                                                   | (vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_c_ex 
                                                      >> 0x18U))
                                                   : vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_c_ex));
                __PVT__perip_gnt = 1U;
            } else if ((0x2000000cU == vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__data_addr)) {
                vlSelf->__PVT__sig_end_d = ((2U & (IData)(vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__wdata_offset))
                                             ? ((1U 
                                                 & (IData)(vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__wdata_offset))
                                                 ? 
                                                ((vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_c_ex 
                                                  << 0x18U) 
                                                 | (vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_c_ex 
                                                    >> 8U))
                                                 : 
                                                ((vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_c_ex 
                                                  << 0x10U) 
                                                 | (vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_c_ex 
                                                    >> 0x10U)))
                                             : ((1U 
                                                 & (IData)(vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__wdata_offset))
                                                 ? 
                                                ((vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_c_ex 
                                                  << 8U) 
                                                 | (vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_c_ex 
                                                    >> 0x18U))
                                                 : vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_c_ex));
                __PVT__perip_gnt = 1U;
            } else if (VL_UNLIKELY((0x20000010U == vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__data_addr))) {
                __Vtemp_h79e307c5__0[0U] = 0x653d2573U;
                __Vtemp_h79e307c5__0[1U] = 0x61747572U;
                __Vtemp_h79e307c5__0[2U] = 0x7369676eU;
                if (VL_UNLIKELY(VL_VALUEPLUSARGS_INN(64, 
                                                     VL_CVT_PACK_STR_NW(3, __Vtemp_h79e307c5__0), 
                                                     vlSelf->__PVT__unnamedblk1__DOT__sig_file))) {
                    vlSelf->__PVT__unnamedblk1__DOT__sig_fd = VL_FOPEN_NN(
                                                                          VL_CVT_PACK_STR_NN(vlSelf->__PVT__unnamedblk1__DOT__sig_file)
                                                                          , 
                                                                          std::string{"w"});
                    if (VL_UNLIKELY((0U == vlSelf->__PVT__unnamedblk1__DOT__sig_fd))) {
                        VL_WRITEF("[%0t] %%Error: mm_ram.sv:262: Assertion failed in %Ntb_top_verilator.cv32e40p_tb_wrapper_i.ram_i.unnamedblk1: can't open file\n",
                                  64,VL_TIME_UNITED_Q(1),
                                  -12,vlSymsp->name());
                        vlSelf->__PVT__unnamedblk1__DOT__use_sig_file = 0U;
                        VL_STOP_MT("/home/rohan/core-v-verif/cv32e40p/tb/core/mm_ram.sv", 262, "");
                    } else {
                        vlSelf->__PVT__unnamedblk1__DOT__use_sig_file = 1U;
                    }
                }
                vlSelf->exit_valid_o = 1U;
                vlSelf->exit_value_o = 0U;
                __PVT__perip_gnt = 1U;
                VL_WRITEF("Dumping signature\n");
                vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__addr 
                    = vlSelf->__PVT__sig_begin_q;
                while ((vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__addr 
                        < vlSelf->__PVT__sig_end_q)) {
                    VL_WRITEF("%x%x%x%x\n",8,vlSelf->dp_ram_i__DOT__mem
                              [(0x3fffffU & ((IData)(3U) 
                                             + vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__addr))],
                              8,vlSelf->dp_ram_i__DOT__mem
                              [(0x3fffffU & ((IData)(2U) 
                                             + vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__addr))],
                              8,vlSelf->dp_ram_i__DOT__mem
                              [(0x3fffffU & ((IData)(1U) 
                                             + vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__addr))],
                              8,vlSelf->dp_ram_i__DOT__mem
                              [(0x3fffffU & vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__addr)]);
                    if (VL_UNLIKELY(vlSelf->__PVT__unnamedblk1__DOT__use_sig_file)) {
                        VL_FWRITEF(vlSelf->__PVT__unnamedblk1__DOT__sig_fd,"%x%x%x%x\n",
                                   8,vlSelf->dp_ram_i__DOT__mem
                                   [(0x3fffffU & ((IData)(3U) 
                                                  + vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__addr))],
                                   8,vlSelf->dp_ram_i__DOT__mem
                                   [(0x3fffffU & ((IData)(2U) 
                                                  + vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__addr))],
                                   8,vlSelf->dp_ram_i__DOT__mem
                                   [(0x3fffffU & ((IData)(1U) 
                                                  + vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__addr))],
                                   8,vlSelf->dp_ram_i__DOT__mem
                                   [(0x3fffffU & vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__addr)]);
                    }
                    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__addr 
                        = ((IData)(4U) + vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__addr);
                }
            } else if ((0x15000000U == vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__data_addr)) {
                vlSelf->__PVT__timer_wdata = ((2U & (IData)(vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__wdata_offset))
                                               ? ((1U 
                                                   & (IData)(vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__wdata_offset))
                                                   ? 
                                                  ((vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_c_ex 
                                                    << 0x18U) 
                                                   | (vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_c_ex 
                                                      >> 8U))
                                                   : 
                                                  ((vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_c_ex 
                                                    << 0x10U) 
                                                   | (vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_c_ex 
                                                      >> 0x10U)))
                                               : ((1U 
                                                   & (IData)(vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__wdata_offset))
                                                   ? 
                                                  ((vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_c_ex 
                                                    << 8U) 
                                                   | (vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_c_ex 
                                                      >> 0x18U))
                                                   : vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_c_ex));
                vlSelf->__PVT__timer_reg_valid = 1U;
                __PVT__perip_gnt = 1U;
            } else if ((0x15000004U == vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__data_addr)) {
                vlSelf->__PVT__timer_wdata = ((2U & (IData)(vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__wdata_offset))
                                               ? ((1U 
                                                   & (IData)(vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__wdata_offset))
                                                   ? 
                                                  ((vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_c_ex 
                                                    << 0x18U) 
                                                   | (vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_c_ex 
                                                      >> 8U))
                                                   : 
                                                  ((vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_c_ex 
                                                    << 0x10U) 
                                                   | (vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_c_ex 
                                                      >> 0x10U)))
                                               : ((1U 
                                                   & (IData)(vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__wdata_offset))
                                                   ? 
                                                  ((vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_c_ex 
                                                    << 8U) 
                                                   | (vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_c_ex 
                                                      >> 0x18U))
                                                   : vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_c_ex));
                vlSelf->__PVT__timer_val_valid = 1U;
                __PVT__perip_gnt = 1U;
            } else if ((0x1600U == (vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__data_addr 
                                    >> 0x10U))) {
                vlSelf->__PVT__rnd_stall_req = vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__data_req;
                vlSelf->__PVT__rnd_stall_wdata = ((2U 
                                                   & (IData)(vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__wdata_offset))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__wdata_offset))
                                                    ? 
                                                   ((vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_c_ex 
                                                     << 0x18U) 
                                                    | (vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_c_ex 
                                                       >> 8U))
                                                    : 
                                                   ((vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_c_ex 
                                                     << 0x10U) 
                                                    | (vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_c_ex 
                                                       >> 0x10U)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__wdata_offset))
                                                    ? 
                                                   ((vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_c_ex 
                                                     << 8U) 
                                                    | (vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_c_ex 
                                                       >> 0x18U))
                                                    : vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_c_ex));
                vlSelf->__PVT__rnd_stall_addr = vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__data_addr;
                vlSelf->__PVT__rnd_stall_we = vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__data_we_ex;
                __PVT__perip_gnt = 1U;
            }
        } else if ((0x400000U > vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__data_addr)) {
            __PVT__data_req_dec = vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__data_req;
            vlSelf->__PVT__data_addr_dec = (0x3fffffU 
                                            & vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__data_addr);
            vlSelf->__PVT__data_wdata_dec = ((2U & (IData)(vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__wdata_offset))
                                              ? ((1U 
                                                  & (IData)(vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__wdata_offset))
                                                  ? 
                                                 ((vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_c_ex 
                                                   << 0x18U) 
                                                  | (vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_c_ex 
                                                     >> 8U))
                                                  : 
                                                 ((vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_c_ex 
                                                   << 0x10U) 
                                                  | (vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_c_ex 
                                                     >> 0x10U)))
                                              : ((1U 
                                                  & (IData)(vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__wdata_offset))
                                                  ? 
                                                 ((vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_c_ex 
                                                   << 8U) 
                                                  | (vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_c_ex 
                                                     >> 0x18U))
                                                  : vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_c_ex));
            __PVT__data_we_dec = vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__data_we_ex;
            vlSelf->__PVT__data_be_dec = ((2U & (IData)(vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__data_type_ex))
                                           ? ((2U & vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__data_addr_int)
                                               ? ((1U 
                                                   & vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__data_addr_int)
                                                   ? 8U
                                                   : 4U)
                                               : ((1U 
                                                   & vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__data_addr_int)
                                                   ? 2U
                                                   : 1U))
                                           : ((1U & (IData)(vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__data_type_ex))
                                               ? ((IData)(vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__data_misaligned_ex)
                                                   ? 1U
                                                   : 
                                                  ((2U 
                                                    & vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__data_addr_int)
                                                    ? 
                                                   ((1U 
                                                     & vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__data_addr_int)
                                                     ? 8U
                                                     : 0xcU)
                                                    : 
                                                   ((1U 
                                                     & vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__data_addr_int)
                                                     ? 6U
                                                     : 3U)))
                                               : ((IData)(vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__data_misaligned_ex)
                                                   ? 
                                                  ((2U 
                                                    & vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__data_addr_int)
                                                    ? 
                                                   ((1U 
                                                     & vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__data_addr_int)
                                                     ? 7U
                                                     : 3U)
                                                    : 
                                                   ((1U 
                                                     & vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__data_addr_int)
                                                     ? 1U
                                                     : 0U))
                                                   : 
                                                  ((2U 
                                                    & vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__data_addr_int)
                                                    ? 
                                                   ((1U 
                                                     & vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__data_addr_int)
                                                     ? 8U
                                                     : 0xcU)
                                                    : 
                                                   ((1U 
                                                     & vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__data_addr_int)
                                                     ? 0xeU
                                                     : 0xfU)))));
            vlSelf->__PVT__transaction = 0U;
        } else if ((0x1600U == (vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__data_addr 
                                >> 0x10U))) {
            vlSelf->__PVT__rnd_stall_req = vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__data_req;
            vlSelf->__PVT__rnd_stall_wdata = ((2U & (IData)(vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__wdata_offset))
                                               ? ((1U 
                                                   & (IData)(vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__wdata_offset))
                                                   ? 
                                                  ((vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_c_ex 
                                                    << 0x18U) 
                                                   | (vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_c_ex 
                                                      >> 8U))
                                                   : 
                                                  ((vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_c_ex 
                                                    << 0x10U) 
                                                   | (vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_c_ex 
                                                      >> 0x10U)))
                                               : ((1U 
                                                   & (IData)(vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__wdata_offset))
                                                   ? 
                                                  ((vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_c_ex 
                                                    << 8U) 
                                                   | (vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_c_ex 
                                                      >> 0x18U))
                                                   : vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_c_ex));
            vlSelf->__PVT__rnd_stall_addr = vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__data_addr;
            vlSelf->__PVT__rnd_stall_we = vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__data_we_ex;
            vlSelf->__PVT__transaction = 2U;
        } else if ((0x15001000U == vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__data_addr)) {
            vlSelf->__PVT__transaction = 1U;
            __PVT__perip_gnt = 1U;
        } else {
            vlSelf->__PVT__transaction = 3U;
        }
    }
    vlSelf->instr_rvalid_stall_i__DOT____VdfgExtracted_he119aaf2__0 
        = ((~ (IData)(vlSelf->__PVT__instr_rvalid_stall_i__DOT__fifo_empty)) 
           & (0U == (IData)(vlSelf->__PVT__instr_rvalid_stall_i__DOT__current_delay)));
    __PVT__i_amo_shim__DOT__adder_operand_a = (0x1ffffffffULL 
                                               & VL_EXTENDS_QI(33,32, __PVT__i_amo_shim__DOT__amo_operand_a));
    vlSelf->__PVT__tmp_ram_data_rdata = (QData)((IData)(vlSelf->__PVT__tmp_ram_amoshimd_data_rdata));
    vlSelf->data_rvalid_stall_i__DOT____VdfgExtracted_he119aaf2__0 
        = ((~ (IData)(vlSelf->__PVT__data_rvalid_stall_i__DOT__fifo_empty)) 
           & (0U == (IData)(vlSelf->__PVT__data_rvalid_stall_i__DOT__current_delay)));
    vlSelf->__PVT__ram_amoshimd_data_be = vlSelf->__PVT__data_be_dec;
    vlSelf->__PVT__ram_amoshimd_data_addr = vlSelf->__PVT__data_addr_dec;
    __PVT__ram_data_req = __PVT__data_req_dec;
    vlSelf->__Vcellout__instr_rvalid_stall_i__rdata_o = 0U;
    vlSelf->instr_rvalid_o = 0U;
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
        vlSelf->instr_rvalid_o = 1U;
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
    vlSelf->__PVT__data_rdata_mux = 0U;
    if ((0U != vlSelf->__PVT__rnd_stall_regs[1U])) {
        __PVT__ram_data_req = vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__data_req;
    }
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
            if ((0xbU != (IData)(vlSelf->__PVT__i_amo_shim__DOT__amo_op_q))) {
                vlSelf->__PVT__ram_amoshimd_data_be 
                    = ((IData)(vlSelf->__PVT__i_amo_shim__DOT__upper_word_q)
                        ? 0xf0U : 0xfU);
                vlSelf->__PVT__ram_amoshimd_data_addr 
                    = vlSelf->__PVT__i_amo_shim__DOT__addr_q;
            }
        }
    }
    if ((0U == (IData)(vlSelf->__PVT__transaction_q))) {
        vlSelf->__PVT__data_rdata_mux = (IData)(vlSelf->__PVT__tmp_ram_data_rdata);
    } else if (VL_UNLIKELY((2U == (IData)(vlSelf->__PVT__transaction_q)))) {
        VL_WRITEF("out of bounds read from %08x\nRandom stall generator is not supported with Verilator\n[%0t] %%Error: mm_ram.sv:385: Assertion failed in %Ntb_top_verilator.cv32e40p_tb_wrapper_i.ram_i.read_mux\n",
                  32,vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__data_addr,
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/rohan/core-v-verif/cv32e40p/tb/core/mm_ram.sv", 385, "");
    } else if (VL_UNLIKELY((3U == (IData)(vlSelf->__PVT__transaction_q)))) {
        VL_WRITEF("out of bounds read from %08x\n[%0t] %%Error: mm_ram.sv:389: Assertion failed in %Ntb_top_verilator.cv32e40p_tb_wrapper_i.ram_i.read_mux\n",
                  32,vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__data_addr,
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/rohan/core-v-verif/cv32e40p/tb/core/mm_ram.sv", 389, "");
    }
    vlSelf->data_rvalid_o = 0U;
    vlSelf->__PVT__i_amo_shim__DOT__load_amo = 0U;
    vlSelf->__PVT__ram_amoshimd_data_req = __PVT__ram_data_req;
    vlSelf->__PVT__i_amo_shim__DOT__reserv_valid_d 
        = vlSelf->__PVT__i_amo_shim__DOT__reserv_valid_q;
    vlSelf->__PVT__ram_amoshimd_data_we = __PVT__data_we_dec;
    vlSelf->__PVT__i_amo_shim__DOT__reserv_d = vlSelf->__PVT__i_amo_shim__DOT__reserv_q;
    if ((1U & (~ (IData)(vlSelf->__PVT__i_amo_shim__DOT__state_q)))) {
        if ((1U & (~ ((IData)(__PVT__ram_data_req) 
                      & (0xbU == (IData)(vlSelf->__PVT__ram_data_atop_conv)))))) {
            if (((IData)(__PVT__ram_data_req) & (0U 
                                                 != (IData)(vlSelf->__PVT__ram_data_atop_conv)))) {
                vlSelf->__PVT__i_amo_shim__DOT__load_amo = 1U;
            }
        }
        if (((IData)(__PVT__ram_data_req) & (0xbU == (IData)(vlSelf->__PVT__ram_data_atop_conv)))) {
            vlSelf->__PVT__i_amo_shim__DOT__reserv_d 
                = vlSelf->__PVT__data_addr_dec;
        }
    }
    __PVT__ram_amoshimd_data_gnt = __PVT__ram_data_req;
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
    vlSelf->data_rdata_o = 0U;
    if (vlSelf->data_rvalid_stall_i__DOT____VdfgExtracted_he119aaf2__0) {
        vlSelf->data_rvalid_o = 1U;
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
    if (vlSelf->__PVT__i_amo_shim__DOT__state_q) {
        if (vlSelf->__PVT__i_amo_shim__DOT__state_q) {
            if ((0xbU != (IData)(vlSelf->__PVT__i_amo_shim__DOT__amo_op_q))) {
                vlSelf->__PVT__ram_amoshimd_data_req = 1U;
                vlSelf->__PVT__ram_amoshimd_data_we = 1U;
            }
            if ((0xcU == (IData)(vlSelf->__PVT__i_amo_shim__DOT__amo_op_q))) {
                vlSelf->__PVT__i_amo_shim__DOT__reserv_valid_d = 0U;
            }
            __PVT__ram_amoshimd_data_gnt = 0U;
        }
    } else {
        if (((IData)(__PVT__ram_data_req) & (0xbU == (IData)(vlSelf->__PVT__ram_data_atop_conv)))) {
            vlSelf->__PVT__i_amo_shim__DOT__reserv_valid_d = 1U;
        }
        if ((1U & (~ ((IData)(__PVT__ram_data_req) 
                      & (0xbU == (IData)(vlSelf->__PVT__ram_data_atop_conv)))))) {
            if (((IData)(__PVT__ram_data_req) & (0U 
                                                 != (IData)(vlSelf->__PVT__ram_data_atop_conv)))) {
                vlSelf->__PVT__ram_amoshimd_data_we = 0U;
            }
        }
    }
    __PVT__ram_data_gnt = __PVT__ram_amoshimd_data_gnt;
    if ((0U != vlSelf->__PVT__rnd_stall_regs[1U])) {
        __PVT__ram_data_gnt = vlSelf->__PVT__rnd_stall_data_gnt;
    }
    vlSelf->__PVT__ram_amoshimd_data_wdata = (QData)((IData)(vlSelf->__PVT__data_wdata_dec));
    if (vlSelf->__PVT__i_amo_shim__DOT__state_q) {
        if (vlSelf->__PVT__i_amo_shim__DOT__state_q) {
            if ((0xbU != (IData)(vlSelf->__PVT__i_amo_shim__DOT__amo_op_q))) {
                vlSelf->__PVT__ram_amoshimd_data_wdata 
                    = ((IData)(vlSelf->__PVT__i_amo_shim__DOT__upper_word_q)
                        ? ((QData)((IData)(vlSelf->__PVT__i_amo_shim__DOT__amo_result)) 
                           << 0x20U) : (QData)((IData)(vlSelf->__PVT__i_amo_shim__DOT__amo_result)));
            }
        }
    }
    vlSelf->data_gnt_o = ((IData)(__PVT__perip_gnt) 
                          | (IData)(__PVT__ram_data_gnt));
    vlSelf->__PVT__data_rvalid_stall_i__DOT__fifo_push 
        = ((IData)(vlSelf->data_gnt_o) & (IData)(vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__data_req));
}
