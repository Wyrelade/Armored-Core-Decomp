#ifndef FDAT203_H
#define FDAT203_H

#include "common.h"

/* @types */
typedef struct Sub8004EE14 {
    u8 _pad0[0xC];
    u16 unkC[1];
} Sub8004EE14;

typedef struct Elem8004F1D4 {
    u8 _pad0[0x8];
} Elem8004F1D4;

typedef struct Obj8004EE14 {
    u8 unk0;
    u8 _pad1[0x1];
    u8 unk2;
    u8 unk3;
    u8 _pad4[0x6];
    s16 unkA;
    s16 unkC;
    u8 _padE[0xE];
    Sub8004EE14 *unk1C;
    Elem8004F1D4 unk20[3];
} Obj8004EE14;

typedef struct Elem8004EE14 {
    u8 _pad0[0x10];
    s16 unk10;
} Elem8004EE14;

typedef struct Sub8004F1D4 {
    s16 unk0;
    s16 unk2;
    s16 unk4;
} Sub8004F1D4;

typedef struct Elem80054008 {
    u8 _pad0[0x7C];
} Elem80054008;

typedef struct Elem80056B30 {
    u8 unk0;
    u8 _pad1[0x17];
} Elem80056B30;

typedef struct Obj8006FD84 {
    u8 _pad0[0x4];
    s32 unk4[8];
    s32 unk24[8];
    s32 unk44[8];
} Obj8006FD84;

typedef struct Sub8004DE88 {
    s16 unk0;
    s16 unk2;
    s16 unk4;
    s16 unk6;
} Sub8004DE88;

typedef struct Obj800732FC {
    u8 _pad0[0x8];
    Sub8004F1D4 unk8;
    s16 unkE;
    Sub8004F1D4 unk10;
    u8 _pad16[0x2];
    Sub8004F1D4 unk18;
    u8 _pad1E[0x18];
    u16 unk36;
    u8 _pad38[0x4];
    u8 unk3C;
    u8 unk3D;
    u8 _pad3E[0x3];
    u8 unk41;
    u8 _pad42[0xE];
    void (*unk50)(struct Obj800732FC *, u8);
    void (*unk54)(struct Obj800732FC *, s32, s32);
    u8 _pad58[0x8];
    s32 unk60;
    Obj8004EE14 unk64;
    u8 _pad9C[0x30];
    Sub8004DE88 unkCC;
    u8 _padD4[0x74];
    u16 unk148;
    u8 _pad14A[0x12];
    s32 unk15C;
} Obj800732FC;

typedef struct Obj800744D0 {
    u8 _pad0[0x164];
    u16 unk164;
} Obj800744D0;

typedef struct Obj800781F0 {
    u8 _pad0[0x270];
    u16 unk270;
    u8 _pad272[0x16];
    u16 unk288;
    u16 unk28A;
    u16 unk28C;
    u16 unk28E;
    u8 _pad290[0x1B];
    u8 unk2AB;
    u8 unk2AC;
    u8 unk2AD;
    u8 _pad2AE[0x10];
    u16 unk2BE;
    s32 unk2C0;
} Obj800781F0;

typedef struct Obj800825D4 {
    u8 _pad0[0x8];
    s32 unk8;
    u8 _padC[0xC];
    Sub8004F1D4 unk18;
    u8 unk1E;
    u8 unk1F;
    u8 unk20;
    u8 unk21;
} Obj800825D4;

typedef union Sub80088694 {
    s16 unk0;
    u8 b[3];
} Sub80088694;

typedef struct Obj8008825C {
    Sub8004F1D4 unk0;
    u8 _pad6[0x8];
    s16 unkE;
    u8 _pad10[0x2];
    s16 unk12;
    u8 _pad14[0x6];
    s16 unk1A;
    s16 unk1C;
    s16 unk1E;
    s16 unk20;
    u8 _pad22[0x2];
    Sub8004F1D4 unk24;
    s16 unk2A;
    u8 _pad2C[0x8C];
    Sub80088694 unkB8;
    u8 _padBC[0x2];
    u16 unkBE;
} Obj8008825C;

