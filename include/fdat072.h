#ifndef FDAT072_H
#define FDAT072_H

#include "common.h"

/* @types */
typedef struct Sub801C5EC0 {
    void (*unk0)();
    void (*unk4)();
} Sub801C5EC0;

typedef struct Obj801C5EC0 {
    u8 _pad0[0x2C];
    Sub801C5EC0 *unk2C;
} Obj801C5EC0;

/* @externs */
Sub801C5EC0 *func_80072120(s32 arg0);
void func_801C5D98();

#endif /* FDAT072_H */
