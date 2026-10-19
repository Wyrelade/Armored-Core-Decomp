#ifndef FDAT203_H
#define FDAT203_H

#include "common.h"

/* @types */
typedef struct Sub8004EE14 {
    u8 _pad0[0xC];
    u16 unkC[1];
} Sub8004EE14;

typedef struct Elem8004F1D4 {
    s16 unk0;
    u8 _pad2[0x6];
} Elem8004F1D4;

typedef struct Obj8004EE14 {
    u8 unk0;
    u8 _pad1[0x1];
    u8 unk2;
    u8 unk3;
    u8 _pad4[0x2];
    u16 unk6;
    u16 unk8;
    s16 unkA;
    s16 unkC;
    u8 _padE[0xE];
    Sub8004EE14 *unk1C;
    Elem8004F1D4 unk20[6];
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
    struct Sub8007334C *unk0;
    u8 _pad4[0x4];
    Sub8004F1D4 unk8;
    s16 unkE;
    Sub8004F1D4 unk10;
    u8 _pad16[0x2];
    Sub8004F1D4 unk18;
    u8 _pad1E[0x14];
    u16 unk32;
    u8 _pad34[0x2];
    u16 unk36;
    u8 _pad38[0x4];
    u8 unk3C;
    u8 unk3D;
    u8 _pad3E[0x3];
    u8 unk41;
    u8 _pad42[0xE];
    void (*unk50)(struct Obj800732FC *, u8);
    void (*unk54)(struct Obj800732FC *, s32, s32);
    void (*unk58)();
    void (*unk5C)();
    s32 unk60;
    Obj8004EE14 unk64;
    u8 _padB4[0x18];
    Sub8004DE88 unkCC;
    u8 _padD4[0x34];
    s16 unk108;
    s16 unk10A;
    s16 unk10C;
    s16 unk10E;
    u8 _pad110[0x38];
    u16 unk148;
    u8 _pad14A[0x12];
    s32 unk15C;
    u16 unk160;
    u8 _pad162[0xE];
} Obj800732FC;

typedef struct Obj800744D0 {
    u8 _pad0[0x164];
    u16 unk164;
} Obj800744D0;

