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

/* @externs */
void func_80075FC0(void);
s32 func_8004F080(Sub8007618C *arg0, u8 *arg1);

#endif /* FDAT202_H */
