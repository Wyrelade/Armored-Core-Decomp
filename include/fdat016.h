#ifndef FDAT016_H
#define FDAT016_H

#include "common.h"

/* @types */
typedef struct Obj801C6A60 {
    u8 _pad0[0x36];
    s16 unk36;
    u8 _pad38[0x20];
    void (*unk58)();
    void (*unk5C)();
    u8 _pad60[0xA8];
    u8 *unk108;
} Obj801C6A60;

typedef struct Sub801C52C0 {
    u8 _pad0[0x3A];
    u8 unk3A;
    u8 unk3B;
} Sub801C52C0;

typedef struct Sub801C52D0 {
    s16 unk0;
    s16 unk2;
    s16 unk4;
    s16 unk6;
} Sub801C52D0;

typedef struct Sub801C563C {
    u8 _pad0[0x38];
} Sub801C563C;

typedef struct Sub801C5B7C {
    u8 _pad0[0x1C];
    u16 unk1C;
    u8 _pad1E[0x2];
    u8 unk20;
} Sub801C5B7C;

typedef struct Obj801C52C0 {
    Sub801C5B7C *unk0;
    u8 _pad4[0x4];
    Sub801C52D0 unk8;
    Sub801C52D0 unk10;
    u8 _pad18[0x1E];
    s16 unk36;
    u8 _pad38[0x4];
    u8 unk3C;
    u8 unk3D;
    u8 unk3E;
    u8 unk3F;
    u8 unk40;
    u8 unk41;
    u8 _pad42[0xE];
    void (*unk50)();
    void (*unk54)();
    void (*unk58)();
    void (*unk5C)();
    u8 _pad60[0x4];
    Sub801C563C unk64;
    u8 _pad9C[0x30];
    Sub801C52D0 unkCC;
    u8 _padD4[0x34];
    Sub801C52C0 *unk108;
    u8 _pad10C[0x3C];
    u16 unk148;
    u8 unk14A;
    u8 unk14B;
    u8 unk14C;
    u8 _pad14D[0xF];
    s32 unk15C;
} Obj801C52C0;

typedef struct Task801C6D58 {
    void (*unk0)();
    void (*unk4)();
    u8 _pad8[0x8];
    s32 unk10;
} Task801C6D58;

typedef struct Sub801C7624 {
    u8 unk0;
    u8 _pad1;
    u16 unk2;
    u8 unk4;
    u8 unk5;
    u16 unk6;
    u8 unk8;
    u8 unk9;
} Sub801C7624;

typedef struct Obj801C730C {
    u8 _pad0[0x2C];
    Task801C6D58 *unk2C;
    u8 _pad30[0x8];
    Sub801C7624 *unk38;
} Obj801C730C;

typedef struct Task801C788C {
    void (*unk0)();
    void (*unk4)();
    s32 unk8;
} Task801C788C;

typedef struct Obj801C78F4 {
    u8 _pad0[0x14];
    Task801C788C *unk14;
} Obj801C78F4;

typedef struct Sub801C7AB8 {
    void (*unk0)();
    void (*unk4)();
} Sub801C7AB8;

typedef struct Obj801C7AB8 {
    u8 _pad0[0x6];
    s16 unk6;
    u8 _pad8[0xC];
    Sub801C7AB8 *unk14;
    u8 _pad18[0xA];
    u8 unk22;
    u8 _pad23;
    u16 unk24;
    u8 _pad26[0x4];
    u8 unk2A;
    u8 _pad2B;
    u16 unk2C;
} Obj801C7AB8;

typedef struct Obj801C5458 {
    u8 _pad0[0x1000];
    u8 unk1000[1];
} Obj801C5458;

typedef struct Elem801C52C0 {
    u8 _pad0[0x3A];
    u8 unk3A;
    u8 unk3B;
    u8 _pad3C[0x508];
} Elem801C52C0;

typedef struct Sub801C55B4 {
    s16 unk0;
    s16 unk2;
    s16 unk4;
    s16 unk6;
} Sub801C55B4;

typedef struct Sub801C5550 {
    void (*unk0)();
    void (*unk4)();
} Sub801C5550;

typedef struct Sub801C5798 {
    u8 unk0;
    u8 _pad1[0x67];
} Sub801C5798;

