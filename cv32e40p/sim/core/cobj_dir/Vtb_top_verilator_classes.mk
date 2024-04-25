# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vtb_top_verilator.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 0
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 0
# Tracing output mode in VCD format?  0/1 (from --trace)
VM_TRACE_VCD = 0
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	Vtb_top_verilator \
	Vtb_top_verilator__Dpi_Export__0 \
	Vtb_top_verilator___024root__DepSet_h2c7bdad4__0 \
	Vtb_top_verilator___024root__DepSet_h2c7bdad4__1 \
	Vtb_top_verilator___024root__DepSet_h0cce2fb2__0 \
	Vtb_top_verilator_mm_ram__R16__DepSet_hb1c0035a__0 \
	Vtb_top_verilator_mm_ram__R16__DepSet_h7988673c__0 \
	Vtb_top_verilator_mm_ram__R16__03a__03arand_default_gnt__Vclpkg__DepSet_hfe6ac1cc__0 \
	Vtb_top_verilator_mm_ram__R16__03a__03arand_default_gnt__Vclpkg__DepSet_h3edf28aa__0 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vtb_top_verilator__ConstPool_0 \
	Vtb_top_verilator___024root__Slow \
	Vtb_top_verilator___024root__DepSet_h2c7bdad4__0__Slow \
	Vtb_top_verilator___024root__DepSet_h0cce2fb2__0__Slow \
	Vtb_top_verilator_mm_ram__R16__Slow \
	Vtb_top_verilator_mm_ram__R16__DepSet_hb1c0035a__0__Slow \
	Vtb_top_verilator_mm_ram__R16__DepSet_h7988673c__0__Slow \
	Vtb_top_verilator_mm_ram__R16__03a__03arand_default_gnt__Vclpkg__Slow \
	Vtb_top_verilator_mm_ram__R16__03a__03arand_default_gnt__Vclpkg__DepSet_h3edf28aa__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	Vtb_top_verilator__Dpi \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vtb_top_verilator__Syms \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_dpi \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
