#include "common.h"
#include "fdat008.h"

void func_801C5418(Obj801C5418 *arg0) {
    arg0->unk36 = 2;
    arg0->unk108 = &D_801CBEAC;
    func_801CBE60((Obj801C4C94 *)arg0);
}

INCLUDE_ASM("asm/USA/fdat008/nonmatchings/fdat008", func_801C5448);

void func_801C5528(Obj801C4EB8 *arg0) {
    func_8004ECA8(&arg0->unk64);
    if (--arg0->unk64.unk2 == 0) {
        if (arg0->unk50 != NULL) {
            arg0->unk50(arg0, arg0->unk41);
        }
    }
    arg0->unkCC += arg0->unkCE;
}

void func_801C55A0(Obj801C5418 *arg0) {
    func_801C5528((Obj801C4EB8 *)arg0);
    if (arg0->unkCC > 0x18) {
        arg0->unkCC = 0x18;
    }
    arg0->unk12 += arg0->unkCC;
}

void func_801C55F4(Obj801C5418 *arg0) {
    func_801C5528((Obj801C4EB8 *)arg0);
    if (arg0->unkCC < -0x18) {
        arg0->unkCC = -0x18;
    }
    arg0->unk12 += arg0->unkCC;
}

INCLUDE_RODATA("asm/USA/fdat008/nonmatchings/fdat008", D_801C4B40);

INCLUDE_ASM("asm/USA/fdat008/nonmatchings/fdat008", func_801C5648);

INCLUDE_ASM("asm/USA/fdat008/nonmatchings/fdat008", func_801C5798);

INCLUDE_ASM("asm/USA/fdat008/nonmatchings/fdat008", func_801C590C);

INCLUDE_ASM("asm/USA/fdat008/nonmatchings/fdat008", func_801C5BF0);

INCLUDE_ASM("asm/USA/fdat008/nonmatchings/fdat008", func_801C5D18);

void func_801C5FE8(s32 arg0, s32 arg1) {
    Sub801C4C94 vec;

    vec.unk0 = func_80014D78(100) - 50;
    vec.unk4 = func_80014D78(100) - 50;
    vec.unk2 = 0;
    func_800759A4((Obj801C52C0 *)arg0, arg1, (Sub801C55B4 *)&vec);
}

INCLUDE_ASM("asm/USA/fdat008/nonmatchings/fdat008", func_801C604C);

INCLUDE_ASM("asm/USA/fdat008/nonmatchings/fdat008", func_801C626C);

INCLUDE_ASM("asm/USA/fdat008/nonmatchings/fdat008", func_801C63FC);

void func_801C64D0(Obj801C5418 *arg0) {
    arg0->unk36 = 2;
    func_801C63FC();
}

void func_801C64F4(Obj801C5418 *arg0) {
    arg0->unk36 = 1;
    func_801C63FC();
}

