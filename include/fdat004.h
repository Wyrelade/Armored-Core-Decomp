#ifndef FDAT004_H
#define FDAT004_H

#include "common.h"

/* @types */
typedef struct Obj801C59E8 {
    u8 _pad0[0x36];
    s16 unk36;
    u8 _pad38[0x9];
    u8 unk41;
    u8 unk42;
    u8 _pad43;
    s16 unk44;
    u8 _pad46[0xA];
    void (*unk50)();
    void (*unk54)();
    void (*unk58)();
    void (*unk5C)();
    u8 _pad60[0x104];
    u16 unk164;
} Obj801C59E8;

/* @externs */
u16 func_80073904(void);
void func_801C4FFC();
void func_801C5534();
void func_801C52A0();
void func_801C58AC();

#endif /* FDAT004_H */
