#include "common.h"
#include "fdat020.h"

void func_801C52C0(Obj801C52C0 *arg0) {
    arg0->unk36 = 0x102;
    arg0->unk108 = &D_801CAA3C;
    func_801CA9F0(arg0);
}

INCLUDE_ASM("asm/USA/fdat020/nonmatchings/fdat020", func_801C52F0);

void func_801C53D4(Obj801C53D4 *arg0) {
    Sub801C53D4 *task;

    task = func_80072120(0);
    arg0->unk2C = task;
    task->unk0 = func_801C52F0;
}

void func_801C5410(void) {
}

void func_801C5418(void) {
    if (D_801CAF80 == 0) {
        func_8008C2FC(0x601);
        D_801CAF80 = 1;
    }
    func_8008A80C();
}

INCLUDE_ASM("asm/USA/fdat020/nonmatchings/fdat020", func_801C5458);

INCLUDE_ASM("asm/USA/fdat020/nonmatchings/fdat020", func_801C54D8);

INCLUDE_ASM("asm/USA/fdat020/nonmatchings/fdat020", func_801C5500);

INCLUDE_ASM("asm/USA/fdat020/nonmatchings/fdat020", func_801C556C);

INCLUDE_ASM("asm/USA/fdat020/nonmatchings/fdat020", func_801C5588);

INCLUDE_ASM("asm/USA/fdat020/nonmatchings/fdat020", func_801C55A8);

INCLUDE_ASM("asm/USA/fdat020/nonmatchings/fdat020", func_801C55C4);

INCLUDE_ASM("asm/USA/fdat020/nonmatchings/fdat020", func_801C55E0);

INCLUDE_ASM("asm/USA/fdat020/nonmatchings/fdat020", func_801C5600);

INCLUDE_ASM("asm/USA/fdat020/nonmatchings/fdat020", func_801C561C);

INCLUDE_ASM("asm/USA/fdat020/nonmatchings/fdat020", func_801C563C);

INCLUDE_ASM("asm/USA/fdat020/nonmatchings/fdat020", func_801C56D8);

INCLUDE_ASM("asm/USA/fdat020/nonmatchings/fdat020", func_801C5890);

INCLUDE_ASM("asm/USA/fdat020/nonmatchings/fdat020", func_801C5B5C);

INCLUDE_ASM("asm/USA/fdat020/nonmatchings/fdat020", func_801C5E48);

INCLUDE_ASM("asm/USA/fdat020/nonmatchings/fdat020", func_801C614C);

INCLUDE_ASM("asm/USA/fdat020/nonmatchings/fdat020", func_801C643C);

INCLUDE_ASM("asm/USA/fdat020/nonmatchings/fdat020", func_801C65F0);

INCLUDE_ASM("asm/USA/fdat020/nonmatchings/fdat020", func_801C68CC);

INCLUDE_ASM("asm/USA/fdat020/nonmatchings/fdat020", func_801C69D4);

INCLUDE_ASM("asm/USA/fdat020/nonmatchings/fdat020", func_801C6AA4);

INCLUDE_ASM("asm/USA/fdat020/nonmatchings/fdat020", func_801C6BB4);

INCLUDE_ASM("asm/USA/fdat020/nonmatchings/fdat020", func_801C6D7C);

INCLUDE_ASM("asm/USA/fdat020/nonmatchings/fdat020", func_801C7108);

INCLUDE_ASM("asm/USA/fdat020/nonmatchings/fdat020", func_801C7168);

INCLUDE_ASM("asm/USA/fdat020/nonmatchings/fdat020", func_801C71C4);

INCLUDE_ASM("asm/USA/fdat020/nonmatchings/fdat020", func_801C7220);

INCLUDE_ASM("asm/USA/fdat020/nonmatchings/fdat020", func_801C7460);

INCLUDE_ASM("asm/USA/fdat020/nonmatchings/fdat020", func_801C79C0);

INCLUDE_ASM("asm/USA/fdat020/nonmatchings/fdat020", func_801C7C4C);

INCLUDE_ASM("asm/USA/fdat020/nonmatchings/fdat020", func_801C8420);

INCLUDE_ASM("asm/USA/fdat020/nonmatchings/fdat020", func_801C8790);

INCLUDE_ASM("asm/USA/fdat020/nonmatchings/fdat020", func_801C8B0C);

INCLUDE_ASM("asm/USA/fdat020/nonmatchings/fdat020", func_801C8B60);

INCLUDE_ASM("asm/USA/fdat020/nonmatchings/fdat020", func_801C9070);

INCLUDE_ASM("asm/USA/fdat020/nonmatchings/fdat020", func_801C93BC);

INCLUDE_ASM("asm/USA/fdat020/nonmatchings/fdat020", func_801C945C);

INCLUDE_ASM("asm/USA/fdat020/nonmatchings/fdat020", func_801C9598);

INCLUDE_ASM("asm/USA/fdat020/nonmatchings/fdat020", func_801C96C0);

INCLUDE_ASM("asm/USA/fdat020/nonmatchings/fdat020", func_801CA9F0);
