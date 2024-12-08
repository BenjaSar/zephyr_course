/* Generated automatically by the program `genflags'
   from the machine description file `md'.  */

#ifndef GCC_INSN_FLAGS_H
#define GCC_INSN_FLAGS_H

#define HAVE_bswapsi2 (TARGET_REORDER)
#define HAVE_bswaphi2 (TARGET_REORDER)
#define HAVE_addsf3 (TARGET_HARD_FLOAT)
#define HAVE_subsf3 (TARGET_HARD_FLOAT)
#define HAVE_mulsf3 (TARGET_HARD_FLOAT)
#define HAVE_divsf3 (TARGET_HARD_FLOAT)
#define HAVE_sqrtsf2 (TARGET_HARD_FLOAT && TARGET_FLOAT_SQRT)
#define HAVE_floatsisf2 (TARGET_HARD_FLOAT && TARGET_FLOAT_CONVERT)
#define HAVE_fix_truncsfsi2 (TARGET_HARD_FLOAT && TARGET_FLOAT_CONVERT)
#define HAVE_adddf3 (TARGET_MB_64 && TARGET_HARD_FLOAT && TARGET_FLOAT_CONVERT)
#define HAVE_subdf3 (TARGET_MB_64 && TARGET_HARD_FLOAT && TARGET_FLOAT_CONVERT)
#define HAVE_muldf3 (TARGET_MB_64 && TARGET_HARD_FLOAT && TARGET_FLOAT_CONVERT)
#define HAVE_divdf3 (TARGET_MB_64 && TARGET_HARD_FLOAT && TARGET_FLOAT_CONVERT)
#define HAVE_sqrtdf2 (TARGET_MB_64 && TARGET_HARD_FLOAT && TARGET_FLOAT_CONVERT)
#define HAVE_floatdidf2 (TARGET_MB_64 && TARGET_HARD_FLOAT && TARGET_FLOAT_CONVERT)
#define HAVE_fix_truncdfdi2 (TARGET_MB_64 && TARGET_HARD_FLOAT && TARGET_FLOAT_CONVERT)
#define HAVE_addsi3 1
#define HAVE_adddi3_int (TARGET_MB_64 && ((long long)INTVAL(operands[2]) > (long long)-32768) && ((long long) INTVAL(operands[2]) < (long long)32767))
#define HAVE_subsi3 1
#define HAVE_iprefetch (TARGET_PREFETCH && !TARGET_MB_64)
#define HAVE_subdi316imm (TARGET_MB_64 && ((long long)INTVAL(operands[2]) > (long long)-32768) && ((long long) INTVAL(operands[2]) < (long long)32767) && (REGNO (operands[0]) == REGNO (operands[1])))
#define HAVE_subsidi3 (TARGET_MB_64)
#define HAVE_subdi3_small (!TARGET_MB_64)
#define HAVE_mulsi3 (!TARGET_SOFT_MUL)
#define HAVE_mulsidi3 (!TARGET_SOFT_MUL && TARGET_MULTIPLY_HIGH && !TARGET_MB_64)
#define HAVE_umulsidi3 (!TARGET_SOFT_MUL && TARGET_MULTIPLY_HIGH && !TARGET_MB_64)
#define HAVE_usmulsidi3 (!TARGET_SOFT_MUL && TARGET_MULTIPLY_HIGH && !TARGET_MB_64)
#define HAVE_divsi3_internal (!TARGET_SOFT_DIV)
#define HAVE_udivsi3 (!TARGET_SOFT_DIV)
#define HAVE_negsi2 1
#define HAVE_negsi_long 1
#define HAVE_negdi2_long (TARGET_MB_64)
#define HAVE_negdi2 1
#define HAVE_one_cmplsi2 1
#define HAVE_anddi3imm16 (TARGET_MB_64 && ((long long)INTVAL(operands[2]) > (long long)-32768) && ((long long) INTVAL(operands[2]) < (long long)32767))
#define HAVE_anddi3 (TARGET_MB_64)
#define HAVE_andsi3 1
#define HAVE_iordi3imm16 (TARGET_MB_64 && ((long long)INTVAL(operands[2]) > (long long)-32768) && ((long long) INTVAL(operands[2]) < (long long)32767))
#define HAVE_iordi3 (TARGET_MB_64)
#define HAVE_iorsi3 1
#define HAVE_xordi3imm16 (TARGET_MB_64 && ((long long)INTVAL(operands[2]) > (long long)-32768) && ((long long) INTVAL(operands[2]) < (long long)32767))
#define HAVE_xordi3 (TARGET_MB_64)
#define HAVE_xorsi3 1
#define HAVE_zero_extendhisi2 1
#define HAVE_zero_extendqihi2 1
#define HAVE_zero_extendqisi2 1
#define HAVE_zero_extendhidi2 (TARGET_MB_64)
#define HAVE_zero_extendsidi2 (TARGET_MB_64)
#define HAVE_zero_extendqidi2 (TARGET_MB_64)
#define HAVE_extendqisi2 1
#define HAVE_extendhisi2 1
#define HAVE_extendhidi2 (TARGET_MB_64)
#define HAVE_extendsidi2_long (TARGET_MB_64)
#define HAVE_extendsidi2 1
#define HAVE_movdi_status (microblaze_is_interrupt_variant () && TARGET_MB_64)
#define HAVE_movdi_long_int (TARGET_MB_64 && TARGET_BARREL_SHIFT)
#define HAVE_movsi_status (microblaze_is_interrupt_variant ())
#define HAVE_movsi4_rev (TARGET_REORDER)
#define HAVE_ashlsi3_bshift (TARGET_BARREL_SHIFT)
#define HAVE_ashldi3_long (TARGET_MB_64 && TARGET_BARREL_SHIFT)
#define HAVE_ashldi3_const (TARGET_MB_64)
#define HAVE_ashldi3_reg (TARGET_MB_64)
#define HAVE_ashrdi3_long (TARGET_MB_64 && TARGET_BARREL_SHIFT)
#define HAVE_ashrdi3_const (TARGET_MB_64)
#define HAVE_ashrdi3_reg (TARGET_MB_64)
#define HAVE_lshrdi3_long (TARGET_MB_64 && TARGET_BARREL_SHIFT)
#define HAVE_lshrdi3_const (TARGET_MB_64)
#define HAVE_lshrdi3_reg (TARGET_MB_64)
#define HAVE_seq_internal_pat_long (TARGET_MB_64 && TARGET_PATTERN_COMPARE)
#define HAVE_sne_internal_pat_long (TARGET_MB_64 && TARGET_PATTERN_COMPARE)
#define HAVE_seq_internal_pat (TARGET_PATTERN_COMPARE)
#define HAVE_sne_internal_pat (TARGET_PATTERN_COMPARE)
#define HAVE_cstoresf4 (TARGET_HARD_FLOAT)
#define HAVE_cstoredf4 (TARGET_MB_64)
#define HAVE_branch_zero_64 (TARGET_MB_64)
#define HAVE_long_branch_zero (TARGET_MB_64)
#define HAVE_branch_zero 1
#define HAVE_branch_compare64 (TARGET_MB_64)
#define HAVE_long_branch_compare (TARGET_MB_64)
#define HAVE_branch_compare 1
#define HAVE_jump_64 (TARGET_MB_64)
#define HAVE_jump 1
#define HAVE_indirect_jump_internal1 1
#define HAVE_tablejump_internal1 1
#define HAVE_tablejump_internal2 (TARGET_MB_64)
#define HAVE_return_internal 1
#define HAVE_simple_return_internal 1
#define HAVE_blockage 1
#define HAVE_call_internal_plt_64 (flag_pic && TARGET_MB_64)
#define HAVE_call_internal_plt (flag_pic)
#define HAVE_call_internal1_64 (TARGET_MB_64)
#define HAVE_call_internal1 1
#define HAVE_call_value_intern_plt_64 (flag_pic && TARGET_MB_64)
#define HAVE_call_value_intern_plt (flag_pic)
#define HAVE_call_value_intern_64 (TARGET_MB_64)
#define HAVE_call_value_intern 1
#define HAVE_nop 1
#define HAVE_trap 1
#define HAVE_set_got 1
#define HAVE_set_text 1
#define HAVE_clzsi2 (TARGET_HAS_CLZ)
#define HAVE_extv_32 (TARGET_HAS_BITFIELD && (UINTVAL (operands[2]) > 0) \
   && ((UINTVAL (operands[2]) + UINTVAL (operands[3])) <= 32))
