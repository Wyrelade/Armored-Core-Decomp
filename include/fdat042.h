#ifndef FDAT042_H
#define FDAT042_H

#include "common.h"

/* @types */
typedef struct Obj801C5624 {
    u8 _pad0[0x12];
    u16 unk12;
    u8 _pad14[0xB8];
    s16 unkCC;
} Obj801C5624;

typedef struct Elem801C659C {
    u8 _pad0[0x3A];
    u8 unk3A;
    u8 unk3B;
} Elem801C659C;

typedef struct Sub801C7910 {
    s16 unk0;
    s16 unk2;
    s16 unk4;
    s16 unk6;
} Sub801C7910;

typedef struct Sub801C70F0 {
    void (*unk0)();
    void (*unk4)();
} Sub801C70F0;

typedef struct Sub801C6E3C {
    u8 unk0;
    u8 _pad1[0x67];
} Sub801C6E3C;

typedef struct Obj801C6554 {
    u8 _pad0[0x8];
    Sub801C7910 unk8;
    u8 _pad10[0x1C];
    Sub801C70F0 *unk2C;
    u8 _pad30[0x6];
    s16 unk36;
    u8 _pad38[0x4];
    u8 unk3C;
    u8 unk3D;
    u8 _pad3E[0x2];
    u8 unk40;
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
    Sub801C6E3C unk64;
    Sub801C7910 unkCC;
    u8 _padD4[0x34];
    Elem801C659C *unk108;
    u8 _pad10C[0x3C];
    u16 unk148;
    u8 _pad14A[0x12];
    s32 unk15C;
} Obj801C6554;

typedef struct Elem801C52C0 {
    u8 _pad0[0x3A];
    u8 unk3A;
    u8 unk3B;
} Elem801C52C0;

typedef struct Sub801C5C04 {
    s16 unk0;
    s16 unk2;
    s16 unk4;
    s16 unk6;
} Sub801C5C04;

typedef struct Sub801C52C0 {
    u8 _pad0[0x68];
} Sub801C52C0;

typedef struct Sub801C5578 {
    void (*unk0)();
    void (*unk4)();
    u8 _pad8[0x8];
    u8 unk10;
    u8 _pad11;
    s16 unk12;
    u16 unk14;
    s16 unk16;
    s16 unk18;
    s16 unk1A;
} Sub801C5578;

typedef struct Sub801C5680 {
    u16 unk0;
    u8 _pad2[0x5];
    s8 unk7;
} Sub801C5680;

typedef struct Obj801C52C0 {
    u8 _pad0[0x8];
    Sub801C5C04 unk8;
    u8 _pad10[0x1C];
    Sub801C5578 *unk2C;
    u8 _pad30[0x6];
    s16 unk36;
    Sub801C5680 *unk38;
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
    Sub801C52C0 unk64;
    Sub801C5C04 unkCC;
    u8 _padD4[0x2C];
    u8 unk100;
    u8 _pad101[0x7];
    Elem801C52C0 *unk108;
    u8 _pad10C[0x3C];
    u16 unk148;
    u8 _pad14A[0x12];
    s32 unk15C;
} Obj801C52C0;

typedef struct Obj801C7360 {
    u8 _pad0[0x8];
    u16 unk8;
    u16 unkA;
    u16 unkC;
    u8 _padE[0x14];
    u16 unk22;
    u16 unk24;
    u16 unk26;
} Obj801C7360;

typedef struct Sub801C7394 {
    void (*unk0)();
} Sub801C7394;

typedef struct Obj801C7394 {
    u8 _pad0[0x14];
    Sub801C7394 *unk14;
} Obj801C7394;

typedef struct Obj801C7910 {
    u8 _pad0[0x1000];
    u8 unk1000[1];
} Obj801C7910;

