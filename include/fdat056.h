#ifndef FDAT056_H
#define FDAT056_H

#include "common.h"

/* @types */
typedef struct Obj801C5590 {
    u8 _pad0[0x12];
    s16 unk12;
    u8 _pad14[0xB8];
    s16 unkCC;
} Obj801C5590;

/* @externs */
void func_801C5518(Obj801C5590 *arg0);

#endif /* FDAT056_H */