typedef struct Sub8004EFB8 {
    s16 unk0;
    u8 _pad2[0x6];
} Sub8004EFB8;

typedef struct Elem8004ECA8 {
    u8 _pad0[0x10];
    s16 unk10;
} Elem8004ECA8;

typedef struct Sub8004ECA8 {
    u8 _pad0[0xC];
    u16 unkC[1];
} Sub8004ECA8;

typedef struct Obj8004DE88 {
    u8 unk0;
    u8 _pad1;
    u8 unk2;
    u8 unk3;
    u8 _pad4[0x6];
    s16 unkA;
    s16 unkC;
    u8 _padE[0xE];
    Sub8004ECA8 *unk1C;
    Sub8004EFB8 unk20;
    Sub8004EFB8 unk28;
    Sub8004EFB8 unk30;
} Obj8004DE88;

typedef struct Obj800558A8 {
    s16 unk0;
    u8 _pad2[0x1E];
    void *unk20;
    s32 *unk24;
} Obj800558A8;

typedef struct Elem8005460C {
    u8 _pad0[0x12];
    s16 unk12;
    u8 _pad14[0x68];
} Elem8005460C;

typedef struct Obj80055E20 {
    u8 _pad0[0x20];
    Elem8005460C *unk20;
} Obj80055E20;

typedef struct Obj800718B4 {
    s32 unk0;
    u8 _pad4[0x4];
    s32 unk8;
    s32 unkC;
    u8 _pad10[0x4];
    s32 unk14;
} Obj800718B4;

typedef struct Sub8007618C {
    u8 _pad0[0x2];
    u8 unk2;
} Sub8007618C;

typedef struct Obj8007618C {
    u8 _pad0[0x8];
    u8 unk8[0x39];
    u8 unk41;
    u8 _pad42[0xE];
    void (*unk50)(struct Obj8007618C *, u8);
    u8 _pad54[0x10];
    Sub8007618C unk64;
    u8 _pad67[0xE1];
    u16 unk148;
    u8 _pad14A[0x12];
    s32 unk15C;
} Obj8007618C;

typedef struct Obj8007A108 {
    u8 _pad0[0x3];
    u8 unk3;
    u8 _pad4[0x2];
    u8 unk6;
} Obj8007A108;

typedef struct Obj80085394 {
    u8 _pad0[0x12];
    s16 unk12;
    u8 _pad14[0x4];
    u16 unk18;
    u16 unk1A;
    s16 unk1C;
    u8 _pad1E[0x9C];
    u16 unkBA;
} Obj80085394;

typedef struct Obj80085510 {
    u16 unk0;
    u16 unk2;
    u16 unk4;
    u8 _pad6[0x12];
    u16 unk18;
    u16 unk1A;
    u16 unk1C;
    u8 _pad1E[0x2];
    u16 unk20;
    u16 unk22;
    u16 unk24;
    u8 _pad26[0xA0];
    u16 unkC6;
    u16 unkC8;
    u16 unkCA;
} Obj80085510;

typedef struct Obj80087A24 {
    u8 _pad0[0x1E];
    u16 unk1E;
    u8 _pad20[0x8];
    u8 unk28;
    u8 unk29;
    u8 unk2A;
    u8 _pad2B[0x8D];
    u8 unkB8;
    u8 unkB9;
    u8 unkBA;
    u8 _padBB[0x3];
    u16 unkBE;
} Obj80087A24;

