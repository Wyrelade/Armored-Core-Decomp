#include "common.h"
#include "fdat056.h"

INCLUDE_ASM("asm/USA/fdat056/nonmatchings/fdat056", func_801C5438);

void func_801C5518(Obj801C4EB8 *arg0) {
    func_8004ECA8(&arg0->unk64);
    if (--arg0->unk64.unk2 == 0) {
        if (arg0->unk50 != NULL) {
            arg0->unk50(arg0, arg0->unk41);
        }
    }
    arg0->unkCC += arg0->unkCE;
}

void func_801C5590(Obj801C5590 *arg0) {
    func_801C5518(arg0);
    if (arg0->unkCC > 24) {
        arg0->unkCC = 24;
    }
    arg0->unk12 += arg0->unkCC;
}

void func_801C55E4(Obj801C5590 *arg0) {
    func_801C5518(arg0);
    if (arg0->unkCC < -24) {
        arg0->unkCC = -24;
    }
    arg0->unk12 += arg0->unkCC;
}

INCLUDE_ASM("asm/USA/fdat056/nonmatchings/fdat056", func_801C5638);

INCLUDE_ASM("asm/USA/fdat056/nonmatchings/fdat056", func_801C5788);

INCLUDE_ASM("asm/USA/fdat056/nonmatchings/fdat056", func_801C58FC);

INCLUDE_ASM("asm/USA/fdat056/nonmatchings/fdat056", func_801C5BE0);

INCLUDE_ASM("asm/USA/fdat056/nonmatchings/fdat056", func_801C5D08);

INCLUDE_ASM("asm/USA/fdat056/nonmatchings/fdat056", func_801C5FD8);

INCLUDE_ASM("asm/USA/fdat056/nonmatchings/fdat056", func_801C603C);

INCLUDE_ASM("asm/USA/fdat056/nonmatchings/fdat056", func_801C625C);

INCLUDE_ASM("asm/USA/fdat056/nonmatchings/fdat056", func_801C63EC);

void func_801C64C0(Obj801C64C0 *arg0) {
    arg0->unk36 = 2;
    func_801C63EC(arg0);
}

void func_801C64E4(Obj801C64C0 *arg0) {
    arg0->unk36 = 1;
    func_801C63EC(arg0);
}

void func_801C6508(Obj801C64C0 *arg0) {
    arg0->unk36 = 0x102;
    arg0->unk108 = &D_801CD20C;
    func_801CD0DC(arg0);
}

INCLUDE_ASM("asm/USA/fdat056/nonmatchings/fdat056", func_801C6538);

void func_801C6790(Obj801C4F4C *arg0) {
    Sub801C667C *task;

    task = func_80072120(0);
    arg0->unk2C = task;
    task->unk4 = func_801C6538;
}

void func_801C67CC(Obj801C4F4C *arg0) {
    Sub801C667C *task;
    Sub801C66B8 *info;
    s32 timer;

    if (arg0->unk38->unk0 == 1) {
        task = arg0->unk2C;
        timer = task->unk10;
        if (timer == 0) {
            if (func_8006D45C() != 0) {
                func_8006D39C(arg0);
                info = arg0->unk38;
                func_8008A0B0(info->unk4, info->unk5, info->unk6, info->unk8, info->unk9);
            }
        } else {
            task->unk10 = timer - 1;
        }
    }
}

INCLUDE_ASM("asm/USA/fdat056/nonmatchings/fdat056", func_801C6868);

void func_801C688C(Obj801C4F4C *arg0) {
    s32 unused[36];

    arg0->unk2C = func_80072120(4);
    arg0->unk2C->unk10 = arg0->unk38->unk2 * 0x16;
    arg0->unk2C->unk0 = func_801C67CC;
    arg0->unk2C->unk4 = func_801C6868;
}

INCLUDE_ASM("asm/USA/fdat056/nonmatchings/fdat056", func_801C6900);

void func_801C6A24(Obj801C6870 *arg0) {
    arg0->unkA += 0x80;
}

INCLUDE_ASM("asm/USA/fdat056/nonmatchings/fdat056", func_801C6A38);

INCLUDE_ASM("asm/USA/fdat056/nonmatchings/fdat056", func_801C6C64);

INCLUDE_ASM("asm/USA/fdat056/nonmatchings/fdat056", func_801C6D70);

