#ifndef FDAT072_H
#define FDAT072_H

#include "common.h"

/* @types */
typedef struct Sub801C5EC0 {
    void (*unk0)();
    void (*unk4)();
} Sub801C5EC0;

typedef struct Obj801C5EC0 {
    u8 _pad0[0x2C];
    Sub801C5EC0 *unk2C;
} Obj801C5EC0;

typedef struct Sub801C6954 {
    void (*unk0)();
    void (*unk4)();
    s8 unk8;
    s8 unk9;
    u8 _padA[0x2];
    u32 unkC;
} Sub801C6954;

typedef struct Obj801C6954 {
    u8 _pad0[0x14];
    Sub801C6954 *unk14;
    u8 _pad18[0xB];
    u8 unk23;
    u8 _pad24[0x4];
    u16 unk28;
    u8 _pad2A[0x2];
} Obj801C6954;

typedef struct Obj801C6870 {
    u8 _pad0[0xA];
    u16 unkA;
} Obj801C6870;

typedef struct Sub8004DE88 {
    s16 unk0;
    s16 unk2;
    s16 unk4;
    s16 unk6;
} Sub8004DE88;

typedef struct Sub8004F080 {
    u8 _pad0[0x18];
} Sub8004F080;

typedef struct Sub801C4D28 {
    u8 _pad0[0x8];
    s16 unk8;
} Sub801C4D28;

typedef struct Obj801C5560 {
    u8 _pad0[0x4];
    Sub801C4D28 *unk4;
    Sub8004DE88 unk8;
    u8 _pad10[0x2];
    s16 unk12;
    u8 _pad14[0x22];
    s16 unk36;
    u8 _pad38[0x4];
    u8 unk3C;
    u8 _pad3D[0x4];
    u8 unk41;
    u8 _pad42[0xE];
    void (*unk50)();
    void (*unk54)();
    void (*unk58)();
    void (*unk5C)();
    u8 _pad60[0x4];
    Sub8004F080 unk64;
    s16 unk7C;
    u8 _pad7E[0x4E];
    Sub8004DE88 unkCC;
    u8 _padD4[0x34];
    s16 unk108;
    u8 _pad10A[0x5A];
    u16 unk164;
    u8 _pad166[0x2];
} Obj801C5560;

typedef struct Elem801C6524 {
    u8 _pad0[0x34];
} Elem801C6524;

typedef struct Obj801C5EFC {
    s16 unk0;
    s16 unk2;
    s16 unk4;
    u8 _pad6[0x8];
    u16 unkE;
    u8 _pad10[0x4];
    Sub801C6954 *unk14;
} Obj801C5EFC;

typedef struct Sub801C5EFC {
    u8 _pad0[0x10];
    s8 unk10;
    u8 _pad11[0xA9];
    s16 unkBA;
    s16 unkBC;
    s16 unkBE;
} Sub801C5EFC;

typedef struct Obj8007A19C {
    u8 _pad0[0x1000];
    u8 unk1000[0x100];
    u8 unk1100[1];
} Obj8007A19C;

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

typedef struct Sub801C4D98 {
    u8 _pad0[0x2];
    u8 unk2;
    u8 _pad3[0x7];
    s16 unkA;
} Sub801C4D98;

typedef struct Sub801C4E00 {
    u8 _pad0[0x1C];
    u16 unk1C;
    u8 _pad1E[0x2];
    u8 unk20;
} Sub801C4E00;

typedef union Sub801C52A0 {
    s32 unk0;
    u8 unk0_b[4];
} Sub801C52A0;

typedef struct Obj801C59E8 {
    Sub801C4E00 *unk0;
    u8 _pad4[0x4];
    Sub8004DE88 unk8;
    Sub8004DE88 unk10;
    u8 _pad18[0x14];
    s16 unk2C;
    s16 unk2E;
    s16 unk30;
    s16 unk32;
    u8 _pad34[0x2];
    s16 unk36;
    u8 _pad38[0x4];
    Sub801C52A0 unk3C;
    u8 unk40;
    u8 unk41;
    u8 unk42;
    u8 _pad43[0x1];
    u16 unk44;
    u8 _pad46[0xA];
    void (*unk50)();
    void (*unk54)();
    void (*unk58)();
    void (*unk5C)();
    u8 _pad60[0x4];
    Sub801C4D98 unk64;
    u8 _pad70[0xC];
    s16 unk7C;
    u8 _pad7E[0x4E];
    Sub8004DE88 unkCC;
    u8 _padD4[0x34];
    s16 unk108;
    u8 _pad10A[0x3E];
    s16 unk148;
    u8 unk14A;
    u8 unk14B;
    u8 unk14C;
    u8 _pad14D[0xF];
    s32 unk15C;
    u8 _pad160[0x4];
    u16 unk164;
    u8 _pad166[0x2];
} Obj801C59E8;

