#ifndef FDAT162_H
#define FDAT162_H

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
Sub801C5550 *func_800712E0(s32 arg0);
void func_801C8C38();

#endif /* FDAT162_H */