void func_801C6F28(Obj801C7358 *arg0) {
    Sub801C7358 *task;
    u16 n;

    task = func_80073674(8);
    arg0->unk14 = task;
    task->unk4 = func_801C6D70;
    switch (arg0->unk23) {
    case 1:
        arg0->unk14->unk0 = func_801C6A24;
        break;
    case 2:
        arg0->unk14->unk0 = func_801C6A38;
        arg0->unk14->unkC = (u32)&D_80198B08[arg0->unk28];
        break;
    case 3:
        arg0->unk14->unk0 = func_801C6C64;
        n = arg0->unk28;
        arg0->unk14->unkC = (u32)(n * n) >> 4;
        arg0->unk14->unk8 = rand() & 0x1F;
        break;
    }
    arg0->unk14->unk9 = 0;
}

INCLUDE_ASM("asm/USA/fdat056/nonmatchings/fdat056", func_801C703C);

void func_801C7358(Obj801C7358 *arg0) {
    Sub801C7358 *task;

    task = func_80073674(0);
    arg0->unk14 = task;
    task->unk0 = func_801C703C;
}

void func_801C7394(void) {
}

INCLUDE_ASM("asm/USA/fdat056/nonmatchings/fdat056", func_801C739C);

INCLUDE_ASM("asm/USA/fdat056/nonmatchings/fdat056", func_801C73F0);

void func_801C743C(void) {
    s32 a;
    s32 b;
    s32 c;
    s32 d;
    s32 e;
    s32 f;
    s32 g;

    a = func_801C739C(4);
    b = func_801C739C(5);
    D_801CD7E8 = a + b + func_801C739C(6);
    c = func_801C739C(0x15);
    D_801CD7EC = c + func_801C739C(0x16);
    d = func_801C73F0(0x23);
    e = func_801C73F0(0x24);
    f = func_801C73F0(0x25);
    g = func_801C73F0(0x26);
    D_801CD7F0 = d + e + f + g + func_801C73F0(0x27);
    D_801CD7F4 = func_801C73F0(0x29);
    D_801CD7F8 = func_801C73F0(0x2A);
    D_801CD7FC = func_801C73F0(0x2B);
}

INCLUDE_ASM("asm/USA/fdat056/nonmatchings/fdat056", func_801C7544);

INCLUDE_ASM("asm/USA/fdat056/nonmatchings/fdat056", func_801C779C);

s32 func_801C784C(Sub801C6AE0 *arg0) {
    s32 dx;
    s32 dy;
    s32 dz;

    dx = (arg0->unk4 - D_801A26C0) >> 2;
    dy = (arg0->unk6 - D_801A26C2) >> 2;
    dz = (arg0->unk8 - D_801A26C4) >> 2;
    return dx * dx + dy * dy + dz * dz;
}

INCLUDE_ASM("asm/USA/fdat056/nonmatchings/fdat056", func_801C78B0);

void func_801C7B44(Obj801C4F4C *arg0) {
    if (!(arg0->unk148 & 0xF)) {
        func_8004CE44(arg0->unk108->unk3A, &arg0->unk8, 0x64, -0x50);
        return;
    }
    func_8004CC30(arg0->unk108->unk3B, D_801A5DC0->unk1000, &arg0->unk8, 0x64, 0x1F40, 0x2710, -0x30);
}

void func_801C7BC4(Obj801C52C0 *arg0, Sub801C5634 *arg1) {
    arg0->unk148 &= 0xFFF0;
    arg0->unk15C &= ~arg1->unk38;
}

INCLUDE_ASM("asm/USA/fdat056/nonmatchings/fdat056", func_801C7BEC);

void func_801C7C58(Obj801C52C0 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C ^= 1 << arg1->unk2D;
}

void func_801C7C74(Obj801C52C0 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C &= ~(1 << arg1->unk2D);
}

void func_801C7C94(Obj801C52C0 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C |= 1 << arg1->unk6;
}

void func_801C7CB0(Obj801C52C0 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C ^= 1 << arg1->unk6;
}

void func_801C7CCC(Obj801C52C0 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C &= ~(1 << arg1->unk6);
}

void func_801C7CEC(Obj801C52C0 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C ^= 1 << arg1->unk9;
}

void func_801C7D08(Obj801C52C0 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C &= ~(1 << arg1->unk9);
}