typedef struct Obj800781F0 {
    u8 _pad0[0x8];
    s32 unk8;
    u8 _padC[0x40];
    struct Sub800787B0 *unk4C;
    u8 _pad50[0x1C4];
    u16 unk214;
    u16 unk216;
    u8 _pad218[0x49];
    u8 unk261;
    u8 _pad262[0xE];
    u16 unk270;
    u8 _pad272[0x16];
    u16 unk288;
    u16 unk28A;
    u16 unk28C;
    u16 unk28E;
    u8 _pad290[0x4];
    u16 unk294;
    u16 unk296;
    u8 _pad298[0x13];
    u8 unk2AB;
    u8 unk2AC;
    u8 unk2AD;
    u8 _pad2AE[0x10];
    u16 unk2BE;
    s32 unk2C0;
    u8 _pad2C4[0xD0];
    struct Obj800732FC *unk394;
    u8 _pad398[0x4];
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
    u8 _pad6[0x2];
    s32 unk8;
    u8 _padC[0x2];
    s16 unkE;
    u8 _pad10[0x2];
    s16 unk12;
    u8 _pad14[0x4];
    u8 unk18;
    u8 _pad19[0x1];
    s16 unk1A;
    s16 unk1C;
    s16 unk1E;
    s16 unk20;
    s16 unk22;
    Sub8004F1D4 unk24;
    s16 unk2A;
    u8 _pad2C[0x4];
    u32 unk30;
    u32 unk34;
    s32 unk38;
    u8 _pad3C[0x7C];
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

typedef struct Sub800507B8 {
    s16 unk0;
    s16 unk2;
} Sub800507B8;

typedef struct Obj80056BEC {
    u8 _pad0[0x4];
    u8 unk4[0x5C];
    u8 unk60[0x14];
} Obj80056BEC;

typedef struct Obj8006C9D4 {
    u8 _pad0[0x6];
    s16 unk6;
} Obj8006C9D4;

typedef struct Obj8006D0DC {
    s16 unk0;
    s16 unk2;
    s16 unk4;
    u8 _pad6[0x2];
    s16 unk8;
    s16 unkA;
    s16 unkC;
} Obj8006D0DC;

typedef struct Obj8006E5B8 {
    u8 _pad0[0x50];
    Sub8004F1D4 unk50;
    u8 _pad56[0x2];
    Sub8004F1D4 unk58;
    u8 _pad5E[0x2];
    s32 unk60;
    u8 _pad64[0x3A];
    Sub8004F1D4 unk9E;
    s32 unkA4;
    u8 _padA8[0x28];
    s32 unkD0;
    u8 _padD4[0x10];
    s32 unkE4;
} Obj8006E5B8;

typedef struct Obj80077248 {
    u8 _pad0[0x8];
    s16 unk8;
    s16 unkA;
    s16 unkC;
    u8 _padE[0x1C];
    u16 unk2A;
    u8 _pad2C[0x2];
    s16 unk2E;
} Obj80077248;

typedef struct Obj80077854 {
    u8 _pad0[0xE];
    s16 unkE;
} Obj80077854;

typedef struct Obj80077A7C {
    u8 _pad0[0x20];
    void (*unk20[1])(Obj80077854 *);
} Obj80077A7C;

typedef struct Sub8007618C_fdat202 {
    u8 unk0;
    u8 _pad1[0x1];
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
    Sub8004EFB8 unk38;
    Sub8004EFB8 unk40;
    Sub8004EFB8 unk48;
} Sub8007618C_fdat202;

typedef struct Obj80072180 {
    Sub8004DE88 unk0;
    Sub8004DE88 unk8;
    Sub8004DE88 unk10;
    Sub8004DE88 unk18;
    Sub8004DE88 unk20;
    u8 _pad28[0x4];
    struct Obj80072180 *unk2C;
} Obj80072180;

typedef struct Obj800851A8 {
    u16 unk0;
    u16 unk2;
    u16 unk4;
    u8 _pad6[0x12];
    u8 unk18;
    u8 unk19;
    u8 unk1A;
    u8 _pad1B;
    u16 unk1C;
    u16 unk1E;
    u16 unk20;
    u8 _pad22[0x2];
    u16 unk24;
    u16 unk26;
    u16 unk28;
    u8 _pad2A[0x8E];
    u16 unkB8;
    u16 unkBA;
    u16 unkBC;
    u8 _padBE[0x2];
    u8 unkC0;
    u8 unkC1;
    u8 unkC2;
} Obj800851A8;

typedef struct Obj80087A24_fdat202 {
    u16 unk0;
    u16 unk2;
    u16 unk4;
    u8 _pad6[0x12];
    s16 unk18;
    s16 unk1A;
    s16 unk1C;
    u16 unk1E;
    s16 unk20;
    s16 unk22;
    s16 unk24;
    u8 _pad26[0x2];
    u8 unk28;
    u8 unk29;
    u8 unk2A;
    u8 _pad2B[0x8D];
    u8 unkB8;
    u8 unkB9;
    u8 unkBA;
    u8 _padBB[0x3];
    u16 unkBE;
} Obj80087A24_fdat202;

typedef struct Elem8004C840 {
    s16 unk0;
    u8 _pad2[0x2];
    u32 *unk4;
} Elem8004C840;

typedef struct Elem8004D6E4 {
    u16 unk0;
    s8 unk2;
    u8 _pad3[0x7];
} Elem8004D6E4;

typedef struct Elem800529A8 {
    s16 unk0;
    s16 unk2;
    u16 unk4;
    u16 unk6;
    s16 unk8;
} Elem800529A8;

typedef struct Sub80053304 {
    u8 _pad0[0x8];
    s32 unk8;
} Sub80053304;

typedef struct Sub80056450 {
    u8 _pad0[0x14];
} Sub80056450;

typedef struct Elem80056450 {
    u8 _pad0[0x14];
    Sub80056450 unk14;
    Sub80056450 unk28;
    Sub80056450 unk3C;
    u8 _pad50[0x18];
} Elem80056450;

typedef struct Elem80056D5C {
    u8 unk0[0x5C];
    u8 unk5C[0x24];
} Elem80056D5C;

typedef struct Sub80072488 {
    void (*unk0)(struct Elem8006DC20 *);
    void (*unk4)(struct Elem8006DC20 *, s32, s32);
} Sub80072488;

typedef struct Elem8006DC20 {
    u8 _pad0[0x26];
    s16 unk26;
    u16 *unk28;
    Sub80072488 *unk2C;
    u8 _pad30[0x10];
} Elem8006DC20;

typedef struct Sub80071148 {
    u8 _pad0[0xE];
    u16 unkE;
} Sub80071148;

typedef struct Elem80071148 {
    Sub80071148 *unk0;
    u8 _pad4[0xA];
    s16 unkE;
    u8 _pad10[0xC];
} Elem80071148;

typedef struct Sub80072A30 {
    void (*unk0)(struct Elem80072A30 *);
} Sub80072A30;

typedef struct Elem80072A30 {
    u8 _pad0[0x14];
    Sub80072A30 *unk14;
    u8 _pad18[0x1C];
} Elem80072A30;

typedef struct Obj80076F38 {
    s32 unk0;
    u8 _pad4[0x4];
    s16 unk8;
    s16 unkA;
    s16 unkC;
    u8 _padE[0x1C];
    u16 unk2A;
    u8 _pad2C[0x1C];
    struct Obj80076F38 *unk48;
} Obj80076F38;

typedef struct Elem80076F38 {
    u8 _pad0[0x6];
    s16 unk6;
} Elem80076F38;

typedef struct Sub80076F38 {
    u8 _pad0[0x4];
    Elem80076F38 *unk4;
} Sub80076F38;

typedef struct Obj800771CC {
    u8 _pad0[0x8];
    u16 unk8;
    u8 _padA[0x2];
    u16 unkC;
    u8 _padE[0x20];
    u16 unk2E;
} Obj800771CC;

typedef struct Sub800771CC {
    u16 unk0;
    u16 unk2;
    u16 unk4;
} Sub800771CC;

typedef struct Elem8008223C {
    u8 _pad0[0x6];
    s16 unk6;
    u8 _pad8[0xD8];
} Elem8008223C;

typedef struct Elem8008422C {
    u8 _pad0[0x6];
    u16 unk6;
    u16 unk8;
    u8 _padA[0x2];
    u8 unkC[4];
    u8 unk10[4];
    u8 _pad14[0x4];
    u16 unk18;
    u8 unk1A[3];
    u8 unk1D;
    u8 unk1E[3];
    u8 _pad21[0x5];
    u8 unk26;
    u8 unk27;
    u8 unk28;
    u8 _pad29[0x3];
    s32 unk2C;
} Elem8008422C;

typedef struct Sub8008422C {
    u8 _pad0[0x12];
    s16 unk12;
} Sub8008422C;

typedef struct Obj8008422C {
    u8 _pad0[0xE];
    s16 unkE;
    u8 _pad10[0x2];
    s16 unk12;
    u8 _pad14[0x4];
    u8 unk18;
    u8 _pad19[0x7];
    s32 unk20;
    u16 unk24;
    s16 unk26;
    u16 unk28;
    u16 unk2A;
    u8 unk2C;
    u8 unk2D;
    u8 _pad2E[0x96];
    u16 unkC4;
    u16 unkC6;
    u16 unkC8;
    u8 _padCA[0x2];
    u8 unkCC;
    u8 unkCD;
    u8 unkCE;
} Obj8008422C;

typedef struct Obj80085500 {
    u8 _pad0[0x6];
    s16 unk6;
    u8 _pad8[0x8];
    u8 unk10;
    u8 _pad11[0x1];
    s16 unk12;
    void (*unk14)();
    u8 unk18;
    u8 unk19;
    u8 unk1A;
    u8 unk1B;
    u8 unk1C;
    u8 _pad1D[0x9B];
    s16 unkB8;
    s16 unkBA;
    s16 unkBC;
} Obj80085500;

typedef struct Elem80085500 {
    u16 unk0;
    u8 _pad2[0x2];
    s16 unk4;
    s16 unk6;
} Elem80085500;

typedef struct Sub80085500 {
    u8 unk0;
    u8 _pad1[0x7];
} Sub80085500;

typedef struct Obj80088FF0 {
    u8 _pad0[0x54];
    void (*unk54)(struct Obj80088FF0 *, s32);
} Obj80088FF0;

typedef struct Sub80071188 {
    u32 unk0;
    u8 _pad4[0x8];
    u16 unkC[4];
} Sub80071188;

typedef struct Sub80071188_unk4 {
    u8 _pad0[0x12];
    u16 unk12;
} Sub80071188_unk4;

typedef struct Elem80071188 {
    u8 _pad0[0x2];
    u16 unk2;
} Elem80071188;

typedef struct Obj80071188 {
    Sub80071188 *unk0;
    Sub80071188_unk4 *unk4;
    s32 *unk8;
} Obj80071188;

typedef struct Elem8004CF0C {
    u16 unk0;
    s8 unk2;
    u8 _pad3[0x3];
    u8 unk6;
    u8 _pad7[0x3];
} Elem8004CF0C;

typedef struct Sub8004CF0C {
    s16 unk0;
    u8 _pad2[0x8];
} Sub8004CF0C;

typedef struct Sub8007334C {
    u8 _pad0[0x14];
    u16 unk14;
} Sub8007334C;

typedef struct Sub800787B0 {
    u8 _pad0[0x11];
    u8 unk11;
} Sub800787B0;

typedef struct Obj80070994 {
    u8 _pad0[0x5C];
    s32 unk5C;
    s32 unk60;
    s32 unk64;
    s32 unk68;
    s32 unk6C;
    s32 unk70;
    u8 _pad74[0x20];
    s32 *unk94;
    u8 _pad98[0x4];
    u32 unk9C;
    u8 _padA0[0x8];
    u32 unkA8;
    u32 unkAC;
    u8 _padB0[0x10];
    Sub8004DE88 *unkC0[4];
} Obj80070994;

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
extern u16 D_80041BBE;
extern u8 D_80041BC1;
extern s32 D_80041BC4;
void func_8004DD34(u16 arg0);
extern Obj80056BEC *D_8019D954;
extern u32 *D_8019D960;
extern s32 D_801A3D98;
void DrawSync(s32 arg0);
void DrawOTag(u32 *arg0);
void PutDispEnv(u8 *arg0);
void PutDrawEnv(u8 *arg0);
s32 GetRCnt(s32 arg0);
s32 func_800162A0(s32 arg0);
void func_8004D6E4(void);
void func_80056C84(void);
void func_80064268(u16 arg0, s32 arg1, s32 arg2);
void func_80064D58(s32 arg0);
void func_800655BC(u16 arg0, s32 arg1, u16 arg2, s32 arg3);
s32 func_8007291C(void);
s32 func_80073454(s32 arg0, s32 arg1, s32 arg2, Obj8006C9D4 *arg3);
void func_8006D030(s32 *arg0, s32 arg1, s32 arg2, s32 arg3);
void func_8006D084(s32 *arg0, s32 arg1, s32 arg2, s32 arg3);
void func_8006E3D0(s32 *arg0, Sub8004F1D4 *arg1, s32 *arg2);
extern s32 D_8019D844;
extern s32 D_8019D848;
void func_8004E0C8(Sub8007618C_fdat202 *arg0, s32 arg1, Sub8004DE88 *arg2, Sub8004DE88 *arg3);
s32 func_8004E448(Obj8004EE14 *arg0, Sub8004F1D4 *arg1, Sub8004F1D4 *arg2, Sub8004DE88 *arg3, Sub8004DE88 *arg4);
void func_8004EBA8(Obj8004EE14 *arg0, s32 arg1, s32 arg2, s32 arg3);
void func_8004EC58(Obj8004EE14 *arg0, s32 arg1, s32 arg2);
void func_8004ECB4(Obj8004EE14 *arg0, s32 arg1, s32 arg2, s32 arg3);
void func_80073E34(Obj800732FC *arg0, Sub8004DE88 *arg1);
void func_800752C8(Obj800732FC *arg0, s32 arg1, s32 arg2);
s32 func_800736CC(Obj800732FC *arg0, Sub8004F1D4 *arg1, Sub8004DE88 *arg2, Sub8004DE88 *arg3);
extern s32 D_8019D838;
s32 func_80014D78(s32 arg0);
void func_80077148(Obj80077248 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
extern Obj80077A7C *D_8019B484;
extern u8 D_8019B5A8[];
Obj80077854 *func_80077854(void);
void func_80077894(Obj80077854 *arg0, u8 *arg1);
void func_8004CE38(s32 arg0, s32 arg1, Sub8004F1D4 *arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void func_8004D04C(s32 arg0, Sub8004F1D4 *arg1, s32 arg2, s32 arg3);
void func_8004E0A4(Obj8004DE88 *arg0, Sub8004DE88 *arg1);
void func_80076338(Obj800732FC *arg0, s32 arg1, s32 arg2, s32 arg3, Sub8004DE88 *arg4, void (*arg5)());
void func_8007A09C();
extern u8 D_80039C5D;
void func_800131D0(Sub8004EFB8 *arg0, s32 arg1, s16 arg2);
extern Elem8004C840 D_80041BD0[];
s16 SsVabOpenHead(u32 *arg0, s32 arg1);
s16 SsVabTransBodyPartly(u8 *arg0, s32 arg1, s16 arg2);
void SsVabTransCompleted(s32 arg0);
void func_8004D394(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
extern Elem8004D6E4 D_80041DE0[];
void func_8004D090(void);
void func_8004D114(Elem8004CF0C *arg0);
extern Elem800529A8 D_80089834[];
void func_800520B8(s32 arg0, s32 arg1, s32 arg2, Elem800529A8 *arg3);
extern Sub80053304 *D_8019D96C[];
extern s32 D_8019D968;
void func_80056ED4(Sub80053304 *arg0);
extern Obj800558A8 D_8019DF80[];
void func_800552A4(Obj800558A8 *arg0);
extern Elem80056450 D_801A3EEC[];
void func_800135E8(Elem80056450 *arg0, Sub80056450 *arg1, s32 arg2);
extern Elem80056D5C D_8019D858[];
extern s8 D_8019D871;
extern s8 D_8019D872;
extern s8 D_8019D873;
extern s8 D_8019D8F1;
extern s8 D_8019D8F2;
extern s8 D_8019D8F3;
extern s32 D_8019D850;
extern s32 D_801A4BF0;
extern s32 D_801A3D94;
extern u8 D_8008C990[];
extern u8 D_80089990[];
void SetGeomOffset(s32 arg0, s32 arg1);
void SetGeomScreen(s32 arg0);
void SetDefDrawEnv(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void SetDefDispEnv(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void SetFarColor(s32 arg0, s32 arg1, s32 arg2);
void func_80056CA4(void);
void func_80055238(void);
void func_80056B30(void);
void func_800154D8(u8 *arg0, u8 *arg1, s32 arg2);
extern s32 D_8019D964[];
void func_8006DBB8(s32 *arg0, Elem8006DC20 *arg1);
s32 func_80070E60(s32 arg0, s32 arg1);
Elem80071148 *func_800710D0(s32 arg0);
extern Elem8006DC20 D_801C40F0[];
extern s32 D_801DC0F4;
extern Elem80072A30 D_80194A70[];
Sub80076F38 *func_80076EBC(Obj80076F38 *arg0, Obj80076F38 *arg1, Sub8004DE88 *arg2);
void func_80085948(s32 arg0, Sub8004F1D4 *arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8, s32 arg9, s32 arg10, s32 arg11);
void func_80085A88(s32, Sub800771CC *, s32, s32, s32, s32, s32, s32, s32, s32);
void func_8007C740();
void func_8008001C();
void func_80080FE4();
void func_80081358();
extern u16 D_8008AC3A;
extern u16 D_8008C3BC[];
extern u8 D_8019B480;
extern Elem8008223C D_801A60C4[];
extern Elem8008422C D_8008C054[];
void LoadAverageCol(u8 *arg0, u8 *arg1, s32 arg2, s32 arg3, u8 *arg4);
void func_80056550(s32 arg0, Obj8008422C *arg1, s32 arg2, s32 arg3, s32 arg4, u8 *arg5, s32 arg6);
s32 func_800823E4(Obj8008422C *arg0, s32 arg1, s32 arg2, s32 arg3, u8 *arg4, u8 *arg5, u8 *arg6, s32 arg7);
Sub8008422C *func_80084548(s32 arg0, Obj8008422C *arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
extern Obj80085500 D_8008A978;
extern Elem80085500 D_8008BE18[];
extern Sub80085500 D_8008BE54[];
void func_80083EE8();
void func_80084410(Obj80085500 *arg0, s32 arg1, Sub8004F1D4 *arg2, s32 arg3);
Obj80085500 *func_80088B78(s32 arg0);
s32 func_8006C9D4(s32 arg0, s32 arg1, s32 arg2, Obj8006C9D4 *arg3);
void func_80082284(s32 arg0, s32 arg1, u8 *arg2, s16 *arg3, Obj8006C9D4 *arg4);
Obj80085500 *func_80085500(s32 arg0, Sub8004F1D4 *arg1, u32 *arg2);
void func_800860A4(s32 arg0, Obj8006C9D4 *arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
void SsVabClose(s16 arg0);
extern Sub8004CF0C D_80042086[];
void SsUtKeyOffV(s16 arg0);
s16 SsUtKeyOnV(s16 voice, s16 vabId, s16 prog, s16 tone, s16 note, s16 fine, s16 voll, s16 volr);
s32 func_8007275C(Obj800732FC *arg0, s16 *arg1, s32 arg2, s32 arg3, s32 arg4);
Obj800732FC *func_8007334C(Obj800732FC *arg0, s16 *arg1, s32 arg2, s32 arg3, s32 arg4);
extern s32 D_801DC0F8;
extern s32 D_801DE518[3][64][16];
s32 func_8006E380(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void func_80070848(s32 arg0, Obj80070994 *arg1);
s32 func_80012794(s16 *arg0, s32 arg1, s32 arg2, s32 arg3, u8 *arg4, s32 arg5, s32 arg6);
extern Obj800781F0 D_80040FA0[];
void func_80077E10(void);
void func_8007738C(void);
void func_80077C80(void);
void func_80077798(Obj800732FC *arg0, s32 arg1);
void func_80078258(Obj800732FC *arg0, s32 arg1, s32 arg2);
void func_800760AC(Obj800732FC *arg0, s32 arg1, s32 arg2, s32 arg3, Sub8004DE88 *arg4, void (*arg5)());
void func_80079C94();
void func_8007DB6C();
void func_8007F414();
void func_8007F938();
void func_80084040(Obj80085394 *arg0);
void func_8007FCCC(Obj800732FC *arg0, s32 arg1, s32 arg2, s32 arg3, Sub8004DE88 *arg4);

#endif /* FDAT203_H */
