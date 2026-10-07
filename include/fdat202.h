#ifndef FDAT202_H
#define FDAT202_H

#include "common.h"

/* @types */
typedef struct Sub8004DE88 {
    s16 unk0;
    s16 unk2;
    s16 unk4;
    s16 unk6;
} Sub8004DE88;

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

typedef struct Sub8007618C {
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
} Sub8007618C;

typedef struct Sub80075350 {
    u8 _pad0[0x14];
    u16 unk14;
} Sub80075350;

typedef struct Obj8007618C {
    Sub80075350 *unk0;
    u8 _pad4[0x4];
    Sub8004DE88 unk8;
    Sub8004DE88 unk10;
    s16 unk18;
    s16 unk1A;
    s16 unk1C;
    u8 _pad1E[0x18];
    u16 unk36;
    u8 _pad38[0x4];
    s8 unk3C;
    u8 unk3D;
    u8 _pad3E[0x3];
    u8 unk41;
    u8 _pad42[0xE];
    void (*unk50)(struct Obj8007618C *, u8);
    void (*unk54)(struct Obj8007618C *, s32, s32);
    u8 _pad58[0x4];
    void (*unk5C)();
    s32 unk60;
    Sub8007618C unk64;
    u8 _padB4[0x18];
    Sub8004DE88 unkCC;
    u8 _padD4[0x74];
    u16 unk148;
    u8 _pad14A[0x12];
    s32 unk15C;
    u16 unk160;
    u8 _pad162[0x2];
} Obj8007618C;

typedef struct Obj80078CFC {
    u8 _pad0[0xE];
    s16 unkE;
} Obj80078CFC;

typedef struct Sub80078CFC {
    u8 _pad0[0x20];
    void (*unk20[1])(Obj80078CFC *);
} Sub80078CFC;

typedef struct Obj8007A108 {
    u8 _pad0[0x3];
    u8 unk3;
    u8 _pad4[0x2];
    u8 unk6;
} Obj8007A108;

typedef struct Obj8007A19C {
    u8 _pad0[0x1000];
    u8 unk1000[1];
} Obj8007A19C;

typedef struct Obj80083928 {
    u8 _pad0[0x8];
    s32 unk8;
    u8 _padC[0xC];
    s16 unk18[3];
    u8 unk1E;
    u8 unk1F;
    u8 unk20;
    u8 unk21;
} Obj80083928;

typedef struct Obj80085394 {
    u8 _pad0[0x10];
    s8 unk10;
    u8 _pad11[0x1];
    s16 unk12;
    void (*unk14)();
    u16 unk18;
    u16 unk1A;
    s16 unk1C;
    u8 _pad1E[0x9A];
    s16 unkB8;
    u16 unkBA;
    s16 unkBC;
    u8 _padBE[0x2];
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
} Obj80087A24;

typedef union Sub800899E8 {
    s16 unk0;
    u8 unk0_u8[3];
} Sub800899E8;

typedef struct Obj800895B0 {
    s16 unk0[3];
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
    s16 unk24[3];
    s16 unk2A;
    u8 _pad2C[0x8C];
    Sub800899E8 unkB8;
    u8 _padBC[0x2];
    u16 unkBE;
} Obj800895B0;

typedef struct Sub8008B320 {
    u8 _pad0[0x10];
    u8 unk10[0x54];
    u8 unk64[1];
} Sub8008B320;

typedef struct Obj8008B320 {
    u8 _pad0[0x4];
    Sub8008B320 *unk4;
} Obj8008B320;

typedef struct Elem80052338 {
    u8 _pad0[0x10];
    s32 unk10;
} Elem80052338;

typedef struct Elem8005460C {
    u8 _pad0[0x12];
    s16 unk12;
    u8 _pad14[0x68];
} Elem8005460C;

typedef struct Obj800558A8 {
    s16 unk0;
    u8 _pad2[0x1E];
    void *unk20;
    s32 *unk24;
} Obj800558A8;

typedef struct Obj80055E20 {
    u8 _pad0[0x20];
    Elem8005460C *unk20;
} Obj80055E20;

typedef struct Elem80057134 {
    s8 unk0;
    u8 _pad1[0x17];
} Elem80057134;

typedef struct Obj80070A00 {
    u8 _pad0[0x4];
    s32 unk4[8];
    s32 unk24[8];
    s32 unk44[8];
} Obj80070A00;

typedef struct Obj800718B4 {
    s32 unk0;
    u8 _pad4[0x4];
    s32 unk8;
    s32 unkC;
    u8 _pad10[0x4];
    s32 unk14;
} Obj800718B4;

typedef struct Obj80075750 {
    u8 _pad0[0x164];
    u16 unk164;
} Obj80075750;

