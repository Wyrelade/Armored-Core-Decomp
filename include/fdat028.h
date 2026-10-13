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

typedef struct Sub801C6A40 {
    void (*unk0)();
    u8 _pad4[0x4];
    s32 unk8;
} Sub801C6A40;

typedef struct Obj801C6A40 {
    u8 _pad0[0x14];
    Sub801C6A40 *unk14;
    u8 _pad18[0x10];
    u8 unk28;
} Obj801C6A40;

typedef struct Obj801C6F28 {
    u16 unk0;
    u16 unk2;
    u16 unk4;
    u8 _pad6[0x12];
    u16 unk18;
    u16 unk1A;
    u16 unk1C;
    u16 unk1E;
    u16 unk20;
    u16 unk22;
    u16 unk24;
    u8 _pad26[0x2];
    u8 unk28;
    u8 unk29;
    u8 unk2A;
    u8 _pad2B[0x8D];
    u8 unkB8;
    u8 unkB9;
    u8 unkBA;
    u8 _padBB[0x3];
    u16 unkBE;
} Obj801C6F28;

/* @externs */
Sub801C60B4 *func_80072120(s32 arg0);
void func_801C603C();
void func_801C62D0();
s32 func_8006D45C(void);
void func_8006D39C(Obj801C60B4 *arg0);
void func_8008A0B0(u8 arg0, u8 arg1, u16 arg2, u8 arg3, u8 arg4);
void func_801C6434(Obj801C60B4 *arg0);
void func_801C64D0();
Sub801C6A40 *func_80073674(s32 arg0);
void func_801C6568();
s32 func_80014D78(s32 arg0);
void func_801C6AAC();
void func_801C6BC8();

#endif /* FDAT028_H */
