#ifndef FDAT201_H
#define FDAT201_H

#include "common.h"

/* @types */
typedef struct Obj8004DEB0 {
    u8 unk0;
    u8 unk1;
    u8 unk2;
    u8 unk3;
    u8 unk4;
    u8 unk5;
    u8 _pad6[0x4];
    s16 unkA;
    s16 unkC;
    s16 unkE;
    u8 _pad10[0x6];
    s16 unk16;
    u8 _pad18[0x28];
    u16 unk40;
    u16 unk42;
    u16 unk44;
    u8 _pad46[0x2];
    s32 unk48;
    s32 unk4C;
    u8 _pad50[0x8];
    s32 unk58;
    s32 unk5C;
    u8 _pad60[0xC];
    s32 unk6C;
    void (*unk70)();
    void (*unk74)();
    void (*unk78)();
    struct Obj8004DEB0 *unk7C;
    void (*unk80)();
    u8 _pad84[0x1];
    u8 unk85;
    u8 _pad86[0x2];
    u8 unk88;
    u8 _pad89[0x1];
    u8 unk8A;
    u8 _pad8B[0x6];
    u8 unk91;
    u8 _pad92[0x6];
    struct Obj8004DEB0 *unk98;
    struct Obj8004DEB0 *unk9C;
    u8 _padA0[0x3];
    u8 unkA3;
    u8 unkA4;
    u8 _padA5[0x1];
    u16 unkA6;
    u16 unkA8;
    u8 unkAA;
    u8 _padAB[0x3];
    s8 unkAE;
    u8 _padAF[0x11];
    s32 unkC0;
    s32 unkC4;
    u8 _padC8[0x8];
} Obj8004DEB0;

typedef struct Sub8004E044 {
    u8 _pad0[0x7E];
    u8 unk7E;
} Sub8004E044;

typedef struct Obj8004E044 {
    u8 _pad0[0x74];
    void (*unk74)();
    u8 _pad78[0x8];
    Sub8004E044 *unk80;
    u8 _pad84[0x14];
    Obj8004DEB0 *unk98;
} Obj8004E044;

typedef struct Obj8004F9D8 {
    u8 _pad0[0x1];
    u8 unk1;
    u8 _pad2[0x72];
    void (*unk74)();
    u8 _pad78[0x4];
    s16 unk7C;
} Obj8004F9D8;

typedef struct Obj8004FF14 {
    u8 _pad0[0x74];
    void (*unk74)();
    u8 _pad78[0x4];
    u8 unk7C[4];
} Obj8004FF14;

typedef struct Obj800513F0 {
    u8 unk0;
    u8 unk1;
    u8 unk2;
    u8 unk3;
} Obj800513F0;

typedef struct Obj80051C20 {
    u8 _pad0[0x48];
    s32 unk48;
    s32 unk4C;
    u8 _pad50[0x2C];
    s8 *unk7C;
    s8 *unk80;
} Obj80051C20;

typedef struct Sub8005552C {
    u8 _pad0[0x70];
    void (*unk70)();
    void (*unk74)();
    u8 _pad78[0x5];
    u8 unk7D;
    u8 _pad7E[0x1E];
    u8 unk9C;
} Sub8005552C;

typedef struct Obj8005552C {
    u8 _pad0[0x1];
    u8 unk1;
    u8 _pad2[0x7A];
    Sub8005552C *unk7C;
    void (*unk80)();
} Obj8005552C;

typedef struct Obj80056FC4 {
    u8 _pad0[0x48];
    s32 unk48;
    s32 unk4C;
    u8 _pad50[0x2C];
    u8 *unk7C;
    u8 *unk80;
} Obj80056FC4;

typedef struct Obj8005DCDC {
    u8 _pad0[0x1];
    u8 unk1;
    u8 _pad2[0x8E];
    u8 *unk90;
    u8 _pad94[0x2];
    u8 unk96;
} Obj8005DCDC;

