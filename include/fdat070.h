#ifndef FDAT070_H
#define FDAT070_H

#include "common.h"

/* @types */
typedef struct Sub801C5638 {
    void (*unk0)();
    void (*unk4)();
} Sub801C5638;

typedef struct Obj801C5638 {
    u8 _pad0[0x2C];
    Sub801C5638 *unk2C;
} Obj801C5638;

/* @externs */
Sub801C5638 *func_80072120(s32 arg0);
void func_801C53E0();

#endif /* FDAT070_H */
