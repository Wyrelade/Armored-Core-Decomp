#ifndef FDAT182_H
#define FDAT182_H

#include "common.h"

/* @types */
typedef struct Sub801C5550 {
    void (*unk0)();
    void (*unk4)();
} Sub801C5550;

typedef struct Obj801B8280 {
    u8 _pad0[0x2C];
    Sub801C5550 *unk2C;
} Obj801B8280;

/* @externs */
Sub801C5550 *func_800714A4(s32 arg0);
void func_801B81E8();

#endif /* FDAT182_H */
