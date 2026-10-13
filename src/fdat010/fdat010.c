#include "common.h"
#include "fdat010.h"

void func_801C4C94(Obj801C4C94 *arg0) {
    if (arg0->unk41 == arg0->unk3C) {
        func_8004CC30(0x8F, D_801A5DC0->unk1000, &arg0->unk8, 0x50, 0xBB8, 0xDAC, 0);
    }
    func_80075FC0(arg0);
    if (func_8004F024(&arg0->unk64, &arg0->unk8) == 0) {
        if (arg0->unk50 != NULL) {
            arg0->unk50(arg0, arg0->unk41);
        }
    }
}

INCLUDE_ASM("asm/USA/fdat010/nonmatchings/fdat010", func_801C4D30);

void func_801C4E58(Obj801C4C94 *arg0) {
    u8 state;

    if (arg0->unk40 != 0xFF) {
        if (func_800754D0(arg0, D_801C65DC) != 0) {
            func_80078E1C(arg0);
        }
    } else {
        state = arg0->unk3C;
        if (state == 0 || state == 3) {
            arg0->unk7C = 0;
            arg0->unk76 = rand() & 0xFFF;
            arg0->unk78 = rand() & 0xFFF;
            arg0->unk7A = rand() & 0xFFF;
            return;
        }
        arg0->unk7C = -1;
    }
}

INCLUDE_ASM("asm/USA/fdat010/nonmatchings/fdat010", func_801C4EFC);

INCLUDE_RODATA("asm/USA/fdat010/nonmatchings/fdat010", D_801C4B40);

INCLUDE_ASM("asm/USA/fdat010/nonmatchings/fdat010", func_801C4F60);

INCLUDE_ASM("asm/USA/fdat010/nonmatchings/fdat010", func_801C50AC);

INCLUDE_ASM("asm/USA/fdat010/nonmatchings/fdat010", func_801C5190);

void func_801C5268(Elem801C5EA8 *arg0, s32 arg1) {
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

INCLUDE_ASM("asm/USA/fdat010/nonmatchings/fdat010", func_801C52B8);

void func_801C53D4(Obj801C4EB8 *arg0) {
    func_80012794(&arg0->unk22, arg0->unk16, arg0->unk18, 0, D_801A26C0, D_801A26E0, D_801A26E2);
}

INCLUDE_ASM("asm/USA/fdat010/nonmatchings/fdat010", func_801C5424);

INCLUDE_ASM("asm/USA/fdat010/nonmatchings/fdat010", func_801C56E4);

INCLUDE_ASM("asm/USA/fdat010/nonmatchings/fdat010", func_801C57B8);

INCLUDE_ASM("asm/USA/fdat010/nonmatchings/fdat010", func_801C58C4);

void func_801C5B1C(Obj801C5B1C *arg0) {
    arg0->unk2C = func_80072120(0);
    arg0->unk2C->unk4 = func_801C58C4;
}

INCLUDE_ASM("asm/USA/fdat010/nonmatchings/fdat010", func_801C5B58);

INCLUDE_ASM("asm/USA/fdat010/nonmatchings/fdat010", func_801C5C18);

INCLUDE_ASM("asm/USA/fdat010/nonmatchings/fdat010", func_801C5C6C);

void func_801C5D04(Obj801C5B1C *arg0) {
    s32 unused[36];

    arg0->unk2C = func_80072120(0);
    arg0->unk2C->unk4 = func_801C5C6C;
}

INCLUDE_ASM("asm/USA/fdat010/nonmatchings/fdat010", func_801C5D40);

void func_801C5E68(Obj801C5B1C *arg0) {
    Sub801C5B1C *task;

    task = func_80072120(0);
    arg0->unk2C = task;
    task->unk0 = func_801C5D40;
}

INCLUDE_ASM("asm/USA/fdat010/nonmatchings/fdat010", func_801C5EA4);

void func_801C5F3C(Obj801C5B1C *arg0) {
    s32 unused[36];
    Sub801C5B1C *task;

    task = func_80072120(0);
    arg0->unk2C = task;
    task->unk0 = func_801C5EA4;
    arg0->unk2C->unk4 = 0;
}

void func_801C5F84(Obj801C5F84 *arg0) {
    arg0->unk8 += 0x10;
}

void func_801C5F98(Obj801C5F98 *arg0) {
    Sub801C5F98 *task;

    task = func_80073674(0);
    arg0->unk14 = task;
    task->unk0 = func_801C5F84;
}

INCLUDE_ASM("asm/USA/fdat010/nonmatchings/fdat010", func_801C5FD4);

void func_801C64AC(Obj801C5F98 *arg0) {
    Sub801C5F98 *task;

    task = func_80073674(4);
    arg0->unk14 = task;
    task->unk0 = func_801C5FD4;
    if (arg0->unk28 == 0xFF) {
        arg0->unk14->unk8 = -1;
    } else {
        arg0->unk14->unk8 = func_80014D78(arg0->unk28);
    }
}

void func_801C6518(void) {
}

void func_801C6520(void) {
    func_8008A80C();
}

INCLUDE_ASM("asm/USA/fdat010/nonmatchings/fdat010", func_801C6540);
