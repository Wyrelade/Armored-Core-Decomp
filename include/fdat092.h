#ifndef FDAT092_H
#define FDAT092_H

#include "common.h"

/* @types */
typedef struct Elem801C52C0 {
    u8 _pad0[0x30];
    u8 unk30;
    u8 unk31;
    u8 unk32;
    u8 unk33;
    u8 _pad34[0x6];
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
    u8 _pad8[0x8];
    s32 unk10;
} Sub801C5550;

typedef struct Sub801C6440 {
    u8 unk0;
    u8 _pad1;
    u16 unk2;
    u8 unk4;
    u8 unk5;
    u16 unk6;
    u8 unk8;
    u8 unk9;
} Sub801C6440;

typedef struct Sub801C5798 {
    u8 unk0;
    u8 _pad1[0x9];
    s16 unkA;
    u8 _padC[0xC];
    s16 unk18;
    u8 _pad1A[0x4E];
} Sub801C5798;

typedef struct Sub801C53B8 {
    u8 _pad0[0x8];
    s16 unk8;
} Sub801C53B8;

typedef struct Sub801C56E4 {
    u8 _pad0[0x1C];
    u16 unk1C;
    u8 _pad1E[0x2];
    u8 unk20;
} Sub801C56E4;

typedef struct Obj801C52C0 {
    Sub801C56E4 *unk0;
    Sub801C53B8 *unk4;
    Sub801C55B4 unk8;
    u8 _pad10[0x2];
    s16 unk12;
    u8 _pad14[0x18];
    Sub801C5550 *unk2C;
    u8 _pad30[0x6];
    s16 unk36;
    Sub801C6440 *unk38;
    u8 unk3C;
    u8 unk3D;
    u8 _pad3E[0x1];
    u8 unk3F;
    u8 unk40;
    u8 unk41;
    u8 _pad42[0xA];
    s32 unk4C;
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
    u8 _pad10C[0x3C];
    u16 unk148;
    u8 unk14A;
    u8 unk14B;
    u8 unk14C;
    u8 _pad14D[0xF];
    s32 unk15C;
    u8 _pad160[0x4];
    u16 unk164;
    u8 _pad166[0xA];
} Obj801C52C0;

typedef struct Sub801C6730 {
    void (*unk0)();
    u8 _pad4[0x4];
    s32 unk8;
} Sub801C6730;

typedef struct Obj801C6730 {
    u8 _pad0[0x14];
    Sub801C6730 *unk14;
    u8 _pad18[0xA];
    u8 unk22;
    u8 _pad23[0x5];
    u8 unk28;
} Obj801C6730;

typedef struct Obj801C6A20 {
    u8 _pad0[0x10];
    u8 unk10;
} Obj801C6A20;

typedef struct Obj801C75B4 {
    u8 _pad0[0x1000];
    u8 unk1000[1];
} Obj801C75B4;

typedef struct Sub801C5550_fdat000 {
    void (*unk0)();
    void (*unk4)();
} Sub801C5550_fdat000;

