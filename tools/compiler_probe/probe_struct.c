typedef unsigned short u16; typedef short s16; typedef unsigned char u8; typedef int s32; typedef signed char s8;
typedef struct { s16 vx, vy, vz, pad; } SVECTOR;
typedef struct { u8 pad0[0x10]; u8 unk10; u8 pad11[0xB8 - 0x11]; SVECTOR unkB8; s16 unkC0; s16 unkC2; s16 unkC4; s16 unkC6; s16 unkC8; u8 padCA[0xDC - 0xCA]; s32 unkDC; } Obj857EC;
void func_800857EC(Obj857EC *a, s16 b, s16 c, SVECTOR *d) {
    a->unk10 = 0;
    a->unkDC = 0;
    a->unkB8 = *d;
    a->unkC0 = b;
    a->unkC2 = c;
    a->unkC8 = 0;
    a->unkC6 = 0;
    a->unkC4 = 0;
}
typedef struct { SVECTOR v; s32 m[4]; } Obj4CF7C;
extern Obj4CF7C D_80041B90;
extern void func_80014B74();
void func_8004CF7C(Obj4CF7C *a) {
    D_80041B90.v = a->v;
    func_80014B74(a, a->m, D_80041B90.m);
}
typedef struct { u8 pad0[0x1E]; u16 unk1E; u8 pad20[8]; u8 unk28, unk29, unk2A; u8 pad2B[0xB8 - 0x2B]; u8 unkB8, unkB9, unkBA; u8 padBB[3]; u16 unkBE; } Obj87A24;
void func_80087A24(Obj87A24 *a) {
    a->unkBE += a->unk1E;
    a->unkB8 -= a->unk28;
    a->unkB9 -= a->unk29;
    a->unkBA -= a->unk2A;
}
