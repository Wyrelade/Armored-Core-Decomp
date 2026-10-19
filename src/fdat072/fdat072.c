#include "common.h"
#include "fdat072.h"

INCLUDE_RODATA("asm/USA/fdat072/nonmatchings/fdat072", D_801C4B40);

void func_801C4D28(Obj801C5560 *arg0) {
    Sub8004DE88 v;
    s16 angle;
    s32 flip;
    s32 speed;
    s16 x;

    flip = 0;
    angle = func_80075EB4();
    switch (arg0->unk3C) {
    case 1:
    turn:
        arg0->unk12 = func_800132CC(arg0->unk12, angle, arg0->unk4->unk8);
        if (flip) {
            func_80014728((arg0->unk12 + 0x800) % 0x1000, &v);
        } else {
            func_80014728(arg0->unk12, &v);
        }
        func_80014338(&v, 0x3E8, &arg0->unkCC);
        speed = 0x3E8;
        break;
    case 2:
        angle += 0x200;
        goto turn;
    case 3:
        angle -= 0x200;
        goto turn;
    case 6:
        angle += 0x800;
        goto turn;
    case 7:
        angle += 0x600;
        goto turn;
    case 8:
        angle += 0xA00;
        goto turn;
    case 4:
        angle += 0x400;
        goto turn;
    case 5:
        angle -= 0x400;
        goto turn;
    case 12:
        angle += 0x200;
    case 11:
    back:
        flip = 1;
        goto turn;
    case 13:
        angle -= 0x200;
        goto back;
    default:
        speed = func_800143B8(&arg0->unkCC, 0x1F4, 0x3E8, &arg0->unkCC);
        break;
    }
    x = func_80013390(arg0->unk108, speed, 0x32);
    arg0->unk108 = x;
    func_8004CC30(0xA1, &D_801A5DC0[0]->unk1000[0x300], &arg0->unk8, (x >> 4) + 0x32, 0x1F40, 0x2710, arg0->unk108 >> 5);
    if (func_8004F080(&arg0->unk64, &arg0->unk8) == 0) {
        if (arg0->unk50 != NULL) {
            arg0->unk50(arg0, arg0->unk41);
        }
    }
}

void func_801C4EE8(Obj801C5560 *arg0, s32 arg1) {
    arg0->unk3C = arg1;
    func_80078598(arg0);
    func_8007732C(arg0, 0, 0, 0, &arg0->unkCC, func_801C4D28);
}

INCLUDE_ASM("asm/USA/fdat072/nonmatchings/fdat072", func_801C4F3C);

INCLUDE_ASM("asm/USA/fdat072/nonmatchings/fdat072", func_801C5050);

INCLUDE_ASM("asm/USA/fdat072/nonmatchings/fdat072", func_801C5158);

INCLUDE_ASM("asm/USA/fdat072/nonmatchings/fdat072", func_801C539C);

INCLUDE_ASM("asm/USA/fdat072/nonmatchings/fdat072", func_801C550C);

void func_801C5560(Obj801C5560 *arg0) {
    arg0->unk36 = 0x102;
    arg0->unk50 = func_801C4EE8;
    arg0->unk54 = func_801C539C;
    arg0->unk58 = func_801C5158;
    arg0->unk5C = func_801C550C;
    arg0->unk7C = 0;
    arg0->unk108 = 0;
    arg0->unk41 = 0;
    arg0->unk164 *= 4;
    if (arg0->unk54 != NULL) {
        arg0->unk54(arg0, 0);
    }
    if (arg0->unk50 != NULL) {
        arg0->unk50(arg0, arg0->unk41);
    }
}

INCLUDE_ASM("asm/USA/fdat072/nonmatchings/fdat072", func_801C5600);

INCLUDE_ASM("asm/USA/fdat072/nonmatchings/fdat072", func_801C5C04);

INCLUDE_ASM("asm/USA/fdat072/nonmatchings/fdat072", func_801C5C80);

INCLUDE_ASM("asm/USA/fdat072/nonmatchings/fdat072", func_801C5D98);

void func_801C5EC0(Obj801C5EC0 *arg0) {
    Sub801C5EC0 *task;

    task = func_80072120(0);
    arg0->unk2C = task;
    task->unk0 = func_801C5D98;
}

void func_801C5EFC(Obj801C5EFC *arg0) {
    Sub801C6954 *sub;
    s32 hit;
    Sub801C5EFC *task;
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
                task = func_80086854(0, arg0, &D_801C6C04);
                task->unk10 = 5;
                task->unkBC = 0xC8;
                task->unkBA = 0xC8;
                task->unkBE = 0x64;
            }
        }
    }
    sub->unk8++;
}

void func_801C6020(Obj801C6870 *arg0) {
    arg0->unkA += 0x80;
}

INCLUDE_ASM("asm/USA/fdat072/nonmatchings/fdat072", func_801C6034);

INCLUDE_ASM("asm/USA/fdat072/nonmatchings/fdat072", func_801C6260);

INCLUDE_ASM("asm/USA/fdat072/nonmatchings/fdat072", func_801C636C);

void func_801C6524(Obj801C6954 *arg0) {
    u16 temp;

    arg0->unk14 = func_80073674(8);
    arg0->unk14->unk4 = func_801C636C;
    switch (arg0->unk23) {
    case 1:
        arg0->unk14->unk0 = func_801C6020;
        break;
    case 2:
        arg0->unk14->unk0 = func_801C6034;
        arg0->unk14->unkC = (u32)&D_80198B08[arg0->unk28];
        break;
    case 3:
        arg0->unk14->unk0 = func_801C6260;
        temp = arg0->unk28;
        arg0->unk14->unkC = (u32)(temp * temp) >> 4;
        arg0->unk14->unk8 = rand() & 0x1F;
        break;
    }
    arg0->unk14->unk9 = 0;
}

INCLUDE_ASM("asm/USA/fdat072/nonmatchings/fdat072", func_801C6638);

void func_801C6954(Obj801C6954 *arg0) {
    Sub801C6954 *task;

    task = func_80073674(0);
    arg0->unk14 = task;
    task->unk0 = func_801C6638;
}

void func_801C6990(void) {
}

void func_801C6998(void) {
    D_801AC80C = 0;
    func_80078B14(&D_8019FB68.unk2CC0, &D_8019FB68);
    D_8019F51C->unk20[D_8019FB68.unk2CC0.unkE](&D_8019FB68.unk2CC0);
}

INCLUDE_ASM("asm/USA/fdat072/nonmatchings/fdat072", func_801C69FC);
