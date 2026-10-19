#ifndef FDAT068_H
#define FDAT068_H

#include "common.h"

/* @types */
typedef struct Obj801CB994 {
    u8 _pad0[0x50];
    void (*unk50)();
    void (*unk54)();
    void (*unk58)();
    void (*unk5C)();
} Obj801CB994;

typedef struct Sub801C5B78 {
    void (*unk0)();
    void (*unk4)();
} Sub801C5B78;

typedef struct Sub801C58D4 {
    u8 _pad0[0x3A];
    u8 unk3A;
    u8 unk3B;
} Sub801C58D4;

typedef struct Sub801C63FC {
    s16 unk0;
    s16 unk2;
    s16 unk4;
    s16 unk6;
} Sub801C63FC;

typedef struct Sub801C65E0 {
    u8 _pad0[0x18];
    s16 unk18;
    u8 _pad1A[0x4E];
} Sub801C65E0;

typedef struct Sub801C55A0 {
    u8 _pad0[0x1C];
    u16 unk1C;
    u8 _pad1E[0x2];
    u8 unk20;
} Sub801C55A0;

typedef struct Sub801C52E0 {
    u8 _pad0[0x8];
    s16 unk8;
} Sub801C52E0;

typedef struct Obj801C58D4 {
    Sub801C55A0 *unk0;
    Sub801C52E0 *unk4;
    Sub801C63FC unk8;
    u8 _pad10[0x2];
    s16 unk12;
    u8 _pad14[0x18];
    Sub801C5B78 *unk2C;
    u8 _pad30[0x6];
    s16 unk36;
    u8 _pad38[0x4];
    u8 unk3C;
    u8 unk3D;
    u8 _pad3E[0x1];
    u8 unk3F;
    u8 unk40;
    u8 unk41;
    u8 _pad42[0xE];
    void (*unk50)();
    void (*unk54)();
    void (*unk58)();
    void (*unk5C)();
    u8 _pad60[0x4];
    Sub801C65E0 unk64;
    Sub801C63FC unkCC;
    u8 _padD4[0x34];
    Sub801C58D4 *unk108;
    u8 _pad10C[0x3C];
    u16 unk148;
    u8 unk14A;
    u8 unk14B;
    u8 unk14C;
    u8 _pad14D[0xF];
    s32 unk15C;
    u8 _pad160[0x4];
    u16 unk164;
    u8 _pad166[0x2];
} Obj801C58D4;

typedef struct Sub801C5EA0 {
    void (*unk0)();
    void (*unk4)();
} Sub801C5EA0;

typedef struct Obj801C5EA0 {
    u8 _pad0[0x6];
    s16 unk6;
    u8 _pad8[0xC];
    Sub801C5EA0 *unk14;
    u8 _pad18[0xA];
    u8 unk22;
    u8 _pad23;
    u16 unk24;
    u8 _pad26[0x4];
    u8 unk2A;
    u8 _pad2B;
    u16 unk2C;
} Obj801C5EA0;

typedef struct Obj801C63FC {
    u8 _pad0[0x1000];
    u8 unk1000[1];
} Obj801C63FC;

typedef struct Elem801C52C0 {
    u8 _pad0[0x3A];
    u8 unk3A;
    u8 unk3B;
    u8 _pad3C[0x508];
} Elem801C52C0;

typedef struct Sub801C55B4 {
    s16 unk0;
    s16 unk2;
    s16 unk4;
    s16 unk6;
} Sub801C55B4;

typedef struct Sub801C5550 {
    void (*unk0)();
    void (*unk4)();
} Sub801C5550;

typedef struct Sub801C5798 {
    u8 unk0;
    u8 _pad1[0x67];
} Sub801C5798;

