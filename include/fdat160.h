#ifndef FDAT160_H
#define FDAT160_H

#include "common.h"

/* @types */
typedef struct Sub801C5550 {
    void (*unk0)();
    void (*unk4)();
} Sub801C5550;

typedef struct Obj801B82DC {
    u8 _pad0[0x14];
    Sub801C5550 *unk14;
} Obj801B82DC;

typedef struct Obj801C6870 {
    u8 _pad0[0xA];
    u16 unkA;
} Obj801C6870;

/* @externs */
Sub801C5550 *func_80072834(s32 arg0);
void func_801C8E08();

#endif /* FDAT160_H */