typedef struct Obj801C52C0_fdat000 {
    u8 _pad0[0x8];
    Sub801C55B4 unk8;
    u8 _pad10[0x1C];
    Sub801C5550 *unk2C;
    u8 _pad30[0x6];
    s16 unk36;
    u8 _pad38[0x4];
    u8 unk3C;
    u8 unk3D;
    u8 _pad3E[0x3];
    u8 unk41;
    u8 unk42;
    u8 _pad43;
    s16 unk44;
    u8 _pad46[0xA];
    void (*unk50)();
    void (*unk54)();
    void (*unk58)();
    void (*unk5C)();
    u8 _pad60[0x4];
    Sub801C5798 unk64;
    Sub801C55B4 unkCC;
    u8 _padD4[0x2C];
    u8 unk100;
    u8 _pad101[0x7];
    Elem801C52C0 *unk108;
    u8 _pad10C[0x18];
    s16 unk124;
    s16 unk126;
    s16 unk128;
    s16 unk12A;
    s16 unk12C;
    s16 unk12E;
    u8 unk130;
    u8 unk131;
    u8 unk132;
    u8 unk133;
    u8 unk134;
    u8 _pad135;
    u8 unk136;
    u8 _pad137[0x11];
    u16 unk148;
    u8 _pad14A[0x12];
    s32 unk15C;
    u8 _pad160[0x4];
    u16 unk164;
} Obj801C52C0_fdat000;

typedef struct Sub801C5634 {
    u8 _pad0[0x6];
    u8 unk6;
    u8 _pad7[0x2];
    u8 unk9;
    u8 _padA[0x23];
    u8 unk2D;
    u8 _pad2E[0xA];
    u16 unk38;
} Sub801C5634;

typedef struct Sub801C5BDC {
    u8 _pad0[0x12];
    s16 unk12;
} Sub801C5BDC;

typedef struct Elem801C85FC {
    u8 _pad0[0x2];
    u16 unk2;
    u8 _pad4[0x28];
} Elem801C85FC;

/* @externs */
void func_801C62CC();
void func_801C69BC(Obj801C6A60 *arg0);
void func_801C66DC();
void func_801C6904();
void func_801C68E4(void);
extern u8 D_801CDC7C[];
void func_801CDBD4(Obj801C52C0 *arg0);
void *func_80072120(s32 arg0);
void func_801C72A8();
void func_801C730C(Obj801C730C *arg0);
void func_801C7390();
void func_8006D39C(Obj801C730C *arg0);
s32 func_8006D45C();
void func_8008A0B0(u8 arg0, u8 arg1, u16 arg2, u8 arg3, s32 arg4);
void func_801C7624(Obj801C730C *arg0);
void func_801C76C0();
void *func_80073674(s32 arg0);
void func_801C7758();
s32 func_801C7A70(u8 arg0, u16 arg1);
void func_801C7930();
void func_801C7B2C();
void func_801C7C48();
extern Obj801C5458 *D_801A5DC0;
void func_8004CE44(s32 arg0, Sub801C52D0 *arg1, s32 arg2, s32 arg3);
void func_8004CC30(s32 arg0, u8 *arg1, Sub801C52D0 *arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void func_8004DE88(Sub801C563C *arg0, Sub801C52D0 *arg1);
void func_800775B8(Obj801C52C0 *arg0, s32 arg1, s32 arg2, s32 arg3, Sub801C52D0 *arg4, void (*arg5)());
void func_801C8D40();
void func_801CC5A0(Obj801C52C0_fdat000 *arg0);
void func_801CC8A4();
void func_801CA644();
void func_801CBD44();
void func_801CC254();
u16 func_80073904(void);
void func_80078598(Obj801C52C0 *arg0);
s32 func_800754D0(Obj801C52C0 *arg0, u8 *arg1);
void func_80078E1C(Obj801C52C0 *arg0);
s32 rand(void);
extern s32 D_801A5DC4;
extern u8 D_801CDC20[];
extern u8 D_80039C78[];
extern u8 D_8019F52E[];
extern u8 D_801CDC44[];
extern u8 D_801CDC48[];
extern u8 D_801CDC4C[];
Sub801C5BDC *func_80086F20(s32 arg0, Sub801C52D0 *arg1, s32 arg2, s32 arg3, s32 arg4, u8 *arg5, u8 *arg6, u8 *arg7, u8 *arg8);
s32 func_801C59F8(Obj801C52C0 *arg0);
void func_80077B78(Obj801C52C0 *arg0, s32 arg1, u16 arg2, u8 arg3, u8 *arg4, s32 arg5, s32 arg6, s32 arg7);
extern Elem801C85FC D_8019FB94[];

#endif /* FDAT016_H */
