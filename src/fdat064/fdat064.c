#include "common.h"
#include "fdat064.h"

INCLUDE_ASM("asm/USA/fdat064/nonmatchings/fdat064", func_801C4DF4);

void func_801C4ED4(Obj801C4EB8 *arg0) {
    func_8004ECA8(&arg0->unk64);
    if (--arg0->unk64.unk2 == 0) {
        if (arg0->unk50 != NULL) {
            arg0->unk50(arg0, arg0->unk41);
        }
    }
    arg0->unkCC += arg0->unkCE;
}

void func_801C4F4C(Obj801C4F4C *arg0) {
    func_801C4ED4(arg0);
    if (arg0->unkCC.unk0 >= 0x19) {
        arg0->unkCC.unk0 = 0x18;
    }
    arg0->unk10.unk2 += arg0->unkCC.unk0;
}

void func_801C4FA0(Obj801C4FA0 *arg0) {
    func_801C4ED4((Obj801C4EB8 *)arg0);
    if (arg0->unkCC < -0x18) {
        arg0->unkCC = -0x18;
    }
    arg0->unk12 += arg0->unkCC;
}

INCLUDE_RODATA("asm/USA/fdat064/nonmatchings/fdat064", D_801C4B40);

INCLUDE_ASM("asm/USA/fdat064/nonmatchings/fdat064", func_801C4FF4);

INCLUDE_ASM("asm/USA/fdat064/nonmatchings/fdat064", func_801C5144);

INCLUDE_ASM("asm/USA/fdat064/nonmatchings/fdat064", func_801C52B8);

INCLUDE_ASM("asm/USA/fdat064/nonmatchings/fdat064", func_801C559C);

INCLUDE_ASM("asm/USA/fdat064/nonmatchings/fdat064", func_801C56C4);

void func_801C5994(s32 arg0, s32 arg1) {
    Sub801C4C94 vec;

    vec.unk0 = func_80014D78(100) - 50;
    vec.unk4 = func_80014D78(100) - 50;
    vec.unk2 = 0;
    func_800759A4(arg0, arg1, &vec);
}

INCLUDE_ASM("asm/USA/fdat064/nonmatchings/fdat064", func_801C59F8);

INCLUDE_ASM("asm/USA/fdat064/nonmatchings/fdat064", func_801C5C18);

INCLUDE_ASM("asm/USA/fdat064/nonmatchings/fdat064", func_801C5DA8);

void func_801C5E7C(Obj801C4FA0 *arg0) {
    arg0->unk36 = 2;
    func_801C5DA8();
}

void func_801C5EA0(Obj801C4FA0 *arg0) {
    arg0->unk36 = 1;
    func_801C5DA8();
}

void func_801C5EC4(Elem801C5EA8 *arg0, s32 arg1) {
    s32 count;
    u16 *idx;

    count = arg0->unk26;
    idx = arg0->unk28 + 1;
    do {
        arg0->unk2C->unk10 = arg1;
        if (arg1 == 4) {
            arg0->unk38->unk6 = 0;
        }
        arg0 = &D_801D0B68[*idx++];
        count--;
    } while (count != 0);
}

INCLUDE_ASM("asm/USA/fdat064/nonmatchings/fdat064", func_801C5F14);

void func_801C6030(Obj801C4EB8 *arg0) {
    func_80012794(&arg0->unk22, arg0->unk16, arg0->unk18, 0, D_801A26C0, D_801A26E0, D_801A26E2);
}

INCLUDE_ASM("asm/USA/fdat064/nonmatchings/fdat064", func_801C6080);

INCLUDE_ASM("asm/USA/fdat064/nonmatchings/fdat064", func_801C6340);

INCLUDE_ASM("asm/USA/fdat064/nonmatchings/fdat064", func_801C6414);

INCLUDE_ASM("asm/USA/fdat064/nonmatchings/fdat064", func_801C6520);

void func_801C6778(Obj801C4FA0 *arg0) {
    Sub801C6778 *task;

    task = func_80072120(0);
    arg0->unk2C = task;
    task->unk4 = func_801C6520;
}

void func_801C67B4(Obj801C52C0 *arg0) {
    s32 idx;
    s32 n;

    if (D_801A26CE == arg0->unk2C->unk10) {
        idx = arg0->unk38->unk6;
        if (idx != 0) {
            n = arg0->unk38->unk8;
            for (n--; n != -1; n--) {
                if (D_801D0B94[idx].unk0 != 0) {
                    return;
                }
                idx++;
            }
        }
        if (func_8008A0B0(arg0->unk38->unk0, arg0->unk38->unk1, arg0->unk38->unk2, arg0->unk38->unk4, arg0->unk38->unk5) != 0) {
            arg0->unk2C = NULL;
        }
    }
}

INCLUDE_ASM("asm/USA/fdat064/nonmatchings/fdat064", func_801C6874);

INCLUDE_ASM("asm/USA/fdat064/nonmatchings/fdat064", func_801C68C8);

void func_801C69F0(Obj801C4FA0 *arg0) {
    Sub801C6778 *task;

    task = func_80072120(0);
    arg0->unk2C = task;
    task->unk0 = func_801C68C8;
}

INCLUDE_ASM("asm/USA/fdat064/nonmatchings/fdat064", func_801C6A2C);

void func_801C6F04(Obj801C6F04 *arg0) {
    Sub801C6F04 *task;

    task = func_80073674(4);
    arg0->unk14 = task;
    task->unk0 = func_801C6A2C;
    if (arg0->unk28 == 0xFF) {
        arg0->unk14->unk8 = -1;
        return;
    }
    arg0->unk14->unk8 = func_80014D78(arg0->unk28);
}

void func_801C6F70(void) {
}

void func_801C6F78(void) {
    Elem8019FB68 *p;
    s32 i;

    func_8008A80C();
    if (D_801C713E == 0 && (D_801C713C++ & 0xF) == 0) {
        i = 0xFC;
        p = D_8019FB68;
        do {
            if (p->unkA != -1 && p->unk0 != 3) {
                return;
            }
            i--;
            p++;
        } while (i != 0);
        func_800529F0(0, 0, 0x68);
        func_8004C318(0x80);
        D_801C713E = 1;
    }
}