void func_801C6518(Obj801C52C0_fdat000 *arg0) {
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

void func_801C65D8(Elem801C53D4 *arg0) {
    s32 unused[36];
    Sub801C5CD0 *task;

    task = func_80072120(2);
    arg0->unk2C = task;
    task->unk10 = arg0 - D_801D0B68;
    arg0->unk2C->unk0 = func_801C6518;
}

INCLUDE_ASM("asm/USA/fdat008/nonmatchings/fdat008", func_801C662C);

void func_801C6710(Obj801C6710 *arg0) {
    Sub801C5CD0 *task;

    task = func_80072120(0);
    arg0->unk2C = task;
    task->unk0 = func_801C662C;
}

INCLUDE_ASM("asm/USA/fdat008/nonmatchings/fdat008", func_801C674C);

void func_801C6870(Obj801C6870 *arg0) {
    arg0->unkA += 0x80;
}

INCLUDE_ASM("asm/USA/fdat008/nonmatchings/fdat008", func_801C6884);

INCLUDE_ASM("asm/USA/fdat008/nonmatchings/fdat008", func_801C6AB0);

INCLUDE_ASM("asm/USA/fdat008/nonmatchings/fdat008", func_801C6BBC);

void func_801C6D74(Obj801C6D74 *arg0) {
    Sub801C6D74 *task;
    u16 n;

    task = func_80073674(8);
    arg0->unk14 = task;
    task->unk4 = func_801C6BBC;
    switch (arg0->unk23) {
    case 1:
        arg0->unk14->unk0 = func_801C6870;
        break;
    case 2:
        arg0->unk14->unk0 = func_801C6884;
        arg0->unk14->unkC = (u32)&D_80198B08[arg0->unk28];
        break;
    case 3:
        arg0->unk14->unk0 = func_801C6AB0;
        n = arg0->unk28;
        arg0->unk14->unkC = (u32)(n * n) >> 4;
        arg0->unk14->unk8 = rand() & 0x1F;
        break;
    }
    arg0->unk14->unk9 = 0;
}

void func_801C6E88(void) {
}

s32 func_801C6E90(s32 arg0) {
    if (D_8019F528 == 0 && arg0 == 0) {
        if (D_8019FB94 == 1) {
            func_8008C2FC(0);
        }
        func_800529F0(0, 0, 0x68);
        func_8004C318(0x80);
    }
    return 1;
}

void func_801C6EF0(void) {
    func_8008A80C();
}

INCLUDE_ASM("asm/USA/fdat008/nonmatchings/fdat008", func_801C6F10);

void func_801C6FB4(Obj801C5418 *arg0) {
    if (!(arg0->unk148 & 0xF)) {
        func_8004CE44(arg0->unk108->unk3A, &arg0->unk8, 0x64, -0x50);
        return;
    }
    func_8004CC30(arg0->unk108->unk3B, D_801A5DC0->unk1000, &arg0->unk8, 0x64, 0x1F40, 0x2710, -0x30);
}

void func_801C7034(Obj801C52C0 *arg0, Sub801C5634 *arg1) {
    arg0->unk148 &= 0xFFF0;
    arg0->unk15C &= ~arg1->unk38;
}

void func_801C705C(Obj801C52C0 *arg0, Sub801C5634 *arg1) {
    u16 mask;

    arg0->unk148 |= 0xF;
    mask = arg1->unk38;
    if (arg0->unk15C & mask) {
        arg0->unk15C &= ~mask;
        arg0->unk14A = 0x3C;
        arg0->unk14B = 0x28;
        arg0->unk14C = 0x14;
    } else {
        arg0->unk15C |= mask;
        arg0->unk14A = 0xB4;
        arg0->unk14B = 0xA0;
        arg0->unk14C = 0x8C;
    }
}

void func_801C70C8(Obj801C52C0 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C ^= 1 << arg1->unk2D;
}

void func_801C70E4(Obj801C52C0 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C &= ~(1 << arg1->unk2D);
}

void func_801C7104(Obj801C52C0 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C |= 1 << arg1->unk6;
}

void func_801C7120(Obj801C52C0 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C ^= 1 << arg1->unk6;
}

void func_801C713C(Obj801C52C0 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C &= ~(1 << arg1->unk6);
}

void func_801C715C(Obj801C52C0 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C ^= 1 << arg1->unk9;
}

void func_801C7178(Obj801C52C0 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C &= ~(1 << arg1->unk9);
}

void func_801C7198(Obj801C4C94 *arg0, s32 arg1) {
    if (arg0->unk3D != 0xB0) {
        func_8004DE88(&arg0->unk64, &arg0->unkCC);
        arg0->unkCC.unk2 = 0;
        arg0->unkCC.unk0 <<= 7;
        arg0->unkCC.unk4 <<= 7;
    }
    arg0->unk15C = 0;
    func_800775B8(arg0, arg1, 1, 0x200, &arg0->unkCC, func_801C76B8);
    arg0->unk3C = 0x41;
    arg0->unk41 = 0x41;
}

INCLUDE_ASM("asm/USA/fdat008/nonmatchings/fdat008", func_801C7234);

INCLUDE_ASM("asm/USA/fdat008/nonmatchings/fdat008", func_801C73EC);

INCLUDE_ASM("asm/USA/fdat008/nonmatchings/fdat008", func_801C76B8);

INCLUDE_ASM("asm/USA/fdat008/nonmatchings/fdat008", func_801C79A4);

INCLUDE_ASM("asm/USA/fdat008/nonmatchings/fdat008", func_801C7CA8);

INCLUDE_ASM("asm/USA/fdat008/nonmatchings/fdat008", func_801C7F98);

INCLUDE_ASM("asm/USA/fdat008/nonmatchings/fdat008", func_801C814C);

INCLUDE_ASM("asm/USA/fdat008/nonmatchings/fdat008", func_801C8428);

INCLUDE_ASM("asm/USA/fdat008/nonmatchings/fdat008", func_801C8530);

INCLUDE_ASM("asm/USA/fdat008/nonmatchings/fdat008", func_801C8600);

INCLUDE_ASM("asm/USA/fdat008/nonmatchings/fdat008", func_801C8710);

INCLUDE_ASM("asm/USA/fdat008/nonmatchings/fdat008", func_801C88D8);

void func_801C8C64(Obj801C52C0 *arg0, s32 arg1) {
    if (arg0->unk126 == -1) {
        func_800759A4(arg0, arg1, &D_80039C78);
    } else {
        func_80075B08(arg0, arg1, &D_80198B08[arg0->unk126]);
    }
}

INCLUDE_ASM("asm/USA/fdat008/nonmatchings/fdat008", func_801C8CC4);

INCLUDE_ASM("asm/USA/fdat008/nonmatchings/fdat008", func_801C8D20);

INCLUDE_ASM("asm/USA/fdat008/nonmatchings/fdat008", func_801C8D7C);

INCLUDE_ASM("asm/USA/fdat008/nonmatchings/fdat008", func_801C8FBC);

INCLUDE_ASM("asm/USA/fdat008/nonmatchings/fdat008", func_801C951C);

void func_801C97A8(Obj801C52C0 *arg0, Sub801C97A8 *arg1) {
    Seg801C97A8 seg;
    Sub801C55B4 rot;
    Tbl801C97A8 *tbl;
    Elem801C52C0 *sub;
    Mdl801C97A8 *mdl;
    Hdr801C97A8 *hdr;
    Part801C97A8 *part;
    Slot801C97A8 *slot;
    Elem801C97A8 *elem;
    Obj801C52C0 *target;
    s32 ok;
    s32 scale;
    s32 time;
    s32 dx;
    s32 dy;
    s32 dz;
    s32 hit;
    s32 unused[2];

    tbl = &D_8008E658[arg1->unk2 & 0xF];
    sub = arg0->unk108;
    ok = func_801C951C(arg0, arg1, 0, tbl->unk0);
    if (sub->unk0 != 0
        || (arg0->unk3C == 0x22 && arg0->unk64.unk0 == arg0->unk135 && func_8004EBF8(&arg0->unk64))) {
        arg0->unk64.unk18 = arg1->unkB;
        mdl = arg0->unk60;
        if (mdl != NULL && mdl->unkE == arg1->unkB) {
            hdr = D_801A6134[arg0->unk8.unk6];
            part = (Part801C97A8 *)((u8 *)hdr + ((s32 *)((u8 *)hdr + hdr->unk14))[arg1->unkB]);
            slot = &part->unk14[arg1->unk4];
            elem = &mdl->unk20[slot->unk0];
            if (elem->unk26 & 4) {
                goto tail;
            }
        }
        if (arg0->unk3F != 0) {
            goto tail;
        }
        if (arg0->unk3E == 0) {
            if (ok == 0) {
                goto tail;
            }
            if (arg1->unkF < (rand() & 0xFF)) {
                goto tail;
            }
            arg0->unk3E = arg1->unk10;
        }
        if (!(arg1->unk2 & 0x40)) {
            hit = func_800745D0(arg0, &seg, arg1->unk5, arg1->unk6, 2, 0, 1);
        } else if (arg0->unk3E & 1) {
            hit = func_800745D0(arg0, &seg, arg1->unk5, arg1->unk6, 2, 0, 1);
        } else {
            hit = func_800745D0(arg0, &seg, arg1->unk7, arg1->unk8, 2, 0, 1);
        }
        if (hit != 0) {
            seg.unk8.unk0 -= seg.unk0.unk0;
            seg.unk8.unk2 -= seg.unk0.unk2;
            seg.unk8.unk4 -= seg.unk0.unk4;
            VectorNormalSS(&seg.unk8, &seg.unk8);
            scale = (arg0->unk108->unk24 * tbl->unk2) >> 8;
            if (scale != 0) {
                arg0->unkCC.unk0 -= (seg.unk8.unk0 * scale) >> 6;
                arg0->unkCC.unk2 -= (seg.unk8.unk2 * scale) >> 6;
                arg0->unkCC.unk4 -= (seg.unk8.unk4 * scale) >> 6;
                if (arg0->unk3D == 2 || arg0->unk3D == 3) {
                    func_801C7234(arg0, 0, 0, 0x100, &arg0->unkCC);
                }
            }
            switch (arg1->unk2 & 0xF) {
            case 0:
                func_80085E98(arg0, &arg1->unk22, &seg.unk0, &seg.unk8, tbl->unk0, arg1->unk12, 7, &D_801CC4DC, 0x14, 3, 0x78, &D_801CC4E0, &D_801CC4E4, 0, 4);
                if (arg0->unk50 != NULL) {
                    arg0->unk50(arg0, arg0->unk41);
                }
                break;
            case 1:
                func_800889B4(arg0, &seg.unk0, &seg.unk8, &arg1->unk22, arg1->unk12, 7);
                if (arg0->unk50 != NULL) {
                    arg0->unk50(arg0, arg0->unk41);
                }
                break;
            case 2:
                func_800889B4(arg0, &seg.unk0, &seg.unk8, &arg1->unk22, arg1->unk12, 6);
                if (arg0->unk50 != NULL) {
                    arg0->unk50(arg0, arg0->unk41);
                }
                break;
            case 3:
                if (func_800781E8(arg0) == 0) {
                    goto done;
                }
                seg.unk8.unk0 = (seg.unk8.unk0 * 75) >> 9;
                seg.unk8.unk2 = (seg.unk8.unk2 * 75) >> 9;
                seg.unk8.unk4 = (seg.unk8.unk4 * 75) >> 9;
                target = arg0->unk48;
                if (target != NULL) {
                    dx = (target->unk8.unk0 - arg0->unk8.unk0) >> 1;
                    dy = (target->unk8.unk2 - arg0->unk8.unk2) >> 1;
                    dz = (target->unk8.unk4 - arg0->unk8.unk4) >> 1;
                    time = (SquareRoot0(dx * dx + dy * dy + dz * dz) << 2) / 600;
                } else {
                    time = (s16)(arg1->unk12 / 600);
                }
                func_80014AE4(seg.unk8.unk0, seg.unk8.unk2, seg.unk8.unk4, &rot);
                func_80086448(arg0, &arg1->unk22, &seg.unk0, &rot, &seg.unk8, 0x31, 0, time);
                if (arg0->unk50 != NULL) {
                    arg0->unk50(arg0, arg0->unk41);
                }
                break;
            case 4:
                func_800889B4(arg0, &seg.unk0, &seg.unk8, &arg1->unk22, arg1->unk12, 5);
                if (arg0->unk50 != NULL) {
                    arg0->unk50(arg0, arg0->unk41);
                }
                break;
            case 5:
                func_8008840C(arg0, &seg.unk0, &seg.unk8, &arg1->unk22, arg1->unk12, 1);
                if (arg0->unk50 != NULL) {
                    arg0->unk50(arg0, arg0->unk41);
                }
                break;
            case 6:
                func_80014AE4(seg.unk8.unk0, seg.unk8.unk2, seg.unk8.unk4, &rot);
                func_8008915C(arg0, &seg.unk0, &seg.unk8, &arg1->unk22, arg1->unk12, 3, 0x31, &rot);
                if (arg0->unk50 != NULL) {
                    arg0->unk50(arg0, arg0->unk41);
                }
                break;
            case 7:
                func_80014AE4(seg.unk8.unk0, seg.unk8.unk2, seg.unk8.unk4, &rot);
                func_8008915C(arg0, &seg.unk0, &seg.unk8, &arg1->unk22, arg1->unk12, 1, 0, &rot);
                if (arg0->unk50 != NULL) {
                    arg0->unk50(arg0, arg0->unk41);
                }
                break;
            case 8:
                func_80014AE4(seg.unk8.unk0, seg.unk8.unk2, seg.unk8.unk4, &rot);
                func_8008915C(arg0, &seg.unk0, &seg.unk8, &arg1->unk22, arg1->unk12, 2, 0, &rot);
                if (arg0->unk50 != NULL) {
                    arg0->unk50(arg0, arg0->unk41);
                }
                break;
            case 9:
                func_80085E98(arg0, &arg1->unk22, &seg.unk0, &seg.unk8, tbl->unk0, arg1->unk12, 7, &D_801CC4E8, 0x14, 3, 0x78, &D_801CC4EC, &D_801CC4F0, 0, 4);
                if (arg0->unk50 != NULL) {
                    arg0->unk50(arg0, arg0->unk41);
                }
                break;
            }
        }
    done:
        arg0->unk3E--;
        arg0->unk64.unk1 = arg1->unkC;
        arg0->unk3F = tbl->unk5;
    } else if (ok != 0 && arg0->unk3D != 0xC0 && arg0->unk3C != 0x22) {
        arg0->unk135 = arg1->unkB + 0x2A;
        arg0->unk3C = 0x22;
        arg0->unk133 = 0;
        arg0->unk36 |= 0x10;
    }
tail:
    if (arg0->unk3F != 0) {
        arg0->unk3F--;
    }
}

INCLUDE_ASM("asm/USA/fdat008/nonmatchings/fdat008", func_801C9F7C);

INCLUDE_ASM("asm/USA/fdat008/nonmatchings/fdat008", func_801CA2EC);

INCLUDE_ASM("asm/USA/fdat008/nonmatchings/fdat008", func_801CA668);

INCLUDE_ASM("asm/USA/fdat008/nonmatchings/fdat008", func_801CA6BC);

INCLUDE_ASM("asm/USA/fdat008/nonmatchings/fdat008", func_801CABCC);

void func_801CAF18(Obj801C52C0 *arg0) {
    s16 val;

    arg0->unk42 = 0;
    arg0->unk130 = 0;
    arg0->unk164 *= 4;
    val = func_80073904();
    arg0->unk12A = val;
    arg0->unk12C = val;
    arg0->unk44 = val;
    arg0->unk126 = -1;
    arg0->unk124 = -1;
    arg0->unk128 = 0;
    arg0->unk136 = 0;
    arg0->unk12E = 0;
    arg0->unk133 = 0;
    arg0->unk134 = 0;
    arg0->unk132 = 0;
    arg0->unk131 = 0;
    if (arg0->unk54 != NULL) {
        arg0->unk54(arg0, 0);
    }
    if (arg0->unk50 != NULL) {
        arg0->unk50(arg0, arg0->unk41);
    }
}

s32 func_801CAFB8(Obj801C52C0 *arg0) {
    switch (arg0->unk64.unk0) {
    case 0:
    case 2:
    case 4:
    case 6:
    case 9:
    case 12:
    case 15:
    case 17:
    case 19:
        if (arg0->unkCC.unk0 != 0 || arg0->unkCC.unk4 != 0) {
            func_801C7234(arg0, 0, 0, 0x100, &arg0->unkCC);
            return 0;
        }
    }
    return 1;
}

void func_801CB03C(Obj801C52C0 *arg0, s32 arg1) {
    Elem801C52C0 *info;
    s32 state;
    s32 v;
    s32 hit;
    s32 *flag;
    Sub801C55B4 pos;

    info = arg0->unk108;
    state = arg1;
    if (arg0->unk36 & 0x10) {
        state = arg0->unk3C;
    }
    if (arg0->unk64.unk0 == 0x16) {
        if (func_8004EAD0(&arg0->unk64) != 0) {
            func_8004DE88(&arg0->unk64, &arg0->unkCC);
            arg0->unkCC.unk0 <<= 6;
            arg0->unkCC.unk2 <<= 6;
            arg0->unkCC.unk4 <<= 6;
            goto fall;
        }
    } else if (arg0->unk3D != 0xC0 && (u32)(state - 0x60) >= 2) {
        if (arg0->unk41 != 0x40) {
            if (arg0->unk2C - arg0->unk8.unk2 < 0x32) {
                goto act;
            }
            pos.unk0 = arg0->unk8.unk0;
            pos.unk2 = arg0->unk8.unk2 + 0x32;
            flag = &D_801A5DC8;
            pos.unk4 = arg0->unk8.unk4;
            *flag = 1;
            hit = func_80074FA4(arg0, &pos);
            *flag = 0;
            if (hit != 0) {
                goto act;
            }
            state = 0x4B;
            arg0->unkCC.unk2 = 0x100;
            arg0->unkCC.unk4 = 0;
            arg0->unkCC.unk0 = 0;
            arg0->unk3C = 0x4B;
            arg0->unk41 = 0x4B;
            arg0->unk36 &= ~0x10;
        }
        arg0->unk148 = 0;
        arg0->unk15C = 0;
        switch (arg0->unk64.unk0) {
        case 0:
            break;
        case 2:
            arg0->unkCC.unk2 = 0;
            func_801C7198(arg0, 0x1A);
            return;
        case 4:
            arg0->unkCC.unk2 = 0;
            func_801C7198(arg0, 0x20);
            return;
        case 6:
            arg0->unkCC.unk2 = 0;
            func_801C7198(arg0, 0x21);
            return;
        case 15:
            arg0->unkCC.unk2 = 0;
            func_801C7198(arg0, 0x1B);
            return;
        case 17:
            arg0->unkCC.unk2 = 0;
            func_801C7198(arg0, 0x22);
            return;
        case 19:
            arg0->unkCC.unk2 = 0;
            func_801C7198(arg0, 0x23);
            return;
        case 9:
            arg0->unkCC.unk2 = 0;
            func_801C7198(arg0, 0x1C);
            return;
        case 12:
            arg0->unkCC.unk2 = 0;
            func_801C7198(arg0, 0x1D);
            return;
        case 21:
            arg0->unkCC = D_80039C78;
            if (arg0->unk3D == 2) {
                func_800775B8(arg0, 0x1E, 1, 0x200, &arg0->unkCC, func_801C76B8);
                v = 0x49;
            } else {
                func_800775B8(arg0, 0x1F, 1, 0x200, &arg0->unkCC, func_801C76B8);
                v = 0x4A;
            }
            arg0->unk3C = v;
            arg0->unk41 = v;
            return;
        }
    }
act:
    switch (state) {
    case 1:
        switch (arg0->unk64.unk0) {
        case 0: case 2: case 4: case 6: case 9: case 12: case 15: case 17: case 19:
            func_801C7234(arg0, 2, 0, 0x100, &arg0->unkCC);
            break;
        default:
            if (func_801CAFB8(arg0) != 0) {
                func_801C7234(arg0, 2, 0, 0x100, &arg0->unkCC);
            }
            break;
        }
        break;
    case 2:
        switch (arg0->unk64.unk0) {
        case 0: case 2: case 4: case 6: case 9: case 12: case 15: case 17: case 19:
            func_801C7234(arg0, 4, 0, 0x100, &arg0->unkCC);
            break;
        default:
            if (func_801CAFB8(arg0) != 0) {
                func_801C7234(arg0, 4, 0, 0x100, &arg0->unkCC);
            }
            break;
        }
        break;
    case 3:
        switch (arg0->unk64.unk0) {
        case 0: case 2: case 4: case 6: case 9: case 12: case 15: case 17: case 19:
            func_801C7234(arg0, 6, 0, 0x100, &arg0->unkCC);
            break;
        default:
            if (func_801CAFB8(arg0) != 0) {
                func_801C7234(arg0, 6, 0, 0x100, &arg0->unkCC);
            }
            break;
        }
        break;
    case 6:
        switch (arg0->unk64.unk0) {
        case 0: case 2: case 4: case 6: case 9: case 12: case 15: case 17: case 19:
            func_801C7234(arg0, 0xF, 0, 0x100, &arg0->unkCC);
            break;
        default:
            if (func_801CAFB8(arg0) != 0) {
                func_801C7234(arg0, 0xF, 0, 0x100, &arg0->unkCC);
            }
            break;
        }
        break;
    case 7:
        switch (arg0->unk64.unk0) {
        case 0: case 2: case 4: case 6: case 9: case 12: case 15: case 17: case 19:
            func_801C7234(arg0, 0x11, 0, 0x100, &arg0->unkCC);
            break;
        default:
            if (func_801CAFB8(arg0) != 0) {
                func_801C7234(arg0, 0x11, 0, 0x100, &arg0->unkCC);
            }
            break;
        }
        break;
    case 8:
        switch (arg0->unk64.unk0) {
        case 0: case 2: case 4: case 6: case 9: case 12: case 15: case 17: case 19:
            func_801C7234(arg0, 0x13, 0, 0x100, &arg0->unkCC);
            break;
        default:
            if (func_801CAFB8(arg0) != 0) {
                func_801C7234(arg0, 0x13, 0, 0x100, &arg0->unkCC);
            }
            break;
        }
        break;
    case 4:
        switch (arg0->unk64.unk0) {
        case 0: case 2: case 4: case 6: case 9: case 12: case 15: case 17: case 19:
            func_801C7234(arg0, 9, 0, 0x100, &arg0->unkCC);
            break;
        default:
            if (func_801CAFB8(arg0) != 0) {
                func_801C7234(arg0, 9, 0, 0x100, &arg0->unkCC);
            }
            break;
        }
        break;
    case 5:
        switch (arg0->unk64.unk0) {
        case 0: case 2: case 4: case 6: case 9: case 12: case 15: case 17: case 19:
            func_801C7234(arg0, 0xC, 0, 0x100, &arg0->unkCC);
            break;
        default:
            if (func_801CAFB8(arg0) != 0) {
                func_801C7234(arg0, 0xC, 0, 0x100, &arg0->unkCC);
            }
            break;
        }
        break;
    case 0:
        switch (arg0->unk64.unk0) {
        default:
            if (func_801CAFB8(arg0) == 0) {
                break;
            }
        case 0: case 2: case 4: case 6: case 9: case 12: case 15: case 17: case 19:
            func_801C7234(arg0, 0, 0, 0x100, &arg0->unkCC);
            break;
        }
        break;
    case 0x40:
        if (arg0->unk3D != 0xC0) {
            if (info->unk0 == 1) {
                arg0->unkCC.unk2 = 0;
            } else {
                if (func_801CAFB8(arg0) != 0) {
                    if (arg0->unk64.unk0 == 0x38) {
                        func_80076A84(arg0, 0x16, 1, 0xFF, info->unkD, D_800760DC);
                        arg0->unk64.unkE = 0x400;
                    } else {
                        func_80076A84(arg0, 0x16, 1, 0xFF, info->unkD, D_800760DC);
                    }
                }
                break;
            }
        }
    fall:
        func_800775B8(arg0, 0x19, 1, info->unk22, &arg0->unkCC, func_801C76B8);
        break;
    case 0x41:
        func_800775B8(arg0, 0x1A, 1, info->unk22, &arg0->unkCC, func_801C76B8);
        break;
    case 0x42:
        func_800775B8(arg0, 0x20, 1, info->unk22, &arg0->unkCC, func_801C76B8);
        break;
    case 0x43:
        func_800775B8(arg0, 0x21, 1, info->unk22, &arg0->unkCC, func_801C76B8);
        break;
    case 0x44:
        func_800775B8(arg0, 0x1B, 1, info->unk22, &arg0->unkCC, func_801C76B8);
        break;
    case 0x45:
        func_800775B8(arg0, 0x22, 1, info->unk22, &arg0->unkCC, func_801C76B8);
        break;
    case 0x46:
        func_800775B8(arg0, 0x23, 1, info->unk22, &arg0->unkCC, func_801C76B8);
        break;
    case 0x47:
        func_800775B8(arg0, 0x1C, 1, info->unk22, &arg0->unkCC, func_801C76B8);
        break;
    case 0x48:
        func_800775B8(arg0, 0x1D, 1, info->unk22, &arg0->unkCC, func_801C76B8);
        break;
    case 0x49:
        func_800775B8(arg0, 0x1E, 1, info->unk22, &arg0->unkCC, func_801C76B8);
        break;
    case 0x4A:
        func_800775B8(arg0, 0x1F, 1, info->unk22, &arg0->unkCC, func_801C76B8);
        break;
    case 0x4B:
        func_800775B8(arg0, 0x18, 1, info->unk22, &arg0->unkCC, func_801C76B8);
        break;
    case 0x60:
        func_8007A02C(arg0);
        if (arg0->unk64.unk0 != 0x17) {
            arg0->unk15C = 0;
            arg0->unk148 = 0;
            func_8004CE44(0xE, &arg0->unk8, 0x3C, 0);
        }
        switch (arg0->unk64.unk0) {
        case 0x18:
        case 0x19:
            func_801C7234(arg0, 0, 0, 0x100, &arg0->unkCC);
            state = 0;
            arg0->unk36 &= ~0x10;
            break;
        case 0x1A:
            func_801C7234(arg0, 2, 0, 0x100, &arg0->unkCC);
            state = 1;
            arg0->unk36 &= ~0x10;
            break;
        case 0x20:
            func_801C7234(arg0, 4, 0, 0x100, &arg0->unkCC);
            state = 2;
            arg0->unk36 &= ~0x10;
            break;
        case 0x21:
            func_801C7234(arg0, 6, 0, 0x100, &arg0->unkCC);
            state = 3;
            arg0->unk36 &= ~0x10;
            break;
        case 0x1B:
            func_801C7234(arg0, 0xF, 0, 0x100, &arg0->unkCC);
            state = 6;
            arg0->unk36 &= ~0x10;
            break;
        case 0x22:
            func_801C7234(arg0, 0x11, 0, 0x100, &arg0->unkCC);
            state = 7;
            arg0->unk36 &= ~0x10;
            break;
        case 0x23:
            func_801C7234(arg0, 0x13, 0, 0x100, &arg0->unkCC);
            state = 8;
            arg0->unk36 &= ~0x10;
            break;
        case 0x1C:
            func_801C7234(arg0, 9, 0, 0x100, &arg0->unkCC);
            state = 4;
            arg0->unk36 &= ~0x10;
            break;
        case 0x1D:
            func_801C7234(arg0, 0xC, 0, 0x100, &arg0->unkCC);
            state = 5;
            arg0->unk36 &= ~0x10;
            break;
        default:
            if (arg0->unk64.unk0 == 0x17) {
                if (func_8004EBF8(&arg0->unk64) != 0) {
                    arg0->unk36 &= ~0x10;
                    func_801C7234(arg0, 0, 0, 0x100, &arg0->unkCC);
                } else {
                    func_800765E8(arg0, 0x17, 1, D_80076078);
                }
            } else {
                func_800765E8(arg0, 0x17, 1, D_80076078);
                arg0->unkCC = D_80039C78;
            }
            arg0->unk64.unkE = 0x200;
            break;
        }
        break;
    case 0x61:
        func_801C7034(arg0, info);
        if (arg0->unk64.unk0 == 0x24) {
            if (func_8004EBF8(&arg0->unk64) != 0) {
                arg0->unk36 &= ~0x10;
                func_80076578(arg0, 0, 1, D_80076014);
            } else {
                func_800765E8(arg0, 0x24, 1, D_80076078);
                arg0->unk64.unkE = 0x200;
            }
        } else {
            arg0->unk15C = 0;
            arg0->unk148 = 0;
            func_800765E8(arg0, 0x24, 1, D_80076078);
            arg0->unk64.unkE = 0x200;
            func_8004EA3C(&arg0->unk64, 1, info->unk9);
            arg0->unkCC = D_80039C78;
            if (arg0->unk2E <= arg0->unk8.unk2 && arg0->unk2E >= arg0->unk8.unk2 - arg0->unk2A) {
                func_8007847C(arg0, 0x64, 5, 0x12C, 0x2BC, 0x64, 0x12C, 0x40);
            }
        }
        break;
    case 0x20:
        if (arg0->unk64.unk0 == 0x38 && func_8004EBF8(&arg0->unk64) != 0) {
            arg0->unk36 &= ~0x10;
        }
        func_800766E0(arg0, 0x38, 1, 0, 0, NULL, func_801C7F98);
        arg0->unk64.unkE = 0x400;
        break;
    case 0x21:
        if (arg0->unk64.unk0 == 0x2F && func_8004EBF8(&arg0->unk64) != 0) {
            arg0->unk36 &= ~0x10;
        }
        func_800775B8(arg0, 0x2F, 1, 0x400, &arg0->unkCC, func_801C814C);
        break;
    case 0x80:
        func_8007790C(arg0, arg0->unk64.unk0, 1, 0x400, &arg0->unkCC, -1, D_800764C4);
        break;
    case 0x81:
        func_800778B8(arg0, arg0->unk64.unk0, 0x400, &arg0->unkCC, -1, func_801C76B8);
        break;
    }
    if (!(arg0->unk36 & 0x10)) {
        arg0->unk3C = state;
    }
}

INCLUDE_ASM("asm/USA/fdat008/nonmatchings/fdat008", func_801CBDC8);

void func_801CBE60(Obj801C4C94 *arg0) {
    arg0->unk50 = func_801CB03C;
    arg0->unk54 = func_801C8FBC;
    arg0->unk58 = func_801CBDC8;
    arg0->unk5C = func_801CABCC;
    func_801CAF18((Obj801C52C0 *)arg0);
}
