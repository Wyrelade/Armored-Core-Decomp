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

typedef struct Sub801C6508 {
    u8 _pad0[0x3A];
    u8 unk3A;
    u8 unk3B;
} Sub801C6508;

typedef struct Obj801C64C0 {
    u8 _pad0[0x36];
    s16 unk36;
    u8 _pad38[0xD0];
    Sub801C6508 *unk108;
} Obj801C64C0;

/* @externs */
void func_801C5518(Obj801C5590 *arg0);
void func_801C63EC(Obj801C64C0 *arg0);

#endif /* FDAT056_H */
