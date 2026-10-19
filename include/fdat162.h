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

typedef struct Sub801C8580 {
    u8 _pad0[0x10];
    u8 unk10;
} Sub801C8580;

typedef struct Sub801C8580_38 {
    u8 _pad0[0x6];
    u8 unk6;
} Sub801C8580_38;

typedef struct Elem801C8580 {
    u8 _pad0[0x26];
    s16 unk26;
    u16 *unk28;
    Sub801C8580 *unk2C;
    u8 _pad30[0x8];
    Sub801C8580_38 *unk38;
    u8 _pad3C[0x4];
} Elem801C8580;

/* @externs */
Sub801C5550 *func_800712E0(s32 arg0);
void func_801C8C38();
extern Elem801C8580 D_801D4488[];

#endif /* FDAT162_H */