#define HAVE_insv_32 (TARGET_HAS_BITFIELD && UINTVAL (operands[1]) > 0 \
   && UINTVAL (operands[1]) + UINTVAL (operands[2]) <= 32)
#define HAVE_atomic_compare_and_swapsi 1
#define HAVE_adddi3 1
#define HAVE_subdi3 1
#define HAVE_divsi3 ((!TARGET_SOFT_DIV) || (TARGET_BARREL_SHIFT && TARGET_SMALL_DIVIDES))
#define HAVE_one_cmpldi2 1
#define HAVE_movdi 1
#define HAVE_movsi 1
#define HAVE_movhi 1
#define HAVE_movqi 1
#define HAVE_cpymemsi 1
#define HAVE_movsf 1
#define HAVE_movdf 1
#define HAVE_ashlsi3 1
#define HAVE_ashldi3 (TARGET_MB_64)
#define HAVE_ashrdi3 (TARGET_MB_64)
#define HAVE_ashrsi3 1
#define HAVE_lshrdi3 (TARGET_MB_64)
#define HAVE_lshrsi3 1
#define HAVE_cstoresi4 (TARGET_PATTERN_COMPARE)
#define HAVE_cbranchsi4 1
#define HAVE_cbranchsi4_reg 1
#define HAVE_cbranchsf4 (TARGET_HARD_FLOAT)
#define HAVE_condjump 1
#define HAVE_cbranchdi4 (TARGET_MB_64)
#define HAVE_cbranchdi4_reg (TARGET_MB_64)
#define HAVE_cbranchdf4 (TARGET_MB_64)
#define HAVE_indirect_jump 1
#define HAVE_tablejump 1
#define HAVE_tablejump_internal3 1
#define HAVE_tablejump_internal4 1
#define HAVE_prologue 1
#define HAVE_epilogue 1
#define HAVE_allocate_stack (!TARGET_MB_64)
#define HAVE_save_stack_block (!TARGET_MB_64)
#define HAVE_restore_stack_block (!TARGET_MB_64)
#define HAVE_return (microblaze_can_use_return_insn ())
#define HAVE_simple_return 1
#define HAVE_call 1
#define HAVE_call_internal0 1
#define HAVE_call_internal_plt0 1
#define HAVE_call_value 1
#define HAVE_call_value_internal 1
#define HAVE_call_value_intern_plt0 (flag_pic)
#define HAVE_untyped_call 1
#define HAVE_eh_return 1
#define HAVE_extvsi (TARGET_HAS_BITFIELD)
#define HAVE_insvsi (TARGET_HAS_BITFIELD)
extern rtx        gen_bswapsi2                  (rtx, rtx);
extern rtx        gen_bswaphi2                  (rtx, rtx);
extern rtx        gen_addsf3                    (rtx, rtx, rtx);
extern rtx        gen_subsf3                    (rtx, rtx, rtx);
extern rtx        gen_mulsf3                    (rtx, rtx, rtx);
extern rtx        gen_divsf3                    (rtx, rtx, rtx);
extern rtx        gen_sqrtsf2                   (rtx, rtx);
extern rtx        gen_floatsisf2                (rtx, rtx);
extern rtx        gen_fix_truncsfsi2            (rtx, rtx);
extern rtx        gen_adddf3                    (rtx, rtx, rtx);
extern rtx        gen_subdf3                    (rtx, rtx, rtx);
extern rtx        gen_muldf3                    (rtx, rtx, rtx);
extern rtx        gen_divdf3                    (rtx, rtx, rtx);
extern rtx        gen_sqrtdf2                   (rtx, rtx);
extern rtx        gen_floatdidf2                (rtx, rtx);
extern rtx        gen_fix_truncdfdi2            (rtx, rtx);
extern rtx        gen_addsi3                    (rtx, rtx, rtx);
extern rtx        gen_adddi3_int                (rtx, rtx, rtx);
extern rtx        gen_subsi3                    (rtx, rtx, rtx);
extern rtx        gen_iprefetch                 (rtx);
extern rtx        gen_subdi316imm               (rtx, rtx, rtx);
extern rtx        gen_subsidi3                  (rtx, rtx, rtx);
extern rtx        gen_subdi3_small              (rtx, rtx, rtx);
extern rtx        gen_mulsi3                    (rtx, rtx, rtx);
extern rtx        gen_mulsidi3                  (rtx, rtx, rtx);
extern rtx        gen_umulsidi3                 (rtx, rtx, rtx);
extern rtx        gen_usmulsidi3                (rtx, rtx, rtx);
extern rtx        gen_divsi3_internal           (rtx, rtx, rtx);
extern rtx        gen_udivsi3                   (rtx, rtx, rtx);
extern rtx        gen_negsi2                    (rtx, rtx);
extern rtx        gen_negsi_long                (rtx, rtx);
extern rtx        gen_negdi2_long               (rtx, rtx);
extern rtx        gen_negdi2                    (rtx, rtx);
extern rtx        gen_one_cmplsi2               (rtx, rtx);
extern rtx        gen_anddi3imm16               (rtx, rtx, rtx);
extern rtx        gen_anddi3                    (rtx, rtx, rtx);
extern rtx        gen_andsi3                    (rtx, rtx, rtx);
extern rtx        gen_iordi3imm16               (rtx, rtx, rtx);
extern rtx        gen_iordi3                    (rtx, rtx, rtx);
extern rtx        gen_iorsi3                    (rtx, rtx, rtx);
extern rtx        gen_xordi3imm16               (rtx, rtx, rtx);
extern rtx        gen_xordi3                    (rtx, rtx, rtx);
extern rtx        gen_xorsi3                    (rtx, rtx, rtx);
extern rtx        gen_zero_extendhisi2          (rtx, rtx);
extern rtx        gen_zero_extendqihi2          (rtx, rtx);
extern rtx        gen_zero_extendqisi2          (rtx, rtx);
extern rtx        gen_zero_extendhidi2          (rtx, rtx);
extern rtx        gen_zero_extendsidi2          (rtx, rtx);
extern rtx        gen_zero_extendqidi2          (rtx, rtx);
extern rtx        gen_extendqisi2               (rtx, rtx);
extern rtx        gen_extendhisi2               (rtx, rtx);
extern rtx        gen_extendhidi2               (rtx, rtx);
extern rtx        gen_extendsidi2_long          (rtx, rtx);
extern rtx        gen_extendsidi2               (rtx, rtx);
extern rtx        gen_movdi_status              (rtx, rtx);
extern rtx        gen_movdi_long_int            (rtx, rtx);
extern rtx        gen_movsi_status              (rtx, rtx);
extern rtx        gen_movsi4_rev                (rtx, rtx);
extern rtx        gen_ashlsi3_bshift            (rtx, rtx, rtx);
extern rtx        gen_ashldi3_long              (rtx, rtx, rtx);
extern rtx        gen_ashldi3_const             (rtx, rtx, rtx);
extern rtx        gen_ashldi3_reg               (rtx, rtx, rtx);
extern rtx        gen_ashrdi3_long              (rtx, rtx, rtx);
extern rtx        gen_ashrdi3_const             (rtx, rtx, rtx);
extern rtx        gen_ashrdi3_reg               (rtx, rtx, rtx);
extern rtx        gen_lshrdi3_long              (rtx, rtx, rtx);
extern rtx        gen_lshrdi3_const             (rtx, rtx, rtx);
extern rtx        gen_lshrdi3_reg               (rtx, rtx, rtx);
extern rtx        gen_seq_internal_pat_long     (rtx, rtx, rtx);
extern rtx        gen_sne_internal_pat_long     (rtx, rtx, rtx);
extern rtx        gen_seq_internal_pat          (rtx, rtx, rtx);
extern rtx        gen_sne_internal_pat          (rtx, rtx, rtx);
extern rtx        gen_cstoresf4                 (rtx, rtx, rtx, rtx);
extern rtx        gen_cstoredf4                 (rtx, rtx, rtx, rtx);
extern rtx        gen_branch_zero_64            (rtx, rtx, rtx, rtx);
extern rtx        gen_long_branch_zero          (rtx, rtx, rtx, rtx);
extern rtx        gen_branch_zero               (rtx, rtx, rtx, rtx);
extern rtx        gen_branch_compare64          (rtx, rtx, rtx, rtx);
extern rtx        gen_long_branch_compare       (rtx, rtx, rtx, rtx);
extern rtx        gen_branch_compare            (rtx, rtx, rtx, rtx);
extern rtx        gen_jump_64                   (rtx);
extern rtx        gen_jump                      (rtx);
extern rtx        gen_indirect_jump_internal1   (rtx);
extern rtx        gen_tablejump_internal1       (rtx, rtx);
extern rtx        gen_tablejump_internal2       (rtx, rtx);
extern rtx        gen_return_internal           (rtx);
extern rtx        gen_simple_return_internal    (rtx);
extern rtx        gen_blockage                  (void);
extern rtx        gen_call_internal_plt_64      (rtx, rtx);
extern rtx        gen_call_internal_plt         (rtx, rtx);
extern rtx        gen_call_internal1_64         (rtx, rtx);
extern rtx        gen_call_internal1            (rtx, rtx);
extern rtx        gen_call_value_intern_plt_64  (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_call_value_intern_plt     (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_call_value_intern_64      (rtx, rtx, rtx, rtx);
extern rtx        gen_call_value_intern         (rtx, rtx, rtx, rtx);
extern rtx        gen_nop                       (void);
extern rtx        gen_trap                      (void);
extern rtx        gen_set_got                   (rtx);
extern rtx        gen_set_text                  (rtx);
extern rtx        gen_clzsi2                    (rtx, rtx);
extern rtx        gen_extv_32                   (rtx, rtx, rtx, rtx);
extern rtx        gen_insv_32                   (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_compare_and_swapsi (rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_adddi3                    (rtx, rtx, rtx);
extern rtx        gen_subdi3                    (rtx, rtx, rtx);
extern rtx        gen_divsi3                    (rtx, rtx, rtx);
extern rtx        gen_one_cmpldi2               (rtx, rtx);
extern rtx        gen_movdi                     (rtx, rtx);
extern rtx        gen_movsi                     (rtx, rtx);
extern rtx        gen_movhi                     (rtx, rtx);
extern rtx        gen_movqi                     (rtx, rtx);
extern rtx        gen_cpymemsi                  (rtx, rtx, rtx, rtx);
extern rtx        gen_movsf                     (rtx, rtx);
extern rtx        gen_movdf                     (rtx, rtx);
extern rtx        gen_ashlsi3                   (rtx, rtx, rtx);
extern rtx        gen_ashldi3                   (rtx, rtx, rtx);
extern rtx        gen_ashrdi3                   (rtx, rtx, rtx);
extern rtx        gen_ashrsi3                   (rtx, rtx, rtx);
extern rtx        gen_lshrdi3                   (rtx, rtx, rtx);
extern rtx        gen_lshrsi3                   (rtx, rtx, rtx);
extern rtx        gen_cstoresi4                 (rtx, rtx, rtx, rtx);
extern rtx        gen_cbranchsi4                (rtx, rtx, rtx, rtx);
extern rtx        gen_cbranchsi4_reg            (rtx, rtx, rtx, rtx);
extern rtx        gen_cbranchsf4                (rtx, rtx, rtx, rtx);
extern rtx        gen_condjump                  (rtx, rtx);
extern rtx        gen_cbranchdi4                (rtx, rtx, rtx, rtx);
extern rtx        gen_cbranchdi4_reg            (rtx, rtx, rtx, rtx);
extern rtx        gen_cbranchdf4                (rtx, rtx, rtx, rtx);
extern rtx        gen_indirect_jump             (rtx);
extern rtx        gen_tablejump                 (rtx, rtx);
extern rtx        gen_tablejump_internal3       (rtx, rtx);
extern rtx        gen_tablejump_internal4       (rtx, rtx);
extern rtx        gen_prologue                  (void);
extern rtx        gen_epilogue                  (void);
extern rtx        gen_allocate_stack            (rtx, rtx);
extern rtx        gen_save_stack_block          (rtx, rtx);
extern rtx        gen_restore_stack_block       (rtx, rtx);
extern rtx        gen_return                    (void);
extern rtx        gen_simple_return             (void);
extern rtx        gen_call                      (rtx, rtx, rtx, rtx);
extern rtx        gen_call_internal0            (rtx, rtx, rtx);
extern rtx        gen_call_internal_plt0        (rtx, rtx, rtx, rtx);
extern rtx        gen_call_value                (rtx, rtx, rtx, rtx);
extern rtx        gen_call_value_internal       (rtx, rtx, rtx, rtx);
extern rtx        gen_call_value_intern_plt0    (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_untyped_call              (rtx, rtx, rtx);
extern rtx        gen_eh_return                 (rtx);
extern rtx        gen_extvsi                    (rtx, rtx, rtx, rtx);
extern rtx        gen_insvsi                    (rtx, rtx, rtx, rtx);

#endif /* GCC_INSN_FLAGS_H */
