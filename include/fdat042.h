#ifndef FDAT042_H
#define FDAT042_H

#include "common.h"

/* @types */
typedef struct Obj801C5624 {
    u8 _pad0[0x12];
    u16 unk12;
    u8 _pad14[0xB8];
    s16 unkCC;
} Obj801C5624;

/* @externs */
void func_801C55AC(Obj801C5624 *arg0);

#endif /* FDAT042_H */
