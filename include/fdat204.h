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
    u8 _pad18[0x29];
    u8 unk41;
    u8 _pad42[0xE];
    void (*unk50)(struct Obj80073138 *, u8);
    u8 _pad54[0xC];
    s32 unk60;
    Obj8004EDA8 unk64;
    u8 _pad9C[0xC0];
    s32 unk15C;
} Obj80073138;

typedef struct Obj80074314 {
    u8 _pad0[0x164];
    u16 unk164;
} Obj80074314;

/* @externs */
extern s8 D_800893C4;
void func_800309A8(s32 arg0, s32 arg1, void (*arg2)(void));
void func_8004BDB8(void);
extern s32 D_801AB684;
extern u16 D_801AB688;
extern u8 D_80041BC0;
void func_8004DA48(s32 arg0);
void func_8004DA74(void);
s16 func_8004F074(Sub8004F0B8 *arg0, s16 arg1, u8 arg2);
void func_8004EEAC(void);
void func_8004ED4C(Obj8004EDA8 *arg0);
s32 func_8004F0B8(Obj8004EDA8 *arg0, Obj8004F0B8 *arg1);
void func_8004EDA8(Obj8004EDA8 *arg0);
void func_8005343C(Elem80053658 *arg0);
extern Elem80056180 D_801B419C[8];
extern s32 D_801B4114;
s32 func_8002701C(s32 arg0);
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

#endif /* FDAT204_H */
