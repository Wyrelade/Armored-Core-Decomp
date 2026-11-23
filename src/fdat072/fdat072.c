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

void func_801C5600(Obj801C59E8 *arg0) {
    Elem801C70E8 *p;
    Sub8006D4BC *t;
    u8 *tbl;
    s32 speed;
    Sub8004DE88 vec;
    s16 rise;

    if (arg0->unk40 != 0xFF) {
        t = func_8006D4BC(1);
        if (t != NULL) {
            arg0->unk2E = t->unkE;
        } else {
            arg0->unk2E = 0x7FFF;
        }
        arg0->unk8.unk2 += 0x32;
        if (arg0->unk8.unk2 >= arg0->unk2C) {
            arg0->unk40 = 0;
        }
        if (func_800754D0(arg0, D_801C6BC8) != 0) {
            func_80078E1C(arg0);
        }
        return;
    }
    if (arg0->unk44 == 0) {
        arg0->unk42++;
        p = &D_801C6AE8[arg0->unk42];
        arg0->unk44 = p->unk8;
        if (p->unkB != 0xFF) {
            switch (D_8019F518) {
            case 6:
                tbl = D_801C6BF0;
                break;
            case 8:
                tbl = D_801C6BF4;
                break;
            case 21:
                tbl = D_801C6BF8;
                break;
            case 26:
                tbl = D_801C6BFC;
                break;
            case 36:
                tbl = D_801C6C00;
                break;
            default:
                tbl = D_801C6BEC;
                break;
            }
            func_800529F0(0, 0, tbl[p->unkB]);
        }
        if (p->unkE != 0) {
            func_8004D178(p->unkE, NULL, 0x7F, 0x7F, 0);
        }
    } else {
        p = &D_801C6AE8[arg0->unk42];
    }
    func_80014728(arg0->unk10.unk2, &vec);
    speed = ((p[-1].unk4 - p->unk4) * arg0->unk44) / p->unk8 + p->unk4;
    arg0->unk8.unk0 += (vec.unk0 * speed) >> 12;
    arg0->unk8.unk4 += (vec.unk4 * speed) >> 12;
    arg0->unk8.unk2 += ((p[-1].unk2 - p->unk2) * arg0->unk44) / p->unk8 + p->unk2;
    arg0->unk10.unk6 = func_8006E6B4(arg0->unk10.unk6, &arg0->unk8);
    func_8004CC30(0x85, D_801A5DC0[0]->unk1000, &arg0->unk8,
                  ((p[-1].unkC - p->unkC) * arg0->unk44) / p->unk8 + p->unkC, 0x32C8, 0x36B0,
                  ((p[-1].unkD - p->unkD) * arg0->unk44) / p->unk8 + p->unkD);
    D_801A5DC8 = 1;
    t = func_80075030(arg0, 0x1800);
    if (t != NULL) {
        arg0->unk2C = t->unkE;
        arg0->unk30 = t->unk4 - D_801D0B68;
    } else {
        arg0->unk2C = 0x7FFF;
        arg0->unk30 = -1;
    }
    D_801A5DC8 = 0;
    switch (p->unkF) {
    case 0:
        func_8004E98C(&arg0->unk64, 0, 0, 0);
        func_8004ECA8(&arg0->unk64);
        break;
    case 1:
        func_8004E98C(&arg0->unk64, 1, 1, 0);
        func_8004ECA8(&arg0->unk64);
        break;
    case 2:
        func_8004E98C(&arg0->unk64, 1, -1, 0);
        func_8004ECA8(&arg0->unk64);
        break;
    case 3:
        func_8004E98C(&arg0->unk64, 2, 1, 0);
        func_8004ECA8(&arg0->unk64);
        if (func_8004EBF8(&arg0->unk64) == 0) {
            func_8004D178(0x86, D_801A5DC0[0]->unk1100, 0x7F, 0x7F, 0);
        }
        break;
    case 4:
        func_8004E98C(&arg0->unk64, 2, -1, 0);
        func_8004ECA8(&arg0->unk64);
        if (func_8004EBF8(&arg0->unk64) == 0) {
            func_8004D178(0x86, D_801A5DC0[0]->unk1100, 0x7F, 0x7F, 0);
        }
        break;
    }
    switch (p->unkA) {
    case 0:
        D_801A26B8[0].unk8.unk0 = arg0->unk8.unk0;
        arg0->unk108 = D_801A26B8[0].unk8.unk2 = arg0->unk8.unk2;
        D_801A26B8[0].unk8.unk4 = arg0->unk8.unk4;
        D_801A26B8[0].unk10.unk6 = arg0->unk10.unk6;
        break;
    case 1:
        D_801A26B8[0].unk8.unk0 = arg0->unk8.unk0;
        D_801A26B8[0].unk8.unk4 = arg0->unk8.unk4;
        D_801A26B8[0].unk32 = 0;
        D_801A26B8[0].unk36 = 1;
        rise = arg0->unkCC.unk2 + 0x100;
        arg0->unkCC.unk2 = rise;
        D_801A26B8[0].unk8.unk2 = arg0->unk108 += rise >> 6;
        break;
    case 2:
        D_801A26B8[0].unk41 = 0x4B;
        D_8019F524[0] &= ~0x2400;
        D_801987D8[0] &= ~1;
        D_801A26B8[0].unkCC = arg0->unkCC;
        D_8019F52A = 0xFFFE;
        break;
    case 9:
        if ((u16)(arg0->unk8.unk0 + 0x7D00) > 0xFA00 || (u16)(arg0->unk8.unk4 + 0x7D00) > 0xFA00) {
            func_80078E1C(arg0);
        }
        break;
    }
    arg0->unk44--;
}

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