void func_801C7D28(Obj801C4F4C *arg0, s32 arg1) {
    if (arg0->unk3D != 0xB0) {
        func_8004DE88(&arg0->unk64, &arg0->unkCC);
        arg0->unkCC.unk2 = 0;
        arg0->unkCC.unk0 <<= 7;
        arg0->unkCC.unk4 <<= 7;
    }
    arg0->unk15C = 0;
    func_800775B8(arg0, arg1, 1, 0x200, &arg0->unkCC, func_801C8248);
    arg0->unk3C = 0x41;
    arg0->unk41 = 0x41;
}

INCLUDE_ASM("asm/USA/fdat056/nonmatchings/fdat056", func_801C7DC4);

INCLUDE_ASM("asm/USA/fdat056/nonmatchings/fdat056", func_801C7F7C);

INCLUDE_ASM("asm/USA/fdat056/nonmatchings/fdat056", func_801C8248);

INCLUDE_ASM("asm/USA/fdat056/nonmatchings/fdat056", func_801C8534);

INCLUDE_ASM("asm/USA/fdat056/nonmatchings/fdat056", func_801C8838);

INCLUDE_ASM("asm/USA/fdat056/nonmatchings/fdat056", func_801C8B28);

INCLUDE_ASM("asm/USA/fdat056/nonmatchings/fdat056", func_801C8CDC);

INCLUDE_ASM("asm/USA/fdat056/nonmatchings/fdat056", func_801C8FB8);

INCLUDE_ASM("asm/USA/fdat056/nonmatchings/fdat056", func_801C90C0);

INCLUDE_ASM("asm/USA/fdat056/nonmatchings/fdat056", func_801C9190);

INCLUDE_ASM("asm/USA/fdat056/nonmatchings/fdat056", func_801C92A0);

INCLUDE_ASM("asm/USA/fdat056/nonmatchings/fdat056", func_801C9468);

INCLUDE_ASM("asm/USA/fdat056/nonmatchings/fdat056", func_801C97F4);

INCLUDE_ASM("asm/USA/fdat056/nonmatchings/fdat056", func_801C9854);

INCLUDE_ASM("asm/USA/fdat056/nonmatchings/fdat056", func_801C98B0);

INCLUDE_ASM("asm/USA/fdat056/nonmatchings/fdat056", func_801C990C);

INCLUDE_ASM("asm/USA/fdat056/nonmatchings/fdat056", func_801C9B4C);

INCLUDE_ASM("asm/USA/fdat056/nonmatchings/fdat056", func_801CA0AC);

INCLUDE_ASM("asm/USA/fdat056/nonmatchings/fdat056", func_801CA338);

INCLUDE_ASM("asm/USA/fdat056/nonmatchings/fdat056", func_801CAB0C);

INCLUDE_ASM("asm/USA/fdat056/nonmatchings/fdat056", func_801CAE7C);

INCLUDE_ASM("asm/USA/fdat056/nonmatchings/fdat056", func_801CB1F8);

INCLUDE_ASM("asm/USA/fdat056/nonmatchings/fdat056", func_801CB24C);

INCLUDE_ASM("asm/USA/fdat056/nonmatchings/fdat056", func_801CB75C);

void func_801CBAA8(Obj801C52C0 *arg0) {
    s16 val;

    arg0->unk42 = 0;
    arg0->unk130 = 0;
    arg0->unk164 *= 4;
    val = func_80073904();
    arg0->unk12A = val;
    arg0->unk12C = val;
    arg0->unk44 = val;
    arg0->unk126 = -1;
    arg0->unk124 = -1;
    arg0->unk128 = 0;
    arg0->unk136 = 0;
    arg0->unk12E = 0;
    arg0->unk133 = 0;
    arg0->unk134 = 0;
    arg0->unk132 = 0;
    arg0->unk131 = 0;
    if (arg0->unk54 != NULL) {
        arg0->unk54(arg0, 0);
    }
    if (arg0->unk50 != NULL) {
        arg0->unk50(arg0, arg0->unk41);
    }
}

INCLUDE_ASM("asm/USA/fdat056/nonmatchings/fdat056", func_801CBB48);

INCLUDE_ASM("asm/USA/fdat056/nonmatchings/fdat056", func_801CBC84);

INCLUDE_ASM("asm/USA/fdat056/nonmatchings/fdat056", func_801CBDAC);

void func_801CD0DC(Obj801C4F4C *arg0) {
    arg0->unk50 = func_801CBDAC;
    arg0->unk54 = func_801C9B4C;
    arg0->unk58 = func_801CB24C;
    arg0->unk5C = func_801CB75C;
    func_801CBAA8(arg0);
}
