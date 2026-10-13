#include "common.h"
#include "fdat096.h"

void func_801C52C0(Obj801C52C0 *arg0) {
    arg0->unk36 = 2;
    arg0->unk108 = &D_801CC098;
    func_801CC04C(arg0);
}

void func_801C52F0(Obj801C52C0 *arg0) {
    arg0->unk36 = 2;
    arg0->unk108 = &D_801CC5DC[arg0->unk100];
    func_801CC04C(arg0);
}

void func_801C5344(Obj801C52C0 *arg0) {
    arg0->unk36 = 0x102;
    arg0->unk108 = &D_801CD5A8;
    func_801CC04C(arg0);
}

INCLUDE_ASM("asm/USA/fdat096/nonmatchings/fdat096", func_801C5374);

INCLUDE_ASM("asm/USA/fdat096/nonmatchings/fdat096", func_801C53C4);

INCLUDE_ASM("asm/USA/fdat096/nonmatchings/fdat096", func_801C54E0);

INCLUDE_ASM("asm/USA/fdat096/nonmatchings/fdat096", func_801C5530);

INCLUDE_ASM("asm/USA/fdat096/nonmatchings/fdat096", func_801C57F0);

INCLUDE_ASM("asm/USA/fdat096/nonmatchings/fdat096", func_801C58C4);

INCLUDE_ASM("asm/USA/fdat096/nonmatchings/fdat096", func_801C59D0);

INCLUDE_ASM("asm/USA/fdat096/nonmatchings/fdat096", func_801C5A70);

INCLUDE_ASM("asm/USA/fdat096/nonmatchings/fdat096", func_801C5AD4);

INCLUDE_ASM("asm/USA/fdat096/nonmatchings/fdat096", func_801C5B4C);

void func_801C5D10(Obj801C52C0 *arg0) {
    s32 unused[0x24];
    Sub801C5D10 *task;
    u16 val;

    task = func_80072120(0xC);
    arg0->unk2C = task;
    task->unk0 = func_801C5B4C;
    task->unk4 = func_801C5A70;
    task->unk10 = arg0->unk38->unk7;
    task->unk12 = 0;
    task->unk16 = arg0->unk38->unk0 << 5;
    val = arg0->unk38->unk0;
    task->unk1A = 0;
    task->unk14 = val;
    task->unk18 = (s16)val * 0x11;
}

void func_801C5DAC(Obj801C52C0 *arg0) {
    Sub801C5D10 *task;

    task = func_80072120(0);
    arg0->unk2C = task;
    task->unk4 = func_801C5AD4;
}

INCLUDE_ASM("asm/USA/fdat096/nonmatchings/fdat096", func_801C5DE8);

INCLUDE_ASM("asm/USA/fdat096/nonmatchings/fdat096", func_801C605C);

INCLUDE_ASM("asm/USA/fdat096/nonmatchings/fdat096", func_801C623C);

INCLUDE_ASM("asm/USA/fdat096/nonmatchings/fdat096", func_801C63AC);

void func_801C6604(Obj801C52C0 *arg0) {
    Sub801C5D10 *task;

    task = func_80072120(0);
    arg0->unk2C = task;
    task->unk4 = func_801C63AC;
}

INCLUDE_ASM("asm/USA/fdat096/nonmatchings/fdat096", func_801C6640);

void func_801C6768(Obj801C52C0 *arg0) {
    Sub801C5D10 *task;

    task = func_80072120(0);
    arg0->unk2C = task;
    task->unk0 = func_801C6640;
}

void func_801C67A4(void) {
}

INCLUDE_ASM("asm/USA/fdat096/nonmatchings/fdat096", func_801C67AC);

INCLUDE_ASM("asm/USA/fdat096/nonmatchings/fdat096", func_801C68C4);

INCLUDE_ASM("asm/USA/fdat096/nonmatchings/fdat096", func_801C698C);

INCLUDE_ASM("asm/USA/fdat096/nonmatchings/fdat096", func_801C69E4);

INCLUDE_ASM("asm/USA/fdat096/nonmatchings/fdat096", func_801C6A58);

INCLUDE_ASM("asm/USA/fdat096/nonmatchings/fdat096", func_801C6AB4);

