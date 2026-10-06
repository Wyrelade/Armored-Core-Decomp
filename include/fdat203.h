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

typedef struct Obj800732FC {
    u8 _pad0[0x8];
    Sub8004F1D4 unk8;
    s16 unkE;
    Sub8004F1D4 unk10;
    u8 _pad16[0x2B];
    u8 unk41;
    u8 _pad42[0xE];
    void (*unk50)(struct Obj800732FC *, u8);
    u8 _pad54[0xC];
    s32 unk60;
    Obj8004EE14 unk64;
    u8 _pad9C[0xAC];
    u16 unk148;
    u8 _pad14A[0x12];
    s32 unk15C;
} Obj800732FC;

typedef struct Obj800744D0 {
    u8 _pad0[0x164];
    u16 unk164;
} Obj800744D0;

/* @externs */
extern u8 D_800895C8;
void func_800309A8(s32 arg0, s32 arg1, void (*arg2)(void));
void func_8004BE10(void);
extern s32 D_8019B48C;
extern u16 D_8019B490;
extern u8 D_80041BC0;
void func_8004DB64(s32 arg0);
void func_8004DB90(void);
s16 func_8004F190(Elem8004F1D4 *arg0, s16 arg1, u8 arg2);
void func_8004EFC8(void);
s32 func_8004EE68(Obj8004EE14 *arg0);
void func_8004F1D4(Obj8004EE14 *arg0, Sub8004F1D4 *arg1);
void func_80053DEC(Elem80054008 *arg0);
extern Elem80056B30 D_801A3E2C[8];
extern s32 D_801A3DA4;
s32 func_8002701C(s32 arg0);
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

#endif /* FDAT203_H */
