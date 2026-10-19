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

typedef struct Sub80076548 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
} Sub80076548;

typedef struct Obj8007618C {
    Sub80075350 *unk0;
    u8 _pad4[0x4];
    Sub8004DE88 unk8;
    Sub8004DE88 unk10;
    s16 unk18;
    s16 unk1A;
    s16 unk1C;
    u8 _pad1E[0xC];
    u16 unk2A;
    u8 _pad2C[0xA];
    u16 unk36;
    u8 _pad38[0x4];
    s8 unk3C;
    u8 unk3D;
    u8 _pad3E[0x2];
    u8 unk40;
    u8 unk41;
    u8 _pad42[0x6];
    struct Obj8007618C *unk48;
    s32 unk4C;
    void (*unk50)(struct Obj8007618C *, u8);
    void (*unk54)(struct Obj8007618C *, s32, s32);
    void (*unk58)();
    void (*unk5C)();
    s32 unk60;
    Sub8007618C unk64;
    u8 _padB4[0x18];
    Sub8004DE88 unkCC;
    u8 _padD4[0x8];
    Sub80076548 unkDC;
    Sub80076548 unkEC;
    u8 _padFC[0xC];
    s16 unk108;
    s16 unk10A;
    s16 unk10C;
    s16 unk10E;
    u8 _pad110[0x38];
    u16 unk148;
    u8 _pad14A[0x12];
    s32 unk15C;
    u16 unk160;
    u16 unk162;
} Obj8007618C;

