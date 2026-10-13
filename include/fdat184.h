#ifndef FDAT184_H
#define FDAT184_H

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

typedef struct Obj801C6720 {
    u8 _pad0[0xA];
    u16 unkA;
} Obj801C6720;

/* @externs */
Sub801C5550 *func_800729F8(s32 arg0);
void func_801B847C(Obj801C6720 *arg0);
void func_801B8618();

#endif /* FDAT184_H */
