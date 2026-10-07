#ifndef FDAT204_H
#define FDAT204_H

#include "common.h"

/* @types */
typedef struct Elem8004EDA8 {
    u8 _pad0[0x10];
    s16 unk10;
} Elem8004EDA8;

typedef struct Sub8004EDA8 {
    u8 _pad0[0xC];
    u16 unkC[1];
} Sub8004EDA8;

typedef struct Sub8004F0B8 {
    u8 _pad0[0x8];
} Sub8004F0B8;

typedef struct Obj8004EDA8 {
    u8 unk0;
    u8 _pad1;
    u8 unk2;
    u8 unk3;
    u8 _pad4[0x6];
    s16 unkA;
    s16 unkC;
    u8 _padE[0xE];
    Sub8004EDA8 *unk1C;
    Sub8004F0B8 unk20;
    Sub8004F0B8 unk28;
    Sub8004F0B8 unk30;
} Obj8004EDA8;

typedef struct Obj8004F0B8 {
    s16 unk0;
    s16 unk2;
    s16 unk4;
    s16 unk6;
} Obj8004F0B8;

typedef struct Elem80053658 {
    u8 _pad0[0x7C];
} Elem80053658;

typedef struct Elem80056180 {
    u8 unk0;
    u8 _pad1[0x17];
} Elem80056180;

typedef struct Obj8006FBC0 {
    u8 _pad0[0x4];
    s32 unk4[8];
    s32 unk24[8];
    s32 unk44[8];
} Obj8006FBC0;

typedef struct Obj80073138 {
    u8 _pad0[0x8];
    Obj8004F0B8 unk8;
    Obj8004F0B8 unk10;
    s16 unk18;
    s16 unk1A;
    s16 unk1C;
    u8 _pad1E[0xC];
    u16 unk2A;
    u8 _pad2C[0x2];
    s16 unk2E;
    u8 _pad30[0x6];
    u16 unk36;
    u8 _pad38[0x4];
    u8 unk3C;
    u8 unk3D;
    u8 _pad3E[0x3];
    u8 unk41;
    u8 _pad42[0xE];
    void (*unk50)(struct Obj80073138 *, u8);
    void (*unk54)(struct Obj80073138 *, s32, s32);
    u8 _pad58[0x8];
    s32 unk60;
    Obj8004EDA8 unk64;
    u8 _pad9C[0x30];
    s16 unkCC;
    s16 unkCE;
    s16 unkD0;
    s16 unkD2;
    u8 _padD4[0x74];
    u16 unk148;
    u8 _pad14A[0x12];
    s32 unk15C;
} Obj80073138;

typedef struct Obj80074314 {
    u8 _pad0[0x164];
    u16 unk164;
} Obj80074314;

typedef struct Sub80077EAC {
    u8 _pad0[0x4];
} Sub80077EAC;

typedef struct Obj80077EAC {
    u8 _pad0[0x261];
    u8 unk261;
    u8 _pad262[0x26];
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
    Sub80077EAC unk2C0;
} Obj80077EAC;

typedef struct Sub80082384 {
    u8 _pad0[0x6];
} Sub80082384;

typedef struct Obj80082384 {
    u8 _pad0[0x8];
    s32 unk8;
    u8 _padC[0xC];
    Sub80082384 unk18;
    u8 unk1E;
    u8 unk1F;
    u8 unk20;
    u8 unk21;
} Obj80082384;

typedef struct Sub8008800C {
    u16 unk0;
    u16 unk2;
    u16 unk4;
} Sub8008800C;

typedef struct Obj8008800C {
    u16 unk0;
    u16 unk2;
    u16 unk4;
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
    Sub8008800C unk24;
    s16 unk2A;
    u8 _pad2C[0x8C];
    union { u8 b[4]; s16 h; } unkB8;
    u16 unkBC;
    u16 unkBE;
} Obj8008800C;

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
    u8 _pad0[0x10];
    s8 unk10;
    u8 _pad11[0x1];
    s16 unk12;
    void (*unk14)(struct Obj80085394 *);
    u16 unk18;
    u16 unk1A;
    s16 unk1C;
    u16 unk1E;
    s16 unk20;
    u8 _pad22[0x96];
    s16 unkB8;
    u16 unkBA;
    u16 unkBC;
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

typedef struct Elem8004C840 {
    s16 unk0;
    u8 _pad2[0x2];
    u32 *unk4;
} Elem8004C840;

typedef struct Obj8006C810 {
    u8 _pad0[0x6];
    s16 unk6;
} Obj8006C810;

typedef struct Obj8006CF18 {
    u16 unk0;
    u16 unk2;
    u16 unk4;
    u8 _pad6[0x2];
    u16 unk8;
    u16 unkA;
    u16 unkC;
} Obj8006CF18;

typedef struct Obj8006E3F4 {
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
    s16 unk9E;
    s16 unkA0;
    s16 unkA2;
    s32 unkA4;
    u8 _padA8[0x28];
    s32 unkD0;
    u8 _padD4[0x10];
    s32 unkE4;
} Obj8006E3F4;

typedef struct Obj8007789C {
    u8 _pad0[0xE];
    s16 unkE;
} Obj8007789C;

typedef struct Sub8007789C {
    u8 _pad0[0x20];
    void (*unk20[1])(Obj8007789C *);
} Sub8007789C;

