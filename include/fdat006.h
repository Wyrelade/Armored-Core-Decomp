#ifndef FDAT006_H
#define FDAT006_H

#include "common.h"

/* @types */
typedef struct Sub801C5CD0 {
    void (*unk0)();
    void (*unk4)();
} Sub801C5CD0;

typedef struct Obj801C5CD0 {
    u8 _pad0[0x2C];
    Sub801C5CD0 *unk2C;
} Obj801C5CD0;

/* @externs */
Sub801C5CD0 *func_80072120(s32 arg0);
void func_801C5A78();
void func_801C5E20();

#endif /* FDAT006_H */
