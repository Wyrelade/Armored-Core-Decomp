#ifndef FDAT162_H
#define FDAT162_H

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

typedef struct Sub801C8798 {
    s16 unk0;
    s16 unk2;
    s16 unk4;
    s16 unk6;
} Sub801C8798;

typedef struct Sub801C8580 {
    u8 _pad0[0x8];
    Sub801C8798 unk8;
    u8 unk10;
    u8 unk11;
    u8 unk12;
    u8 unk13;
    u8 _pad14[0x6];
    s16 unk1A;
    s16 unk1C;
    s16 unk1E;
    s16 unk20;
} Sub801C8580;

typedef struct Sub801C8580_38 {
    u8 _pad0[0x6];
    u8 unk6;
    u8 _pad7[0x3];
    u8 unkA;
} Sub801C8580_38;

typedef struct Elem801C8580 {
    u8 _pad0[0x16];
    s16 unk16;
    u8 _pad18[0xE];
    s16 unk26;
    u16 *unk28;
    Sub801C8580 *unk2C;
    u8 _pad30[0x8];
    Sub801C8580_38 *unk38;
    u8 _pad3C[0x4];
} Elem801C8580;

typedef struct Elem801C8798 {
    s32 unk0;
    u8 _pad4[0x3C];
} Elem801C8798;

/* @externs */
Sub801C5550 *func_800712E0(s32 arg0);
void func_801C8C38();
extern Elem801C8580 D_801D4488[];
extern Elem801C8798 D_801D44B8[];
extern Sub801C8798 D_801C8D20;
extern s16 D_801C8D24;
void func_8001380C(Sub801C8798 *arg0, Sub801C8798 *arg1, s32 arg2);
void func_80071340(Elem801C8580 *arg0);
s32 func_801C86E8(Sub801C8580 *arg0);
void func_801C8580(Elem801C8580 *arg0, s32 arg1);

#endif /* FDAT162_H */
