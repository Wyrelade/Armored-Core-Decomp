#ifndef FDAT074_H
#define FDAT074_H

#include "common.h"

/* @types */
typedef struct Sub801C68D8 {
    void (*unk0)();
    void (*unk4)();
} Sub801C68D8;

typedef struct Obj801C5AF0 {
    u8 _pad0[0x2C];
    Sub801C68D8 *unk2C;
    u8 _pad30[0x6];
    s16 unk36;
    u8 _pad38[0x9];
    u8 unk41;
    u8 unk42;
    u8 _pad43;
    s16 unk44;
    u8 _pad46[0xA];
    void (*unk50)();
    void (*unk54)();
    void (*unk58)();
    void (*unk5C)();
    u8 _pad60[0x1C];
    s16 unk7C;
    u8 _pad7E[0x7E];
    s16 unkFC;
    u8 unkFE;
    u8 _padFF[0x65];
    u16 unk164;
} Obj801C5AF0;

typedef struct Sub801C6B58 {
    void (*unk0)();
    void (*unk4)();
} Sub801C6B58;

typedef struct Obj801C6B58 {
    u8 _pad0[0x14];
    Sub801C6B58 *unk14;
} Obj801C6B58;

/* @externs */
s16 func_80073904(void);
void func_801C5138();
void func_801C5704();
void func_801C5498();
void func_801C596C();
Sub801C68D8 *func_80072120(s32 arg0);
void func_801C6680();
void func_801C6914();
Sub801C6B58 *func_80073674(s32 arg0);
void func_801C6A78();
void func_801C6B94();
void func_80056C6C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);

#endif /* FDAT074_H */
