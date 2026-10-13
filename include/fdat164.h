#ifndef FDAT164_H
#define FDAT164_H

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

typedef struct Sub801C8DCC {
    u8 _pad0[0x8];
    u16 unk8;
} Sub801C8DCC;

/* @externs */
Sub801C5550 *func_80072834(s32 arg0);
void func_801C8C90();
extern u16 D_80040FB0;
extern Sub801C8DCC *D_80041338;
extern u16 D_8004134C;
extern Sub801C8DCC *D_800416D4;

#endif /* FDAT164_H */
