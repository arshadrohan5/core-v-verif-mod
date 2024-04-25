// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top_verilator.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtb_top_verilator__Syms.h"
#include "Vtb_top_verilator_mm_ram__R16.h"

void Vtb_top_verilator_mm_ram__R16____Vdpiexp_dp_ram_i__DOT__read_byte_TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i(Vtb_top_verilator__Syms* __restrict vlSymsp, IData/*21:0*/ byte_addr, IData/*31:0*/ &read_byte__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_verilator_mm_ram__R16____Vdpiexp_dp_ram_i__DOT__read_byte_TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i\n"); );
    // Init
    // Body
    read_byte__Vfuncrtn = vlSymsp->TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i.dp_ram_i__DOT__mem
        [byte_addr];
}

void Vtb_top_verilator_mm_ram__R16____Vdpiexp_dp_ram_i__DOT__write_byte_TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i(Vtb_top_verilator__Syms* __restrict vlSymsp, IData/*21:0*/ byte_addr, CData/*7:0*/ val, CData/*7:0*/ &other) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_verilator_mm_ram__R16____Vdpiexp_dp_ram_i__DOT__write_byte_TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i\n"); );
    // Init
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i.dp_ram_i__DOT__mem[byte_addr] 
        = val;
    other = vlSymsp->TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i.dp_ram_i__DOT__mem
        [byte_addr];
}

