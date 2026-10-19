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

INCLUDE_ASM("asm/USA/fdat012/nonmatchings/fdat012", func_801C6454);

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

INCLUDE_ASM("asm/USA/fdat012/nonmatchings/fdat012", func_801C6EB0);

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