/* @externs */
void func_80075FC0(Obj8007618C *arg0);
s32 func_8004F080(Sub8007618C *arg0, Sub8004DE88 *arg1);
void func_80075B3C(Obj8007618C *arg0);
void func_8004EC4C(Sub8007618C *arg0);
extern Sub80078CFC *D_8019F51C;
extern u8 D_8019FB68[];
Obj80078CFC *func_80078A2C(void);
void func_80078B14(Obj80078CFC *arg0, u8 *arg1);
s32 func_80078ADC(void);
void func_80078D78(s32 arg0, s32 arg1);
void func_8004EDAC(Sub8007618C *arg0, Sub8004DE88 *arg1);
void func_8004ECA8(Sub8007618C *arg0);
void func_80079CDC(Obj8007618C *arg0);
void func_80079DE4(Obj8007618C *arg0);
extern u16 D_8004125E;
extern u8 D_8004124B;
extern Obj8007A19C *D_801A5DC0;
void func_8004CE44(s32 arg0, Sub8004DE88 *arg1, s32 arg2, s32 arg3);
void func_8004CC30(s32 arg0, u8 *arg1, Sub8004DE88 *arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void func_8004ED5C(Sub8007618C *arg0);
void func_8007DF98(void);
extern s8 D_801987D1;
extern s8 D_801987D2;
extern s32 D_801987D4;
extern s16 D_801987DA;
extern s16 D_801987DC;
extern s16 D_801987DE;
extern s16 D_801987E0;
extern s32 D_801987E4;
void func_80087798(s32 arg0, Obj80083928 *arg1, s16 *arg2, u8 arg3, s32 arg4);
s32 rand(void);
s16 func_8006E6B4(s16 arg0, Obj800895B0 *arg1);
void func_80089484(Obj800895B0 *arg0, s16 *arg1, s16 arg2, s16 arg3, s32 arg4, s32 arg5);
extern u16 D_8019F528;
void func_800529F0(s32 arg0, s32 arg1, s32 arg2);
extern u8 D_80031A94[];
extern s16 D_8019F52C;
extern s8 D_801D0B44;
extern s16 D_801D0B46;
extern s8 D_801AC8A0;
extern s8 D_801AC8A1;
extern s8 D_801AC8A2;
extern s8 D_801AC8A3;
extern s8 D_80090920;
extern s8 D_80090921;
extern s8 D_80090922;
void func_8004DEAC(Sub8007618C *arg0, s32 arg1, Sub8004DE88 *arg2, Sub8004DE88 *arg3);
s32 func_8004E22C(Sub8007618C *arg0, Sub8004DE88 *arg1, Sub8004DE88 *arg2, Sub8004DE88 *arg3, Sub8004DE88 *arg4);
extern s16 D_801ED790;
extern s16 D_801ED792;
extern s16 D_801ED794;
extern s16 D_801ED798;
extern s16 D_801ED79A;
extern s16 D_801ED79C;
extern s8 D_8008D920;
void func_800309A8(s32 arg0, s32 arg1, void (*arg2)(void));
void func_8004C1BC(void);
extern s32 D_8019F524;
extern s32 D_80041BA0;
extern u8 D_80041BB8;
extern u8 D_80041BBA;
extern u8 D_80041BBB;
extern u8 D_80041BBD;
extern s8 D_80041BC2;
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
void SsSetSerialVol(s32 arg0, s16 arg1, s16 arg2);
extern u8 D_80041BC0;
void func_8004D948(s16 arg0);
void func_8004D974(void);
s16 func_8004EF74(Sub8004EFB8 *arg0, s16 arg1, u8 arg2);
extern Elem80052338 *D_801ED844;
extern s16 D_801ED848;
extern s16 D_801ED84A;
extern s16 D_801ED84C;
extern Elem80052338 D_801ED840[];
void func_800543F0(Elem8005460C *arg0);
void func_80016114(void *arg0);
extern Elem80057134 D_801AC8A4[];
extern s32 D_801AC81C;
s32 rsin(s32 arg0);
void func_80062860(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
extern u32 D_801EA790[3][0x400];
void func_80015538(void *arg0, s32 arg1, s32 arg2);
void func_8006DA20(void);
s32 func_8001628C(void);
extern s32 D_801A26B8[0x5C0];
extern s32 *D_801A5DB8;
extern s32 D_801A5DC4;
extern s32 D_801A5DC8;
void func_8007398C(s32 arg0);
void func_8007399C(s32 arg0);
void func_80055A24(s32 arg0, s32 arg1, Sub8004DE88 *arg2, Sub8004DE88 *arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 *arg8);
s32 func_8004F0D4(Sub8007618C *arg0, Sub8004DE88 *arg1, Sub8004DE88 *arg2);
s32 func_8004EFB8(Sub8007618C *arg0, Sub8004DE88 *arg1);
s32 func_8004F024(Sub8007618C *arg0, Sub8004DE88 *arg1);
void func_800131D0(Sub8004EFB8 *arg0, s32 arg1, s16 arg2);
extern u16 D_80041210;

#endif /* FDAT202_H */
