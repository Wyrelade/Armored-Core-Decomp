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
    u8 _padC[0x10];
    u16 unk1C;
    u8 _pad1E[0x2];
    u8 unk20;
    u8 _pad21[0x1];
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
    u8 _pad0[0x14];
    s16 unk14;
    u8 _pad16[0x2];
    s16 unk18;
    u8 _pad1A[0x1E];
} Sub801C53A0;

typedef struct Obj801C53A0 {
    Sub801C73EC *unk0;
    u8 _pad4[0x4];
    Sub801C6C1C unk8;
    Sub801C6C1C unk10;
    u8 _pad18[0x14];
    Sub801C6060 *unk2C;
    s32 unk30;
    u8 _pad34[0x2];
    s16 unk36;
    Sub801C6A5C *unk38;
    u8 unk3C;
    u8 _pad3D[0x1];
    u8 unk3E;
    u8 unk3F;
    u8 unk40;
    u8 unk41;
    s8 unk42;
    u8 _pad43[0x1];
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
    u8 _pad10C[0x3C];
    u16 unk148;
    u8 unk14A;
    u8 unk14B;
    u8 unk14C;
    u8 _pad14D[0xF];
    s32 unk15C;
    u16 unk160;
    u8 _pad162[0x2];
} Obj801C53A0;

typedef struct Elem801C5FD0 {
    s32 unk0;
    u8 _pad4[0x3C];
} Elem801C5FD0;

typedef struct Obj801C5C4C {
    u8 _pad0[0x32];
    s16 unk32;
    u8 _pad34[0x2];
    s16 unk36;
    u8 _pad38[0x20];
    void (*unk58)();
    u8 _pad5C[0xA2];
    u8 unkFE;
} Obj801C5C4C;

typedef struct Elem801C7254 {
    u8 _pad0[0x18];
    s16 unk18;
    s16 unk1A;
    s16 unk1C;
    u8 _pad1E[0x2];
    s16 unk20;
    s16 unk22;
    s16 unk24;
    u8 _pad26[0x1A];
} Elem801C7254;

typedef struct Sub801C54B8 {
    u8 _pad0[0x12];
    s16 unk12;
} Sub801C54B8;

typedef struct Sub801C4C94 {
    s16 unk0;
    s16 unk2;
    s16 unk4;
    s16 unk6;
} Sub801C4C94;

typedef struct Task801C6D58 {
    void (*unk0)();
    void (*unk4)();
    u8 _pad8[0x8];
    s32 unk10;
} Task801C6D58;

typedef struct Sub801C7624 {
    u8 unk0;
    u8 _pad1;
    u16 unk2;
    u8 unk4;
    u8 unk5;
    u16 unk6;
    u8 unk8;
    u8 unk9;
} Sub801C7624;

typedef struct Obj801C730C {
    u8 _pad0[0x2C];
    Task801C6D58 *unk2C;
    u8 _pad30[0x8];
    Sub801C7624 *unk38;
} Obj801C730C;

/* @externs */
Sub801C60B4 *func_80072120(s32 arg0);
void func_801C603C();
void func_801C62D0();
s32 func_8006D45C(void);
void func_8006D39C(Obj801C60B4 *arg0);
void func_8008A0B0(u8 arg0, u8 arg1, u16 arg2, u8 arg3, u8 arg4);
void func_801C6434(Obj801C60B4 *arg0);
s32 func_801C64D0(Obj801C730C *arg0, s32 arg1, s32 arg2, ...);
Sub801C6A40 *func_80073674(s32 arg0);
void func_801C6568();
s32 func_80014D78(s32 arg0);
void func_801C6AAC();
void func_801C6BC8();
extern Elem801C5FD0 D_801D0B94[];
void func_80078E1C(Obj801C53A0 *arg0);
void func_801C5C08();
extern u8 D_801C7430[];
extern u8 D_801C7454[];
s32 func_800754D0(Obj801C53A0 *arg0, u8 *arg1);
s32 func_801C5C7C(Obj801C53A0 *arg0);
s16 func_800132CC(s16 arg0, s16 arg1, s32 arg2);
s32 func_800148E4(s16 arg0, s16 arg1, s32 arg2);
s32 rand(void);
void func_80077B78(Obj801C53A0 *arg0, s32 arg1, u16 arg2, u8 arg3, u8 *arg4, s32 arg5, s32 arg6, s32 arg7);
void func_8004E98C(Sub801C53A0 *arg0, s32 arg1, s32 arg2, s32 arg3);
s32 func_801C5F3C(Obj801C53A0 *arg0, s32 arg1, ...);
void func_801C5DCC(Obj801C53A0 *arg0);
void func_801C5F6C();
extern Elem801C7254 D_801D0B68[];
void func_80078598(Obj801C53A0 *arg0);
extern s32 D_801A5DC4;
extern u8 D_80039C78[];
extern u8 D_8019F52E[];
extern u8 D_801C73E4[];
extern u8 D_801C7408[];
extern u8 D_801C740C[];
extern u8 D_801C7410[];
Sub801C54B8 *func_80086F20(s32 arg0, Sub801C6C1C *arg1, s32 arg2, s32 arg3, s32 arg4, u8 *arg5, u8 *arg6, u8 *arg7, u8 *arg8);
s32 func_801C5334(Obj801C53A0 *arg0);
s16 func_80014DAC(s32 arg0);
s32 func_80014D30(s32 arg0);
void func_80075A18(s32 arg0, s32 arg1, Sub801C4C94 *arg2);
void func_80075A54(s32 arg0, s32 arg1, Sub801C4C94 *arg2);
void func_80073714(Obj801C53A0 *arg0, s32 arg1);

#endif /* FDAT028_H */