INCLUDE_ASM("asm/USA/fdat096/nonmatchings/fdat096", func_801C6B34);

INCLUDE_ASM("asm/USA/fdat096/nonmatchings/fdat096", func_801C6B5C);

INCLUDE_ASM("asm/USA/fdat096/nonmatchings/fdat096", func_801C6BC8);

INCLUDE_ASM("asm/USA/fdat096/nonmatchings/fdat096", func_801C6BE4);

INCLUDE_ASM("asm/USA/fdat096/nonmatchings/fdat096", func_801C6C04);

INCLUDE_ASM("asm/USA/fdat096/nonmatchings/fdat096", func_801C6C20);

INCLUDE_ASM("asm/USA/fdat096/nonmatchings/fdat096", func_801C6C3C);

INCLUDE_ASM("asm/USA/fdat096/nonmatchings/fdat096", func_801C6C5C);

INCLUDE_ASM("asm/USA/fdat096/nonmatchings/fdat096", func_801C6C78);

INCLUDE_ASM("asm/USA/fdat096/nonmatchings/fdat096", func_801C6C98);

INCLUDE_ASM("asm/USA/fdat096/nonmatchings/fdat096", func_801C6D34);

INCLUDE_ASM("asm/USA/fdat096/nonmatchings/fdat096", func_801C6EEC);

INCLUDE_ASM("asm/USA/fdat096/nonmatchings/fdat096", func_801C71B8);

INCLUDE_ASM("asm/USA/fdat096/nonmatchings/fdat096", func_801C74A4);

INCLUDE_ASM("asm/USA/fdat096/nonmatchings/fdat096", func_801C77A8);

INCLUDE_ASM("asm/USA/fdat096/nonmatchings/fdat096", func_801C7A98);

INCLUDE_ASM("asm/USA/fdat096/nonmatchings/fdat096", func_801C7C4C);

INCLUDE_ASM("asm/USA/fdat096/nonmatchings/fdat096", func_801C7F28);

INCLUDE_ASM("asm/USA/fdat096/nonmatchings/fdat096", func_801C8030);

INCLUDE_ASM("asm/USA/fdat096/nonmatchings/fdat096", func_801C8100);

INCLUDE_ASM("asm/USA/fdat096/nonmatchings/fdat096", func_801C8210);

INCLUDE_ASM("asm/USA/fdat096/nonmatchings/fdat096", func_801C83D8);

INCLUDE_ASM("asm/USA/fdat096/nonmatchings/fdat096", func_801C8764);

INCLUDE_ASM("asm/USA/fdat096/nonmatchings/fdat096", func_801C87C4);

INCLUDE_ASM("asm/USA/fdat096/nonmatchings/fdat096", func_801C8820);

INCLUDE_ASM("asm/USA/fdat096/nonmatchings/fdat096", func_801C887C);

INCLUDE_ASM("asm/USA/fdat096/nonmatchings/fdat096", func_801C8ABC);

INCLUDE_ASM("asm/USA/fdat096/nonmatchings/fdat096", func_801C901C);

INCLUDE_ASM("asm/USA/fdat096/nonmatchings/fdat096", func_801C92A8);

INCLUDE_ASM("asm/USA/fdat096/nonmatchings/fdat096", func_801C9A7C);

INCLUDE_ASM("asm/USA/fdat096/nonmatchings/fdat096", func_801C9DEC);

INCLUDE_ASM("asm/USA/fdat096/nonmatchings/fdat096", func_801CA168);

INCLUDE_ASM("asm/USA/fdat096/nonmatchings/fdat096", func_801CA1BC);

INCLUDE_ASM("asm/USA/fdat096/nonmatchings/fdat096", func_801CA6CC);

INCLUDE_ASM("asm/USA/fdat096/nonmatchings/fdat096", func_801CAA18);

INCLUDE_ASM("asm/USA/fdat096/nonmatchings/fdat096", func_801CAAB8);

INCLUDE_ASM("asm/USA/fdat096/nonmatchings/fdat096", func_801CABF4);

INCLUDE_ASM("asm/USA/fdat096/nonmatchings/fdat096", func_801CAD1C);

INCLUDE_ASM("asm/USA/fdat096/nonmatchings/fdat096", func_801CC04C);
