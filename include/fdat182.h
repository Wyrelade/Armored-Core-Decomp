#ifndef FDAT182_H
#define FDAT182_H

#include "common.h"

/* @types */
typedef struct Sub801C5550 {
    void (*unk0)();
    void (*unk4)();
} Sub801C5550;

typedef struct Obj801B8280 {
    u8 _pad0[0x2C];
    Sub801C5550 *unk2C;
} Obj801B8280;

typedef struct Obj801B82DC {
    u8 _pad0[0x14];
    Sub801C5550 *unk14;
} Obj801B82DC;

typedef struct Obj801C7360 {
    u8 _pad0[0x8];
    u16 unk8;
    u16 unkA;
    u16 unkC;
    u8 _padE[0x14];
    u16 unk22;
    u16 unk24;
    u16 unk26;
} Obj801C7360;

/* @externs */
Sub801C5550 *func_800714A4(s32 arg0);
void func_801B81E8();
void func_801B847C();
Sub801C5550 *func_800729F8(s32 arg0);
void func_801B859C(Obj801C7360 *arg0);
void func_801B860C();
void func_801B8874();

#endif /* FDAT182_H */
