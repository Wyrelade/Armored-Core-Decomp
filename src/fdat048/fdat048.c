#include "common.h"
#include "fdat048.h"

void func_801C52C0(Obj801C52C0 *arg0) {
    if (arg0->unk100 == 1) {
        arg0->unk36 = 1;
        arg0->unk58 = func_801C9648;
        arg0->unk5C = func_801C9B58;
        func_8004E98C(&arg0->unk64, 0, 0, 0);
        return;
    }
    arg0->unk36 = 0x102;
    arg0->unk108 = &D_801CB524;
    func_801CB4D8(arg0);
}

INCLUDE_ASM("asm/USA/fdat048/nonmatchings/fdat048", func_801C5340);

INCLUDE_ASM("asm/USA/fdat048/nonmatchings/fdat048", func_801C53E0);

INCLUDE_ASM("asm/USA/fdat048/nonmatchings/fdat048", func_801C5444);

INCLUDE_ASM("asm/USA/fdat048/nonmatchings/fdat048", func_801C54BC);

void func_801C5680(Obj801C52C0 *arg0) {
    s32 unused[36];
    Sub801C5578 *task;
    u16 temp;

    task = func_80072120(0xC);
    arg0->unk2C = task;
    task->unk0 = func_801C54BC;
    task->unk4 = func_801C53E0;
    temp = arg0->unk38->unk7;
    task->unk12 = 0;
    task->unk10 = temp;
    task->unk16 = arg0->unk38->unk0 << 5;
    temp = arg0->unk38->unk0;
    task->unk1A = 0;
    task->unk14 = temp;
    task->unk18 = (s16)temp * 17;
}

void func_801C571C(Obj801C52C0 *arg0) {
    Sub801C5578 *task;

    task = func_80072120(0);
    arg0->unk2C = task;
    task->unk4 = func_801C5444;
}

INCLUDE_ASM("asm/USA/fdat048/nonmatchings/fdat048", func_801C5758);

void func_801C583C(Obj801C52C0 *arg0) {
    Sub801C5578 *task;

    task = func_80072120(0);
    arg0->unk2C = task;
    task->unk0 = func_801C5758;
}

INCLUDE_ASM("asm/USA/fdat048/nonmatchings/fdat048", func_801C5878);

INCLUDE_ASM("asm/USA/fdat048/nonmatchings/fdat048", func_801C59B8);

void func_801C5A00(Obj801C572C *arg0) {
    Sub801C5B54 *task;

    if (func_801C59B8(arg0->unk22, arg0->unk24) != 0 && func_801C59B8(arg0->unk2A, arg0->unk2C) != 0) {
        task = func_80073674(4);
        arg0->unk14 = task;
        task->unk4 = func_801C5878;
        return;
    }
    arg0->unk6 = -1;
}

INCLUDE_ASM("asm/USA/fdat048/nonmatchings/fdat048", func_801C5A74);

void func_801C5B54(Obj801C5B54 *arg0) {
    Sub801C5B54 *task;

    task = func_80073674(0);
    arg0->unk14 = task;
    task->unk0 = func_801C5A74;
}

INCLUDE_ASM("asm/USA/fdat048/nonmatchings/fdat048", func_801C5B90);

void func_801C5EAC(Obj801C5B54 *arg0) {
    Sub801C5B54 *task;

    task = func_80073674(0);
    arg0->unk14 = task;
    task->unk0 = func_801C5B90;
}

void func_801C5EE8(void) {
}

INCLUDE_ASM("asm/USA/fdat048/nonmatchings/fdat048", func_801C5EF0);

INCLUDE_ASM("asm/USA/fdat048/nonmatchings/fdat048", func_801C5F40);

INCLUDE_ASM("asm/USA/fdat048/nonmatchings/fdat048", func_801C5FC0);

INCLUDE_ASM("asm/USA/fdat048/nonmatchings/fdat048", func_801C5FE8);

