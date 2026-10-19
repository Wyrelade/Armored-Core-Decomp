#include "common.h"
#include "fdat004.h"

INCLUDE_ASM("asm/USA/fdat004/nonmatchings/fdat004", func_801C4D30);

INCLUDE_ASM("asm/USA/fdat004/nonmatchings/fdat004", func_801C4FFC);

INCLUDE_ASM("asm/USA/fdat004/nonmatchings/fdat004", func_801C513C);

void func_801C52A0(Obj801C59E8 *arg0) {
    u8 temp;

    func_80078598(arg0);
    arg0->unk148 = 0;
    arg0->unk15C = 0;
    if (arg0->unk40 != 0xFF) {
        if (func_800754D0(arg0, D_801C7060) != 0) {
            func_80078E1C(arg0);
        }
    } else if (arg0->unk7C == 0 && arg0->unk42 != 0 && func_801C513C(arg0) != 0) {
        arg0->unk7C = 0;
        if ((arg0->unk3C.unk0 & 0xFFFF00) == 0xC000) {
            if (rand() < 0x51F) {
                arg0->unk3C.unk0_b[2] = 5;
            }
        } else {
            temp = arg0->unk3C.unk0_b[3];
            if (temp == 0) {
                func_80077B78(arg0, 0x17, arg0->unk0->unk1C, arg0->unk0->unk20, D_801C7084, 1, 0, 1);
                arg0->unk3C.unk0_b[3] = 1;
                arg0->unk148 = 0xF;
                arg0->unk14A = 0xB4;
                arg0->unk14B = 0xA0;
                arg0->unk14C = 0x8C;
                arg0->unk15C = 1;
                arg0->unk3C.unk0_b[2]--;
                return;
            }
            arg0->unk3C.unk0_b[3] = temp - 1;
        }
    }
}

void func_801C53F4(s32 arg0, s32 arg1) {
    Sub801C4C94 vec;

    vec.unk0 = func_80014D78(2000) - 1000;
    vec.unk4 = func_80014D78(2000) - 1000;
    vec.unk2 = -func_80014D78(2000);
    func_800759A4(arg0, arg1, &vec);
}

void func_801C5464(s32 arg0, s32 arg1) {
    Sub801C4C94 vec;

    vec.unk0 = func_80014DAC(2000);
    vec.unk4 = func_80014DAC(2000);
    vec.unk2 = -func_80014D30(1000);
    func_80075A18(arg0, arg1, &vec);
}

void func_801C54CC(s32 arg0, s32 arg1) {
    Sub801C4C94 vec;

    vec.unk0 = func_80014DAC(2000);
    vec.unk4 = func_80014DAC(2000);
    vec.unk2 = -func_80014D30(1000);
    func_80075A54(arg0, arg1, &vec);
}

INCLUDE_RODATA("asm/USA/fdat004/nonmatchings/fdat004", D_801C4B40);

INCLUDE_ASM("asm/USA/fdat004/nonmatchings/fdat004", func_801C5534);

INCLUDE_ASM("asm/USA/fdat004/nonmatchings/fdat004", func_801C58AC);

void func_801C59E8(Obj801C59E8 *arg0) {
    arg0->unk36 = 2;
    arg0->unk50 = func_801C4FFC;
    arg0->unk54 = func_801C5534;
    arg0->unk58 = func_801C52A0;
    arg0->unk5C = func_801C58AC;
    arg0->unk42 = 0;
    arg0->unk164 *= 4;
    arg0->unk44 = func_80073904();
    if (arg0->unk54 != NULL) {
        arg0->unk54(arg0, 0);
    }
    if (arg0->unk50 != NULL) {
        arg0->unk50(arg0, arg0->unk41);
    }
}

INCLUDE_ASM("asm/USA/fdat004/nonmatchings/fdat004", func_801C5A90);

INCLUDE_ASM("asm/USA/fdat004/nonmatchings/fdat004", func_801C5B70);

INCLUDE_ASM("asm/USA/fdat004/nonmatchings/fdat004", func_801C5D8C);

INCLUDE_ASM("asm/USA/fdat004/nonmatchings/fdat004", func_801C5DDC);

void func_801C5E30(Obj801C59E8 *arg0) {
    arg0->unk36 = 2;
    arg0->unk54 = func_801C5D8C;
    arg0->unk58 = func_801C5B70;
    arg0->unk50 = NULL;
    arg0->unk5C = func_801C5DDC;
    if (arg0->unk54 != NULL) {
        arg0->unk54(arg0, 0);
    }
    func_8004E98C(&arg0->unk64, 0, 0, 0);
}

INCLUDE_ASM("asm/USA/fdat004/nonmatchings/fdat004", func_801C5EA8);

INCLUDE_ASM("asm/USA/fdat004/nonmatchings/fdat004", func_801C64AC);

INCLUDE_ASM("asm/USA/fdat004/nonmatchings/fdat004", func_801C6528);

INCLUDE_ASM("asm/USA/fdat004/nonmatchings/fdat004", func_801C6640);

void func_801C66D8(Obj801C66D8 *arg0) {
    s32 unused[36];

    arg0->unk2C = func_80072120(0);
    arg0->unk2C->unk0 = func_801C6640;
    arg0->unk2C->unk4 = NULL;
}

void func_801C6720(Obj801C6720 *arg0) {
    arg0->unkA += 0x20;
}

void func_801C6734(Obj801C6734 *arg0) {
    Sub801C5FDC *task;

    task = func_80073674(0);
    arg0->unk14 = task;
    task->unk0 = func_801C6720;
}

INCLUDE_ASM("asm/USA/fdat004/nonmatchings/fdat004", func_801C6770);

void func_801C690C(Obj801C6734 *arg0) {
    Sub801C5FDC *task;

    task = func_80073674(1);
    arg0->unk14 = task;
    task->unk0 = func_801C6770;
}

INCLUDE_ASM("asm/USA/fdat004/nonmatchings/fdat004", func_801C6948);

void func_801C6A28(Obj801C6734 *arg0) {
    Sub801C5FDC *task;

    task = func_80073674(0);
    arg0->unk14 = task;
    task->unk0 = func_801C6948;
}

INCLUDE_ASM("asm/USA/fdat004/nonmatchings/fdat004", func_801C6A64);

void func_801C6D80(Obj801C6734 *arg0) {
    Sub801C5FDC *task;

    task = func_80073674(0);
    arg0->unk14 = task;
    task->unk0 = func_801C6A64;
}

void func_801C6DBC(void) {
}

void func_801C6DC4(void) {
    D_801AC80C = 0;
    func_80078B14(&D_8019FB68.unk2CC0, &D_8019FB68);
    D_8019F51C->unk20[D_8019FB68.unk2CC0.unkE](&D_8019FB68.unk2CC0);
    func_80056C6C(1, 0x1FB, 1, 1, 2, 0xD, 1);
}

INCLUDE_ASM("asm/USA/fdat004/nonmatchings/fdat004", func_801C6E54);
