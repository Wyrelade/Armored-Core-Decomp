#ifndef FDAT018_H
#define FDAT018_H

#include "common.h"

/* @types */
typedef struct Sub801C52C0 {
    u8 _pad0[0x3A];
    u8 unk3A;
    u8 unk3B;
} Sub801C52C0;

typedef struct Sub801C52D0 {
    s16 unk0;
    s16 unk2;
    s16 unk4;
    s16 unk6;
} Sub801C52D0;

typedef struct Sub801C563C {
    u8 _pad0[0x38];
} Sub801C563C;

typedef struct Obj801C52C0 {
    u8 _pad0[0x8];
    Sub801C52D0 unk8;
    Sub801C52D0 unk10;
    u8 _pad18[0x14];
    s16 unk2C;
    u8 _pad2E[0x8];
    s16 unk36;
    u8 _pad38[0x4];
    u8 unk3C;
    u8 unk3D;
    u8 _pad3E[0x2];
    u8 unk40;
    u8 unk41;
    u8 _pad42[0xE];
    void (*unk50)();
    void (*unk54)();
    void (*unk58)();
    void (*unk5C)();
    u8 _pad60[0x4];
    Sub801C563C unk64;
    u8 _pad9C[0x30];
    Sub801C52D0 unkCC;
    u8 _padD4[0x34];
    Sub801C52C0 *unk108;
    u8 _pad10C[0x3C];
    u16 unk148;
    u8 _pad14A[0x12];
    s32 unk15C;
    u8 _pad160[0x4];
    u16 unk164;
    u8 _pad166[0x2];
} Obj801C52C0;

typedef struct Sub801C53D4 {
    void (*unk0)();
    void (*unk4)();
    u8 _pad8[0x8];
    s32 unk10;
} Sub801C53D4;

typedef struct Sub801C76D0 {
    u8 unk0;
    u8 _pad1;
    u16 unk2;
    u8 unk4;
    u8 unk5;
    u16 unk6;
    u8 unk8;
    u8 unk9;
} Sub801C76D0;

typedef struct Obj801C53D4 {
    u8 _pad0[0x2C];
    Sub801C53D4 *unk2C;
    u8 _pad30[0x8];
    Sub801C76D0 *unk38;
} Obj801C53D4;

typedef struct Sub801C7AB8 {
    void (*unk0)();
    void (*unk4)();
} Sub801C7AB8;

typedef struct Obj801C7AB8 {
    u8 _pad0[0x6];
    s16 unk6;
    u8 _pad8[0xC];
    Sub801C7AB8 *unk14;
    u8 _pad18[0xA];
    u8 unk22;
    u8 _pad23;
    u16 unk24;
    u8 _pad26[0x4];
    u8 unk2A;
    u8 _pad2B;
    u16 unk2C;
} Obj801C7AB8;

typedef struct Sub801C5550 {
    void (*unk0)();
    void (*unk4)();
} Sub801C5550;

typedef struct Sub801C4EB8 {
    u8 unk0;
    u8 _pad1;
    u8 unk2;
} Sub801C4EB8;

typedef struct Sub801C6C20 {
    u8 _pad0[0xA];
    s16 unkA;
} Sub801C6C20;

typedef struct Obj801C4EB8 {
    Sub801C6C20 *unk0;
    u8 _pad4[0xE];
    u16 unk12;
    u8 _pad14[0x2];
    u16 unk16;
    u16 unk18;
    u8 _pad1A[0x8];
    s16 unk22;
    u8 _pad24[0x8];
    Sub801C5550 *unk2C;
    u8 _pad30[0x6];
    s16 unk36;
    u8 _pad38[0x9];
    u8 unk41;
    u8 _pad42[0xE];
    void (*unk50)();
    u8 _pad54[0x10];
    Sub801C4EB8 unk64;
    u8 _pad67[0x65];
    s16 unkCC;
    s16 unkCE;
    u8 _padD0[0x90];
    u16 unk160;
} Obj801C4EB8;

typedef struct Sub801C5EA8 {
    u8 _pad0[0x10];
    u8 unk10;
} Sub801C5EA8;

typedef struct Sub801C6050 {
    u8 _pad0[0x6];
    u8 unk6;
} Sub801C6050;

typedef struct Elem801C5EA8 {
    u8 _pad0[0x26];
    s16 unk26;
    u16 *unk28;
    Sub801C5EA8 *unk2C;
    u8 _pad30[0x8];
    Sub801C6050 *unk38;
    u8 _pad3C[0x4];
} Elem801C5EA8;

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

typedef struct Task801C7458 {
    void (*unk0)();
    void (*unk4)();
    u8 _pad8[0x8];
    u16 unk10;
} Task801C7458;

typedef struct Sub801C7458 {
    u8 unk0;
    u8 unk1;
    u16 unk2;
    u8 unk4;
    u8 unk5;
    u16 unk6;
    u16 unk8;
} Sub801C7458;

typedef struct Obj801C7458 {
    u8 _pad0[0x2C];
    Task801C7458 *unk2C;
    u8 _pad30[0x8];
    Sub801C7458 *unk38;
} Obj801C7458;

typedef struct Elem801C7458 {
    s32 unk0;
    u8 _pad4[0x3C];
} Elem801C7458;

/* @externs */
void func_801C5258(Obj801C4EB8 *arg0);
void func_801C612C(Obj801C52C0 *arg0);
extern u8 D_801C8200[];
s32 func_800754D0(Obj801C52C0 *arg0, u8 *arg1);
void func_80078598(Obj801C52C0 *arg0);
void func_80078E1C(Obj801C52C0 *arg0);
Sub801C53D4 *func_80072120(s32 arg0);
void func_801C71C4();
void func_801C756C();
s32 func_8006D45C(void);
void func_8006D39C(Obj801C53D4 *arg0);
s32 func_8008A0B0(u8 arg0, u8 arg1, u16 arg2, u8 arg3, s32 arg4);
void func_801C76D0(Obj801C53D4 *arg0);
s32 func_801C776C(Obj801C730C *arg0, s32 arg1, s32 arg2, ...);
void func_801C7804();
Sub801C7AB8 *func_80073674(s32 arg0);
s32 func_801C7AB4(u8 arg0, u16 arg1);
void func_801C7974();
void func_801C7B70();
void func_801C7C8C();
void func_8008A80C();
void func_8004ECA8(Sub801C4EB8 *arg0);
extern u8 D_801A26C0[];
extern u16 D_801A26E0;
extern u16 D_801A26E2;
void func_80012794(s16 *arg0, u16 arg1, u16 arg2, s32 arg3, u8 *arg4, s32 arg5, s32 arg6);
void func_8004E98C(Sub801C563C *arg0, s32 arg1, s32 arg2, s32 arg3);
void func_801C5054();
void func_801C4EF0();
void func_801C50A4();
void func_801C6518();
void func_801C67F4();
void func_801C6658();
void func_801C6998();
extern Elem801C5EA8 D_801D0B68[];
s32 func_80014D78(s32 arg0);
void func_800759A4(s32 arg0, s32 arg1, Sub801C4C94 *arg2);
s16 func_80014DAC(s32 arg0);
s32 func_80014D30(s32 arg0);
void func_80075A18(s32 arg0, s32 arg1, Sub801C4C94 *arg2);
void func_80075A54(s32 arg0, s32 arg1, Sub801C4C94 *arg2);
extern s16 D_801A26CE;
extern Elem801C7458 D_801D0B94[];

#endif /* FDAT018_H */
