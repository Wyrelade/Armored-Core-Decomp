#include "common.h"
#include "fdat036.h"

INCLUDE_RODATA("asm/USA/fdat036/nonmatchings/fdat036", D_801C4B40);

INCLUDE_ASM("asm/USA/fdat036/nonmatchings/fdat036", func_801C4DBC);

INCLUDE_ASM("asm/USA/fdat036/nonmatchings/fdat036", func_801C4FAC);

void func_801C5094(Obj801C52C0 *arg0) {
    Sub801C4E00 *sub;

    arg0->unk148 = 0;
    arg0->unk15C = 0;
    if (arg0->unk40 != 0xFF) {
        if (func_800754D0(arg0, D_801C72A0) != 0) {
            func_80078E1C(arg0);
        }
    } else if (arg0->unk3F != 0 && arg0->unk3E == 0) {
        arg0->unk3F--;
    } else if (rand() < 0x290 && (rand() < 0xCCD || func_801C4FAC(arg0) != 0)) {
        sub = arg0->unk0;
        func_80077B78(arg0, 0x27, sub->unk1C, sub->unk20, D_801C72C4, 1, 0);
        arg0->unk148 = 0xF;
        arg0->unk14A[0] = 0xC8;
        arg0->unk14A[1] = 0x3C;
        arg0->unk15C = 0x100;
        arg0->unk14A[2] = 0;
        arg0->unk3F = 5;
    }
}

void func_801C51A4(s32 arg0, s32 arg1) {
    Sub801C4C94 vec;

    vec.unk0 = func_80014D78(500) - 250;
    vec.unk4 = func_80014D78(500) - 250;
    vec.unk2 = 0;
    func_800759A4(arg0, arg1, &vec);
}

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

void func_801C5B38(s32 arg0, s32 arg1) {
    Sub801C4C94 vec;

    vec.unk0 = func_80014D78(100) - 50;
    vec.unk4 = func_80014D78(100) - 50;
    vec.unk2 = 0;
    func_800759A4(arg0, arg1, &vec);
}

INCLUDE_ASM("asm/USA/fdat036/nonmatchings/fdat036", func_801C5B9C);

INCLUDE_ASM("asm/USA/fdat036/nonmatchings/fdat036", func_801C5DA8);

INCLUDE_ASM("asm/USA/fdat036/nonmatchings/fdat036", func_801C5E90);

void func_801C5F68(Obj801C4C94 *arg0) {
    arg0->unk36 = 0;
    func_8004E98C(&arg0->unk64, 0, 0, 0);
}

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

void func_801C6320(s32 arg0, s32 arg1) {
    Sub801C4C94 vec;

    vec.unk0 = func_80014D78(2000) - 1000;
    vec.unk4 = func_80014D78(2000) - 1000;
    vec.unk2 = -func_80014D78(1000);
    func_800759A4(arg0, arg1, &vec);
}

void func_801C6390(s32 arg0, s32 arg1) {
    Sub801C4C94 vec;

    vec.unk0 = func_80014DAC(2000);
    vec.unk4 = func_80014DAC(2000);
    vec.unk2 = -func_80014D78(1000);
    func_80075A18(arg0, arg1, &vec);
}

void func_801C63F8(s32 arg0, s32 arg1) {
    Sub801C4C94 vec;

    vec.unk0 = func_80014DAC(2000);
    vec.unk4 = func_80014DAC(2000);
    vec.unk2 = -func_80014D78(1000);
    func_80075A54(arg0, arg1, &vec);
}

INCLUDE_ASM("asm/USA/fdat036/nonmatchings/fdat036", func_801C6460);

void func_801C6594(Obj801C4C94 *arg0) {
    arg0->unk36 = 2;
    arg0->unk38 = 0x10;
    arg0->unk50 = func_801C61AC;
    arg0->unk54 = func_801C6460;
    arg0->unk58 = func_801C6238;
    if (arg0->unk54 != NULL) {
        arg0->unk54(arg0, 0);
    }
    if (arg0->unk50 != NULL) {
        arg0->unk50(arg0, arg0->unk41);
    }
}

void func_801C6618(Obj801C52C0 *arg0) {
    func_801C6594((Obj801C4C94 *)arg0);
    arg0->unk58 = func_801C6258;
    arg0->unkFC = rand() & 0xFFF;
    arg0->unkFE = rand() & 0xFFF;
}

void func_801C6664(Obj801C4C94 *arg0) {
    func_801C6594(arg0);
}

void func_801C6684(Obj801C4C94 *arg0) {
    func_801C6594(arg0);
}

void func_801C66A4(Elem801C5EA8 *arg0, s32 arg1) {
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

INCLUDE_ASM("asm/USA/fdat036/nonmatchings/fdat036", func_801C66F4);

void func_801C6810(Obj801C4EB8 *arg0) {
    func_80012794(&arg0->unk22, arg0->unk16, arg0->unk18, 0, D_801A26C0, D_801A26E0, D_801A26E2);
}

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

void func_801C6F94(Obj801C52C0_fdat000 *arg0) {
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

INCLUDE_ASM("asm/USA/fdat036/nonmatchings/fdat036", func_801C7054);

void func_801C70A8(void) {
}

void func_801C70B0(void) {
    func_80056C6C(0x240, 0x180, 1, 0x20, 3, 0x40, 0x40);
}

INCLUDE_ASM("asm/USA/fdat036/nonmatchings/fdat036", func_801C70F0);

s32 func_801C71D8(s32 arg0) {
    Sub801C71D8 *p;

    if (D_8019F528 == 0) {
        switch (arg0) {
        case 0:
            if (D_801C7364 != 0) {
                return 1;
            }
            if (D_801D3214->unk10 == 0) {
                func_8004CFC8(0x4F, 0x78);
                func_800529F0(0, 0, 0x3B);
                p = D_801D3220;
                D_801D3260->unk6 = 0x66;
                p->unk6 = 0x66;
                D_801C7364 = 1;
                return 1;
            }
            return 0;
        case 1:
            D_801C7368 = arg0;
            break;
        }
    }
    return 1;
}
