#ifndef FDAT074_H
#define FDAT074_H

#include "common.h"

/* @types */
typedef struct Sub801C68D8 {
    void (*unk0)();
    void (*unk4)();
} Sub801C68D8;

typedef struct Sub801C60A8 {
    u8 _pad0[0x1C];
    u16 unk1C;
    u8 _pad1E[0x2];
    u8 unk20;
} Sub801C60A8;

typedef struct Obj801C5AF0 {
    Sub801C60A8 *unk0;
    u8 _pad4[0x28];
    Sub801C68D8 *unk2C;
    u8 _pad30[0x6];
    s16 unk36;
    u8 _pad38[0x7];
    u8 unk3F;
    u8 unk40;
    u8 unk41;
    u8 unk42;
    u8 _pad43[0x1];
    s16 unk44;
    u8 _pad46[0x2];
    s32 unk48;
    u8 _pad4C[0x4];
    void (*unk50)();
    void (*unk54)();
    void (*unk58)();
    void (*unk5C)();
    u8 _pad60[0x1C];
    s16 unk7C;
    u8 _pad7E[0x7E];
    s16 unkFC;
    u8 unkFE;
    u8 _padFF[0x49];
    u16 unk148;
    u8 unk14A;
    u8 unk14B;
    u8 unk14C;
    u8 _pad14D[0xF];
    s32 unk15C;
    u8 _pad160[0x4];
    u16 unk164;
    u8 _pad166[0xA];
} Obj801C5AF0;

typedef struct Sub801C6B58 {
    void (*unk0)();
    void (*unk4)();
} Sub801C6B58;

typedef struct Obj801C6B58 {
    u8 _pad0[0x14];
    Sub801C6B58 *unk14;
} Obj801C6B58;

/* @externs */
s16 func_80073904(void);
void func_801C5138();
void func_801C5704();
void func_801C5498();
void func_801C596C();
Sub801C68D8 *func_80072120(s32 arg0);
void func_801C6680();
void func_801C6914();
Sub801C6B58 *func_80073674(s32 arg0);
void func_801C6A78();
void func_801C6B94();
void func_80056C6C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
s32 func_800754D0(Obj801C5AF0 *arg0, s32 *arg1);
void func_80077B78(Obj801C5AF0 *arg0, s32 arg1, u16 arg2, u8 arg3, s32 *arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8, s32 arg9, s32 argA);
void func_80078598();
void func_80078E1C(Obj801C5AF0 *arg0);
s32 func_801C5FB4(Obj801C5AF0 *arg0);
s32 rand();
extern s32 D_801C72C8;
extern s32 D_801C72EC;
void func_801C5E74();
void func_801C6308();
void func_801C60A8(Obj801C5AF0 *arg0);
void func_801C64AC();

#endif /* FDAT074_H */