typedef struct Obj801C52C0_fdat000 {
    u8 _pad0[0x8];
    Sub801C55B4 unk8;
    u8 _pad10[0x1C];
    Sub801C5550_fdat000 *unk2C;
    u8 _pad30[0x6];
    s16 unk36;
    u8 _pad38[0x4];
    u8 unk3C;
    u8 unk3D;
    u8 _pad3E[0x3];
    u8 unk41;
    u8 unk42;
    u8 _pad43[0x1];
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
    u8 _pad135[0x1];
    u8 unk136;
    u8 _pad137[0x11];
    u16 unk148;
    u8 unk14A;
    u8 unk14B;
    u8 unk14C;
    u8 _pad14D[0xF];
    s32 unk15C;
    u8 _pad160[0x4];
    u16 unk164;
    u8 _pad166[0x2];
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

typedef struct Sub801C5550_fdat002 {
    void (*unk0)();
    void (*unk4)();
} Sub801C5550_fdat002;

typedef struct Sub801C4EB8 {
    u8 unk0;
    u8 _pad1;
    u8 unk2;
} Sub801C4EB8;

typedef struct Sub801C6C20 {
    u8 _pad0[0xA];
    s16 unkA;
} Sub801C6C20;

typedef struct Obj801C4EB8 {
    Sub801C6C20 *unk0;
    u8 _pad4[0xE];
    u16 unk12;
    u8 _pad14[0x2];
    u16 unk16;
    u16 unk18;
    u8 _pad1A[0x8];
    s16 unk22;
    u8 _pad24[0x8];
    Sub801C5550_fdat002 *unk2C;
    u8 _pad30[0x6];
    s16 unk36;
    u8 _pad38[0x9];
    u8 unk41;
    u8 _pad42[0xE];
    void (*unk50)();
    u8 _pad54[0x10];
    Sub801C4EB8 unk64;
    u8 _pad67[0x65];
    s16 unkCC;
    s16 unkCE;
    u8 _padD0[0x90];
    u16 unk160;
} Obj801C4EB8;

typedef struct Sub801C5FDC {
    void (*unk0)();
} Sub801C5FDC;

typedef struct Obj801C5F00 {
    u8 _pad0[0x6];
    s16 unk6;
    u8 _pad8[0xC];
    Sub801C5FDC *unk14;
    u8 _pad18[0x4];
    u16 unk1C;
    u8 _pad1E[0x4];
    u8 unk22;
    u8 unk23;
    u16 unk24;
} Obj801C5F00;

typedef struct Sub801C5EA8 {
    u8 _pad0[0x10];
    u8 unk10;
} Sub801C5EA8;

typedef struct Sub801C6050 {
    u8 _pad0[0x6];
    u8 unk6;
} Sub801C6050;

typedef struct Elem801C5F00 {
    u8 _pad0[0x26];
    s16 unk26;
    u16 *unk28;
    Sub801C5EA8 *unk2C;
    u8 _pad30[0x8];
    Sub801C6050 *unk38;
    u8 _pad3C[0x4];
} Elem801C5F00;

typedef struct Elem801C67A4 {
    u8 unk0;
    u8 _pad1[0x2B];
} Elem801C67A4;

typedef struct Obj801C7788 {
    u8 _pad0[0x20];
    void (*unk20[1])();
} Obj801C7788;

typedef struct Elem801C878C {
    u8 _pad0[0x6];
    s16 unk6;
    u8 _pad8[0x2C];
} Elem801C878C;

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

typedef struct Obj801C93D4 {
    u8 _pad0[0x8];
    Sub801C55B4 unk8;
    u8 _pad10[0x1A];
    u16 unk2A;
    u8 _pad2C[0x2];
    s16 unk2E;
    u8 _pad30[0x11];
    u8 unk41;
    u8 _pad42[0xE];
    void (*unk50)();
    u8 _pad54[0x10];
    Sub801C5798 unk64;
    u8 _padCC[0x3C];
    Elem801C52C0 *unk108;
} Obj801C93D4;

/* @externs */
extern Elem801C52C0 D_801CC0C0;
void func_801CC074(Obj801C52C0 *arg0);
extern Elem801C52C0 D_801CC604;
void func_8004E98C(Sub801C5798 *arg0, s32 arg1, s32 arg2, s32 arg3);
void func_801CA1E4();
void func_801CA6F4();
Sub801C5550 *func_80072120(s32 arg0);
void func_801C608C();
void func_801C6320();
void func_8006D39C(Obj801C52C0 *arg0);
s32 func_8006D45C();
void func_8008A0B0(u8 arg0, u8 arg1, u16 arg2, u8 arg3, s32 arg4);
void func_801C6440(Obj801C52C0 *arg0);
s32 func_801C64DC(Obj801C730C *arg0, s32 arg1, s32 arg2, ...);
void func_801C6574();
Sub801C6730 *func_80073674(s32 arg0);
void func_801C6654(Obj801C5F00 *arg0);
void func_801C66B8(Obj801C5F00 *arg0);
extern u16 D_8019F528;
extern u8 D_8019FB68[];
extern s32 D_801CCBD8;
extern Obj801C6A20 *D_801D3B94;
void func_80078CFC(u8 *arg0);
void func_8008A80C(void);
void func_8008C2FC(s32 arg0, void (*arg1)());
Obj801C52C0 *func_801C67A4(s32 arg0);
void func_801C6800(s32 arg0);
void func_801C6880();
void func_801C69E4(Obj801C52C0 *arg0);
extern Obj801C75B4 *D_801A5DC0;
void func_8004CE44(s32 arg0, Sub801C55B4 *arg1, s32 arg2, s32 arg3);
void func_8004CC30(s32 arg0, u8 *arg1, Sub801C55B4 *arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void func_8004DE88(Sub801C5798 *arg0, Sub801C55B4 *arg1);
void func_800775B8(Obj801C52C0 *arg0, s32 arg1, s32 arg2, s32 arg3, Sub801C55B4 *arg4, void (*arg5)());
void func_801C71E0();
void func_801C8AE4();
void func_801CAA40(Obj801C52C0_fdat000 *arg0);
void func_801CAD44();
u16 func_80073904(void);
extern u8 D_801A26C0[];
extern u16 D_801A26E0;
extern u16 D_801A26E2;
void func_80012794(s16 *arg0, u16 arg1, u16 arg2, s32 arg3, u8 *arg4, s32 arg5, s32 arg6);
extern Elem801C5F00 D_801D0B68[];
extern u8 D_801CCB48[];
extern u8 D_801CCB6C[];
void func_80077B78(Obj801C52C0 *arg0, s32 arg1, u16 arg2, u8 arg3, u8 *arg4, s32 arg5, s32 arg6, s32 arg7);
s32 func_800754D0(Obj801C52C0 *arg0, u8 *arg1);
void func_80078E1C(Obj801C52C0 *arg0);
s32 func_800781E8(Obj801C52C0 *arg0);
s32 func_801C55F4(Obj801C52C0 *arg0);
void func_801C54F0();
void func_801C5808();
void func_801C56E4(Obj801C52C0 *arg0);
void func_801C5940();
extern Elem801C67A4 D_8019FAB9[];
extern Obj801C52C0 D_801A26B8[];
extern Obj801C7788 *D_8019F51C;
extern u8 D_801CCBB4[];
s16 func_80075EB4();
s16 func_800132CC(s16 arg0, s16 arg1, s16 arg2);
void func_80014728(s32 arg0, Sub801C55B4 *arg1);
void func_80014338(Sub801C55B4 *arg0, s32 arg1, Sub801C55B4 *arg2);
void func_800143B8(Sub801C55B4 *arg0, s32 arg1, s32 arg2, Sub801C55B4 *arg3);
s32 func_8004F080(Sub801C5798 *arg0, Sub801C55B4 *arg1);
extern u8 D_80039C78[];
extern Elem801C878C D_80198B08[];
void func_800759A4(Obj801C52C0_fdat000 *arg0, s32 arg1, u8 *arg2);
void func_80075B08(Obj801C52C0_fdat000 *arg0, s32 arg1, Elem801C878C *arg2);
void func_80075FC0(Obj801C93D4 *arg0);
s32 func_8004F024(Sub801C5798 *arg0, Sub801C55B4 *arg1);
void func_80078250(Obj801C93D4 *arg0, u8 arg1, u8 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);
void func_8007847C(Obj801C93D4 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);

#endif /* FDAT092_H */