VL_INLINE_OPT void Vtb_top_verilator_mm_ram__R16___ico_sequent__TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i__0(Vtb_top_verilator_mm_ram__R16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_verilator_mm_ram__R16___ico_sequent__TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i__0\n"); );
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
    VlWide<3>/*95:0*/ __Vtemp_h79e307c5__0;
    // Body
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
    vlSelf->__PVT__ram_amoshimd_data_be = vlSelf->__PVT__data_be_dec;
    vlSelf->__PVT__ram_amoshimd_data_wdata = (QData)((IData)(vlSelf->__PVT__data_wdata_dec));
    vlSelf->__PVT__ram_amoshimd_data_addr = vlSelf->__PVT__data_addr_dec;
    __PVT__ram_data_req = __PVT__data_req_dec;
    vlSelf->__PVT__i_amo_shim__DOT__load_amo = 0U;
    if ((0U != vlSelf->__PVT__rnd_stall_regs[1U])) {
        __PVT__ram_data_req = vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__data_req;
    }
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
    if (vlSelf->__PVT__i_amo_shim__DOT__state_q) {
        if (vlSelf->__PVT__i_amo_shim__DOT__state_q) {
            if ((0xbU != (IData)(vlSelf->__PVT__i_amo_shim__DOT__amo_op_q))) {
                if (vlSelf->__PVT__i_amo_shim__DOT__upper_word_q) {
                    vlSelf->__PVT__ram_amoshimd_data_be = 0xf0U;
                    vlSelf->__PVT__ram_amoshimd_data_wdata 
                        = ((QData)((IData)(vlSelf->__PVT__i_amo_shim__DOT__amo_result)) 
                           << 0x20U);
                } else {
                    vlSelf->__PVT__ram_amoshimd_data_be = 0xfU;
                    vlSelf->__PVT__ram_amoshimd_data_wdata 
                        = (QData)((IData)(vlSelf->__PVT__i_amo_shim__DOT__amo_result));
                }
                vlSelf->__PVT__ram_amoshimd_data_addr 
                    = vlSelf->__PVT__i_amo_shim__DOT__addr_q;
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
    vlSelf->data_gnt_o = ((IData)(__PVT__perip_gnt) 
                          | (IData)(__PVT__ram_data_gnt));
    vlSelf->__PVT__data_rvalid_stall_i__DOT__fifo_push 
        = ((IData)(vlSelf->data_gnt_o) & (IData)(vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__data_req));
}

VL_INLINE_OPT void Vtb_top_verilator_mm_ram__R16___ico_comb__TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i__0(Vtb_top_verilator_mm_ram__R16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_verilator_mm_ram__R16___ico_comb__TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i__0\n"); );
    // Body
    vlSelf->__PVT__ram_instr_gnt = vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_req_pmp;
    if ((0U != vlSelf->__PVT__rnd_stall_regs[0U])) {
        vlSelf->__PVT__ram_instr_gnt = vlSelf->__PVT__rnd_stall_instr_gnt;
    }
    vlSelf->__PVT__instr_rvalid_stall_i__DOT__fifo_push 
        = ((IData)(vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_req_pmp) 
           & (IData)(vlSelf->__PVT__ram_instr_gnt));
}

VL_INLINE_OPT void Vtb_top_verilator_mm_ram__R16___act_sequent__TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i__1(Vtb_top_verilator_mm_ram__R16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_verilator_mm_ram__R16___act_sequent__TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i__1\n"); );
    // Body
    if (vlSymsp->TOP.rst_ni) {
        if (vlSelf->__PVT__data_rvalid_stall_i__DOT__fifo_push) {
            vlSelf->__PVT__data_rvalid_stall_i__DOT__fifo[(7U 
                                                           & (IData)(vlSelf->__PVT__data_rvalid_stall_i__DOT__wptr))] 
                = ((QData)((IData)(vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__data_we_ex)) 
                   << 0x24U);
        }
        if (vlSelf->__PVT__data_rvalid_stall_i__DOT__rvalid_i_q) {
            vlSelf->__Vdlyvval__data_rvalid_stall_i__DOT__fifo__v0 
                = ((1U & (IData)((vlSelf->__PVT__data_rvalid_stall_i__DOT__fifo
                                  [vlSelf->__PVT__data_rvalid_stall_i__DOT__wptr_rdata] 
                                  >> 0x24U))) ? 0U : vlSelf->__PVT__data_rdata_mux);
            vlSelf->__Vdlyvset__data_rvalid_stall_i__DOT__fifo__v0 = 1U;
            vlSelf->__Vdlyvlsb__data_rvalid_stall_i__DOT__fifo__v0 = 0U;
            vlSelf->__Vdlyvdim0__data_rvalid_stall_i__DOT__fifo__v0 
                = vlSelf->__PVT__data_rvalid_stall_i__DOT__wptr_rdata;
        }
    } else {
        vlSelf->__PVT__data_rvalid_stall_i__DOT__fifo[0U] = 0ULL;
        vlSelf->__PVT__data_rvalid_stall_i__DOT__fifo[1U] = 0ULL;
        vlSelf->__PVT__data_rvalid_stall_i__DOT__fifo[2U] = 0ULL;
        vlSelf->__PVT__data_rvalid_stall_i__DOT__fifo[3U] = 0ULL;
        vlSelf->__PVT__data_rvalid_stall_i__DOT__fifo[4U] = 0ULL;
        vlSelf->__PVT__data_rvalid_stall_i__DOT__fifo[5U] = 0ULL;
        vlSelf->__PVT__data_rvalid_stall_i__DOT__fifo[6U] = 0ULL;
        vlSelf->__PVT__data_rvalid_stall_i__DOT__fifo[7U] = 0ULL;
    }
    vlSelf->__PVT__data_rvalid_stall_i__DOT__current_delay 
        = (0xfU & (IData)((vlSelf->__PVT__data_rvalid_stall_i__DOT__fifo
                           [(7U & (IData)(vlSelf->__PVT__data_rvalid_stall_i__DOT__rptr))] 
                           >> 0x20U)));
    vlSelf->data_rvalid_stall_i__DOT____VdfgExtracted_he119aaf2__0 
        = ((~ (IData)(vlSelf->__PVT__data_rvalid_stall_i__DOT__fifo_empty)) 
           & (0U == (IData)(vlSelf->__PVT__data_rvalid_stall_i__DOT__current_delay)));
    vlSelf->data_rvalid_o = 0U;
    if (vlSelf->data_rvalid_stall_i__DOT____VdfgExtracted_he119aaf2__0) {
        vlSelf->data_rvalid_o = 1U;
    }
}

VL_INLINE_OPT void Vtb_top_verilator_mm_ram__R16___nba_sequent__TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i__0(Vtb_top_verilator_mm_ram__R16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_verilator_mm_ram__R16___nba_sequent__TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i__0\n"); );
    // Init
    IData/*31:0*/ __Vdly__timer_cnt_q;
    __Vdly__timer_cnt_q = 0;
    CData/*3:0*/ __Vdlyvdim0__rnd_stall_regs__v0;
    __Vdlyvdim0__rnd_stall_regs__v0 = 0;
    IData/*31:0*/ __Vdlyvval__rnd_stall_regs__v0;
    __Vdlyvval__rnd_stall_regs__v0 = 0;
    CData/*0:0*/ __Vdlyvset__rnd_stall_regs__v0;
    __Vdlyvset__rnd_stall_regs__v0 = 0;
    CData/*0:0*/ __Vdlyvset__rnd_stall_regs__v1;
    __Vdlyvset__rnd_stall_regs__v1 = 0;
    CData/*3:0*/ __Vdly__instr_rvalid_stall_i__DOT__wptr;
    __Vdly__instr_rvalid_stall_i__DOT__wptr = 0;
    CData/*3:0*/ __Vdly__instr_rvalid_stall_i__DOT__rptr;
    __Vdly__instr_rvalid_stall_i__DOT__rptr = 0;
    CData/*2:0*/ __Vdlyvdim0__instr_rvalid_stall_i__DOT__fifo__v0;
    __Vdlyvdim0__instr_rvalid_stall_i__DOT__fifo__v0 = 0;
    CData/*5:0*/ __Vdlyvlsb__instr_rvalid_stall_i__DOT__fifo__v0;
    __Vdlyvlsb__instr_rvalid_stall_i__DOT__fifo__v0 = 0;
    IData/*31:0*/ __Vdlyvval__instr_rvalid_stall_i__DOT__fifo__v0;
    __Vdlyvval__instr_rvalid_stall_i__DOT__fifo__v0 = 0;
    CData/*0:0*/ __Vdlyvset__instr_rvalid_stall_i__DOT__fifo__v0;
    __Vdlyvset__instr_rvalid_stall_i__DOT__fifo__v0 = 0;
    CData/*2:0*/ __Vdlyvdim0__instr_rvalid_stall_i__DOT__fifo__v1;
    __Vdlyvdim0__instr_rvalid_stall_i__DOT__fifo__v1 = 0;
    CData/*5:0*/ __Vdlyvlsb__instr_rvalid_stall_i__DOT__fifo__v1;
    __Vdlyvlsb__instr_rvalid_stall_i__DOT__fifo__v1 = 0;
    CData/*3:0*/ __Vdlyvval__instr_rvalid_stall_i__DOT__fifo__v1;
    __Vdlyvval__instr_rvalid_stall_i__DOT__fifo__v1 = 0;
    CData/*0:0*/ __Vdlyvset__instr_rvalid_stall_i__DOT__fifo__v1;
    __Vdlyvset__instr_rvalid_stall_i__DOT__fifo__v1 = 0;
    CData/*3:0*/ __Vdly__data_rvalid_stall_i__DOT__wptr;
    __Vdly__data_rvalid_stall_i__DOT__wptr = 0;
    CData/*3:0*/ __Vdly__data_rvalid_stall_i__DOT__rptr;
    __Vdly__data_rvalid_stall_i__DOT__rptr = 0;
    CData/*2:0*/ __Vdlyvdim0__data_rvalid_stall_i__DOT__fifo__v1;
    __Vdlyvdim0__data_rvalid_stall_i__DOT__fifo__v1 = 0;
    CData/*5:0*/ __Vdlyvlsb__data_rvalid_stall_i__DOT__fifo__v1;
    __Vdlyvlsb__data_rvalid_stall_i__DOT__fifo__v1 = 0;
    CData/*3:0*/ __Vdlyvval__data_rvalid_stall_i__DOT__fifo__v1;
    __Vdlyvval__data_rvalid_stall_i__DOT__fifo__v1 = 0;
    CData/*0:0*/ __Vdlyvset__data_rvalid_stall_i__DOT__fifo__v1;
    __Vdlyvset__data_rvalid_stall_i__DOT__fifo__v1 = 0;
    IData/*31:0*/ __Vdly__instr_gnt_stall_i__DOT__grant_delay_cnt;
    __Vdly__instr_gnt_stall_i__DOT__grant_delay_cnt = 0;
    CData/*0:0*/ __Vdly__rnd_stall_instr_gnt;
    __Vdly__rnd_stall_instr_gnt = 0;
    IData/*31:0*/ __Vdly__data_gnt_stall_i__DOT__grant_delay_cnt;
    __Vdly__data_gnt_stall_i__DOT__grant_delay_cnt = 0;
    CData/*0:0*/ __Vdly__rnd_stall_data_gnt;
    __Vdly__rnd_stall_data_gnt = 0;
    // Body
    __Vdly__instr_gnt_stall_i__DOT__grant_delay_cnt 
        = vlSelf->__PVT__instr_gnt_stall_i__DOT__grant_delay_cnt;
    __Vdly__rnd_stall_instr_gnt = vlSelf->__PVT__rnd_stall_instr_gnt;
    __Vdly__instr_rvalid_stall_i__DOT__wptr = vlSelf->__PVT__instr_rvalid_stall_i__DOT__wptr;
    __Vdly__instr_rvalid_stall_i__DOT__rptr = vlSelf->__PVT__instr_rvalid_stall_i__DOT__rptr;
    __Vdlyvset__instr_rvalid_stall_i__DOT__fifo__v1 = 0U;
    if (vlSelf->__PVT__print_valid) {
        if (VL_LIKELY(VL_TESTPLUSARGS_I(std::string{"verbose"}))) {
            if (((0x20U <= vlSelf->__PVT__print_wdata) 
                 & (0x80U > vlSelf->__PVT__print_wdata))) {
                VL_WRITEF("OUT: '%c'\n",8,(0xffU & vlSelf->__PVT__print_wdata));
            } else {
                VL_WRITEF("OUT: %3#\n",32,vlSelf->__PVT__print_wdata);
            }
        } else {
            VL_WRITEF("%c",8,(0xffU & vlSelf->__PVT__print_wdata));
        }
    }
    __Vdly__data_gnt_stall_i__DOT__grant_delay_cnt 
        = vlSelf->__PVT__data_gnt_stall_i__DOT__grant_delay_cnt;
    __Vdly__rnd_stall_data_gnt = vlSelf->__PVT__rnd_stall_data_gnt;
    __Vdly__timer_cnt_q = vlSelf->__PVT__timer_cnt_q;
    __Vdly__data_rvalid_stall_i__DOT__wptr = vlSelf->__PVT__data_rvalid_stall_i__DOT__wptr;
    __Vdly__data_rvalid_stall_i__DOT__rptr = vlSelf->__PVT__data_rvalid_stall_i__DOT__rptr;
    __Vdlyvset__rnd_stall_regs__v0 = 0U;
    __Vdlyvset__rnd_stall_regs__v1 = 0U;
    if (VL_UNLIKELY(((VL_TESTPLUSARGS_I(std::string{"verbose"}) 
                      && (IData)(vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__data_req)) 
                     & (IData)(vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__data_we_ex)))) {
        VL_WRITEF("write addr=0x%08x: data=0x%08x\n",
                  32,vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__data_addr,
                  32,((2U & (IData)(vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__wdata_offset))
                       ? ((1U & (IData)(vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__wdata_offset))
                           ? ((vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_c_ex 
                               << 0x18U) | (vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_c_ex 
                                            >> 8U))
                           : ((vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_c_ex 
                               << 0x10U) | (vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_c_ex 
                                            >> 0x10U)))
                       : ((1U & (IData)(vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__load_store_unit_i__DOT__wdata_offset))
                           ? ((vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_c_ex 
                               << 8U) | (vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_c_ex 
                                         >> 0x18U))
                           : vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__alu_operand_c_ex)));
    }
    __Vdlyvset__data_rvalid_stall_i__DOT__fifo__v1 = 0U;
    __Vdlyvset__instr_rvalid_stall_i__DOT__fifo__v0 = 0U;
    if (vlSymsp->TOP.rst_ni) {
        if (vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_req_pmp) {
            if ((1U & ((IData)(vlSelf->__PVT__instr_gnt_stall_i__DOT__grant_core_o_q) 
                       | (~ (IData)(vlSelf->__PVT__instr_gnt_stall_i__DOT__req_core_i_q))))) {
                __Vdly__instr_gnt_stall_i__DOT__grant_delay_cnt = 0U;
                __Vdly__rnd_stall_instr_gnt = 1U;
            } else if ((1U == vlSelf->__PVT__instr_gnt_stall_i__DOT__grant_delay_cnt)) {
                __Vdly__instr_gnt_stall_i__DOT__grant_delay_cnt = 0U;
                __Vdly__rnd_stall_instr_gnt = 1U;
            } else {
                __Vdly__instr_gnt_stall_i__DOT__grant_delay_cnt 
                    = (vlSelf->__PVT__instr_gnt_stall_i__DOT__grant_delay_cnt 
                       - (IData)(1U));
            }
        } else {
            __Vdly__rnd_stall_instr_gnt = (1U & VL_RANDOM_I());
        }
        __Vdly__instr_rvalid_stall_i__DOT__wptr = (0xfU 
                                                   & (((IData)(vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_req_pmp) 
                                                       & (IData)(vlSelf->__PVT__ram_instr_gnt))
                                                       ? 
                                                      ((IData)(1U) 
                                                       + (IData)(vlSelf->__PVT__instr_rvalid_stall_i__DOT__wptr))
                                                       : (IData)(vlSelf->__PVT__instr_rvalid_stall_i__DOT__wptr)));
        __Vdly__instr_rvalid_stall_i__DOT__rptr = (0xfU 
                                                   & ((IData)(vlSelf->instr_rvalid_o)
                                                       ? 
                                                      ((IData)(1U) 
                                                       + (IData)(vlSelf->__PVT__instr_rvalid_stall_i__DOT__rptr))
                                                       : (IData)(vlSelf->__PVT__instr_rvalid_stall_i__DOT__rptr)));
        if (((~ (IData)(vlSelf->__PVT__instr_rvalid_stall_i__DOT__fifo_empty)) 
             & (0U < (IData)(vlSelf->__PVT__instr_rvalid_stall_i__DOT__current_delay)))) {
            __Vdlyvval__instr_rvalid_stall_i__DOT__fifo__v1 
                = (0xfU & ((IData)(vlSelf->__PVT__instr_rvalid_stall_i__DOT__current_delay) 
                           - (IData)(1U)));
            __Vdlyvset__instr_rvalid_stall_i__DOT__fifo__v1 = 1U;
            __Vdlyvlsb__instr_rvalid_stall_i__DOT__fifo__v1 = 0x20U;
            __Vdlyvdim0__instr_rvalid_stall_i__DOT__fifo__v1 
                = (7U & (IData)(vlSelf->__PVT__instr_rvalid_stall_i__DOT__rptr));
        }
        if (vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__data_req) {
            if ((1U & ((IData)(vlSelf->__PVT__data_gnt_stall_i__DOT__grant_core_o_q) 
                       | (~ (IData)(vlSelf->__PVT__data_gnt_stall_i__DOT__req_core_i_q))))) {
                __Vdly__data_gnt_stall_i__DOT__grant_delay_cnt = 0U;
                __Vdly__rnd_stall_data_gnt = 1U;
            } else if ((1U == vlSelf->__PVT__data_gnt_stall_i__DOT__grant_delay_cnt)) {
                __Vdly__data_gnt_stall_i__DOT__grant_delay_cnt = 0U;
                __Vdly__rnd_stall_data_gnt = 1U;
            } else {
                __Vdly__data_gnt_stall_i__DOT__grant_delay_cnt 
                    = (vlSelf->__PVT__data_gnt_stall_i__DOT__grant_delay_cnt 
                       - (IData)(1U));
            }
        } else {
            __Vdly__rnd_stall_data_gnt = (1U & VL_RANDOM_I());
        }
        __Vdly__data_rvalid_stall_i__DOT__wptr = (0xfU 
                                                  & (((IData)(vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__data_req) 
                                                      & (IData)(vlSelf->data_gnt_o))
                                                      ? 
                                                     ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__data_rvalid_stall_i__DOT__wptr))
                                                      : (IData)(vlSelf->__PVT__data_rvalid_stall_i__DOT__wptr)));
        __Vdly__data_rvalid_stall_i__DOT__rptr = (0xfU 
                                                  & ((IData)(vlSelf->data_rvalid_o)
                                                      ? 
                                                     ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__data_rvalid_stall_i__DOT__rptr))
                                                      : (IData)(vlSelf->__PVT__data_rvalid_stall_i__DOT__rptr)));
        if ((1U & (~ (IData)(vlSelf->__PVT__timer_reg_valid)))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__timer_val_valid)))) {
                if (vlSelf->__PVT__rnd_stall_req) {
                    if (vlSelf->__PVT__rnd_stall_we) {
                        __Vdlyvval__rnd_stall_regs__v0 
                            = vlSelf->__PVT__rnd_stall_wdata;
                        __Vdlyvset__rnd_stall_regs__v0 = 1U;
                        __Vdlyvdim0__rnd_stall_regs__v0 
                            = (0xfU & (vlSelf->__PVT__rnd_stall_addr 
                                       >> 2U));
                    }
                }
            }
            if (vlSelf->__PVT__timer_val_valid) {
                __Vdly__timer_cnt_q = vlSelf->__PVT__timer_wdata;
            } else if ((1U & (~ (IData)(vlSelf->__PVT__rnd_stall_req)))) {
                if ((0U < vlSelf->__PVT__timer_cnt_q)) {
                    __Vdly__timer_cnt_q = (vlSelf->__PVT__timer_cnt_q 
                                           - (IData)(1U));
                }
                if ((1U == vlSelf->__PVT__timer_cnt_q)) {
                    vlSelf->__PVT__irq_timer_q = (1U 
                                                  & (vlSelf->__PVT__timer_irq_mask_q 
                                                     >> 7U));
                }
                if (((IData)(vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__irq_ack) 
                     & (7U == (IData)(vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__irq_id_out)))) {
                    vlSelf->__PVT__irq_timer_q = 0U;
                }
            }
        }
        if (((~ (IData)(vlSelf->__PVT__data_rvalid_stall_i__DOT__fifo_empty)) 
             & (0U < (IData)(vlSelf->__PVT__data_rvalid_stall_i__DOT__current_delay)))) {
            __Vdlyvval__data_rvalid_stall_i__DOT__fifo__v1 
                = (0xfU & ((IData)(vlSelf->__PVT__data_rvalid_stall_i__DOT__current_delay) 
                           - (IData)(1U)));
            __Vdlyvset__data_rvalid_stall_i__DOT__fifo__v1 = 1U;
            __Vdlyvlsb__data_rvalid_stall_i__DOT__fifo__v1 = 0x20U;
            __Vdlyvdim0__data_rvalid_stall_i__DOT__fifo__v1 
                = (7U & (IData)(vlSelf->__PVT__data_rvalid_stall_i__DOT__rptr));
        }
        if (vlSelf->__PVT__instr_rvalid_stall_i__DOT__fifo_push) {
            vlSelf->__PVT__instr_rvalid_stall_i__DOT__fifo[(7U 
                                                            & (IData)(vlSelf->__PVT__instr_rvalid_stall_i__DOT__wptr))] = 0ULL;
        }
        if (vlSelf->__PVT__instr_rvalid_stall_i__DOT__rvalid_i_q) {
            __Vdlyvval__instr_rvalid_stall_i__DOT__fifo__v0 
                = ((1U & (IData)((vlSelf->__PVT__instr_rvalid_stall_i__DOT__fifo
                                  [vlSelf->__PVT__instr_rvalid_stall_i__DOT__wptr_rdata] 
                                  >> 0x24U))) ? 0U : 
                   vlSelf->__PVT__ram_instr_rdata[0U]);
            __Vdlyvset__instr_rvalid_stall_i__DOT__fifo__v0 = 1U;
            __Vdlyvlsb__instr_rvalid_stall_i__DOT__fifo__v0 = 0U;
            __Vdlyvdim0__instr_rvalid_stall_i__DOT__fifo__v0 
                = vlSelf->__PVT__instr_rvalid_stall_i__DOT__wptr_rdata;
        }
        if (vlSelf->__PVT__instr_rvalid_stall_i__DOT__fifo_push) {
            vlSelf->__PVT__instr_rvalid_stall_i__DOT__wptr_rdata 
                = (7U & (IData)(vlSelf->__PVT__instr_rvalid_stall_i__DOT__wptr));
        }
        vlSelf->__PVT__i_amo_shim__DOT__reserv_q = vlSelf->__PVT__i_amo_shim__DOT__reserv_d;
        if (vlSelf->__PVT__i_amo_shim__DOT__load_amo) {
            vlSelf->__PVT__i_amo_shim__DOT__amo_op_q 
                = vlSelf->__PVT__ram_data_atop_conv;
            vlSelf->__PVT__i_amo_shim__DOT__addr_q 
                = vlSelf->__PVT__data_addr_dec;
            vlSelf->__PVT__i_amo_shim__DOT__upper_word_q 
                = (1U & ((IData)(vlSelf->__PVT__data_be_dec) 
                         >> 4U));
            if ((1U & (IData)(vlSelf->__PVT__data_be_dec))) {
                vlSelf->__PVT__i_amo_shim__DOT__swap_value_q 
                    = (IData)(((QData)((IData)(vlSelf->__PVT__data_wdata_dec)) 
                               >> 0x20U));
                vlSelf->__PVT__i_amo_shim__DOT__amo_operand_b_q 
                    = vlSelf->__PVT__data_wdata_dec;
            } else {
                vlSelf->__PVT__i_amo_shim__DOT__swap_value_q 
                    = (IData)(((QData)((IData)(vlSelf->__PVT__data_wdata_dec)) 
                               >> 0x20U));
                vlSelf->__PVT__i_amo_shim__DOT__amo_operand_b_q 
                    = (IData)(((QData)((IData)(vlSelf->__PVT__data_wdata_dec)) 
                               >> 0x20U));
            }
        } else {
            vlSelf->__PVT__i_amo_shim__DOT__amo_op_q = 0U;
        }
        vlSelf->__PVT__transaction_q = vlSelf->__PVT__transaction;
        if (vlSelf->__PVT__data_rvalid_stall_i__DOT__fifo_push) {
            vlSelf->__PVT__data_rvalid_stall_i__DOT__wptr_rdata 
                = (7U & (IData)(vlSelf->__PVT__data_rvalid_stall_i__DOT__wptr));
            vlSelf->__PVT__sig_begin_q = vlSelf->__PVT__sig_begin_d;
            vlSelf->__PVT__sig_end_q = vlSelf->__PVT__sig_end_d;
            vlSelf->__PVT__data_rvalid_stall_i__DOT__rvalid_i_q 
                = ((IData)(vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__data_we_ex)
                    ? 0U : 1U);
        } else {
            vlSelf->__PVT__sig_begin_q = vlSelf->__PVT__sig_begin_d;
            vlSelf->__PVT__sig_end_q = vlSelf->__PVT__sig_end_d;
            vlSelf->__PVT__data_rvalid_stall_i__DOT__rvalid_i_q = 0U;
        }
        vlSelf->__PVT__instr_rvalid_stall_i__DOT__rvalid_i_q 
            = vlSelf->__PVT__instr_rvalid_stall_i__DOT__fifo_push;
        if (vlSelf->__PVT__timer_reg_valid) {
            vlSelf->__PVT__timer_irq_mask_q = vlSelf->__PVT__timer_wdata;
        }
        vlSelf->__PVT__i_amo_shim__DOT__reserv_valid_q 
            = vlSelf->__PVT__i_amo_shim__DOT__reserv_valid_d;
        vlSelf->__PVT__i_amo_shim__DOT__state_q = vlSelf->__PVT__i_amo_shim__DOT__load_amo;
    } else {
        __Vdly__rnd_stall_instr_gnt = 0U;
        __Vdly__instr_gnt_stall_i__DOT__grant_delay_cnt = 0U;
        __Vdly__instr_rvalid_stall_i__DOT__wptr = 0U;
        __Vdly__instr_rvalid_stall_i__DOT__rptr = 0U;
        __Vdly__rnd_stall_data_gnt = 0U;
        __Vdly__data_gnt_stall_i__DOT__grant_delay_cnt = 0U;
        __Vdly__data_rvalid_stall_i__DOT__wptr = 0U;
        __Vdly__data_rvalid_stall_i__DOT__rptr = 0U;
        __Vdlyvset__rnd_stall_regs__v1 = 1U;
        vlSelf->__PVT__instr_rvalid_stall_i__DOT__fifo[0U] = 0ULL;
        vlSelf->__PVT__instr_rvalid_stall_i__DOT__fifo[1U] = 0ULL;
        vlSelf->__PVT__instr_rvalid_stall_i__DOT__fifo[2U] = 0ULL;
        vlSelf->__PVT__instr_rvalid_stall_i__DOT__fifo[3U] = 0ULL;
        vlSelf->__PVT__instr_rvalid_stall_i__DOT__fifo[4U] = 0ULL;
        vlSelf->__PVT__instr_rvalid_stall_i__DOT__fifo[5U] = 0ULL;
        vlSelf->__PVT__instr_rvalid_stall_i__DOT__fifo[6U] = 0ULL;
        vlSelf->__PVT__instr_rvalid_stall_i__DOT__fifo[7U] = 0ULL;
        vlSelf->__PVT__i_amo_shim__DOT__reserv_q = 0U;
        vlSelf->__PVT__i_amo_shim__DOT__amo_op_q = 0U;
        vlSelf->__PVT__transaction_q = 0U;
        vlSelf->__PVT__i_amo_shim__DOT__addr_q = 0U;
        vlSelf->__PVT__i_amo_shim__DOT__upper_word_q = 0U;
        vlSelf->__PVT__i_amo_shim__DOT__swap_value_q = 0U;
        vlSelf->__PVT__i_amo_shim__DOT__amo_operand_b_q = 0U;
        vlSelf->__PVT__sig_begin_q = 0U;
        vlSelf->__PVT__sig_end_q = 0U;
        __Vdly__timer_cnt_q = 0U;
        vlSelf->__PVT__irq_timer_q = 0U;
        vlSelf->__PVT__timer_irq_mask_q = 0U;
        vlSelf->__PVT__i_amo_shim__DOT__reserv_valid_q = 0U;
        vlSelf->__PVT__i_amo_shim__DOT__state_q = 0U;
    }
    vlSelf->__PVT__instr_gnt_stall_i__DOT__grant_delay_cnt 
        = __Vdly__instr_gnt_stall_i__DOT__grant_delay_cnt;
    vlSelf->__PVT__instr_rvalid_stall_i__DOT__rptr 
        = __Vdly__instr_rvalid_stall_i__DOT__rptr;
    vlSelf->__PVT__data_gnt_stall_i__DOT__grant_delay_cnt 
        = __Vdly__data_gnt_stall_i__DOT__grant_delay_cnt;
    if (__Vdlyvset__rnd_stall_regs__v0) {
        vlSelf->__PVT__rnd_stall_regs[__Vdlyvdim0__rnd_stall_regs__v0] 
            = __Vdlyvval__rnd_stall_regs__v0;
    }
    if (__Vdlyvset__rnd_stall_regs__v1) {
        vlSelf->__PVT__rnd_stall_regs[0U] = 0U;
        vlSelf->__PVT__rnd_stall_regs[1U] = 0U;
        vlSelf->__PVT__rnd_stall_regs[2U] = 0U;
        vlSelf->__PVT__rnd_stall_regs[3U] = 0U;
        vlSelf->__PVT__rnd_stall_regs[4U] = 0U;
        vlSelf->__PVT__rnd_stall_regs[5U] = 0U;
        vlSelf->__PVT__rnd_stall_regs[6U] = 0U;
        vlSelf->__PVT__rnd_stall_regs[7U] = 0U;
        vlSelf->__PVT__rnd_stall_regs[8U] = 0U;
        vlSelf->__PVT__rnd_stall_regs[9U] = 0U;
        vlSelf->__PVT__rnd_stall_regs[0xaU] = 0U;
        vlSelf->__PVT__rnd_stall_regs[0xbU] = 0U;
        vlSelf->__PVT__rnd_stall_regs[0xcU] = 0U;
        vlSelf->__PVT__rnd_stall_regs[0xdU] = 0U;
        vlSelf->__PVT__rnd_stall_regs[0xeU] = 0U;
        vlSelf->__PVT__rnd_stall_regs[0xfU] = 0U;
    }
    if (vlSelf->__Vdlyvset__data_rvalid_stall_i__DOT__fifo__v0) {
        vlSelf->__PVT__data_rvalid_stall_i__DOT__fifo[vlSelf->__Vdlyvdim0__data_rvalid_stall_i__DOT__fifo__v0] 
            = (((~ (0xffffffffULL << (IData)(vlSelf->__Vdlyvlsb__data_rvalid_stall_i__DOT__fifo__v0))) 
                & vlSelf->__PVT__data_rvalid_stall_i__DOT__fifo
                [vlSelf->__Vdlyvdim0__data_rvalid_stall_i__DOT__fifo__v0]) 
               | (0x1fffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__data_rvalid_stall_i__DOT__fifo__v0)) 
                                     << (IData)(vlSelf->__Vdlyvlsb__data_rvalid_stall_i__DOT__fifo__v0))));
    }
    if (__Vdlyvset__data_rvalid_stall_i__DOT__fifo__v1) {
        vlSelf->__PVT__data_rvalid_stall_i__DOT__fifo[__Vdlyvdim0__data_rvalid_stall_i__DOT__fifo__v1] 
            = (((~ (0xfULL << (IData)(__Vdlyvlsb__data_rvalid_stall_i__DOT__fifo__v1))) 
                & vlSelf->__PVT__data_rvalid_stall_i__DOT__fifo
                [__Vdlyvdim0__data_rvalid_stall_i__DOT__fifo__v1]) 
               | (0x1fffffffffULL & ((QData)((IData)(__Vdlyvval__data_rvalid_stall_i__DOT__fifo__v1)) 
                                     << (IData)(__Vdlyvlsb__data_rvalid_stall_i__DOT__fifo__v1))));
    }
    vlSelf->__PVT__data_rvalid_stall_i__DOT__rptr = __Vdly__data_rvalid_stall_i__DOT__rptr;
    if (__Vdlyvset__instr_rvalid_stall_i__DOT__fifo__v0) {
        vlSelf->__PVT__instr_rvalid_stall_i__DOT__fifo[__Vdlyvdim0__instr_rvalid_stall_i__DOT__fifo__v0] 
            = (((~ (0xffffffffULL << (IData)(__Vdlyvlsb__instr_rvalid_stall_i__DOT__fifo__v0))) 
                & vlSelf->__PVT__instr_rvalid_stall_i__DOT__fifo
                [__Vdlyvdim0__instr_rvalid_stall_i__DOT__fifo__v0]) 
               | (0x1fffffffffULL & ((QData)((IData)(__Vdlyvval__instr_rvalid_stall_i__DOT__fifo__v0)) 
                                     << (IData)(__Vdlyvlsb__instr_rvalid_stall_i__DOT__fifo__v0))));
    }
    if (__Vdlyvset__instr_rvalid_stall_i__DOT__fifo__v1) {
        vlSelf->__PVT__instr_rvalid_stall_i__DOT__fifo[__Vdlyvdim0__instr_rvalid_stall_i__DOT__fifo__v1] 
            = (((~ (0xfULL << (IData)(__Vdlyvlsb__instr_rvalid_stall_i__DOT__fifo__v1))) 
                & vlSelf->__PVT__instr_rvalid_stall_i__DOT__fifo
                [__Vdlyvdim0__instr_rvalid_stall_i__DOT__fifo__v1]) 
               | (0x1fffffffffULL & ((QData)((IData)(__Vdlyvval__instr_rvalid_stall_i__DOT__fifo__v1)) 
                                     << (IData)(__Vdlyvlsb__instr_rvalid_stall_i__DOT__fifo__v1))));
    }
    vlSelf->__PVT__data_rvalid_stall_i__DOT__wptr = __Vdly__data_rvalid_stall_i__DOT__wptr;
    vlSelf->__PVT__timer_cnt_q = __Vdly__timer_cnt_q;
    vlSelf->__PVT__instr_gnt_stall_i__DOT__grant_core_o_q 
        = ((IData)(vlSymsp->TOP.rst_ni) & (IData)(vlSelf->__PVT__rnd_stall_instr_gnt));
    vlSelf->__PVT__instr_gnt_stall_i__DOT__req_core_i_q 
        = ((IData)(vlSymsp->TOP.rst_ni) & (IData)(vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_req_pmp));
    vlSelf->__PVT__data_gnt_stall_i__DOT__grant_core_o_q 
        = ((IData)(vlSymsp->TOP.rst_ni) & (IData)(vlSelf->__PVT__rnd_stall_data_gnt));
    vlSelf->__PVT__data_gnt_stall_i__DOT__req_core_i_q 
        = ((IData)(vlSymsp->TOP.rst_ni) & (IData)(vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__data_req));
    vlSelf->__PVT__data_rvalid_stall_i__DOT__current_delay 
        = (0xfU & (IData)((vlSelf->__PVT__data_rvalid_stall_i__DOT__fifo
                           [(7U & (IData)(vlSelf->__PVT__data_rvalid_stall_i__DOT__rptr))] 
                           >> 0x20U)));
    vlSelf->__PVT__instr_rvalid_stall_i__DOT__current_delay 
        = (0xfU & (IData)((vlSelf->__PVT__instr_rvalid_stall_i__DOT__fifo
                           [(7U & (IData)(vlSelf->__PVT__instr_rvalid_stall_i__DOT__rptr))] 
                           >> 0x20U)));
    vlSelf->__PVT__i_amo_shim__DOT__sc_ok = ((IData)(vlSelf->__PVT__i_amo_shim__DOT__reserv_valid_q) 
                                             & (vlSelf->__PVT__i_amo_shim__DOT__addr_q 
                                                == vlSelf->__PVT__i_amo_shim__DOT__reserv_q));
    vlSelf->__PVT__data_rvalid_stall_i__DOT__fifo_empty 
        = ((IData)(vlSelf->__PVT__data_rvalid_stall_i__DOT__rptr) 
           == (IData)(vlSelf->__PVT__data_rvalid_stall_i__DOT__wptr));
    vlSelf->__PVT__i_amo_shim__DOT__adder_operand_b 
        = (0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelf->__PVT__i_amo_shim__DOT__amo_operand_b_q));
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
    vlSelf->__PVT__rnd_stall_instr_gnt = __Vdly__rnd_stall_instr_gnt;
    vlSelf->__PVT__rnd_stall_data_gnt = __Vdly__rnd_stall_data_gnt;
    vlSelf->__PVT__instr_rvalid_stall_i__DOT__wptr 
        = __Vdly__instr_rvalid_stall_i__DOT__wptr;
    vlSelf->data_rvalid_stall_i__DOT____VdfgExtracted_he119aaf2__0 
        = ((~ (IData)(vlSelf->__PVT__data_rvalid_stall_i__DOT__fifo_empty)) 
           & (0U == (IData)(vlSelf->__PVT__data_rvalid_stall_i__DOT__current_delay)));
    vlSelf->__PVT__instr_rvalid_stall_i__DOT__fifo_empty 
        = ((IData)(vlSelf->__PVT__instr_rvalid_stall_i__DOT__rptr) 
           == (IData)(vlSelf->__PVT__instr_rvalid_stall_i__DOT__wptr));
    vlSelf->data_rvalid_o = 0U;
    if (vlSelf->data_rvalid_stall_i__DOT____VdfgExtracted_he119aaf2__0) {
        vlSelf->data_rvalid_o = 1U;
    }
    vlSelf->instr_rvalid_stall_i__DOT____VdfgExtracted_he119aaf2__0 
        = ((~ (IData)(vlSelf->__PVT__instr_rvalid_stall_i__DOT__fifo_empty)) 
           & (0U == (IData)(vlSelf->__PVT__instr_rvalid_stall_i__DOT__current_delay)));
    vlSelf->instr_rvalid_o = 0U;
    if (vlSelf->instr_rvalid_stall_i__DOT____VdfgExtracted_he119aaf2__0) {
        vlSelf->instr_rvalid_o = 1U;
    }
}