/* @externs */
extern u8 D_800895C8;
void func_800309A8(s32 arg0, s32 arg1, void (*arg2)(void));
void func_8004BE10(void);
extern s32 D_8019B48C;
extern u16 D_8019B490;
extern u8 D_80041BC0;
void func_8004DB64(s16 arg0);
void func_8004DB90(void);
s16 func_8004F190(Elem8004F1D4 *arg0, s16 arg1, u8 arg2);
void func_8004EFC8(void);
s32 func_8004EE68(Obj8004EE14 *arg0);
s32 func_8004F1D4(Obj8004EE14 *arg0, Sub8004F1D4 *arg1);
void func_80053DEC(Elem80054008 *arg0);
extern Elem80056B30 D_801A3E2C[8];
extern s32 D_801A3DA4;
s32 rsin(s32 arg0);
void func_80061CA8(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
extern s32 D_801DDD18[3][0x400];
void func_80015538(s32 *arg0, s32 arg1, s32 arg2);
void func_8006CEC0(void);
extern s32 D_8019B550[];
extern s32 *D_8019D830;
extern s32 D_8019D83C;
extern s32 D_8019D840;
void func_80072B20(s32 arg0);
void func_80072B30(s32 arg0);
void func_80055420(s32 arg0, s32 arg1, Sub8004F1D4 *arg2, Sub8004F1D4 *arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 *arg8);
void func_8004EEC4(Obj8004EE14 *arg0);
void func_80074D40(void);
s32 func_8004F240(Obj8004EE14 *arg0, Sub8004F1D4 *arg1);
s32 func_8004F2F0(Obj8004EE14 *arg0, Sub8004F1D4 *arg1, Sub8004F1D4 *arg2);
s32 func_8004F29C(Obj8004EE14 *arg0, Sub8004F1D4 *arg1);
void func_800748BC(Obj800732FC *arg0);
s32 func_8007785C(void);
void func_80077AF8(s32 arg0, s32 arg1);
extern Obj800781F0 *D_80039D18;
extern Obj800781F0 *D_80039D30;
void func_80081914(u16 arg0, u16 arg1, u16 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 *arg7);
void func_800787B0(Obj800732FC *arg0);
void func_800788C0(Obj800732FC *arg0);
void func_8004EF78(Obj8004EE14 *arg0);
void func_8007CB90(void);
extern u8 D_80194739;
extern u8 D_8019473A;
extern s32 *D_8019473C;
extern u16 D_80194742;
extern u16 D_80194744;
extern u16 D_80194746;
extern u16 D_80194748;
extern s32 D_8019474C;
void func_80086444(s32 arg0, Obj800825D4 *arg1, Sub8004F1D4 *arg2, u8 arg3, s32 arg4);
s16 func_8006DB54(s16 arg0, Obj8008825C *arg1);
void func_80088130(Obj8008825C *arg0, Sub8004F1D4 *arg1, s16 arg2, s16 arg3, s32 arg4, s32 arg5);
extern s16 D_8019B494;
extern s8 D_801C40CC;
extern s16 D_801C40CE;
extern u8 D_801A3E28;
extern u8 D_801A3E29;
extern u8 D_801A3E2A;
extern u8 D_801A3E2B;
extern u16 D_8019B492;
void func_800893A4(void);
void func_800894B4(void);
void MulRotMatrix(s32 *arg0);
extern s32 D_80041BA0;
extern u8 D_80041BB8;
extern u8 D_80041BBA;
extern u8 D_80041BBB;
extern u8 D_80041BBD;
extern u8 D_80041BC2;
extern s8 D_80041BC8;
extern s8 D_80041BC9;
extern s8 D_80041BCA;
extern s8 D_80041BCB;
extern s8 D_80041BCC;
extern s8 D_80041BCD;
extern s8 D_80041BCE;
void SsSetMVol(s32 arg0, s32 arg1);
void func_80016DA8(void);
void SsEnd(void);
void func_80016114(void *arg0);
s32 func_8001628C(void);
s32 rand(void);
extern u8 D_80031A94[];
void SsSetSerialVol(s32 arg0, s16 arg1, s16 arg2);

#endif /* FDAT203_H */
