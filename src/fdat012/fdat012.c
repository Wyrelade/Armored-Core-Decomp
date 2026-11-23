#include "common.h"
#include "fdat012.h"

INCLUDE_ASM("asm/USA/fdat012/nonmatchings/fdat012", func_801C4DA0);

INCLUDE_ASM("asm/USA/fdat012/nonmatchings/fdat012", func_801C4E80);

INCLUDE_ASM("asm/USA/fdat012/nonmatchings/fdat012", func_801C509C);

INCLUDE_ASM("asm/USA/fdat012/nonmatchings/fdat012", func_801C50EC);

void func_801C5140(Obj801C4C94 *arg0) {
    arg0->unk36 = 2;
    arg0->unk54 = func_801C509C;
    arg0->unk58 = func_801C4E80;
    arg0->unk50 = NULL;
    arg0->unk5C = func_801C50EC;
    if (arg0->unk54 != NULL) {
        arg0->unk54(arg0, 0);
    }
    func_8004E98C(&arg0->unk64, 0, 0, 0);
}

INCLUDE_ASM("asm/USA/fdat012/nonmatchings/fdat012", func_801C51B8);

void func_801C52B8(Obj801C4C94 *arg0) {
    Obj801C52B8 *sub;
    Elem801C52B8 *elem;
    Sub801C4E00 *info;
    s32 ret;
    u16 saved;
    s32 idx;

    if (arg0->unk60 != NULL) {
        sub = arg0->unk60->unk20;
        sub->unk1F8 += 0x40;
        sub->unk216 |= 1;
    }
    arg0->unk148 = 0;
    if (arg0->unk40 != 0xFF) {
        if (arg0->unk40 == 0) {
            elem = &D_80198B08[arg0->unkFE];
            elem->unk1C &= 0x7FFF;
            elem->unk0.unk0 = arg0->unk8.unk0;
            elem->unk0.unk2 = arg0->unk8.unk2;
            elem->unk0.unk4 = arg0->unk8.unk4;
            elem->unk8.unk0 = arg0->unk10.unk0;
            elem->unk8.unk2 = arg0->unk10.unk2;
            elem->unk8.unk4 = arg0->unk10.unk4;
        }
        if (func_800754D0(arg0, D_801C7C18) != 0) {
            func_80078E1C(arg0);
        }
    } else {
        if (arg0->unk7C == 0) {
            ret = func_801C51B8(arg0);
            if (ret != 0) {
                arg0->unk10.unk2 = func_800132CC(arg0->unk10.unk2, arg0->unk78, 0x20);
                arg0->unk7C = 0;
                if (func_800148E4(arg0->unk10.unk2, arg0->unk78, 0x20) != 0 && arg0->unk3F == 0) {
                    saved = arg0->unk78;
                    info = arg0->unk0;
                    arg0->unk78 = 0;
                    arg0->unk3E = arg0->unk3E == 0;
                    idx = arg0->unk3E * 2;
                    func_80077B78(arg0, 0x17, info->unk1C, info->unk20, D_801C7C3C, 1, idx, idx + 1, 0, 0, ret);
                    arg0->unk3F = 0x3C;
                    arg0->unk148 = 0xF;
                    arg0->unk14A = 0xB4;
                    arg0->unk14B = 0xA0;
                    arg0->unk78 = saved;
                    arg0->unk14C = 0x8C;
                }
            }
        }
        if (arg0->unk3F != 0) {
            arg0->unk3F--;
        }
    }
}

INCLUDE_ASM("asm/USA/fdat012/nonmatchings/fdat012", func_801C54E4);

INCLUDE_ASM("asm/USA/fdat012/nonmatchings/fdat012", func_801C5534);

void func_801C5588(Obj801C4C94 *arg0) {
    arg0->unk36 = 2;
    arg0->unk54 = func_801C54E4;
    arg0->unk58 = func_801C52B8;
    arg0->unk50 = NULL;
    arg0->unk5C = func_801C5534;
    if (arg0->unk54 != NULL) {
        arg0->unk54(arg0, 0);
    }
    func_8004E98C(&arg0->unk64, 0, 0, 0);
}