VL_INLINE_OPT void Vtb_top_verilator_mm_ram__R16___nba_sequent__TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i__1(Vtb_top_verilator_mm_ram__R16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_verilator_mm_ram__R16___nba_sequent__TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i__1\n"); );
    // Init
    IData/*21:0*/ __Vdlyvdim0__dp_ram_i__DOT__mem__v0;
    __Vdlyvdim0__dp_ram_i__DOT__mem__v0 = 0;
    CData/*7:0*/ __Vdlyvval__dp_ram_i__DOT__mem__v0;
    __Vdlyvval__dp_ram_i__DOT__mem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__dp_ram_i__DOT__mem__v0;
    __Vdlyvset__dp_ram_i__DOT__mem__v0 = 0;
    IData/*21:0*/ __Vdlyvdim0__dp_ram_i__DOT__mem__v1;
    __Vdlyvdim0__dp_ram_i__DOT__mem__v1 = 0;
    CData/*7:0*/ __Vdlyvval__dp_ram_i__DOT__mem__v1;
    __Vdlyvval__dp_ram_i__DOT__mem__v1 = 0;
    CData/*0:0*/ __Vdlyvset__dp_ram_i__DOT__mem__v1;
    __Vdlyvset__dp_ram_i__DOT__mem__v1 = 0;
    IData/*21:0*/ __Vdlyvdim0__dp_ram_i__DOT__mem__v2;
    __Vdlyvdim0__dp_ram_i__DOT__mem__v2 = 0;
    CData/*7:0*/ __Vdlyvval__dp_ram_i__DOT__mem__v2;
    __Vdlyvval__dp_ram_i__DOT__mem__v2 = 0;
    CData/*0:0*/ __Vdlyvset__dp_ram_i__DOT__mem__v2;
    __Vdlyvset__dp_ram_i__DOT__mem__v2 = 0;
    IData/*21:0*/ __Vdlyvdim0__dp_ram_i__DOT__mem__v3;
    __Vdlyvdim0__dp_ram_i__DOT__mem__v3 = 0;
    CData/*7:0*/ __Vdlyvval__dp_ram_i__DOT__mem__v3;
    __Vdlyvval__dp_ram_i__DOT__mem__v3 = 0;
    CData/*0:0*/ __Vdlyvset__dp_ram_i__DOT__mem__v3;
    __Vdlyvset__dp_ram_i__DOT__mem__v3 = 0;
    // Body
    __Vdlyvset__dp_ram_i__DOT__mem__v0 = 0U;
    __Vdlyvset__dp_ram_i__DOT__mem__v1 = 0U;
    __Vdlyvset__dp_ram_i__DOT__mem__v2 = 0U;
    __Vdlyvset__dp_ram_i__DOT__mem__v3 = 0U;
    vlSelf->__PVT__ram_instr_rdata[0U] = ((0xffff0000U 
                                           & vlSelf->__PVT__ram_instr_rdata[0U]) 
                                          | ((vlSelf->dp_ram_i__DOT__mem
                                              [(0x3fffffU 
                                                & ((IData)(1U) 
                                                   + 
                                                   (0x3ffffcU 
                                                    & vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_addr_pmp)))] 
                                              << 8U) 
                                             | vlSelf->dp_ram_i__DOT__mem
                                             [(0x3ffffcU 
                                               & vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_addr_pmp)]));
    vlSelf->__PVT__ram_instr_rdata[0U] = ((0xffffU 
                                           & vlSelf->__PVT__ram_instr_rdata[0U]) 
                                          | (0xffff0000U 
                                             & ((vlSelf->dp_ram_i__DOT__mem
                                                 [(0x3fffffU 
                                                   & ((IData)(3U) 
                                                      + 
                                                      (0x3ffffcU 
                                                       & vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_addr_pmp)))] 
                                                 << 0x18U) 
                                                | (vlSelf->dp_ram_i__DOT__mem
                                                   [
                                                   (0x3fffffU 
                                                    & ((IData)(2U) 
                                                       + 
                                                       (0x3ffffcU 
                                                        & vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_addr_pmp)))] 
                                                   << 0x10U))));
    vlSelf->__PVT__ram_instr_rdata[1U] = ((0xffff0000U 
                                           & vlSelf->__PVT__ram_instr_rdata[1U]) 
                                          | ((vlSelf->dp_ram_i__DOT__mem
                                              [(0x3fffffU 
                                                & ((IData)(5U) 
                                                   + 
                                                   (0x3ffffcU 
                                                    & vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_addr_pmp)))] 
                                              << 8U) 
                                             | vlSelf->dp_ram_i__DOT__mem
                                             [(0x3fffffU 
                                               & ((IData)(4U) 
                                                  + 
                                                  (0x3ffffcU 
                                                   & vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_addr_pmp)))]));
    vlSelf->__PVT__ram_instr_rdata[1U] = ((0xffffU 
                                           & vlSelf->__PVT__ram_instr_rdata[1U]) 
                                          | (0xffff0000U 
                                             & ((vlSelf->dp_ram_i__DOT__mem
                                                 [(0x3fffffU 
                                                   & ((IData)(7U) 
                                                      + 
                                                      (0x3ffffcU 
                                                       & vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_addr_pmp)))] 
                                                 << 0x18U) 
                                                | (vlSelf->dp_ram_i__DOT__mem
                                                   [
                                                   (0x3fffffU 
                                                    & ((IData)(6U) 
                                                       + 
                                                       (0x3ffffcU 
                                                        & vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_addr_pmp)))] 
                                                   << 0x10U))));
    vlSelf->__PVT__ram_instr_rdata[2U] = ((0xffff0000U 
                                           & vlSelf->__PVT__ram_instr_rdata[2U]) 
                                          | ((vlSelf->dp_ram_i__DOT__mem
                                              [(0x3fffffU 
                                                & ((IData)(9U) 
                                                   + 
                                                   (0x3ffffcU 
                                                    & vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_addr_pmp)))] 
                                              << 8U) 
                                             | vlSelf->dp_ram_i__DOT__mem
                                             [(0x3fffffU 
                                               & ((IData)(8U) 
                                                  + 
                                                  (0x3ffffcU 
                                                   & vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_addr_pmp)))]));
    vlSelf->__PVT__ram_instr_rdata[2U] = ((0xffffU 
                                           & vlSelf->__PVT__ram_instr_rdata[2U]) 
                                          | (0xffff0000U 
                                             & ((vlSelf->dp_ram_i__DOT__mem
                                                 [(0x3fffffU 
                                                   & ((IData)(0xbU) 
                                                      + 
                                                      (0x3ffffcU 
                                                       & vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_addr_pmp)))] 
                                                 << 0x18U) 
                                                | (vlSelf->dp_ram_i__DOT__mem
                                                   [
                                                   (0x3fffffU 
                                                    & ((IData)(0xaU) 
                                                       + 
                                                       (0x3ffffcU 
                                                        & vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_addr_pmp)))] 
                                                   << 0x10U))));
    vlSelf->__PVT__ram_instr_rdata[3U] = ((0xffff0000U 
                                           & vlSelf->__PVT__ram_instr_rdata[3U]) 
                                          | ((vlSelf->dp_ram_i__DOT__mem
                                              [(0x3fffffU 
                                                & ((IData)(0xdU) 
                                                   + 
                                                   (0x3ffffcU 
                                                    & vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_addr_pmp)))] 
                                              << 8U) 
                                             | vlSelf->dp_ram_i__DOT__mem
                                             [(0x3fffffU 
                                               & ((IData)(0xcU) 
                                                  + 
                                                  (0x3ffffcU 
                                                   & vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_addr_pmp)))]));
    vlSelf->__PVT__ram_instr_rdata[3U] = ((0xffffU 
                                           & vlSelf->__PVT__ram_instr_rdata[3U]) 
                                          | (0xffff0000U 
                                             & ((vlSelf->dp_ram_i__DOT__mem
                                                 [(0x3fffffU 
                                                   & ((IData)(0xfU) 
                                                      + 
                                                      (0x3ffffcU 
                                                       & vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_addr_pmp)))] 
                                                 << 0x18U) 
                                                | (vlSelf->dp_ram_i__DOT__mem
                                                   [
                                                   (0x3fffffU 
                                                    & ((IData)(0xeU) 
                                                       + 
                                                       (0x3ffffcU 
                                                        & vlSymsp->TOP.tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__top_i__DOT__core_i__DOT__instr_addr_pmp)))] 
                                                   << 0x10U))));
    if (vlSelf->__PVT__ram_amoshimd_data_req) {
        if (vlSelf->__PVT__ram_amoshimd_data_we) {
            if ((1U & (IData)(vlSelf->__PVT__ram_amoshimd_data_be))) {
                __Vdlyvval__dp_ram_i__DOT__mem__v0 
                    = (0xffU & (IData)(vlSelf->__PVT__ram_amoshimd_data_wdata));
                __Vdlyvset__dp_ram_i__DOT__mem__v0 = 1U;
                __Vdlyvdim0__dp_ram_i__DOT__mem__v0 
                    = (0x3ffffcU & vlSelf->__PVT__ram_amoshimd_data_addr);
            }
            if ((2U & (IData)(vlSelf->__PVT__ram_amoshimd_data_be))) {
                __Vdlyvval__dp_ram_i__DOT__mem__v1 
                    = (0xffU & (IData)((vlSelf->__PVT__ram_amoshimd_data_wdata 
                                        >> 8U)));
                __Vdlyvset__dp_ram_i__DOT__mem__v1 = 1U;
                __Vdlyvdim0__dp_ram_i__DOT__mem__v1 
                    = (0x3fffffU & ((IData)(1U) + (0x3ffffcU 
                                                   & vlSelf->__PVT__ram_amoshimd_data_addr)));
            }
            if ((4U & (IData)(vlSelf->__PVT__ram_amoshimd_data_be))) {
                __Vdlyvval__dp_ram_i__DOT__mem__v2 
                    = (0xffU & (IData)((vlSelf->__PVT__ram_amoshimd_data_wdata 
                                        >> 0x10U)));
                __Vdlyvset__dp_ram_i__DOT__mem__v2 = 1U;
                __Vdlyvdim0__dp_ram_i__DOT__mem__v2 
                    = (0x3fffffU & ((IData)(2U) + (0x3ffffcU 
                                                   & vlSelf->__PVT__ram_amoshimd_data_addr)));
            }
            if ((8U & (IData)(vlSelf->__PVT__ram_amoshimd_data_be))) {
                __Vdlyvval__dp_ram_i__DOT__mem__v3 
                    = (0xffU & (IData)((vlSelf->__PVT__ram_amoshimd_data_wdata 
                                        >> 0x18U)));
                __Vdlyvset__dp_ram_i__DOT__mem__v3 = 1U;
                __Vdlyvdim0__dp_ram_i__DOT__mem__v3 
                    = (0x3fffffU & ((IData)(3U) + (0x3ffffcU 
                                                   & vlSelf->__PVT__ram_amoshimd_data_addr)));
            }
        } else {
            if (VL_UNLIKELY(VL_TESTPLUSARGS_I(std::string{"verbose"}))) {
                VL_WRITEF("read  addr=0x%08x: data=0x%08x\n",
                          22,(0x3ffffcU & vlSelf->__PVT__ram_amoshimd_data_addr),
                          32,((vlSelf->dp_ram_i__DOT__mem
                               [(0x3fffffU & ((IData)(3U) 
                                              + (0x3ffffcU 
                                                 & vlSelf->__PVT__ram_amoshimd_data_addr)))] 
                               << 0x18U) | ((vlSelf->dp_ram_i__DOT__mem
                                             [(0x3fffffU 
                                               & ((IData)(2U) 
                                                  + 
                                                  (0x3ffffcU 
                                                   & vlSelf->__PVT__ram_amoshimd_data_addr)))] 
                                             << 0x10U) 
                                            | ((vlSelf->dp_ram_i__DOT__mem
                                                [(0x3fffffU 
                                                  & ((IData)(1U) 
                                                     + 
                                                     (0x3ffffcU 
                                                      & vlSelf->__PVT__ram_amoshimd_data_addr)))] 
                                                << 8U) 
                                               | vlSelf->dp_ram_i__DOT__mem
                                               [(0x3ffffcU 
                                                 & vlSelf->__PVT__ram_amoshimd_data_addr)]))));
            }
            vlSelf->__PVT__tmp_ram_amoshimd_data_rdata 
                = ((0xffff0000U & vlSelf->__PVT__tmp_ram_amoshimd_data_rdata) 
                   | ((vlSelf->dp_ram_i__DOT__mem[(0x3fffffU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      (0x3ffffcU 
                                                       & vlSelf->__PVT__ram_amoshimd_data_addr)))] 
                       << 8U) | vlSelf->dp_ram_i__DOT__mem
                      [(0x3ffffcU & vlSelf->__PVT__ram_amoshimd_data_addr)]));
            vlSelf->__PVT__tmp_ram_amoshimd_data_rdata 
                = ((0xffffU & vlSelf->__PVT__tmp_ram_amoshimd_data_rdata) 
                   | ((vlSelf->dp_ram_i__DOT__mem[(0x3fffffU 
                                                   & ((IData)(3U) 
                                                      + 
                                                      (0x3ffffcU 
                                                       & vlSelf->__PVT__ram_amoshimd_data_addr)))] 
                       << 0x18U) | (vlSelf->dp_ram_i__DOT__mem
                                    [(0x3fffffU & ((IData)(2U) 
                                                   + 
                                                   (0x3ffffcU 
                                                    & vlSelf->__PVT__ram_amoshimd_data_addr)))] 
                                    << 0x10U)));
        }
    }
    if (__Vdlyvset__dp_ram_i__DOT__mem__v0) {
        vlSelf->dp_ram_i__DOT__mem[__Vdlyvdim0__dp_ram_i__DOT__mem__v0] 
            = __Vdlyvval__dp_ram_i__DOT__mem__v0;
    }
    if (__Vdlyvset__dp_ram_i__DOT__mem__v1) {
        vlSelf->dp_ram_i__DOT__mem[__Vdlyvdim0__dp_ram_i__DOT__mem__v1] 
            = __Vdlyvval__dp_ram_i__DOT__mem__v1;
    }
    if (__Vdlyvset__dp_ram_i__DOT__mem__v2) {
        vlSelf->dp_ram_i__DOT__mem[__Vdlyvdim0__dp_ram_i__DOT__mem__v2] 
            = __Vdlyvval__dp_ram_i__DOT__mem__v2;
    }
    if (__Vdlyvset__dp_ram_i__DOT__mem__v3) {
        vlSelf->dp_ram_i__DOT__mem[__Vdlyvdim0__dp_ram_i__DOT__mem__v3] 
            = __Vdlyvval__dp_ram_i__DOT__mem__v3;
    }
}

VL_INLINE_OPT void Vtb_top_verilator_mm_ram__R16___nba_comb__TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i__2(Vtb_top_verilator_mm_ram__R16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_verilator_mm_ram__R16___nba_comb__TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i__2\n"); );
    // Body
    vlSelf->__PVT__data_rdata_mux = 0U;
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