typedef struct Elem801C5EA8 {
    s32 unk0;
    u8 _pad4[0x3C];
} Elem801C5EA8;

typedef struct Sub8006D4BC {
    u8 _pad0[0x4];
    Elem801C5EA8 *unk4;
    u8 _pad8[0x6];
    u16 unkE;
} Sub8006D4BC;

typedef struct Elem801C70E8 {
    u8 _pad0[0x2];
    s16 unk2;
    s16 unk4;
    u8 _pad6[0x2];
    u16 unk8;
    u8 unkA;
    u8 unkB;
    u8 unkC;
    u8 unkD;
    u8 unkE;
    u8 unkF;
} Elem801C70E8;

/* @externs */
Sub801C5EC0 *func_80072120(s32 arg0);
void func_801C5D98();
Sub801C6954 *func_80073674(s32 arg0);
void func_801C6638();
void func_801C4EE8(Obj801C5560 *arg0, s32 arg1);
void func_801C539C();
void func_801C5158();
void func_801C550C();
s32 rand();
extern Elem801C6524 D_80198B08[];
void func_801C6020();
void func_801C6034();
void func_801C6260();
void func_801C636C();
void func_80078598(Obj801C5560 *arg0);
void func_8007732C(Obj801C5560 *arg0, s32 arg1, s32 arg2, s32 arg3, Sub8004DE88 *arg4, void (*arg5)());
void func_801C4D28(Obj801C5560 *arg0);
extern s16 D_801A26C0;
extern s16 D_801A26C2;
extern s16 D_801A26C4;
extern s32 D_801AC860[];
extern s32 D_801C6C04;
s32 SquareRoot0(s32 arg0);
Sub801C5EFC *func_80086854(s32 arg0, Obj801C5EFC *arg1, s32 *arg2);
extern Obj8007A19C *D_801A5DC0[];
s16 func_80075EB4(void);
s16 func_800132CC(s16 arg0, s16 arg1, s16 arg2);
void func_80014728(s32 arg0, Sub8004DE88 *arg1);
void func_80014338(Sub8004DE88 *arg0, s32 arg1, Sub8004DE88 *arg2);
s32 func_800143B8(Sub8004DE88 *arg0, s32 arg1, s32 arg2, Sub8004DE88 *arg3);
s16 func_80013390(s16 arg0, s32 arg1, s32 arg2);
void func_8004CC30(s32 arg0, u8 *arg1, Sub8004DE88 *arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
s32 func_8004F080(Sub8004F080 *arg0, Sub8004DE88 *arg1);
extern s32 D_801AC80C;
extern Obj8019FB68 D_8019FB68;
extern Obj8019F51C *D_8019F51C;
void func_80078B14(Sub801A2828 *arg0, Obj8019FB68 *arg1);
s32 func_800754D0(Obj801C59E8 *arg0, u8 *arg1);
void func_80078E1C(Obj801C59E8 *arg0);
Sub8006D4BC *func_8006D4BC(s32 arg0);
Sub8006D4BC *func_80075030(Obj801C59E8 *arg0, s32 arg1);
s16 func_8006E6B4(s16 arg0, Sub8004DE88 *arg1);
void func_8004E98C(Sub801C4D98 *arg0, s32 arg1, s32 arg2, s32 arg3);
void func_8004ECA8(Sub801C4D98 *arg0);
s32 func_8004EBF8(Sub801C4D98 *arg0);
void func_800529F0(s32 arg0, s32 arg1, s32 arg2);
void func_8004D178(s32 arg0, u8 *arg1, s32 arg2, s32 arg3, s32 arg4);
extern u8 D_801C6BC8[];
extern Elem801C70E8 D_801C6AE8[];
extern u8 D_8019F518;
extern u8 D_801C6BEC[];
extern u8 D_801C6BF0[];
extern u8 D_801C6BF4[];
extern u8 D_801C6BF8[];
extern u8 D_801C6BFC[];
extern u8 D_801C6C00[];
extern s32 D_801A5DC8;
extern Elem801C5EA8 D_801D0B68[];
extern Obj801C59E8 D_801A26B8[];
extern s32 D_8019F524[];
extern u16 D_801987D8[];
extern u16 D_8019F52A;

#endif /* FDAT072_H */
