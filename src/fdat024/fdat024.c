#include "common.h"
#include "fdat024.h"

INCLUDE_RODATA("asm/USA/fdat024/nonmatchings/fdat024", D_801C4B40);

INCLUDE_ASM("asm/USA/fdat024/nonmatchings/fdat024", func_801C4D04);

INCLUDE_ASM("asm/USA/fdat024/nonmatchings/fdat024", func_801C4EF4);

void func_801C4FDC(Obj801C53A0 *arg0) {
    Sub801C73EC *sub;

    arg0->unk148 = 0;
    arg0->unk15C = 0;
    if (arg0->unk40 != 0xFF) {
        if (func_800754D0(arg0, D_801C7024) != 0) {
            func_80078E1C(arg0);
        }
    } else if (arg0->unk3F != 0 && arg0->unk3E == 0) {
        arg0->unk3F--;
    } else if (rand() < 0x290 && (rand() < 0xCCD || func_801C4EF4(arg0) != 0)) {
        sub = arg0->unk0;
        func_80077B78(arg0, 0x27, sub->unk1C, sub->unk20, D_801C7048, 1, 0);
        arg0->unk148 = 0xF;
        arg0->unk14A = 0xC8;
        arg0->unk14B = 0x3C;
        arg0->unk15C = 0x100;
        arg0->unk14C = 0;
        arg0->unk3F = 5;
    }
}

void func_801C50EC(s32 arg0, s32 arg1) {
    Sub801C6C1C vec;

    vec.unk0 = func_80014D78(500) - 250;
    vec.unk4 = func_80014D78(500) - 250;
    vec.unk2 = 0;
    func_800759A4(arg0, arg1, &vec);
}

s32 func_801C5150(Obj801C53A0 *arg0, s32 arg1, ...) {
    s32 dist;
    s32 r;

    dist = func_80073714(arg0, 0x7FFFFFFF);
    switch (arg1) {
    case 0x8100:
        return 0;
    case 5:
        if (arg0->unk41 == 1) {
            arg0->unk41 = 2;
        } else if (arg0->unk41 == 2) {
            arg0->unk41 = 1;
        }
        return 0;
    case 1:
    case 2:
        if (rand() < 0x2A3E) {
            r = rand() & 0xF;
            goto pick;
        }
        return 0;
    }
    if ((u8)arg0->unk42 != 1) {
        return 0;
    }
    if (dist > 1000) {
        func_801C50EC((s32)arg0, 1);
        return 0;
    }
    if (dist < 500) {
        func_801C50EC((s32)arg0, 2);
        return 0;
    }
    if (arg0->unk41 == 3 || arg0->unk41 == 4) {
        r = rand() & 7;
    } else {
        r = rand() & 0x3F;
    }
pick:
    switch (r) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
        func_801C50EC((s32)arg0, 1);
        break;
    case 6:
    case 7:
        func_801C50EC((s32)arg0, 2);
        break;
    case 8:
    case 9:
        func_80075A18((s32)arg0, 1, &D_80039C78);
        return 0;
    case 10:
    case 11:
        func_80075A54((s32)arg0, 1, &D_80039C78);
        return 0;
    case 12:
    case 13:
        func_80075A18((s32)arg0, 2, &D_80039C78);
        break;
    case 14:
    case 15:
        func_80075A54((s32)arg0, 2, &D_80039C78);
        break;
    case 16:
    case 17:
    case 18:
    case 19:
        func_801C50EC((s32)arg0, 3);
        break;
    case 20:
    case 21:
    case 22:
    case 23:
        func_801C50EC((s32)arg0, 4);
        break;
    }
    return 0;
}

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

void func_801C5C28(Elem801C5F00 *arg0) {
    u8 id;

    switch (func_801C5968(arg0, arg0->unk38->unk7)) {
    case 1:
        id = arg0->unk38->unk8;
        if (id != 0) {
            func_8004CC30(id, (u8 *)((arg0 - D_801D0B68) + 0x3000), &arg0->unk2C->unk22, 0x64, 0x1F40, 0x2710, 0);
        }
        break;
    case 2:
        id = arg0->unk38->unk9;
        if (id != 0) {
            func_8004CE44(id, &arg0->unk2C->unk22, 0x78, 0);
        }
        break;
    }
}

INCLUDE_ASM("asm/USA/fdat024/nonmatchings/fdat024", func_801C5CFC);

INCLUDE_ASM("asm/USA/fdat024/nonmatchings/fdat024", func_801C5E08);

void func_801C6060(Obj801C53A0 *arg0) {
    Sub801C6060 *task;

    task = func_80072120(0);
    arg0->unk2C = task;
    task->unk4 = func_801C5E08;
}

void func_801C609C(Obj801C52C0 *arg0) {
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

void func_801C615C(Obj801C52C0 *arg0) {
    s32 unused[36];

    arg0->unk2C = (Sub801C5550 *)func_80072120(2);
    arg0->unk2C->unk10 = (Elem801C5F00 *)arg0 - D_801D0B68;
    arg0->unk2C->unk0 = func_801C609C;
}

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

void func_801C62E8(Obj801C5F00 *arg0) {
    u8 num;
    s32 count;
    Elem801C5F64 *elem;

    num = arg0->unk23;
    if (num != 0) {
        count = num;
        elem = &D_80198B08[arg0->unk24];
        do {
            if (elem->unk6 != -1) {
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

void func_801C6CCC(s32 arg0) {
    Elem801C5F64 *elem;
    Sub801C6C1C vec;
    Task801C6CCC *task;

    elem = &D_80198B08[arg0];
    vec.unk0 = elem->unk0 + func_80014D78(1000) - 500;
    vec.unk2 = elem->unk2;
    vec.unk4 = elem->unk4;
    task = func_80086F20(0, &vec, 8, 0x15E, 0, D_801C70D4, D_801C70DC, D_801C70E4, D_801C70E8);
    task->unk14 = func_801C6C5C;
    task->unk12 = 0xB;
}

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

s32 func_801C6E80(s32 arg0) {
    Elem801C6E14 *e;

    if (D_8019F528 == 0) {
        switch (arg0) {
        case 0:
            e = &D_801D3368[0];
        hit:
            e->unk30 &= ~0x1000;
            if (D_801C70EC == 0) {
                func_800529F0(0, 0, 0x85);
            } else if (D_801C70EC == 4) {
                func_800529F0(0, 0, 0x8C);
            } else {
                func_800529F0(0, 0, 0x93);
            }
            func_8004CE44(0x4D, &e->unk10, 0x64, 0);
            D_801C70EC++;
            return 1;
        case 1:
            e = &D_801D3368[3];
            goto hit;
        case 2:
            e = &D_801D3368[4];
            goto hit;
        case 3:
            e = &D_801D3368[1];
            goto hit;
        case 4:
            e = &D_801D3368[2];
            goto hit;
        case 10:
            if (D_801C70EC >= 5) {
                func_8008C2FC(0x100, func_801C6D94);
                return 1;
            }
            return 0;
        }
    }
    return 0;
}

void func_801C6FD4(Obj801C53A0 *arg0) {
    if (arg0->unk160 == 0) {
        D_801C70F0 += 0x1F4;
    }
}

void func_801C7004(s32 *arg0) {
    *arg0 += D_801C70F0;
}
