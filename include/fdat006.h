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

typedef struct Sub801C5FDC {
    void (*unk0)();
} Sub801C5FDC;

typedef struct Obj801C5F00 {
    u8 _pad0[0x6];
    s16 unk6;
    u8 _pad8[0xC];
    Sub801C5FDC *unk14;
    u8 _pad18[0x4];
    u16 unk1C;
    u8 _pad1E[0x4];
    u8 unk22;
    u8 unk23;
    u16 unk24;
} Obj801C5F00;

typedef struct Elem801C5F00 {
    u8 _pad0[0x2C];
    s32 unk2C;
    u8 _pad30[0x10];
} Elem801C5F00;

/* @externs */
Sub801C5CD0 *func_80072120(s32 arg0);
void func_801C5A78();
void func_801C5E20();
extern Elem801C5F00 D_801D0B68[];
Sub801C5FDC *func_80073674(s32 arg0);
void func_801C5F00(Obj801C5F00 *arg0);
void func_801C5F64();

#endif /* FDAT006_H */
