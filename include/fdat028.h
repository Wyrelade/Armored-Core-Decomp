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
void func_801C62D0();
s32 func_8006D45C(void);
void func_8006D39C(Obj801C60B4 *arg0);
void func_8008A0B0(u8 arg0, u8 arg1, u16 arg2, u8 arg3, u8 arg4);

#endif /* FDAT028_H */
