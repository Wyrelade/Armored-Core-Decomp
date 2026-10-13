#ifndef FDAT186_H
#define FDAT186_H

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

/* @externs */
Sub801C5550 *func_800729F8(s32 arg0);
void func_801B86E4();

#endif /* FDAT186_H */
