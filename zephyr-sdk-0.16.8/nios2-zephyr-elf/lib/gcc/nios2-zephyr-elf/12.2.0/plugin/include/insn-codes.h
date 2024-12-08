/* Generated automatically by the program `gencodes'
   from the machine description file `md'.  */

#ifndef GCC_INSN_CODES_H
#define GCC_INSN_CODES_H

enum insn_code {
  CODE_FOR_nothing = 0,
  CODE_FOR_movqi_internal = 3,
  CODE_FOR_movhi_internal = 4,
  CODE_FOR_movsi_internal = 5,
  CODE_FOR_ldbuio = 6,
  CODE_FOR_ldhuio = 7,
  CODE_FOR_ldwio = 8,
  CODE_FOR_ldbio_signed = 9,
  CODE_FOR_ldhio_signed = 10,
  CODE_FOR_stbio = 11,
  CODE_FOR_sthio = 12,
  CODE_FOR_stwio = 13,
  CODE_FOR_zero_extendhisi2 = 14,
  CODE_FOR_zero_extendqihi2 = 15,
  CODE_FOR_zero_extendqisi2 = 16,
  CODE_FOR_extendhisi2 = 17,
  CODE_FOR_extendqihi2 = 18,
  CODE_FOR_extendqisi2 = 19,
  CODE_FOR_addsi3 = 20,
  CODE_FOR_subsi3 = 21,
  CODE_FOR_mulsi3 = 22,
  CODE_FOR_divsi3_insn = 23,
  CODE_FOR_udivsi3 = 24,
  CODE_FOR_smulsi3_highpart = 25,
  CODE_FOR_umulsi3_highpart = 26,
  CODE_FOR_negsi2 = 27,
  CODE_FOR_one_cmplsi2 = 28,
  CODE_FOR_andsi3 = 29,
  CODE_FOR_iorsi3 = 30,
  CODE_FOR_xorsi3 = 31,
  CODE_FOR_ashlsi3 = 33,
  CODE_FOR_ashrsi3 = 34,
  CODE_FOR_lshrsi3 = 35,
  CODE_FOR_rotlsi3 = 36,
  CODE_FOR_rotrsi3 = 37,
  CODE_FOR_extzv = 39,
  CODE_FOR_insv = 40,
  CODE_FOR_addsf3 = 41,
  CODE_FOR_subsf3 = 42,
  CODE_FOR_mulsf3 = 43,
  CODE_FOR_divsf3 = 44,
  CODE_FOR_adddf3 = 45,
  CODE_FOR_subdf3 = 46,
  CODE_FOR_muldf3 = 47,
  CODE_FOR_divdf3 = 48,
  CODE_FOR_sminsf3 = 49,
  CODE_FOR_smaxsf3 = 50,
  CODE_FOR_smindf3 = 51,
  CODE_FOR_smaxdf3 = 52,
  CODE_FOR_abssf2 = 53,
  CODE_FOR_negsf2 = 54,
  CODE_FOR_sqrtsf2 = 55,
  CODE_FOR_absdf2 = 56,
  CODE_FOR_negdf2 = 57,
  CODE_FOR_sqrtdf2 = 58,
  CODE_FOR_nios2_fwrx = 59,
  CODE_FOR_nios2_fwry = 60,
  CODE_FOR_nios2_frdxlo = 61,
  CODE_FOR_nios2_frdxhi = 62,
  CODE_FOR_nios2_frdy = 63,
  CODE_FOR_cossf2 = 64,
  CODE_FOR_sinsf2 = 65,
  CODE_FOR_tansf2 = 66,
  CODE_FOR_atansf2 = 67,
  CODE_FOR_expsf2 = 68,
  CODE_FOR_logsf2 = 69,
  CODE_FOR_cosdf2 = 70,
  CODE_FOR_sindf2 = 71,
  CODE_FOR_tandf2 = 72,
  CODE_FOR_atandf2 = 73,
  CODE_FOR_expdf2 = 74,
  CODE_FOR_logdf2 = 75,
  CODE_FOR_floatsisf2 = 76,
  CODE_FOR_floatunssisf2 = 77,
  CODE_FOR_floatsidf2 = 78,
  CODE_FOR_floatunssidf2 = 79,
  CODE_FOR_fix_truncsfsi2 = 80,
  CODE_FOR_fixuns_truncsfsi2 = 81,
  CODE_FOR_fix_truncdfsi2 = 82,
  CODE_FOR_fixuns_truncdfsi2 = 83,
  CODE_FOR_lroundsfsi2 = 84,
  CODE_FOR_extendsfdf2 = 85,
  CODE_FOR_truncdfsf2 = 86,
  CODE_FOR_simple_return = 87,
  CODE_FOR_blockage = 88,
  CODE_FOR_eh_set_ra = 89,
  CODE_FOR_indirect_jump = 90,
  CODE_FOR_jump = 91,
  CODE_FOR_sibcall_internal = 94,
  CODE_FOR_sibcall_value_internal = 95,
  CODE_FOR_nios2_cbranch = 97,
  CODE_FOR_nios2_seqsf = 98,
  CODE_FOR_nios2_snesf = 99,
  CODE_FOR_nios2_sgtsf = 100,
  CODE_FOR_nios2_sgesf = 101,
  CODE_FOR_nios2_slesf = 102,
  CODE_FOR_nios2_sltsf = 103,
  CODE_FOR_nios2_seqdf = 104,
  CODE_FOR_nios2_snedf = 105,
  CODE_FOR_nios2_sgtdf = 106,
  CODE_FOR_nios2_sgedf = 107,
  CODE_FOR_nios2_sledf = 108,
  CODE_FOR_nios2_sltdf = 109,
  CODE_FOR_nios2_cmpeq = 110,
  CODE_FOR_nios2_cmpne = 111,
  CODE_FOR_nios2_cmpge = 112,
  CODE_FOR_nios2_cmplt = 113,
  CODE_FOR_nios2_cmpgeu = 114,
  CODE_FOR_nios2_cmpltu = 115,
  CODE_FOR_custom_nxx = 116,
  CODE_FOR_custom_xnxx = 117,
  CODE_FOR_nop = 118,
  CODE_FOR_rdctl = 120,
  CODE_FOR_wrctl = 121,
  CODE_FOR_rdprs = 122,
  CODE_FOR_flushd = 123,
  CODE_FOR_flushda = 124,
  CODE_FOR_wrpie = 125,
  CODE_FOR_eni = 126,
  CODE_FOR_trap = 127,
  CODE_FOR_ctrapsi4 = 128,
  CODE_FOR_load_got_register = 129,
  CODE_FOR_ldex = 130,
  CODE_FOR_ldsex = 131,
  CODE_FOR_stex = 132,
  CODE_FOR_stsex = 133,
  CODE_FOR_movqi = 314,
  CODE_FOR_movhi = 315,
  CODE_FOR_movsi = 316,
  CODE_FOR_ldbio = 317,
  CODE_FOR_ldhio = 318,
  CODE_FOR_divsi3 = 319,
  CODE_FOR_mulsidi3 = 320,
  CODE_FOR_umulsidi3 = 321,
  CODE_FOR_prologue = 322,
  CODE_FOR_epilogue = 323,
  CODE_FOR_sibcall_epilogue = 324,
  CODE_FOR_return = 325,
  CODE_FOR_eh_return = 326,
  CODE_FOR_call = 327,
  CODE_FOR_call_value = 328,
  CODE_FOR_sibcall = 329,
  CODE_FOR_sibcall_value = 330,
  CODE_FOR_tablejump = 331,
  CODE_FOR_cstoresi4 = 332,
  CODE_FOR_cstoresf4 = 333,
  CODE_FOR_cstoredf4 = 334,
  CODE_FOR_cbranchsi4 = 335,
  CODE_FOR_cbranchsf4 = 336,
  CODE_FOR_cbranchdf4 = 337,
  CODE_FOR_memory_barrier = 338,
  CODE_FOR_sync = 339,
   CODE_FOR_get_thread_pointersi = CODE_FOR_nothing
};

const unsigned int NUM_INSN_CODES = 340;
#endif /* GCC_INSN_CODES_H */