/* @externs */
extern s8 D_800893C4;
void func_800309A8(s32 arg0, s32 arg1, void (*arg2)(void));
void func_8004BDB8(void);
extern s32 D_801AB684;
extern u16 D_801AB688;
extern u8 D_80041BC0;
void func_8004DA48(s16 arg0);
void func_8004DA74(void);
s16 func_8004F074(Sub8004F0B8 *arg0, s16 arg1, u8 arg2);
void func_8004EEAC(void);
void func_8004ED4C(Obj8004EDA8 *arg0);
s32 func_8004F0B8(Obj8004EDA8 *arg0, Obj8004F0B8 *arg1);
void func_8004EDA8(Obj8004EDA8 *arg0);
void func_8005343C(Elem80053658 *arg0);
extern Elem80056180 D_801B419C[8];
extern s32 D_801B4114;
s32 rsin(s32 arg0);
void func_800613F4(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
extern u32 D_801EE0B0[3][0x400];
void func_80015538(void *arg0, s32 arg1, s32 arg2);
void func_8006CCFC(void);
extern u32 D_801AB748[0xB8];
extern u32 *D_801ADA28;
extern s32 D_801ADA34;
extern s32 D_801ADA38;
void func_8007295C(s32 arg0);
void func_8007296C(s32 arg0);
void func_80054A70(s32 arg0, s32 arg1, Obj8004F0B8 *arg2, Obj8004F0B8 *arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 *arg8);
s32 func_8004F1D4(Obj8004EDA8 *arg0, Obj8004F0B8 *arg1, Obj8004F0B8 *arg2);
void func_80074B84(void);
s32 func_8004F180(Obj8004EDA8 *arg0, Obj8004F0B8 *arg1);
void func_80074700(Obj80073138 *arg0);
s32 func_8007767C(void);
void func_80077918(s32 arg0, s32 arg1);
extern Obj80077EAC *D_80039D18;
void func_800815DC(u16 arg0, u16 arg1, u16 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, Sub80077EAC *arg7);
void func_80078460(Obj80073138 *arg0);
void func_80078570(Obj80073138 *arg0);
void func_8004EE5C(Obj8004EDA8 *arg0);
void func_8007C83C(void);
void func_800861F4(s32 arg0, Obj80082384 *arg1, Sub80082384 *arg2, u8 arg3, s32 arg4);
s16 func_8006D990(s16 arg0, Obj8008800C *arg1);
void func_80087EE0(Obj8008800C *arg0, Sub8008800C *arg1, s16 arg2, s16 arg3, s32 arg4, s32 arg5);
extern s16 D_801AB68C;
extern s8 D_801D4464;
extern s16 D_801D4466;
extern s8 D_801B4198;
extern s8 D_801B4199;
extern s8 D_801B419A;
extern s8 D_801B419B;
extern u16 D_801AB68A;
void func_80089154(void);
void func_800892F0(void);
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
void func_80016114(void *arg0);
s32 func_8001628C(void);
s32 rand(void);
extern u8 D_80031A94[];
void MulRotMatrix(s32 *arg0);
void SsSetSerialVol(s32 arg0, s16 arg1, s16 arg2);
extern Elem8004C840 D_80041BD0[];
s16 SsVabOpenHead(u32 *arg0, s32 arg1);
s16 SsVabTransBodyPartly(u8 *arg0, s32 arg1, s16 arg2);
void SsVabTransCompleted(s32 arg0);
void func_80064B94(s32 arg0);
void func_800640A4(u16 arg0, s32 arg1, s32 arg2);
void func_800653F8(u16 arg0, s32 arg1, u16 arg2, s32 arg3);
s32 func_80072758(void);
s32 func_80073290(s32 arg0, s32 arg1, s32 arg2, Obj8006C810 *arg3);
void func_8006CE6C(u32 *arg0, s32 arg1, s32 arg2, s32 arg3);
void func_8006CEC0(u32 *arg0, s32 arg1, s32 arg2, s32 arg3);
void func_8006E20C(s32 *arg0, s16 *arg1, s32 *arg2);
extern s32 D_801ADA3C;
extern s32 D_801ADA40;
s32 func_8004F124(Obj8004EDA8 *arg0, Obj8004F0B8 *arg1);
void func_8004DFAC(Obj8004EDA8 *arg0, s32 arg1, Obj8004F0B8 *arg2, Obj8004F0B8 *arg3);
s32 func_8004E32C(Obj8004EDA8 *arg0, Obj8004F0B8 *arg1, Obj8004F0B8 *arg2, Obj8004F0B8 *arg3, Obj8004F0B8 *arg4);
void func_8004EA8C(Obj8004EDA8 *arg0, s32 arg1, s32 arg2, s32 arg3);
void func_8004EB3C(Obj8004EDA8 *arg0, s32 arg1, s32 arg2);
void func_8007510C(Obj80073138 *arg0, s32 arg1, s32 arg2);
void func_8004EB98(Obj8004EDA8 *arg0, s32 arg1, s32 arg2, s32 arg3);
void func_80073C70(Obj80073138 *arg0, Obj8004F0B8 *arg1);
s32 func_80073508(Obj80073138 *arg0, Obj8004F0B8 *arg1, Obj8004F0B8 *arg2, Obj8004F0B8 *arg3);
void func_800856F8(s32 arg0, Obj8004F0B8 *arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8, s32 arg9, s32 arg10, s32 arg11);
void func_80085838(s32 arg0, Obj8004F0B8 *arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8, s32 arg9);
s32 func_80014D78(s32 arg0);
void func_80076F8C(Obj80073138 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
extern s32 D_801ADA30;
extern Sub8007789C *D_801AB67C;
extern u8 D_801AB7A0[];
Obj8007789C *func_80077674(void);
void func_800776B4(Obj8007789C *arg0, u8 *arg1);

#endif /* FDAT204_H */
