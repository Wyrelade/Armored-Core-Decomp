#ifndef FDAT086_H
#define FDAT086_H

#include "common.h"

/* @types */
typedef struct Sub8004DE88 {
    s16 unk0;
    s16 unk2;
    s16 unk4;
    s16 unk6;
} Sub8004DE88;

typedef struct Obj8007A19C {
    u8 _pad0[0x1000];
    u8 unk1000[1];
} Obj8007A19C;

typedef struct Elem801C6508 {
    u8 _pad0[0x3A];
    u8 unk3A;
    u8 unk3B;
} Elem801C6508;

typedef struct Sub801C7A84 {
    u8 _pad0[0x68];
} Sub801C7A84;

typedef struct Sub801C6800 {
    void (*unk0)();
    void (*unk4)();
} Sub801C6800;

typedef struct Obj801C6508 {
    u8 _pad0[0x8];
    Sub8004DE88 unk8;
    u8 _pad10[0x26];
    s16 unk36;
    u8 _pad38[0x4];
    u8 unk3C;
    u8 unk3D;
    u8 _pad3E[0x3];
    u8 unk41;
    u8 _pad42[0xE];
    void (*unk50)();
    void (*unk54)();
    void (*unk58)();
    void (*unk5C)();
    u8 _pad60[0x4];
    Sub801C7A84 unk64;
    Sub8004DE88 unkCC;
    u8 _padD4[0x34];
    Elem801C6508 *unk108;
    u8 _pad10C[0x3C];
    u16 unk148;
    u8 _pad14A[0x12];
    s32 unk15C;
} Obj801C6508;

typedef struct Obj801C6800 {
    u8 _pad0[0x6];
    s16 unk6;
    u8 _pad8[0xC];
    Sub801C6800 *unk14;
    u8 _pad18[0xA];
    u8 unk22;
    u8 _pad23;
    u16 unk24;
    u8 _pad26[0x4];
    u8 unk2A;
    u8 _pad2B;
    u16 unk2C;
} Obj801C6800;

/* @externs */
extern Elem801C6508 D_801CCF68;
void func_801CCE38(Obj801C6508 *arg0);
Sub801C6800 *func_80073674(s32 arg0);
void func_801C67CC();
s32 func_801C70B8(u8 arg0, u16 arg1);
void func_801C6F78();
void func_801C7174();
void func_801C71D8();
void func_801C72BC();
void func_801C73D8();
extern u16 D_8019F528;
extern s32 D_801CD538;
void func_8004C318(s32 arg0);
void func_800529F0(s32 arg0, s32 arg1, s32 arg2);
extern Obj8007A19C *D_801A5DC0;
void func_8004CE44(s32 arg0, Sub8004DE88 *arg1, s32 arg2, s32 arg3);
void func_8004CC30(s32 arg0, u8 *arg1, Sub8004DE88 *arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void func_8004DE88(Sub801C7A84 *arg0, Sub8004DE88 *arg1);
void func_800775B8(Obj801C6508 *arg0, s32 arg1, s32 arg2, s32 arg3, Sub8004DE88 *arg4, void (*arg5)());
void func_801C7FA4();

#endif /* FDAT086_H */
