#ifndef FDAT166_H
#define FDAT166_H

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
Sub801C5550 *func_80072834(s32 arg0);
void func_801C86CC();

#endif /* FDAT166_H */
