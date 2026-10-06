#ifndef FDAT202_H
#define FDAT202_H

#include "common.h"

/* @types */
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

/* @externs */
void func_80075FC0(void);
s32 func_8004F080(Sub8007618C *arg0, u8 *arg1);
void func_80075B3C(Obj8007618C *arg0);
void func_8004EC4C(Sub8007618C *arg0);
extern Sub80078CFC *D_8019F51C;
extern u8 D_8019FB68[];
Obj80078CFC *func_80078A2C(void);
void func_80078B14(Obj80078CFC *arg0, u8 *arg1);
s32 func_80078ADC(void);
void func_80078D78(s32 arg0, s32 arg1);
void func_8004EDAC(Sub8007618C *arg0, u8 *arg1);
void func_8004ECA8(Sub8007618C *arg0);
void func_80079CDC(Obj8007618C *arg0);
void func_80079DE4(Obj8007618C *arg0);
extern u16 D_8004125E;
extern u8 D_8004124B;
extern Obj8007A19C *D_801A5DC0;
void func_8004CE44(s32 arg0, u8 *arg1, s32 arg2, s32 arg3);
void func_8004CC30(s32 arg0, u8 *arg1, u8 *arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void func_8004ED5C(Sub8007618C *arg0);
void func_8007DF98(void);

#endif /* FDAT202_H */