typedef struct Obj80078CFC {
    Sub80075350 *unk0;
    u8 _pad4[0xA];
    s16 unkE;
    u8 _pad10[0x160];
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
    u8 unk1000[0x200];
    u8 unk1200[1];
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
    u8 _pad6[0x2];
    s32 unk8;
    u8 _padC[0x2];
    s16 unkE;
    u8 _pad10[0x2];
    s16 unk12;
    u8 _pad14[0x4];
    s16 unk18;
    s16 unk1A;
    s16 unk1C;
    s16 unk1E;
    s16 unk20;
    s16 unk22;
    s16 unk24[3];
    s16 unk2A;
    u8 _pad2C[0x4];
    s32 unk30;
    u32 unk34;
    s32 unk38;
    u8 _pad3C[0x7C];
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

typedef struct Sub8006F234 {
    s16 unk0[3][3];
    u8 _pad12[0x2];
    s32 unk14[3];
} Sub8006F234;

typedef struct Obj8006F234 {
    u8 _pad0[0x50];
    u16 unk50;
    u16 unk52;
    u16 unk54;
    u8 _pad56[0x2];
    u16 unk58;
    u16 unk5A;
    u16 unk5C;
    u8 _pad5E[0x2];
    s32 unk60;
    u8 _pad64[0x3A];
    s16 unk9E[3];
    s32 unkA4;
    u8 _padA8[0x28];
    s32 unkD0;
    u8 _padD4[0x10];
    Sub8006F234 unkE4;
} Obj8006F234;

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

typedef struct Obj8008AE44 {
    s32 unk0[7];
    s32 unk1C[7];
} Obj8008AE44;

typedef struct {
    u8 flags;
    u8 pad1;
    u16 val;
} Obj80075280;

typedef struct Elem8004C7A8 {
    s16 unk0;
    u8 _pad2[0x2];
    u32 *unk4;
} Elem8004C7A8;

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

typedef struct Elem80051CDC {
    u8 _pad0[0x2];
    s16 unk2;
    u16 unk4;
    u16 unk6;
    s16 unk8;
} Elem80051CDC;

typedef struct Obj80052F90 {
    s16 unk0;
    s16 unk2;
    s16 unk4;
    s16 unk6;
    u8 _pad8[0x4];
    u8 unkC;
    u8 _padD[0x1];
    u8 unkE;
    u8 _padF[0x1];
} Obj80052F90;

typedef struct Sub80052F90 {
    u8 _pad0[0x4];
    s32 unk4;
    u16 unk8;
    u16 unkA;
    u16 unkC;
    u16 unkE;
    u16 unk10;
    u16 unk12;
    u16 unk14;
    u16 unk16;
} Sub80052F90;

typedef struct Obj80053908 {
    u8 _pad0[0x8];
    s32 unk8;
} Obj80053908;

typedef struct Sub80056A54 {
    u8 _pad0[0x14];
} Sub80056A54;

typedef struct Elem80056A54 {
    Sub80056A54 unk0;
    Sub80056A54 unk14;
    Sub80056A54 unk28;
    Sub80056A54 unk3C;
    u8 _pad50[0x18];
} Elem80056A54;

typedef struct Elem80057360 {
    u8 unk0[0x5C];
    u8 unk5C[0x24];
} Elem80057360;

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

typedef struct Elem80071DC4 {
    s32 unk0;
} Elem80071DC4;

typedef struct Sub80073104 {
    void (*unk0)();
    void (*unk4)();
} Sub80073104;

typedef struct Elem800730DC {
    u8 _pad0[0x2C];
    Sub80073104 *unk2C;
    u8 _pad30[0x10];
} Elem800730DC;

typedef struct Elem800736AC {
    u8 _pad0[0x6];
    s16 unk6;
    u8 _pad8[0xC];
    Sub80073104 *unk14;
    u8 _pad18[0x4];
    u16 unk1C;
    u8 _pad1E[0x16];
} Elem800736AC;

typedef struct Elem80074728 {
    s32 unk0;
    u8 _pad4[0x4];
    Sub8004DE88 unk8;
    u8 _pad10[0x22];
    u16 unk32;
    u8 _pad34[0x36];
    u16 unk6A;
    u16 unk6C;
    u8 _pad6E[0x102];
} Elem80074728;

typedef struct Sub800781E8 {
    u8 _pad0[0x6];
    s16 unk6;
} Sub800781E8;

typedef struct Elem800781E8 {
    u8 _pad0[0x4];
    Sub800781E8 *unk4;
} Elem800781E8;

typedef struct Sub8007BA2C {
    s16 unk0;
    s16 unk2;
} Sub8007BA2C;

typedef struct Elem8007BA2C {
    s32 unk0;
    u8 _pad4[0x8];
    Sub8007BA2C unkC;
    u8 _pad10[0x20];
} Elem8007BA2C;

typedef struct Elem800835A0 {
    u8 _pad0[0x6];
    s16 unk6;
    u8 _pad8[0xD8];
} Elem800835A0;

typedef struct Elem80085580 {
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
} Elem80085580;

typedef struct Sub80085580 {
    u8 _pad0[0x12];
    s16 unk12;
} Sub80085580;

typedef struct Obj80085580 {
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
} Obj80085580;

typedef struct Sub8005715C {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} Sub8005715C;

typedef struct Elem8005715C {
    u32 *unk0;
    u8 _pad4[0x70];
    Sub8005715C unk74;
} Elem8005715C;

typedef struct Obj8005715C {
    s32 unk0;
    Elem8005715C unk4[2];
} Obj8005715C;

typedef struct Obj8006FB14 {
    s16 unk0;
    u8 _pad2[0x2];
    s16 unk4;
    u8 _pad6[0x2];
    s16 unk8;
    u8 _padA[0x2];
    s16 unkC;
} Obj8006FB14;

typedef struct Sub80071610 {
    Sub8004DE88 *unk0;
} Sub80071610;

typedef struct Obj80071610 {
    u8 _pad0[0x5C];
    s32 unk5C;
    s32 unk60;
    s32 unk64;
    s32 unk68;
    s32 unk6C;
    s32 unk70;
    u8 _pad74[0x20];
    Sub80071610 *unk94;
    u8 _pad98[0x4];
    u32 unk9C;
    u8 _padA0[0x8];
    u32 unkA8_0 : 3;
    u32 unkA8_3 : 12;
    u32 unkA8_15 : 4;
    u32 unkA8_19 : 12;
    u32 unkA8_31 : 1;
    u32 unkAC_0 : 3;
    u32 unkAC_3 : 12;
    u32 unkAC_15 : 4;
    u32 unkAC_19 : 12;
    u32 unkAC_31 : 1;
    u8 _padB0[0x10];
    Sub8004DE88 *unkC0[4];
} Obj80071610;

typedef struct Obj80073170 {
    Elem800736AC unk0[0x200];
    Elem800736AC *unk6800[0x80];
    u16 unk6A00;
} Obj80073170;

typedef struct Sub80079CDC {
    u8 _pad0[0x11];
    u8 unk11;
} Sub80079CDC;

/* @externs */
void func_80075FC0(Obj8007618C *arg0);
s32 func_8004F080(Sub8007618C *arg0, Sub8004DE88 *arg1);
void func_80075B3C(Obj8007618C *arg0);
void func_8004EC4C(Sub8007618C *arg0);
extern Sub80078CFC *D_8019F51C;
extern u8 D_8019FB68[];
Obj80078CFC *func_80078A2C(Sub80075350 *arg0);
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
void func_800658B8(s32 arg0);
void func_80064DC8(u16 arg0, s32 arg1, s32 arg2);
void func_8006611C(u16 arg0, s32 arg1, u16 arg2, s32 arg3);
s32 func_80073598(void);
s32 func_80074728(s32 arg0, s32 arg1, s32 arg2, Sub8004DE88 *arg3);
void func_8006DB90(u32 *arg0, s32 arg1, s32 arg2, s32 arg3);
void func_8006DBE4(u32 *arg0, s32 arg1, s32 arg2, s32 arg3);
void func_8006F04C(Sub8006F234 *arg0, s16 *arg1, s32 *arg2);
extern s32 D_801A5DCC;
extern s32 D_801A5DD0;
void func_80076548(Obj8007618C *arg0, s32 arg1, s32 arg2);
void func_8004E98C(Sub8007618C *arg0, s32 arg1, s32 arg2, s32 arg3);
void func_8004EA98(Sub8007618C *arg0, s32 arg1, s32 arg2, s32 arg3);
void func_8004EA3C(Sub8007618C *arg0, s32 arg1, s32 arg2);
void func_80075108(Obj8007618C *arg0, Sub8004DE88 *arg1);
s32 func_800749A0(Obj8007618C *arg0, Sub8004DE88 *arg1, Sub8004DE88 *arg2, Sub8004DE88 *arg3);
void func_8004DE88(Sub8007618C *arg0, Sub8004DE88 *arg1);
void func_800775B8(Obj8007618C *arg0, s32 arg1, s32 arg2, s32 arg3, Sub8004DE88 *arg4, void (*arg5)());
void func_8007B548();
extern Obj80085394 D_8008EC88;
Obj80085394 *func_80089ECC(s32 arg0);
void func_80085764(Obj80085394 *arg0, s32 arg1, s32 arg2, s32 arg3);
void func_80085394(Obj80085394 *arg0);
void func_8008AD80(s32 arg0, s32 arg1, s32 arg2);
s32 func_80075280(Obj80075280 *p);
s32 func_800752F4(u16 arg0, Obj80075280 *arg1);
extern u16 D_80041228[];
extern u16 D_8004122A;
extern u16 D_8004122C;
extern u16 D_8004122E;
extern u8 D_8004124C;
extern u8 D_8004124D;
void func_80082CAC(u16 arg0, u16 arg1, u16 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);
extern Elem8004C7A8 D_80041BD0[];
s16 SsVabOpenHead(u32 *arg0, s32 arg1);
s16 SsVabTransBodyPartly(u8 *arg0, s32 arg1, s16 arg2);
void SsVabTransCompleted(s32 arg0);
void SsVabClose(s16 arg0);
extern Sub8004CF0C D_80042086[];
void SsUtKeyOffV(s16 arg0);
void func_8004D178(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
extern Elem8004CF0C D_80041DE0[];
void func_8004CE88(void);
void func_8004CF0C(Elem8004CF0C *arg0);
extern u16 D_80041BBE;
extern u8 D_80041BC1;
extern s32 D_80041BC4;
void func_8004DB18(u16 arg0);
extern Elem80051CDC D_8008DB0C[];
void func_800513EC(s32 arg0, s32 arg1, s32 arg2, Elem80051CDC *arg3);
extern u8 D_80039D10;
extern s32 D_801ED854[];
extern Obj80053908 *D_801A5F34[];
s32 func_80015D80(s32 arg0, s32 arg1);
void func_800165E4(s32 arg0, s32 arg1, Obj80053908 *arg2);
void func_800574D8(Obj80053908 *arg0);
extern s32 D_801A5F30;
extern Obj800558A8 D_801A6548[];
void func_800558A8(Obj800558A8 *arg0);
extern Elem80056A54 D_801AC964[];
void func_800135E8(Sub80056A54 *arg0, Sub80056A54 *arg1, s32 arg2);
extern Elem80057360 D_801A5E20[];
extern s8 D_801A5E39;
extern s8 D_801A5E3A;
extern s8 D_801A5E3B;
extern s8 D_801A5EB9;
extern s8 D_801A5EBA;
extern s8 D_801A5EBB;
extern s32 D_801A5E18;
extern s32 D_801AD668;
extern s32 D_801AC810;
extern s32 D_801AC80C;
extern u8 D_80090A28[];
extern u8 D_8008DCA0[];
void SetGeomOffset(s32 arg0, s32 arg1);
void SetGeomScreen(s32 arg0);
void SetDefDrawEnv(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void SetDefDispEnv(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void SetFarColor(s32 arg0, s32 arg1, s32 arg2);
void func_800572A8(void);
void func_8005583C(void);
void func_80057134(void);
void func_800154D8(u8 *arg0, u8 *arg1, s32 arg2);
void func_80057288(void);
extern s32 D_801A5F2C[];
void func_8006E718(s32 *arg0);
s32 func_80071ADC(s32 arg0, s32 arg1);
Elem80071DC4 *func_80071D4C(s32 arg0);
extern Elem800730DC D_801D0B68[];
extern s32 D_801E8B6C;
extern Elem800736AC D_80198B08[];
s32 func_80012E5C(s32 arg0, s32 arg1, Sub8004DE88 *arg2, Sub8004DE88 *arg3, s32 arg4, s32 arg5);
Elem800781E8 *func_8007816C(Obj8007618C *arg0, Obj8007618C *arg1, Sub8004DE88 *arg2);
extern Obj80078CFC D_801A2828[];
extern s32 D_80040FA8;
extern u16 D_80041234;
extern u16 D_80041236;
extern u8 D_80041201;
extern s32 D_80040FC4;
extern u16 D_80040FC8;
extern s16 D_80040FCA;
extern s16 D_80040FCC;
extern s16 D_80040FCE;
extern s32 D_80041020;
extern Elem8007BA2C D_80041024[8];
extern u16 D_800411C0;
void func_8007EF94();
void func_8008080C();
void func_8007DB98();
void func_80080D00(void);
void func_800813D8();
void func_8008238C();
void func_800826FC();
extern u16 D_8008EF4A;
extern u16 D_800906CC[];
extern u8 D_8019F518;
extern Elem800835A0 D_801AEB3C[0x100];
extern Elem80085580 D_80090364[];
void LoadAverageCol(u8 *arg0, u8 *arg1, s32 arg2, s32 arg3, u8 *arg4);
void func_80056B54(s32 arg0, Obj80085580 *arg1, s32 arg2, s32 arg3, s32 arg4, u8 *arg5, s32 arg6);
s32 func_80083738(Obj80085580 *arg0, s32 arg1, s32 arg2, s32 arg3, u8 *arg4, u8 *arg5, u8 *arg6, s32 arg7);
Sub80085580 *func_8008589C(s32 arg0, Obj80085580 *arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
s32 func_8006D534(s32 arg0, s32 arg1, s32 arg2, Sub8004DE88 *arg3);
void func_800873F8(s32 arg0, Sub8004DE88 *arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
void func_800835E8(s32 arg0, s32 arg1, s16 *arg2, s16 *arg3, Sub8004DE88 *arg4);
void func_80086854(s32 arg0, Obj800895B0 *arg1, s32 *arg2);
void func_80081088(Obj8007618C *arg0, s32 arg1, s32 arg2, s32 arg3, Sub8004DE88 *arg4);
extern u8 D_8008DBC8[];
s32 rcos(s32 arg0);
extern Elem8005715C *D_801A5F1C[];
extern Sub8005715C *D_801A5F24[];
extern u32 *D_801A5F28;
extern s32 D_801AC814[];
extern s32 D_801AC818[];
void ClearOTagR(u32 *arg0, s32 arg1);
void func_8004DCF8(void);
s32 func_800733D8(Elem80074728 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
Elem80074728 *func_80074620(Elem80074728 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
extern s32 D_801E8B70;
extern u32 D_801EAF90[3][0x400];
s32 func_8006EFFC(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void func_800714C4(Sub8004DE88 *arg0, Obj80071610 *arg1);
extern u16 D_8019F508;
s32 func_80012794(s32 arg0, s32 arg1, s32 arg2, s32 arg3, Sub8004DE88 *arg4, s32 arg5, s32 arg6);
extern Sub80079CDC *D_80040FEC;
extern u16 D_800411B6;
void func_8007732C(Obj8007618C *arg0, s32 arg1, s32 arg2, s32 arg3, Sub8004DE88 *arg4, void (*arg5)());
void func_8007B160();

#endif /* FDAT202_H */
