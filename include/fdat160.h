#ifndef FDAT160_H
#define FDAT160_H

#include "common.h"

/* @types */
typedef struct Sub801C5550 {
    void (*unk0)();
    void (*unk4)();
    u8 unk8;
    u8 unk9;
    u8 _padA[0x2];
    u32 unkC;
} Sub801C5550;

typedef struct Obj801B82DC {
    u8 _pad0[0x14];
    Sub801C5550 *unk14;
    u8 _pad18[0xB];
    u8 unk23;
    u8 _pad24[0x4];
    u16 unk28;
    u8 _pad2A[0x2];
} Obj801B82DC;

typedef struct Obj801C6870 {
    u8 _pad0[0xA];
    u16 unkA;
} Obj801C6870;

typedef struct Elem801C8BA8 {
    u8 _pad0[0x34];
} Elem801C8BA8;

/* @externs */
Sub801C5550 *func_80072834(s32 arg0);
void func_801C8E08();
s32 rand(void);
extern Elem801C8BA8 D_801A4C68[];
void func_801C86A4();
void func_801C86B8();
void func_801C88E4();
void func_801C89F0();

#endif /* FDAT160_H */