typedef struct Obj801C52C0 {
    u8 _pad0[0x8];
    Sub801C55B4 unk8;
    u8 _pad10[0x1C];
    Sub801C5550 *unk2C;
    u8 _pad30[0x6];
    s16 unk36;
    u8 _pad38[0x4];
    u8 unk3C;
    u8 unk3D;
    u8 _pad3E[0x3];
    u8 unk41;
    u8 unk42;
    u8 _pad43;
    s16 unk44;
    u8 _pad46[0xA];
    void (*unk50)();
    void (*unk54)();
    void (*unk58)();
    void (*unk5C)();
    u8 _pad60[0x4];
    Sub801C5798 unk64;
    Sub801C55B4 unkCC;
    u8 _padD4[0x2C];
    u8 unk100;
    u8 _pad101[0x7];
    Elem801C52C0 *unk108;
    u8 _pad10C[0x18];
    s16 unk124;
    s16 unk126;
    s16 unk128;
    s16 unk12A;
    s16 unk12C;
    s16 unk12E;
    u8 unk130;
    u8 unk131;
    u8 unk132;
    u8 unk133;
    u8 unk134;
    u8 _pad135;
    u8 unk136;
    u8 _pad137[0x11];
    u16 unk148;
    u8 _pad14A[0x12];
    s32 unk15C;
    u8 _pad160[0x4];
    u16 unk164;
} Obj801C52C0;

typedef struct Sub801C5634 {
    u8 _pad0[0x6];
    u8 unk6;
    u8 _pad7[0x2];
    u8 unk9;
    u8 _padA[0x23];
    u8 unk2D;
    u8 _pad2E[0xA];
    u16 unk38;
} Sub801C5634;

typedef struct Elem801C80AC {
    u8 _pad0[0x34];
} Elem801C80AC;

/* @externs */
extern Sub801C58D4 D_801CBA34;
void func_801CB994(Obj801CB994 *arg0);
Sub801C5B78 *func_80072120(s32 arg0);
void func_801C5920();
void func_801C5BB4();
Sub801C5EA0 *func_80073674(s32 arg0);
s32 func_801C5E58(u8 arg0, u16 arg1);
void func_801C5D18();
void func_801C5F14();
void func_801C6030();
void func_80056C6C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
extern Obj801C63FC *D_801A5DC0;
void func_8004CE44(s32 arg0, Sub801C63FC *arg1, s32 arg2, s32 arg3);
void func_8004CC30(s32 arg0, u8 *arg1, Sub801C63FC *arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void func_8004DE88(Sub801C65E0 *arg0, Sub801C63FC *arg1);
void func_800775B8(Obj801C58D4 *arg0, s32 arg1, s32 arg2, s32 arg3, Sub801C63FC *arg4, void (*arg5)());
void func_801C6B00();
void func_801CA360(Obj801C52C0 *arg0);
void func_801C8404();
void func_801C9B04();
void func_801CA014();
void func_801CA664();
void func_8008A80C();
u16 func_80073904(void);
s32 func_800754D0(Obj801C58D4 *arg0, u8 *arg1);
void func_80077B78(Obj801C58D4 *arg0, s32 arg1, u16 arg2, u8 arg3, u8 *arg4, s32 arg5, s32 arg6, s32 arg7);
void func_80078E1C(Obj801C58D4 *arg0);
s32 func_801C5494(Obj801C58D4 *arg0);
s32 rand();
extern u8 D_801CB9E0[];
extern u8 D_801CBA04[];
void func_801C5440(Obj801C58D4 *arg0, u8 arg1);
void func_801C56B0();
void func_801C55A0(Obj801C58D4 *arg0);
void func_801C57E4();
void func_80078598(Obj801C58D4 *arg0);
void func_8007732C(Obj801C58D4 *arg0, s32 arg1, s32 arg2, s32 arg3, Sub801C63FC *arg4, void (*arg5)());
void func_801C52E0(Obj801C58D4 *arg0);
extern Sub801C55B4 D_80039C78;
extern Elem801C80AC D_80198B08[];
void func_800759A4(Obj801C52C0 *arg0, s32 arg1, Sub801C55B4 *arg2);
void func_80075B08(Obj801C52C0 *arg0, s32 arg1, Elem801C80AC *arg2);

#endif /* FDAT068_H */
