	.file	"node.c"
	.intel_syntax noprefix
 # GNU C11 (MinGW.org GCC-6.3.0-1) version 6.3.0 (mingw32)
 #	compiled by GNU C version 6.3.0, GMP version 6.1.2, MPFR version 3.1.5, MPC version 1.0.3, isl version 0.15
 # GGC heuristics: --param ggc-min-expand=100 --param ggc-min-heapsize=131072
 # options passed:  -fpreprocessed node.i -masm=intel -mtune=generic
 # -march=i586 -auxbase-strip node.o -O0 -fno-asynchronous-unwind-tables
 # -fverbose-asm
 # options enabled:  -faggressive-loop-optimizations -fauto-inc-dec
 # -fchkp-check-incomplete-type -fchkp-check-read -fchkp-check-write
 # -fchkp-instrument-calls -fchkp-narrow-bounds -fchkp-optimize
 # -fchkp-store-bounds -fchkp-use-static-bounds
 # -fchkp-use-static-const-bounds -fchkp-use-wrappers -fcommon
 # -fdelete-null-pointer-checks -fdwarf2-cfi-asm -fearly-inlining
 # -feliminate-unused-debug-types -ffunction-cse -fgcse-lm -fgnu-runtime
 # -fgnu-unique -fident -finline-atomics -fira-hoist-pressure
 # -fira-share-save-slots -fira-share-spill-slots -fivopts
 # -fkeep-inline-dllexport -fkeep-static-consts -fleading-underscore
 # -flifetime-dse -flto-odr-type-merging -fmath-errno -fmerge-debug-strings
 # -fpeephole -fplt -fprefetch-loop-arrays -freg-struct-return
 # -fsched-critical-path-heuristic -fsched-dep-count-heuristic
 # -fsched-group-heuristic -fsched-interblock -fsched-last-insn-heuristic
 # -fsched-rank-heuristic -fsched-spec -fsched-spec-insn-heuristic
 # -fsched-stalled-insns-dep -fschedule-fusion -fsemantic-interposition
 # -fset-stack-executable -fshow-column -fsigned-zeros
 # -fsplit-ivs-in-unroller -fssa-backprop -fstdarg-opt
 # -fstrict-volatile-bitfields -fsync-libcalls -ftrapping-math
 # -ftree-cselim -ftree-forwprop -ftree-loop-if-convert -ftree-loop-im
 # -ftree-loop-ivcanon -ftree-loop-optimize -ftree-parallelize-loops=
 # -ftree-phiprop -ftree-reassoc -ftree-scev-cprop -funit-at-a-time
 # -fverbose-asm -fzero-initialized-in-bss -m32 -m80387 -m96bit-long-double
 # -maccumulate-outgoing-args -malign-double -malign-stringops
 # -mavx256-split-unaligned-load -mavx256-split-unaligned-store
 # -mfancy-math-387 -mfp-ret-in-387 -mieee-fp -mlong-double-80
 # -mms-bitfields -mno-red-zone -mno-sse4 -mpush-args -msahf
 # -mstack-arg-probe -mstv -mvzeroupper

	.comm	_n1, 8, 2
	.comm	_n2, 8, 2
	.def	___main;	.scl	2;	.type	32;	.endef
	.text
	.globl	_main
	.def	_main;	.scl	2;	.type	32;	.endef
_main:
	push	ebp	 #
	mov	ebp, esp	 #,
	and	esp, -16	 #,
	sub	esp, 16	 #,
	call	___main	 #
	mov	DWORD PTR [esp+12], OFFSET FLAT:_n1	 # src,
	mov	DWORD PTR [esp+8], OFFSET FLAT:_n2	 # dest,
	mov	eax, DWORD PTR [esp+12]	 # tmp90, src
	mov	edx, DWORD PTR [eax+4]	 # _4, MEM[(char * {ref-all})src_1]
	mov	eax, DWORD PTR [eax]	 # _4, MEM[(char * {ref-all})src_1]
	mov	ecx, DWORD PTR [esp+8]	 # tmp91, dest
	mov	DWORD PTR [ecx], eax	 # MEM[(char * {ref-all})dest_2], _4
	mov	DWORD PTR [ecx+4], edx	 # MEM[(char * {ref-all})dest_2], _4
	mov	eax, 0	 # _6,
	leave
	ret
	.ident	"GCC: (MinGW.org GCC-6.3.0-1) 6.3.0"
