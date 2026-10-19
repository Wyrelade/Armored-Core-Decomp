#ifndef MAIN_H
#define MAIN_H

#include "common.h"

/* @types */
typedef struct Obj800138F0 {
    s16 unk0;
    s16 unk2;
    s16 unk4;
} Obj800138F0;

typedef struct Obj80013A88 {
    s16 unk0;
    s16 unk2;
    s16 unk4;
    s16 unk6;
    s16 unk8;
    s16 unkA;
    s16 unkC;
    s16 unkE;
    s16 unk10;
    u8 _pad12[0xE];
} Obj80013A88;

typedef struct Elem80015580 {
    u8 unk0;
    u8 unk1;
    u8 unk2[4];
    u8 _pad6[0x22];
} Elem80015580;

typedef struct Obj800158C8 {
    u8 unk0;
    u8 unk1;
    u8 unk2;
} Obj800158C8;

typedef struct Obj80015E48 {
    u8 unk0;
    u8 unk1;
    u16 unk2;
    s32 unk4;
    s32 *unk8;
    s32 unkC;
} Obj80015E48;

typedef struct Obj8001654C {
    Obj800158C8 unk0;
    u8 _pad3[0x1];
    s32 unk4;
} Obj8001654C;

typedef struct Obj80016A3C {
    u8 unk0;
    u8 unk1;
    u8 unk2;
    u8 unk3;
    u8 _pad4[4];
} Obj80016A3C;

typedef struct Obj80077854 {
    u8 _pad0[0xE];
    s16 unkE;
} Obj80077854;

typedef struct Obj80013430 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} Obj80013430;

typedef struct Elem80015D80 {
    u16 *unk0;
    Obj800158C8 unk4;
    u8 _pad7[5];
} Elem80015D80;

typedef struct Elem80016D64 {
    s16 unk0;
    s8 unk2;
    u8 _pad3[7];
} Elem80016D64;

typedef struct Elem8004C840 {
    s16 unk0;
    u8 _pad2[0x2];
    u32 *unk4;
} Elem8004C840;

typedef struct Obj800121AC {
    u8 _pad0[0x14];
} Obj800121AC;

typedef struct Sub800121AC {
    u8 _pad0[0x5C];
} Sub800121AC;

typedef struct Obj800131D0 {
    s16 unk0;
    s16 unk2;
    s16 unk4;
    s16 unk6;
} Obj800131D0;

/* @externs */
void free2(u32 *arg0);
extern volatile s32 D_80049F98;
s32 rsin(s32 arg0);
s32 rcos(s32 arg0);
void func_80013A88(s16 arg0, Obj80013A88 *arg1);
void func_80013AFC(s16 arg0, Obj80013A88 *arg1);
void func_80013B74(s16 arg0, Obj80013A88 *arg1);
Obj80013A88 *MulMatrix(Obj80013A88 *arg0, Obj80013A88 *arg1);
Obj80013A88 *MulMatrix2(Obj80013A88 *arg0, Obj80013A88 *arg1);
s32 SquareRoot0(s32 arg0);
s32 func_80014950(s32 arg0, s32 arg1);
s32 ratan2(s32 arg0, s32 arg1);
s32 rand(void);
s32 func_80014F78(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 *arg5, s32 *arg6);
s32 CdControl(s32 arg0, u8 *arg1, s32 arg2);
extern Elem80015580 *D_8004A260;
extern Elem80015580 *D_8004A264;
s32 func_8001586C(u8 arg0);
void EnterCriticalSection(void);
void ExitCriticalSection(void);
void func_800161F8(void);
void func_80015B78(s32 arg0, u8 *arg1, s32 arg2, s32 arg3, s32 arg4);
s32 func_80015C9C(u16 arg0, u16 arg1, u8 *arg2);
void func_80015E48(Obj80015E48 *arg0);
u32 *malloc2(s32 arg0);
void DrawSync(s32 arg0);
void VSync(s32 arg0);
extern volatile s32 D_80049F94;
s32 GetRCnt(s32 arg0);
u32 *func_80016190(s32 arg0);
void func_80016328(Obj8001654C *arg0, u32 *arg1, s32 arg2);
void func_800309A8(s32 arg0, s32 arg1, s32 arg2);
s32 func_80016A3C(Obj80016A3C *arg0);
extern Obj80016A3C D_8004A268[];
void AddDrv(s32 *arg0);
extern s32 D_80039C0C;
void DelDrv(s32 *arg0);
void FlushCache(void);
extern s32 D_80011E14;
s32 func_80014988(s32 arg0, s32 arg1, s32 arg2);
void VectorNormalSS(Obj80013430 *arg0, Obj800138F0 *arg1);
void func_80013BE8(Obj800138F0 *arg0, Obj80013A88 *arg1);
void ApplyMatrixSV(Obj80013A88 *arg0, Obj800138F0 *arg1, Obj800138F0 *arg2);
s32 func_800158C8(Obj800158C8 *arg0);
void func_8001594C(Obj800158C8 *arg0, u32 arg1);
extern Elem80015D80 D_8004A2A4[];
void func_80015A08(Obj800158C8 *arg0, s32 arg1, Obj800158C8 *arg2);
s32 func_80015B24(u32 *arg0, s32 arg1);
void SsUtAllKeyOff(s32 arg0);
extern Elem80016D64 D_80041DE0[];
void SsVabClose(s16 arg0);
extern Elem8004C840 D_80041BD0[];
s32 CdRead(s32 arg0, u32 *arg1, s32 arg2);
s32 CdReadSync(s32 arg0, u8 *arg1);
void func_80015A48();
void func_80015DC0(s32 arg0);
void SetDispMask(s32 arg0);
void ClearImage(u8 *arg0, s32 arg1, s32 arg2, s32 arg3);
void func_800165E4(u16 arg0, u16 arg1, u32 *arg2);
void func_80011FD8(u32 *arg0);
void SetDefDispEnv(Obj800121AC *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void SetDefDrawEnv(Sub800121AC *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void PutDispEnv(Obj800121AC *arg0);
void PutDrawEnv(Sub800121AC *arg0);
void func_80012048();
extern u32 *D_800112C8;
extern u8 D_80039C60[];
extern s32 D_80049FA0;
s32 abs(s32 arg0);
Obj80015E48 *func_80015E68(Obj80015E48 *arg0, s32 arg1);

#endif /* MAIN_H */
