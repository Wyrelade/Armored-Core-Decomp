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

/* @externs */
extern s8 D_800893C4;
void func_800309A8(s32 arg0, s32 arg1, void (*arg2)(void));
void func_8004BDB8(void);
extern s32 D_801AB684;
extern u16 D_801AB688;
extern u8 D_80041BC0;
void func_8004DA48(s32 arg0);
void func_8004DA74(void);

#endif /* FDAT204_H */