INCLUDE_RODATA("asm/USA/fdat012/nonmatchings/fdat012", D_801C4B40);

INCLUDE_ASM("asm/USA/fdat012/nonmatchings/fdat012", func_801C5600);

INCLUDE_ASM("asm/USA/fdat012/nonmatchings/fdat012", func_801C59E8);

INCLUDE_ASM("asm/USA/fdat012/nonmatchings/fdat012", func_801C5C40);

INCLUDE_ASM("asm/USA/fdat012/nonmatchings/fdat012", func_801C5D48);

INCLUDE_ASM("asm/USA/fdat012/nonmatchings/fdat012", func_801C5F54);

INCLUDE_ASM("asm/USA/fdat012/nonmatchings/fdat012", func_801C5FB4);

INCLUDE_ASM("asm/USA/fdat012/nonmatchings/fdat012", func_801C621C);

INCLUDE_ASM("asm/USA/fdat012/nonmatchings/fdat012", func_801C63A0);

void func_801C6454(View801C6454 *arg0) {
    Elem801C70E8 *p;
    Sub8006D4BC *t;
    u8 *tbl;
    s32 speed;
    Sub801C4C94 vec;
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
        if (func_800754D0(arg0, D_801C7D88) != 0) {
            func_80078E1C(arg0);
        }
        return;
    }
    if (arg0->unk44 == 0) {
        arg0->unk42++;
        p = &D_801C7CA8[arg0->unk42];
        arg0->unk44 = p->unk8;
        if (p->unkB != 0xFF) {
            switch (D_8019F518) {
            case 6:
                tbl = D_801C7DB0;
                break;
            case 8:
                tbl = D_801C7DB4;
                break;
            case 21:
                tbl = D_801C7DB8;
                break;
            case 26:
                tbl = D_801C7DBC;
                break;
            case 36:
                tbl = D_801C7DC0;
                break;
            default:
                tbl = D_801C7DAC;
                break;
            }
            func_800529F0(0, 0, tbl[p->unkB]);
        }
        if (p->unkE != 0) {
            func_8004D178(p->unkE, NULL, 0x7F, 0x7F, 0);
        }
    } else {
        p = &D_801C7CA8[arg0->unk42];
    }
    func_80014728(arg0->unk10.unk2, &vec);
    speed = ((p[-1].unk4 - p->unk4) * arg0->unk44) / p->unk8 + p->unk4;
    arg0->unk8.unk0 += (vec.unk0 * speed) >> 12;
    arg0->unk8.unk4 += (vec.unk4 * speed) >> 12;
    arg0->unk8.unk2 += ((p[-1].unk2 - p->unk2) * arg0->unk44) / p->unk8 + p->unk2;
    arg0->unk10.unk6 = func_8006E6B4(arg0->unk10.unk6, &arg0->unk8);
    func_8004CC30(0x85, D_801A5DC0->unk1000, &arg0->unk8,
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
            func_8004D178(0x86, D_801A5DC0->unk1100, 0x7F, 0x7F, 0);
        }
        break;
    case 4:
        func_8004E98C(&arg0->unk64, 2, -1, 0);
        func_8004ECA8(&arg0->unk64);
        if (func_8004EBF8(&arg0->unk64) == 0) {
            func_8004D178(0x86, D_801A5DC0->unk1100, 0x7F, 0x7F, 0);
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

INCLUDE_ASM("asm/USA/fdat012/nonmatchings/fdat012", func_801C6A58);

INCLUDE_ASM("asm/USA/fdat012/nonmatchings/fdat012", func_801C6AD4);

void func_801C6BEC(Obj801C4C94 *arg0) {
    arg0->unk36 = 0;
    func_8004E98C(&arg0->unk64, 0, 0, 0);
}

INCLUDE_ASM("asm/USA/fdat012/nonmatchings/fdat012", func_801C6C1C);

void func_801C6E74(Obj801C5B1C *arg0) {
    arg0->unk2C = func_80072120(0);
    arg0->unk2C->unk4 = func_801C6C1C;
}

s32 func_801C6EB0(Obj801C5B1C *arg0, s32 arg1, Elem801C6EB0 **arg2, ...) {
    Sub801C6EB0 *data;

    if (arg1 == 0x8100) {
        if (((*arg2)->unkC & 7) == 2) {
            data = arg0->unk38;
            func_8008A0B0(data->unk0, data->unk1, data->unk2, data->unk4, data->unk5);
            if (arg0->unk38->unk6 == 1) {
                arg0->unk2C = NULL;
            }
            return 1;
        }
    }
    return 0;
}

void func_801C6F48(Obj801C5B1C *arg0) {
    s32 unused[36];

    arg0->unk2C = func_80072120(0);
    arg0->unk2C->unk4 = func_801C6EB0;
}

INCLUDE_ASM("asm/USA/fdat012/nonmatchings/fdat012", func_801C6F84);

void func_801C7120(Obj801C7120 *arg0) {
    Sub801C5F98 *task;

    task = func_80073674(1);
    arg0->unk14 = task;
    task->unk0 = func_801C6F84;
}

INCLUDE_ASM("asm/USA/fdat012/nonmatchings/fdat012", func_801C715C);

INCLUDE_ASM("asm/USA/fdat012/nonmatchings/fdat012", func_801C729C);

void func_801C72E4(Obj801C7120 *arg0) {
    Sub801C5F98 *task;

    if (func_801C729C(arg0->unk22, arg0->unk24) != 0 && func_801C729C(arg0->unk2A, arg0->unk2C) != 0) {
        task = func_80073674(4);
        arg0->unk14 = task;
        task->unk4 = func_801C715C;
    } else {
        arg0->unk6 = -1;
    }
}

void func_801C7358(Obj801C5F00 *arg0) {
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

void func_801C73BC(Obj801C5F00 *arg0) {
    u8 num;
    s32 count;
    Elem801C52B8 *elem;

    num = arg0->unk23;
    if (num != 0) {
        count = num;
        elem = &D_80198B08[arg0->unk24];
        do {
            if (elem->unk0.unk6 != -1) {
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

void func_801C7434(Obj801C7120 *arg0) {
    Sub801C5F98 *task;

    task = func_80073674(0);
    arg0->unk14 = task;
    switch (arg0->unk22) {
    case 0:
        task->unk0 = func_801C7358;
        break;
    case 1:
        task->unk0 = func_801C73BC;
        break;
    }
}

INCLUDE_ASM("asm/USA/fdat012/nonmatchings/fdat012", func_801C74A0);

void func_801C7580(Obj801C7120 *arg0) {
    Sub801C5F98 *task;

    task = func_80073674(0);
    arg0->unk14 = task;
    task->unk0 = func_801C74A0;
}

INCLUDE_ASM("asm/USA/fdat012/nonmatchings/fdat012", func_801C75BC);

void func_801C78D8(Obj801C7120 *arg0) {
    Sub801C5F98 *task;

    task = func_80073674(0);
    arg0->unk14 = task;
    task->unk0 = func_801C75BC;
}

void func_801C7914(void) {
}

s32 func_801C791C(s32 arg0) {
    if (D_8019F528 == 0 && arg0 == 0) {
        func_800529F0(0, 0, 0x6A);
        D_801C7DE4 = 1;
    }
    return 1;
}

void func_801C7960(void) {
    D_801AC80C = 0;
    func_80078B14(&D_8019FB68.unk2CC0, &D_8019FB68);
    D_8019F51C->unk20[D_8019FB68.unk2CC0.unkE](&D_8019FB68.unk2CC0);
    func_8008A778(0x1EF0, 0x100, 0x8B);
}

INCLUDE_ASM("asm/USA/fdat012/nonmatchings/fdat012", func_801C79D4);

void func_801C7B90(s32 *arg0) {
    Elem801C7B90 *elem;
    s32 i;

    elem = D_8019FB94;
    i = 0xFB;
    do {
        if (elem->unk0 == 3) {
            *arg0 += 0x320;
        }
        i--;
        elem++;
    } while (i != 0);
}
