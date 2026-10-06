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

/* @externs */
extern u8 D_800895C8;
void func_800309A8(s32 arg0, s32 arg1, void (*arg2)(void));
void func_8004BE10(void);
extern s32 D_8019B48C;
extern u16 D_8019B490;
extern u8 D_80041BC0;
void func_8004DB64(s32 arg0);
void func_8004DB90(void);

#endif /* FDAT203_H */
