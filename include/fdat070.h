#ifndef FDAT070_H
#define FDAT070_H

#include "common.h"

/* @types */
typedef struct Sub801C5638 {
    void (*unk0)();
    void (*unk4)();
} Sub801C5638;

typedef struct Obj801C5638 {
    u8 _pad0[0x2C];
    Sub801C5638 *unk2C;
} Obj801C5638;

typedef struct Elem801C4FD0 {
    u8 _pad0[0x1C];
    u16 unk1C;
    u16 unk1E;
    u8 unk20;
    u8 unk21;
} Elem801C4FD0;

typedef struct Obj801C4FD0 {
    Elem801C4FD0 *unk0;
    u8 _pad4[0x3A];
    u8 unk3E;
    u8 unk3F;
    u8 unk40;
    u8 _pad41[0x7];
    s32 unk48;
    u8 _pad4C[0xFC];
    u16 unk148;
    u8 unk14A;
    u8 unk14B;
    u8 unk14C;
    u8 _pad14D[0xF];
    s32 unk15C;
} Obj801C4FD0;

/* @externs */
Sub801C5638 *func_80072120(s32 arg0);
void func_801C53E0();
void func_801C5674();
void func_8008A80C();
extern s32 D_801C5800;
extern u8 D_801C5824[];
extern u8 D_801C5844[];
void func_80077B78(Obj801C4FD0 *arg0, s32 arg1, u16 arg2, u8 arg3, u8 *arg4, ...);
s32 rand(void);
s32 func_800754D0(Obj801C4FD0 *arg0, s32 *arg1);
void func_80078E1C(Obj801C4FD0 *arg0);
s32 func_800781E8(Obj801C4FD0 *arg0);
s32 func_801C4EDC(Obj801C4FD0 *arg0);

#endif /* FDAT070_H */
