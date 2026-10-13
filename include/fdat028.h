#ifndef FDAT028_H
#define FDAT028_H

#include "common.h"

/* @types */
typedef struct Sub801C60B4 {
    void (*unk0)();
    void (*unk4)();
    u8 _pad8[0x8];
    s32 unk10;
} Sub801C60B4;

typedef struct Sub801C6434 {
    u8 unk0;
    u8 _pad1;
    u16 unk2;
    u8 unk4;
    u8 unk5;
    u16 unk6;
    u8 unk8;
    u8 unk9;
} Sub801C6434;

typedef struct Obj801C60B4 {
    u8 _pad0[0x2C];
    Sub801C60B4 *unk2C;
    u8 _pad30[0x8];
    Sub801C6434 *unk38;
} Obj801C60B4;

/* @externs */
Sub801C60B4 *func_80072120(s32 arg0);
void func_801C603C();

#endif /* FDAT028_H */
