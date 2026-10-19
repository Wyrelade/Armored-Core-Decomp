#include "common.h"
#include "fdat086.h"

INCLUDE_ASM("asm/USA/fdat086/nonmatchings/fdat086", func_801C5438);

INCLUDE_ASM("asm/USA/fdat086/nonmatchings/fdat086", func_801C5518);

INCLUDE_ASM("asm/USA/fdat086/nonmatchings/fdat086", func_801C5590);

INCLUDE_ASM("asm/USA/fdat086/nonmatchings/fdat086", func_801C55E4);

INCLUDE_RODATA("asm/USA/fdat086/nonmatchings/fdat086", D_801C4B40);

INCLUDE_ASM("asm/USA/fdat086/nonmatchings/fdat086", func_801C5638);

INCLUDE_ASM("asm/USA/fdat086/nonmatchings/fdat086", func_801C5788);

INCLUDE_ASM("asm/USA/fdat086/nonmatchings/fdat086", func_801C58FC);

INCLUDE_ASM("asm/USA/fdat086/nonmatchings/fdat086", func_801C5BE0);

INCLUDE_ASM("asm/USA/fdat086/nonmatchings/fdat086", func_801C5D08);

INCLUDE_ASM("asm/USA/fdat086/nonmatchings/fdat086", func_801C5FD8);

INCLUDE_ASM("asm/USA/fdat086/nonmatchings/fdat086", func_801C603C);

INCLUDE_ASM("asm/USA/fdat086/nonmatchings/fdat086", func_801C625C);

INCLUDE_ASM("asm/USA/fdat086/nonmatchings/fdat086", func_801C63EC);

INCLUDE_ASM("asm/USA/fdat086/nonmatchings/fdat086", func_801C64C0);

INCLUDE_ASM("asm/USA/fdat086/nonmatchings/fdat086", func_801C64E4);

void func_801C6508(Obj801C6508 *arg0) {
    arg0->unk36 = 2;
    arg0->unk108 = &D_801CCF68;
    func_801CCE38(arg0);
}

INCLUDE_ASM("asm/USA/fdat086/nonmatchings/fdat086", func_801C6538);

INCLUDE_ASM("asm/USA/fdat086/nonmatchings/fdat086", func_801C6790);

void func_801C67CC(Obj801C7360 *arg0) {
    arg0->unk8 += arg0->unk22;
    arg0->unkA += arg0->unk24;
    arg0->unkC += arg0->unk26;
}

void func_801C6800(Obj801C6800 *arg0) {
    Sub801C6800 *task;

    task = func_80073674(0);
    arg0->unk14 = task;
    task->unk0 = func_801C67CC;
}

void func_801C683C(Obj801C6800 *arg0) {
    Sub801C6800 *sub;
    s32 hit;
    Sub801C683C *task;
    s32 dx;
    s32 dy;
    s32 dz;

    sub = arg0->unk14;
    if (!(sub->unk8 & 7)) {
        hit = D_801AC860[(s16)arg0->unkE >> 5] & (1 << (arg0->unkE & 0x1F));
        if (hit != 0) {
            dx = D_801A26C0 - arg0->unk0;
            dy = D_801A26C2 - arg0->unk2;
            dz = D_801A26C4 - arg0->unk4;
            if (SquareRoot0(dx * dx + dy * dy + dz * dz) < 0x1770) {
                task = func_80086854(0, arg0, &D_801CD4B4);
                task->unk10 = 5;
                task->unkBC = 0xC8;
                task->unkBA = 0xC8;
                task->unkBE = 0x64;
            }
        }
    }
    sub->unk8++;
}

void func_801C6960(Obj801C6870 *arg0) {
    arg0->unkA += 0x80;
}

INCLUDE_ASM("asm/USA/fdat086/nonmatchings/fdat086", func_801C6974);

INCLUDE_ASM("asm/USA/fdat086/nonmatchings/fdat086", func_801C6BA0);

INCLUDE_ASM("asm/USA/fdat086/nonmatchings/fdat086", func_801C6CAC);

void func_801C6E64(Obj801C6800 *arg0) {
    arg0->unk14 = func_80073674(8);
    arg0->unk14->unk4 = func_801C6CAC;
    switch (arg0->unk23) {
    case 1:
        arg0->unk14->unk0 = func_801C6960;
        break;
    case 2:
        arg0->unk14->unk0 = func_801C6974;
        arg0->unk14->unkC = (u32)&D_80198B08[arg0->unk28];
        break;
    case 3:
        arg0->unk14->unk0 = func_801C6BA0;
        arg0->unk14->unkC = (u32)(arg0->unk28 * arg0->unk28) >> 4;
        arg0->unk14->unk8 = rand() & 0x1F;
        break;
    }
    arg0->unk14->unk9 = 0;
}

