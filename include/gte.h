#ifndef GTE_H
#define GTE_H

/*
 * Psy-Q GTE inline macros (the SDK inline_n.h forms) for the game code that was written in C
 * with them. This header is the only inline assembly allowed in the tree (PLAN Phase 4b.3):
 * each macro is one GTE operation plus the SDK's own register moves, spelled with the
 * include/gte_macros.inc mnemonics. $12-$15 are the macros' scratch registers.
 */

#define gte_ldv0(r0) __asm__ volatile ("lwc2 $0, 0(%0);" "lwc2 $1, 4(%0)" : : "r"(r0))
#define gte_rtps() __asm__ volatile ("nop;" "nop;" "rtps")
#define gte_stflg(r0) __asm__ volatile ("cfc2 $12, $31;" "nop;" "sw $12, 0(%0)" : : "r"(r0) : "$12", "memory")
#define gte_stsxy(r0) __asm__ volatile ("swc2 $14, 0(%0)" : : "r"(r0) : "memory")
#define gte_stszotz(r0) __asm__ volatile ("mfc2 $12, $19;" "nop;" "sra $12, $12, 2;" "sw $12, 0(%0)" : : "r"(r0) : "$12", "memory")
#define gte_ldv0u(r0) __asm__ volatile ("lwl $12, 3(%0);" "lwr $12, 0(%0);" "lhu $13, 4(%0);" "mtc2 $12, $0;" "mtc2 $13, $1" : : "r"(r0) : "$12", "$13") /* unaligned SVECTOR load (lwl/lwr + lhu); not an inline_n.h name */
#define gte_ncs() __asm__ volatile ("nop;" "nop;" "ncs")
#define gte_strgb(r0) __asm__ volatile ("swc2 $22, 0(%0)" : : "r"(r0) : "memory")
#define gte_SetRotMatrix(r0) __asm__ volatile ("lw $12, 0(%0);" "lw $13, 4(%0);" "ctc2 $12, $0;" "ctc2 $13, $1;" "lw $12, 8(%0);" "lw $13, 12(%0);" "lw $14, 16(%0);" "ctc2 $12, $2;" "ctc2 $13, $3;" "ctc2 $14, $4" : : "r"(r0) : "$12", "$13", "$14")
#define gte_SetTransMatrix(r0) __asm__ volatile ("lw $12, 20(%0);" "lw $13, 24(%0);" "ctc2 $12, $5;" "lw $14, 28(%0);" "ctc2 $13, $6;" "ctc2 $14, $7" : : "r"(r0) : "$12", "$13", "$14")
#define gte_ldclmv(r0) __asm__ volatile ("lhu $12, 0(%0);" "lhu $13, 6(%0);" "lhu $14, 12(%0);" "mtc2 $12, $9;" "mtc2 $13, $10;" "mtc2 $14, $11" : : "r"(r0) : "$12", "$13", "$14")
#define gte_rtir() __asm__ volatile ("nop;" "nop;" "mvmva 1, 0, 3, 3, 0")
#define gte_stclmv(r0) __asm__ volatile ("mfc2 $12, $9;" "mfc2 $13, $10;" "mfc2 $14, $11;" "sh $12, 0(%0);" "sh $13, 6(%0);" "sh $14, 12(%0)" : : "r"(r0) : "$12", "$13", "$14", "memory")
#define gte_ldlv0(r0) __asm__ volatile ("lhu $13, 4(%0);" "lhu $12, 0(%0);" "sll $13, $13, 16;" "or $12, $12, $13;" "mtc2 $12, $0;" "lwc2 $1, 8(%0)" : : "r"(r0) : "$12", "$13")
#define gte_rtv0tr() __asm__ volatile ("nop;" "nop;" "mvmva 1, 0, 0, 0, 0")
#define gte_stlvnl(r0) __asm__ volatile ("swc2 $25, 0(%0);" "swc2 $26, 4(%0);" "swc2 $27, 8(%0)" : : "r"(r0) : "memory")
#define gte_SetLightMatrix(r0) __asm__ volatile ("lw $12, 0(%0);" "lw $13, 4(%0);" "ctc2 $12, $8;" "ctc2 $13, $9;" "lw $12, 8(%0);" "lw $13, 12(%0);" "lw $14, 16(%0);" "ctc2 $12, $10;" "ctc2 $13, $11;" "ctc2 $14, $12" : : "r"(r0) : "$12", "$13", "$14")
#define gte_ldsxy3(r0, r1, r2) __asm__ volatile ("mtc2 %0, $12;" "mtc2 %2, $14;" "mtc2 %1, $13" : : "r"(r0), "r"(r1), "r"(r2))
#define gte_nclip() __asm__ volatile ("nop;" "nop;" "nclip")
#define gte_stopz(r0) __asm__ volatile ("swc2 $24, 0(%0)" : : "r"(r0) : "memory")

#endif /* GTE_H */
