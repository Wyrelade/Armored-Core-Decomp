#ifndef FDAT022_H
#define FDAT022_H

#include "common.h"

/* @types */
typedef struct Sub801C73EC {
    u8 _pad0[0xA];
    s16 unkA;
} Sub801C73EC;

typedef struct Sub801C6C1C {
    s16 unk0;
    s16 unk2;
    s16 unk4;
    s16 unk6;
} Sub801C6C1C;

typedef struct Sub801C6060 {
    void (*unk0)();
    void (*unk4)();
    u8 _pad8[0x8];
    s32 unk10;
} Sub801C6060;

typedef struct Sub801C6A5C {
    u8 unk0;
    u8 _pad1;
    u16 unk2;
    u8 unk4;
    u8 unk5;
    u16 unk6;
    u8 unk8;
    u8 unk9;
} Sub801C6A5C;

typedef struct Sub801C53A0 {
    u8 _pad0[0x18];
    s16 unk18;
    u8 _pad1A[0x1E];
} Sub801C53A0;

typedef struct Obj801C53A0 {
    Sub801C73EC *unk0;
    u8 _pad4[0xC];
    Sub801C6C1C unk10;
    u8 _pad18[0x14];
    Sub801C6060 *unk2C;
    s32 unk30;
    u8 _pad34[0x2];
    s16 unk36;
    Sub801C6A5C *unk38;
    u8 _pad3C[0x5];
    u8 unk41;
    s8 unk42;
    u8 _pad43;
    s16 unk44;
    u8 _pad46[0xA];
    void (*unk50)(struct Obj801C53A0 *, u8);
    void (*unk54)(struct Obj801C53A0 *, s32);
    void (*unk58)();
    void (*unk5C)();
    u8 _pad60[0x4];
    Sub801C53A0 unk64;
    u8 _pad9C[0x60];
    u16 unkFC;
    u8 _padFE[0xC];
    s8 unk10A;
    s8 unk10B;
    u8 _pad10C[0x54];
    u16 unk160;
} Obj801C53A0;

typedef struct Elem801C5FD0 {
    s32 unk0;
    u8 _pad4[0x3C];
} Elem801C5FD0;

typedef struct Sub801C6360 {
    void (*unk0)();
    u8 _pad4[0x4];
    s32 unk8;
} Sub801C6360;

typedef struct Obj801C6360 {
    u8 _pad0[0x14];
    Sub801C6360 *unk14;
    u8 _pad18[0xA];
    u8 unk22;
    u8 _pad23[0x5];
    u8 unk28;
} Obj801C6360;

/* @externs */
extern Elem801C5FD0 D_801D0B94[];
void func_80078E1C(void);
extern u8 D_8019FB68[];
Obj801C53A0 *func_80078A2C(void);
void func_80078B14(Obj801C53A0 *arg0, u8 *arg1);
void func_8004E98C(Sub801C53A0 *arg0, s32 arg1, s32 arg2, s32 arg3);
void func_801C60B0();
void func_801C66C4();
Sub801C6060 *func_80072120(s32 arg0);
void func_801C67C8();
void func_8006D39C(Obj801C53A0 *arg0);
s32 func_8006D45C(void);
void func_8008A0B0(u8 arg0, u8 arg1, u16 arg2, u8 arg3, u8 arg4);
void func_801C6A5C(Obj801C53A0 *arg0);
void func_801C6AF8();
Sub801C6360 *func_80073674(s32 arg0);
void func_801C6B90();
void func_801C6BE0();
void func_801C6CFC();

#endif /* FDAT022_H */