INCLUDE_ASM("asm/USA/fdat086/nonmatchings/fdat086", func_801C6F78);

INCLUDE_ASM("asm/USA/fdat086/nonmatchings/fdat086", func_801C70B8);

void func_801C7100(Obj801C6800 *arg0) {
    Sub801C6800 *task;

    if (func_801C70B8(arg0->unk22, arg0->unk24) != 0 && func_801C70B8(arg0->unk2A, arg0->unk2C) != 0) {
        task = func_80073674(4);
        arg0->unk14 = task;
        task->unk4 = func_801C6F78;
        return;
    }
    arg0->unk6 = -1;
}

void func_801C7174(Obj801C5F00 *arg0) {
    u8 num;
    s32 count;
    Elem801C5F00 *elem;

    num = arg0->unk23;
    if (num != 0) {
        count = num;
        elem = &D_801D0B68[arg0->unk24];
        do {
            if (elem->unk2C != 0) {
                return;
            }
            count--;
            elem++;
        } while (count != 0);
        arg0->unk6 = -1;
        arg0->unk14 = NULL;
        arg0->unk1C |= 0x8000;
    }
}

void func_801C71D8(Obj801C5F00 *arg0) {
    u8 num;
    s32 count;
    Elem801C7308 *elem;

    num = arg0->unk23;
    if (num != 0) {
        count = num;
        elem = &D_80198B08[arg0->unk24];
        do {
            if (elem->unk6 != -1) {
                return;
            }
            count--;
            elem++;
        } while (count != 0);
        arg0->unk6 = -1;
        arg0->unk14 = NULL;
        arg0->unk1C |= 0x8000;
    }
}

void func_801C7250(Obj801C6800 *arg0) {
    Sub801C6800 *task;

    task = arg0->unk14 = func_80073674(0);
    switch (arg0->unk22) {
    case 0:
        task->unk0 = func_801C7174;
        break;
    case 1:
        task->unk0 = func_801C71D8;
        break;
    }
}

INCLUDE_ASM("asm/USA/fdat086/nonmatchings/fdat086", func_801C72BC);

void func_801C739C(Obj801C6800 *arg0) {
    Sub801C6800 *task;

    task = func_80073674(0);
    arg0->unk14 = task;
    task->unk0 = func_801C72BC;
}

INCLUDE_ASM("asm/USA/fdat086/nonmatchings/fdat086", func_801C73D8);

void func_801C76F4(Obj801C6800 *arg0) {
    Sub801C6800 *task;

    task = func_80073674(0);
    arg0->unk14 = task;
    task->unk0 = func_801C73D8;
}

void func_801C7730(void) {
}

INCLUDE_ASM("asm/USA/fdat086/nonmatchings/fdat086", func_801C7738);

void func_801C77E8(s32 arg0) {
    if (D_8019F528 == 0) {
        switch (arg0) {
        case 0:
            func_800529F0(0, 0, 0x9C);
            func_800529F0(0, 0, 0x68);
            func_8004C318(0x80);
            break;
        case 1:
            func_800529F0(0, 0, 0x9D);
            func_800529F0(0, 0, 0x95);
            func_8004C318(0x100);
            D_801CD538 = -0x7530;
            break;
        }
    }
}

void func_801C7884(s32 arg0, s32 *arg1) {
    *arg1 += D_801CD538;
}

void func_801C78A0(Obj801C6508 *arg0) {
    if (!(arg0->unk148 & 0xF)) {
        func_8004CE44(arg0->unk108->unk3A, &arg0->unk8, 0x64, -0x50);
        return;
    }
    func_8004CC30(arg0->unk108->unk3B, D_801A5DC0->unk1000, &arg0->unk8, 0x64, 0x1F40, 0x2710, -0x30);
}

void func_801C7920(Obj801C52C0 *arg0, Sub801C5634 *arg1) {
    arg0->unk148 &= 0xFFF0;
    arg0->unk15C &= ~arg1->unk38;
}

INCLUDE_ASM("asm/USA/fdat086/nonmatchings/fdat086", func_801C7948);

void func_801C79B4(Obj801C52C0 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C ^= 1 << arg1->unk2D;
}

void func_801C79D0(Obj801C52C0 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C &= ~(1 << arg1->unk2D);
}

