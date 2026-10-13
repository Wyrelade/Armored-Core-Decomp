#ifndef FDAT028_H
#define FDAT028_H

#include "common.h"

/* @types */
typedef struct Sub801C60B4 {
    void (*unk0)();
    void (*unk4)();
    u8 _pad8[0x8];
    s32 unk10;
} Sub801C60B4;

typedef struct Sub801C6434 {
    u8 unk0;
    u8 _pad1;
    u16 unk2;
    u8 unk4;
    u8 unk5;
    u16 unk6;
    u8 unk8;
    u8 unk9;
} Sub801C6434;

typedef struct Obj801C60B4 {
    u8 _pad0[0x2C];
    Sub801C60B4 *unk2C;
    u8 _pad30[0x8];
    Sub801C6434 *unk38;
} Obj801C60B4;

typedef struct Sub801C6A40 {
    void (*unk0)();
    u8 _pad4[0x4];
    s32 unk8;
} Sub801C6A40;

typedef struct Obj801C6A40 {
    u8 _pad0[0x14];
    Sub801C6A40 *unk14;
    u8 _pad18[0x10];
    u8 unk28;
} Obj801C6A40;

typedef struct Obj801C6F28 {
    u16 unk0;
    u16 unk2;
    u16 unk4;
    u8 _pad6[0x12];
    u16 unk18;
    u16 unk1A;
    u16 unk1C;
    u16 unk1E;
    u16 unk20;
    u16 unk22;
    u16 unk24;
    u8 _pad26[0x2];
    u8 unk28;
    u8 unk29;
    u8 unk2A;
    u8 _pad2B[0x8D];
    u8 unkB8;
    u8 unkB9;
    u8 unkBA;
    u8 _padBB[0x3];
    u16 unkBE;
} Obj801C6F28;

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

/* @externs */
Sub801C60B4 *func_80072120(s32 arg0);
void func_801C603C();
void func_801C62D0();
s32 func_8006D45C(void);
void func_8006D39C(Obj801C60B4 *arg0);
void func_8008A0B0(u8 arg0, u8 arg1, u16 arg2, u8 arg3, u8 arg4);
void func_801C6434(Obj801C60B4 *arg0);
void func_801C64D0();
Sub801C6A40 *func_80073674(s32 arg0);
void func_801C6568();
s32 func_80014D78(s32 arg0);
void func_801C6AAC();
void func_801C6BC8();
extern Elem801C5FD0 D_801D0B94[];
void func_80078E1C(void);

#endif /* FDAT028_H */
