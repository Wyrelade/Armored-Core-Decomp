#include "common.h"
#include "fdat042.h"

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801C54CC);

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801C55AC);

void func_801C5624(Obj801C5624 *arg0) {
    func_801C55AC(arg0);
    if (arg0->unkCC >= 0x19) {
        arg0->unkCC = 0x18;
    }
    arg0->unk12 += arg0->unkCC;
}

void func_801C5678(Obj801C5624 *arg0) {
    func_801C55AC(arg0);
    if (arg0->unkCC < -0x18) {
        arg0->unkCC = -0x18;
    }
    arg0->unk12 += arg0->unkCC;
}

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801C56CC);

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801C581C);

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801C5990);

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801C5C74);

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801C5D9C);

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801C606C);

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801C60D0);

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801C62F0);

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801C6480);

void func_801C6554(Obj801C6554 *arg0) {
    arg0->unk36 = 2;
    func_801C6480(arg0);
}

void func_801C6578(Obj801C6554 *arg0) {
    arg0->unk36 = 1;
    func_801C6480(arg0);
}

void func_801C659C(Obj801C6554 *arg0) {
    arg0->unk36 = 0x102;
    arg0->unk108 = &D_801CCFD8;
    func_801CCEA8(arg0);
}

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801C65CC);

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801C6BD0);

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801C6C4C);

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801C6D64);

void func_801C6E3C(Obj801C6554 *arg0) {
    arg0->unk36 = 1;
    arg0->unk58 = func_801C6D64;
    arg0->unk50 = 0;
    arg0->unk54 = 0;
    arg0->unk5C = 0;
    arg0->unk40 = 0xC8;
    arg0->unk42 = 0;
    arg0->unk44 = 0;
    func_8004E98C(&arg0->unk64, 1, 0, 0);
}

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801C6E98);

void func_801C70F0(Obj801C6554 *arg0) {
    Sub801C70F0 *task;

    task = func_80072120(0);
    arg0->unk2C = task;
    task->unk4 = func_801C6E98;
}

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801C712C);

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801C71EC);

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801C7240);

void func_801C7324(Obj801C6554 *arg0) {
    Sub801C70F0 *task;

    task = func_80072120(0);
    arg0->unk2C = task;
    task->unk0 = func_801C7240;
}

void func_801C7360(Obj801C7360 *arg0) {
    arg0->unk8 += arg0->unk22;
    arg0->unkA += arg0->unk24;
    arg0->unkC += arg0->unk26;
}

void func_801C7394(Obj801C7394 *arg0) {
    Sub801C7394 *task;

    task = func_80073674(0);
    arg0->unk14 = task;
    task->unk0 = func_801C7360;
}

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801C73D0);

void func_801C74B0(Obj801C7394 *arg0) {
    Sub801C7394 *task;

    task = func_80073674(0);
    arg0->unk14 = task;
    task->unk0 = func_801C73D0;
}

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801C74EC);

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801C7808);

void func_801C7844(void) {
}

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801C784C);

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801C78B0);

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801C7910);

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801C7990);

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801C79B8);

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801C7A24);

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801C7A40);

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801C7A60);

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801C7A7C);

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801C7A98);

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801C7AB8);

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801C7AD4);

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801C7AF4);

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801C7B90);

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801C7D48);

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801C8014);

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801C8300);

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801C8604);

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801C88F4);

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801C8AA8);

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801C8D84);

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801C8E8C);

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801C8F5C);

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801C906C);

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801C9234);

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801C95C0);

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801C9620);

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801C967C);

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801C96D8);

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801C9918);

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801C9E78);

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801CA104);

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801CA8D8);

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801CAC48);

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801CAFC4);

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801CB018);

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801CB528);

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801CB874);

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801CB914);

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801CBA50);

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801CBB78);

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801CCEA8);