void func_801C79F0(Obj801C52C0 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C |= 1 << arg1->unk6;
}

void func_801C7A0C(Obj801C52C0 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C ^= 1 << arg1->unk6;
}

void func_801C7A28(Obj801C52C0 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C &= ~(1 << arg1->unk6);
}

void func_801C7A48(Obj801C52C0 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C ^= 1 << arg1->unk9;
}

void func_801C7A64(Obj801C52C0 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C &= ~(1 << arg1->unk9);
}

void func_801C7A84(Obj801C6508 *arg0, s32 arg1) {
    if (arg0->unk3D != 0xB0) {
        func_8004DE88(&arg0->unk64, &arg0->unkCC);
        arg0->unkCC.unk2 = 0;
        arg0->unkCC.unk0 <<= 7;
        arg0->unkCC.unk4 <<= 7;
    }
    arg0->unk15C = 0;
    func_800775B8(arg0, arg1, 1, 0x200, &arg0->unkCC, func_801C7FA4);
    arg0->unk3C = 0x41;
    arg0->unk41 = 0x41;
}

INCLUDE_ASM("asm/USA/fdat086/nonmatchings/fdat086", func_801C7B20);

INCLUDE_ASM("asm/USA/fdat086/nonmatchings/fdat086", func_801C7CD8);

INCLUDE_ASM("asm/USA/fdat086/nonmatchings/fdat086", func_801C7FA4);

INCLUDE_ASM("asm/USA/fdat086/nonmatchings/fdat086", func_801C8290);

INCLUDE_ASM("asm/USA/fdat086/nonmatchings/fdat086", func_801C8594);

INCLUDE_ASM("asm/USA/fdat086/nonmatchings/fdat086", func_801C8884);

INCLUDE_ASM("asm/USA/fdat086/nonmatchings/fdat086", func_801C8A38);

INCLUDE_ASM("asm/USA/fdat086/nonmatchings/fdat086", func_801C8D14);

INCLUDE_ASM("asm/USA/fdat086/nonmatchings/fdat086", func_801C8E1C);

INCLUDE_ASM("asm/USA/fdat086/nonmatchings/fdat086", func_801C8EEC);

INCLUDE_ASM("asm/USA/fdat086/nonmatchings/fdat086", func_801C8FFC);

INCLUDE_ASM("asm/USA/fdat086/nonmatchings/fdat086", func_801C91C4);

void func_801C9550(Obj801C52C0 *arg0, s32 arg1) {
    if (arg0->unk126 == -1) {
        func_800759A4(arg0, arg1, D_80039C78);
    } else {
        func_80075B08(arg0, arg1, &D_80198B08[arg0->unk126]);
    }
}

INCLUDE_ASM("asm/USA/fdat086/nonmatchings/fdat086", func_801C95B0);

INCLUDE_ASM("asm/USA/fdat086/nonmatchings/fdat086", func_801C960C);

INCLUDE_ASM("asm/USA/fdat086/nonmatchings/fdat086", func_801C9668);

INCLUDE_ASM("asm/USA/fdat086/nonmatchings/fdat086", func_801C98A8);

INCLUDE_ASM("asm/USA/fdat086/nonmatchings/fdat086", func_801C9E08);

INCLUDE_ASM("asm/USA/fdat086/nonmatchings/fdat086", func_801CA094);

INCLUDE_ASM("asm/USA/fdat086/nonmatchings/fdat086", func_801CA868);

INCLUDE_ASM("asm/USA/fdat086/nonmatchings/fdat086", func_801CABD8);

INCLUDE_ASM("asm/USA/fdat086/nonmatchings/fdat086", func_801CAF54);

INCLUDE_ASM("asm/USA/fdat086/nonmatchings/fdat086", func_801CAFA8);

INCLUDE_ASM("asm/USA/fdat086/nonmatchings/fdat086", func_801CB4B8);

void func_801CB804(Obj801C52C0 *arg0) {
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

INCLUDE_ASM("asm/USA/fdat086/nonmatchings/fdat086", func_801CB8A4);

INCLUDE_ASM("asm/USA/fdat086/nonmatchings/fdat086", func_801CB9E0);

INCLUDE_ASM("asm/USA/fdat086/nonmatchings/fdat086", func_801CBB08);

void func_801CCE38(Obj801C6508 *arg0) {
    arg0->unk50 = func_801CBB08;
    arg0->unk54 = func_801C98A8;
    arg0->unk58 = func_801CAFA8;
    arg0->unk5C = func_801CB4B8;
    func_801CB804(arg0);
}