typedef struct Elem801C52C0_fdat000 {
    u8 _pad0[0x3A];
    u8 unk3A;
    u8 unk3B;
    u8 _pad3C[0x508];
} Elem801C52C0_fdat000;

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
    Elem801C52C0_fdat000 *unk108;
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
    Sub801C5550 *unk2C;
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

typedef struct Elem801C95C0 {
    u8 _pad0[0x34];
} Elem801C95C0;

typedef struct Sub801A2828 {
    u8 _pad0[0xE];
    s16 unkE;
} Sub801A2828;

typedef struct Obj8019FB68 {
    u8 _pad0[0x2CC0];
    Sub801A2828 unk2CC0;
} Obj8019FB68;

typedef struct Obj8019F51C {
    u8 _pad0[0x20];
    void (*unk20[1])(Sub801A2828 *);
} Obj8019F51C;

typedef struct Sub801C4C94 {
    s16 unk0;
    s16 unk2;
    s16 unk4;
    s16 unk6;
} Sub801C4C94;

typedef struct Task801C712C {
    void (*unk0)();
    void (*unk4)();
    u8 _pad8[0x8];
    u16 unk10;
} Task801C712C;

typedef struct Sub801C712C {
    u8 unk0;
    u8 unk1;
    u16 unk2;
    u8 unk4;
    u8 unk5;
    u16 unk6;
    u16 unk8;
} Sub801C712C;

typedef struct Obj801C712C {
    u8 _pad0[0x2C];
    Task801C712C *unk2C;
    u8 _pad30[0x8];
    Sub801C712C *unk38;
} Obj801C712C;

typedef struct Elem801C712C {
    s32 unk0;
    u8 _pad4[0x3C];
} Elem801C712C;

/* @externs */
void func_801C55AC(Obj801C4EB8 *arg0);
void func_801C6480(Obj801C6554 *arg0);
extern Elem801C659C D_801CCFD8;
void func_801CCEA8(Obj801C52C0 *arg0);
void func_8004E98C(Sub801C6E3C *arg0, s32 arg1, s32 arg2, s32 arg3);
void func_801C6D64();
Sub801C70F0 *func_80072120(s32 arg0);
void func_801C6E98();
void func_801C7240();
Sub801C7394 *func_80073674(s32 arg0);
void func_801C7360(Obj801C7360 *arg0);
void func_801C73D0();
void func_801C74EC();
extern Obj801C7910 *D_801A5DC0;
void func_8004CE44(s32 arg0, Sub801C7910 *arg1, s32 arg2, s32 arg3);
void func_8004CC30(s32 arg0, u8 *arg1, Sub801C7910 *arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void func_8004DE88(Sub801C6E3C *arg0, Sub801C7910 *arg1);
void func_800775B8(Obj801C6554 *arg0, s32 arg1, s32 arg2, s32 arg3, Sub801C7910 *arg4, void (*arg5)());
void func_801C8014();
void func_801CB874(Obj801C52C0_fdat000 *arg0);
void func_801C9918();
void func_801CB018();
void func_801CB528();
void func_801CBB78();
u16 func_80073904(void);
void func_8004ECA8(Sub801C4EB8 *arg0);
extern Sub801C55B4 D_80039C78;
extern Elem801C95C0 D_80198B08[];
void func_800759A4(Obj801C52C0_fdat000 *arg0, s32 arg1, Sub801C55B4 *arg2);
void func_80075B08(Obj801C52C0_fdat000 *arg0, s32 arg1, Elem801C95C0 *arg2);
extern s32 D_801AC80C;
extern Obj8019FB68 D_8019FB68;
extern Obj8019F51C *D_8019F51C;
void func_80078B14(Sub801A2828 *arg0, Obj8019FB68 *arg1);
s32 func_80014D78(s32 arg0);
extern s16 D_801A26CE;
extern Elem801C712C D_801D0B94[];
s32 func_8008A0B0(u8 arg0, u8 arg1, u16 arg2, u8 arg3, s32 arg4);

#endif /* FDAT042_H */
