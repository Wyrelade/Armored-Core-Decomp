#include "common.h"
#include "fdat036.h"

INCLUDE_ASM("asm/USA/fdat036/nonmatchings/fdat036", func_801C4DBC);

INCLUDE_ASM("asm/USA/fdat036/nonmatchings/fdat036", func_801C4FAC);

INCLUDE_ASM("asm/USA/fdat036/nonmatchings/fdat036", func_801C5094);

INCLUDE_ASM("asm/USA/fdat036/nonmatchings/fdat036", func_801C51A4);

INCLUDE_ASM("asm/USA/fdat036/nonmatchings/fdat036", func_801C5208);

INCLUDE_ASM("asm/USA/fdat036/nonmatchings/fdat036", func_801C5404);

void func_801C5458(Obj801C52C0 *arg0) {
    arg0->unk36 = 2;
    arg0->unk50 = func_801C4DBC;
    arg0->unk54 = func_801C5208;
    arg0->unk58 = func_801C5094;
    arg0->unk5C = func_801C5404;
    arg0->unk42 = 1;
    arg0->unk44 = func_80073904();
    if (arg0->unk54 != NULL) {
        arg0->unk54(arg0, 0);
    }
    if (arg0->unk50 != NULL) {
        arg0->unk50(arg0, arg0->unk41);
    }
    arg0->unk64.unk18 = -1;
}

INCLUDE_ASM("asm/USA/fdat036/nonmatchings/fdat036", func_801C5500);

INCLUDE_ASM("asm/USA/fdat036/nonmatchings/fdat036", func_801C56F8);

INCLUDE_ASM("asm/USA/fdat036/nonmatchings/fdat036", func_801C57F0);

INCLUDE_ASM("asm/USA/fdat036/nonmatchings/fdat036", func_801C58D4);

INCLUDE_ASM("asm/USA/fdat036/nonmatchings/fdat036", func_801C5B38);

INCLUDE_ASM("asm/USA/fdat036/nonmatchings/fdat036", func_801C5B9C);

INCLUDE_ASM("asm/USA/fdat036/nonmatchings/fdat036", func_801C5DA8);

INCLUDE_ASM("asm/USA/fdat036/nonmatchings/fdat036", func_801C5E90);

INCLUDE_ASM("asm/USA/fdat036/nonmatchings/fdat036", func_801C5F68);

INCLUDE_ASM("asm/USA/fdat036/nonmatchings/fdat036", func_801C5F98);

void func_801C61AC(Obj801C52C0 *arg0, u8 arg1) {
    u8 saved;

    saved = arg1;
    if (arg0->unk36 & 0x10) {
        saved = arg0->unk3C;
    }
    D_801A5DC8 = 0;
    func_800775B8(arg0, 0, 1, 0, &arg0->unkCC, func_801C5F98);
    if (!(arg0->unk36 & 0x10)) {
        arg0->unk3C = saved;
    }
}

void func_801C6238(void) {
    func_80078598();
}

void func_801C6258(Obj801C52C0 *arg0) {
    s32 s;
    s32 sum;
    s32 t;

    func_801C6238();
    arg0->unk148 = 0xF;
    arg0->unkFC += 0x40;
    arg0->unkFE += 0x30;
    s = rsin(arg0->unkFC);
    sum = s + rsin(arg0->unkFE) + 0x2000;
    t = sum >> 2;
    LoadAverageCol(D_801C7348, D_801C734C, t, 0x1000 - t, arg0->unk14A);
    func_80056B54(arg0, &arg0->unk8, 0, arg0->unk16, 0xFFFF, D_801C734C, sum >> 4);
}

INCLUDE_ASM("asm/USA/fdat036/nonmatchings/fdat036", func_801C6320);

INCLUDE_ASM("asm/USA/fdat036/nonmatchings/fdat036", func_801C6390);

INCLUDE_ASM("asm/USA/fdat036/nonmatchings/fdat036", func_801C63F8);

INCLUDE_ASM("asm/USA/fdat036/nonmatchings/fdat036", func_801C6460);

INCLUDE_ASM("asm/USA/fdat036/nonmatchings/fdat036", func_801C6594);

void func_801C6618(Obj801C52C0 *arg0) {
    func_801C6594();
    arg0->unk58 = func_801C6258;
    arg0->unkFC = rand() & 0xFFF;
    arg0->unkFE = rand() & 0xFFF;
}

void func_801C6664(void) {
    func_801C6594();
}

INCLUDE_ASM("asm/USA/fdat036/nonmatchings/fdat036", func_801C6684);

INCLUDE_ASM("asm/USA/fdat036/nonmatchings/fdat036", func_801C66A4);

INCLUDE_ASM("asm/USA/fdat036/nonmatchings/fdat036", func_801C66F4);

INCLUDE_ASM("asm/USA/fdat036/nonmatchings/fdat036", func_801C6810);

INCLUDE_ASM("asm/USA/fdat036/nonmatchings/fdat036", func_801C6860);

INCLUDE_ASM("asm/USA/fdat036/nonmatchings/fdat036", func_801C6B20);

INCLUDE_ASM("asm/USA/fdat036/nonmatchings/fdat036", func_801C6BF4);

INCLUDE_ASM("asm/USA/fdat036/nonmatchings/fdat036", func_801C6D00);

void func_801C6F58(Obj801C52C0 *arg0) {
    Task801C6254 *task;

    task = func_80072120(0);
    arg0->unk2C = task;
    task->unk4 = func_801C6D00;
}

INCLUDE_ASM("asm/USA/fdat036/nonmatchings/fdat036", func_801C6F94);

INCLUDE_ASM("asm/USA/fdat036/nonmatchings/fdat036", func_801C7054);

void func_801C70A8(void) {
}

INCLUDE_ASM("asm/USA/fdat036/nonmatchings/fdat036", func_801C70B0);

INCLUDE_ASM("asm/USA/fdat036/nonmatchings/fdat036", func_801C70F0);

INCLUDE_ASM("asm/USA/fdat036/nonmatchings/fdat036", func_801C71D8);