/* @externs */
extern Obj8004DEB0 D_801BC4F8;
Obj8004DEB0 *func_80050078(void (*arg0)());
void func_8004F924();
void func_8004DF10(Obj8004DEB0 *arg0);
void func_8004F294(Obj8004DEB0 *arg0);
void func_8004DCC0();
void func_8004FB28(s8 arg0);
void func_8004E0B4(Obj8004E044 *arg0);
void func_8005C2D0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void func_8004E2BC(Obj8004DEB0 *arg0);
s16 func_800517C8(void);
void func_8004FA44(Obj8004F9D8 *arg0);
extern u8 D_8004AE88[];
void func_8005D8D4(u8 *arg0, u8 *arg1, s32 arg2, s32 arg3);
void func_8004FF5C(Obj8004FF14 *arg0);
void func_8004FF14(Obj8004FF14 *arg0);
void func_8004FFF4(Obj8004FF14 *arg0);
u32 *func_80051248(s16 arg0, s16 arg1);
void func_80050944(u32 *arg0);
void func_8002BFE8(s32 arg0);
void func_80051078(u32 *arg0);
void func_800B597C(s32 arg0);
extern s16 D_801A2318;
s16 func_800263F8(u32 *arg0, s32 arg1);
void func_80026B2C(u32 *arg0, s16 arg1);
void func_80026EC4(s32 arg0);
extern s32 D_801A2550;
extern s16 D_801A2554;
extern s16 D_801A2556;
extern s32 D_801A2558;
extern s16 D_801A255C;
extern s16 D_801A255E;
extern s16 D_801A2560;
extern s32 D_801A2564;
extern s32 D_801A2568;
extern s32 D_801A256C;
extern s8 D_801A2570;
extern s32 D_801A2574;
extern s8 D_801A2578;
extern s8 D_801A2579;
void func_80029B40(void);
void func_80029B50(void);
void func_8002A3C8(u32 *arg0);
extern u8 D_800CF37C[];
void func_8002A150(u8 *arg0, s32 arg1);
s32 func_80015C9C(s32 arg0, s32 arg1, Obj800513F0 *arg2);
s32 func_80050FC4(s32 arg0);
void func_80015B78(s32 arg0, Obj800513F0 *arg1, s32 arg2, s32 arg3, void (*arg4)());
void func_80051830(u32 *arg0);
void func_800309A8();
Obj8004DEB0 *func_8005015C(s32 arg0);
void func_800506EC(s32 arg0);
void func_80053988(Obj8004DEB0 *arg0);
extern u8 D_8004B0B0[];
void func_8005BA2C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void func_8005CB94(u8 *arg0, s32 arg1, s32 arg2, s32 arg3);
void func_80053A84(Obj8004DEB0 *arg0);
void func_80053AB4(Obj8004DEB0 *arg0);
void func_80055CE0(Obj8004DEB0 *arg0);
extern u8 D_8004B0FC[];
void func_8005DED8(Obj8004DEB0 *arg0, void (*arg1)(), u8 *arg2, s32 arg3);
void func_80054258(Obj8004DEB0 *arg0);
void func_800507FC(void);
extern u8 D_8004B120[];
void func_800542F0(Obj8004DEB0 *arg0);
extern u8 D_8004B1BC[];
void func_80054D34(Obj8004DEB0 *arg0);
extern u8 D_8004B22C[];
void func_800551A0(Obj8004DEB0 *arg0);
void func_800A2D0C(void);
void func_8004FDF4(void);
extern u8 D_8004B27C[];
s32 func_800685A8(u8 arg0);
void func_800531B8(Obj8004DEB0 *arg0);
void func_800557CC(Obj8004DEB0 *arg0);
extern u8 D_8004B298[];
void func_80055940(Obj8004DEB0 *arg0);
extern u8 D_8004B2D0[];
extern u8 D_8004B310[];
void func_8005616C(Obj8004DEB0 *arg0);
void func_800569D8(Obj8004DEB0 *arg0);
void func_80056D48(Obj8004DEB0 *arg0);
void func_80057108(Obj8004DEB0 *arg0);
void func_800AEB30(Obj8004DEB0 *arg0, void (*arg1)());
void func_8002A400(s32 arg0);
void *func_800501BC(s32 arg0);
void func_8005B4B8(Obj8004DEB0 *arg0);
void func_800507F4(void);
extern u8 D_800B7418[];
void func_8002C17C(u8 *arg0, s32 arg1, s32 arg2, s32 arg3);
void func_8005EAE0(Obj8004DEB0 *arg0);
void func_800685E8(void);
void func_80016F7C(void);
void func_80016ED8(void);
void func_80016FB4(void);
void func_80068930(void);
void func_80016EE8(s32 arg0);
s32 func_80068828(void);
extern s32 D_8017E5B4;
extern s32 D_8017E5B8;
extern s32 D_8017E5BC;
extern s32 D_8017E5C0;
void func_80029AF0(s32 arg0);
extern s32 D_8017E5C4;
extern s32 D_8017E5C8;
extern s32 D_8017E5CC;
extern s32 D_8017E5D0;
extern u8 D_800B7FC4[];
void func_8006C1B4(Obj8004DEB0 *arg0);
void func_8006BA08(void);
void func_80068C08(Obj8004DEB0 *arg0);
void func_800695E8(Obj8004DEB0 *arg0);
void func_800700D8(void);
void func_800701D4(s32 arg0, u8 *arg1, s32 arg2, s32 arg3);
void func_80068FBC();
void func_80070154();
void func_80069D40();

#endif /* FDAT201_H */
