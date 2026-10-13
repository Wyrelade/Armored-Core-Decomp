#ifndef FDAT038_H
#define FDAT038_H

#include "common.h"

/* @types */
typedef struct Sub801C61D0 {
    void (*unk0)();
    void (*unk4)();
} Sub801C61D0;

typedef struct Obj801C61D0 {
    u8 _pad0[0x6];
    s16 unk6;
    u8 _pad8[0xC];
    Sub801C61D0 *unk14;
    u8 _pad18[0xA];
    u8 unk22;
    u8 _pad23;
    u16 unk24;
    u8 _pad26[0x4];
    u8 unk2A;
    u8 _pad2B;
    u16 unk2C;
} Obj801C61D0;

/* @externs */
Sub801C61D0 *func_80073674(s32 arg0);
void func_801C5EB4();

#endif /* FDAT038_H */
