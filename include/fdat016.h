#ifndef FDAT016_H
#define FDAT016_H

#include "common.h"

/* @types */
typedef struct Obj801C6A60 {
    u8 _pad0[0x36];
    s16 unk36;
    u8 _pad38[0x20];
    void (*unk58)();
    void (*unk5C)();
    u8 _pad60[0xA8];
    u8 *unk108;
} Obj801C6A60;

/* @externs */
void func_801C62CC();
void func_801C69BC(Obj801C6A60 *arg0);
void func_801C66DC();
void func_801C6904();

#endif /* FDAT016_H */
