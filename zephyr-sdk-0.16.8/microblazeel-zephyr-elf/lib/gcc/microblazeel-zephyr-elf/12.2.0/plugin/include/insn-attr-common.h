/* Generated automatically by the program `genattr-common'
   from the machine description file `md'.  */

#ifndef GCC_INSN_ATTR_COMMON_H
#define GCC_INSN_ATTR_COMMON_H

enum attr_type {TYPE_UNKNOWN, TYPE_BRANCH, TYPE_JUMP, TYPE_CALL, TYPE_LOAD, TYPE_STORE, TYPE_MOVE, TYPE_ARITH, TYPE_DARITH, TYPE_IMUL, TYPE_IDIV, TYPE_ICMP, TYPE_MULTI, TYPE_NOP, TYPE_NO_DELAY_ARITH, TYPE_NO_DELAY_LOAD, TYPE_NO_DELAY_STORE, TYPE_NO_DELAY_IMUL, TYPE_NO_DELAY_MOVE, TYPE_BSHIFT, TYPE_FADD, TYPE_FRSUB, TYPE_FMUL, TYPE_FDIV, TYPE_FCMP, TYPE_FSL, TYPE_FSQRT, TYPE_FCVT, TYPE_FINT, TYPE_TRAP};
enum attr_mode {MODE_UNKNOWN, MODE_NONE, MODE_QI, MODE_HI, MODE_SI, MODE_DI, MODE_SF, MODE_DF};
enum attr_abicalls {ABICALLS_NO, ABICALLS_YES};
#define INSN_SCHEDULING
#define DELAY_SLOTS 1

#endif /* GCC_INSN_ATTR_COMMON_H */
