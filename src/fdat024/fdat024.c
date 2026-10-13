#include "common.h"
#include "fdat024.h"

INCLUDE_RODATA("asm/USA/fdat024/nonmatchings/fdat024", D_801C4B40);

INCLUDE_ASM("asm/USA/fdat024/nonmatchings/fdat024", func_801C4D04);

INCLUDE_ASM("asm/USA/fdat024/nonmatchings/fdat024", func_801C4EF4);

INCLUDE_ASM("asm/USA/fdat024/nonmatchings/fdat024", func_801C4FDC);

void func_801C50EC(s32 arg0, s32 arg1) {
    Sub801C4C94 vec;

    vec.unk0 = func_80014D78(500) - 250;
    vec.unk4 = func_80014D78(500) - 250;
    vec.unk2 = 0;
    func_800759A4(arg0, arg1, &vec);
}

INCLUDE_ASM("asm/USA/fdat024/nonmatchings/fdat024", func_801C5150);

INCLUDE_ASM("asm/USA/fdat024/nonmatchings/fdat024", func_801C534C);

void func_801C53A0(Obj801C53A0 *arg0) {
    arg0->unk36 = 2;
    arg0->unk50 = func_801C4D04;
    arg0->unk54 = func_801C5150;
    arg0->unk58 = func_801C4FDC;
    arg0->unk5C = func_801C534C;
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

INCLUDE_ASM("asm/USA/fdat024/nonmatchings/fdat024", func_801C5448);

INCLUDE_ASM("asm/USA/fdat024/nonmatchings/fdat024", func_801C5524);

INCLUDE_ASM("asm/USA/fdat024/nonmatchings/fdat024", func_801C5688);

INCLUDE_ASM("asm/USA/fdat024/nonmatchings/fdat024", func_801C56D8);

void func_801C572C(Obj801C572C *arg0) {
    arg0->unk36 = 2;
    arg0->unk54 = func_801C5688;
    arg0->unk58 = func_801C5524;
    arg0->unk5C = func_801C56D8;
    arg0->unk50 = NULL;
    arg0->unk2C = 0x7FFF;
    if (arg0->unk54 != NULL) {
        arg0->unk54(arg0, 0);
    }
    func_8004E98C(&arg0->unk64, 0, 0, 0);
}

void func_801C57AC(Elem801C5F00 *arg0, s32 arg1) {
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

INCLUDE_ASM("asm/USA/fdat024/nonmatchings/fdat024", func_801C57FC);

void func_801C5918(Obj801C4EB8 *arg0) {
    func_80012794(&arg0->unk22, arg0->unk16, arg0->unk18, 0, D_801A26C0, D_801A26E0, D_801A26E2);
}

INCLUDE_ASM("asm/USA/fdat024/nonmatchings/fdat024", func_801C5968);

INCLUDE_ASM("asm/USA/fdat024/nonmatchings/fdat024", func_801C5C28);

INCLUDE_ASM("asm/USA/fdat024/nonmatchings/fdat024", func_801C5CFC);

INCLUDE_ASM("asm/USA/fdat024/nonmatchings/fdat024", func_801C5E08);

void func_801C6060(Obj801C53A0 *arg0) {
    Sub801C6060 *task;

    task = func_80072120(0);
    arg0->unk2C = task;
    task->unk4 = func_801C5E08;
}

INCLUDE_ASM("asm/USA/fdat024/nonmatchings/fdat024", func_801C609C);

INCLUDE_ASM("asm/USA/fdat024/nonmatchings/fdat024", func_801C615C);

INCLUDE_ASM("asm/USA/fdat024/nonmatchings/fdat024", func_801C61B0);

void func_801C6248(Obj801C53A0 *arg0) {
    u8 unused[0x90];
    Sub801C6060 *task;

    task = func_80072120(0);
    arg0->unk2C = task;
    task->unk4 = func_801C61B0;
}

void func_801C6284(Obj801C5F00 *arg0) {
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

INCLUDE_ASM("asm/USA/fdat024/nonmatchings/fdat024", func_801C62E8);

void func_801C6360(Obj801C6360 *arg0) {
    Sub801C6360 *task;

    arg0->unk14 = task = func_80073674(0);
    switch (arg0->unk22) {
    case 0:
        task->unk0 = func_801C6284;
        return;
    case 1:
        task->unk0 = func_801C62E8;
        return;
    }
}

void func_801C63CC(Obj801C63CC *arg0) {
    arg0->unkBE = arg0->unk26 >> 4;
    arg0->unk26 += arg0->unk1E;
    arg0->unkB8 += arg0->unk28;
    arg0->unkB9 += arg0->unk29;
    arg0->unkBA += arg0->unk2A;
    arg0->unk0 += arg0->unk18 >> 8;
    arg0->unk2 += arg0->unk1A >> 8;
    arg0->unk4 += arg0->unk1C >> 8;
    arg0->unk18 += arg0->unk20;
    arg0->unk1A += arg0->unk22;
    arg0->unk1C += arg0->unk24;
}

INCLUDE_ASM("asm/USA/fdat024/nonmatchings/fdat024", func_801C6498);

void func_801C674C(Obj801C6360 *arg0) {
    Sub801C6360 *task;

    task = func_80073674(4);
    arg0->unk14 = task;
    task->unk0 = func_801C6498;
    arg0->unk14->unk8 = func_80014D78(arg0->unk28);
}

INCLUDE_ASM("asm/USA/fdat024/nonmatchings/fdat024", func_801C67A0);

void func_801C6880(Obj801C6360 *arg0) {
    Sub801C6360 *task;

    task = func_80073674(0);
    arg0->unk14 = task;
    task->unk0 = func_801C67A0;
}

INCLUDE_ASM("asm/USA/fdat024/nonmatchings/fdat024", func_801C68BC);

void func_801C6BD8(Obj801C6360 *arg0) {
    Sub801C6360 *task;

    task = func_80073674(0);
    arg0->unk14 = task;
    task->unk0 = func_801C68BC;
}

void func_801C6C14(void) {
}

void func_801C6C1C(Obj801C53A0 *arg0) {
    if (!(arg0->unk30 & 0x1000)) {
        func_8004CE44(0x4E, &arg0->unk10, 0x64, 0);
    }
}

INCLUDE_ASM("asm/USA/fdat024/nonmatchings/fdat024", func_801C6C5C);

INCLUDE_ASM("asm/USA/fdat024/nonmatchings/fdat024", func_801C6CCC);

void func_801C6D94(void) {
    s32 n;

    n = 0x8C - D_801D0B52;
    if (n == 0xA || n == 0x50) {
        func_8004CFC8(7, 0x7F);
    }
    if ((u32)(n - 0xA) < 0x1F) {
        func_801C6CCC(0x11);
    }
    if ((u32)(n - 0x50) < 0x1F) {
        func_801C6CCC(0x10);
    }
}

void func_801C6E14(void) {
    func_8008A80C();
    if ((D_801A5DC4 & 0x1F) == 0xF) {
        func_801C6C1C((Obj801C53A0 *)&D_801D3368[0]);
        func_801C6C1C((Obj801C53A0 *)&D_801D3368[3]);
        func_801C6C1C((Obj801C53A0 *)&D_801D3368[4]);
        func_801C6C1C((Obj801C53A0 *)&D_801D3368[1]);
        func_801C6C1C((Obj801C53A0 *)&D_801D3368[2]);
    }
}

INCLUDE_ASM("asm/USA/fdat024/nonmatchings/fdat024", func_801C6E80);

void func_801C6FD4(Obj801C53A0 *arg0) {
    if (arg0->unk160 == 0) {
        D_801C70F0 += 0x1F4;
    }
}

void func_801C7004(s32 *arg0) {
    *arg0 += D_801C70F0;
}