INCLUDE_ASM("asm/USA/fdat048/nonmatchings/fdat048", func_801C6054);

INCLUDE_ASM("asm/USA/fdat048/nonmatchings/fdat048", func_801C6070);

INCLUDE_ASM("asm/USA/fdat048/nonmatchings/fdat048", func_801C6090);

INCLUDE_ASM("asm/USA/fdat048/nonmatchings/fdat048", func_801C60AC);

INCLUDE_ASM("asm/USA/fdat048/nonmatchings/fdat048", func_801C60C8);

INCLUDE_ASM("asm/USA/fdat048/nonmatchings/fdat048", func_801C60E8);

INCLUDE_ASM("asm/USA/fdat048/nonmatchings/fdat048", func_801C6104);

INCLUDE_ASM("asm/USA/fdat048/nonmatchings/fdat048", func_801C6124);

INCLUDE_ASM("asm/USA/fdat048/nonmatchings/fdat048", func_801C61C0);

INCLUDE_ASM("asm/USA/fdat048/nonmatchings/fdat048", func_801C6378);

INCLUDE_ASM("asm/USA/fdat048/nonmatchings/fdat048", func_801C6644);

INCLUDE_ASM("asm/USA/fdat048/nonmatchings/fdat048", func_801C6930);

INCLUDE_ASM("asm/USA/fdat048/nonmatchings/fdat048", func_801C6C34);

INCLUDE_ASM("asm/USA/fdat048/nonmatchings/fdat048", func_801C6F24);

INCLUDE_ASM("asm/USA/fdat048/nonmatchings/fdat048", func_801C70D8);

INCLUDE_ASM("asm/USA/fdat048/nonmatchings/fdat048", func_801C73B4);

INCLUDE_ASM("asm/USA/fdat048/nonmatchings/fdat048", func_801C74BC);

INCLUDE_ASM("asm/USA/fdat048/nonmatchings/fdat048", func_801C758C);

INCLUDE_ASM("asm/USA/fdat048/nonmatchings/fdat048", func_801C769C);

INCLUDE_ASM("asm/USA/fdat048/nonmatchings/fdat048", func_801C7864);

INCLUDE_ASM("asm/USA/fdat048/nonmatchings/fdat048", func_801C7BF0);

INCLUDE_ASM("asm/USA/fdat048/nonmatchings/fdat048", func_801C7C50);

INCLUDE_ASM("asm/USA/fdat048/nonmatchings/fdat048", func_801C7CAC);

INCLUDE_ASM("asm/USA/fdat048/nonmatchings/fdat048", func_801C7D08);

INCLUDE_ASM("asm/USA/fdat048/nonmatchings/fdat048", func_801C7F48);

INCLUDE_ASM("asm/USA/fdat048/nonmatchings/fdat048", func_801C84A8);

INCLUDE_ASM("asm/USA/fdat048/nonmatchings/fdat048", func_801C8734);

INCLUDE_ASM("asm/USA/fdat048/nonmatchings/fdat048", func_801C8F08);

INCLUDE_ASM("asm/USA/fdat048/nonmatchings/fdat048", func_801C9278);

INCLUDE_ASM("asm/USA/fdat048/nonmatchings/fdat048", func_801C95F4);

INCLUDE_ASM("asm/USA/fdat048/nonmatchings/fdat048", func_801C9648);

INCLUDE_ASM("asm/USA/fdat048/nonmatchings/fdat048", func_801C9B58);

INCLUDE_ASM("asm/USA/fdat048/nonmatchings/fdat048", func_801C9EA4);

INCLUDE_ASM("asm/USA/fdat048/nonmatchings/fdat048", func_801C9F44);

INCLUDE_ASM("asm/USA/fdat048/nonmatchings/fdat048", func_801CA080);

INCLUDE_ASM("asm/USA/fdat048/nonmatchings/fdat048", func_801CA1A8);

INCLUDE_ASM("asm/USA/fdat048/nonmatchings/fdat048", func_801CB4D8);
