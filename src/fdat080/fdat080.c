#include "common.h"
#include "fdat080.h"

INCLUDE_ASM("asm/USA/fdat080/nonmatchings/fdat080", func_801C52FC);

INCLUDE_ASM("asm/USA/fdat080/nonmatchings/fdat080", func_801C55C8);

INCLUDE_ASM("asm/USA/fdat080/nonmatchings/fdat080", func_801C5708);

void func_801C582C(Obj801C4E64 *arg0) {
    func_80078598();
    arg0->unk148 = 0;
    arg0->unk15C = 0;
    if (arg0->unk40 != 0xFF) {
        if (func_800754D0(arg0, &D_801CC14C) != 0) {
            func_80078E1C(arg0);
        }
    } else if (arg0->unk64.unk18 == 0 && func_801C5708(arg0) != 0) {
        arg0->unk64.unk18 = 0;
        if ((*(s32 *)&arg0->unk3C & 0xFFFF00) == 0xC000) {
            if (rand() < 0x51F) {
                arg0->unk3E = 5;
            }
        } else if (arg0->unk3F == 0) {
            func_80077B78(arg0, 0x17, arg0->unk0->unk1C, arg0->unk0->unk20, &D_801CC170, 1, 0, 1);
            arg0->unk3F = 1;
            arg0->unk148 = 0xF;
            arg0->unk14A = 0xB4;
            arg0->unk14B = 0xA0;
            arg0->unk14C = 0x8C;
            arg0->unk15C = 1;
            arg0->unk3E--;
        } else {
            arg0->unk3F--;
        }
    }
}

INCLUDE_ASM("asm/USA/fdat080/nonmatchings/fdat080", func_801C5970);

INCLUDE_ASM("asm/USA/fdat080/nonmatchings/fdat080", func_801C59E0);

INCLUDE_ASM("asm/USA/fdat080/nonmatchings/fdat080", func_801C5A48);

INCLUDE_RODATA("asm/USA/fdat080/nonmatchings/fdat080", D_801C4B40);

s32 func_801C5AB0(Obj801C52C0 *arg0, s32 arg1, ...) {
    s32 dist;
    s32 r;

    dist = func_80073714(arg0, 0x7FFFFFFF);
    switch (arg1) {
    case 0x8100:
        return 0;
    case 4:
        if (arg0->unk40 != 0xFF) {
            arg0->unk40 = 0;
        }
        arg0->unk36 &= ~0x10;
        break;
    case 1:
    case 2:
        r = rand() & 0xF;
        goto pick;
    case 5:
        return 0;
    }
    arg0->unk64.unk18 = -1;
    if (dist >= 7000) {
        func_801C5970((s32)arg0, 2);
        return 0;
    }
    arg0->unk64.unk18 = 0;
    r = rand() & 0x3F;
pick:
    switch (r) {
    case 0:
    case 1:
    case 2:
        func_801C5970((s32)arg0, 2);
        break;
    case 3:
        func_801C5970((s32)arg0, 3);
        break;
    case 4:
    case 5:
        func_801C59E0((s32)arg0, 2);
        return 0;
    case 6:
    case 7:
        func_801C5A48((s32)arg0, 2);
        return 0;
    case 8:
        func_801C59E0((s32)arg0, 3);
        return 0;
    case 11:
        func_801C5A48((s32)arg0, 3);
        return 0;
    case 12:
        func_801C5970((s32)arg0, 4);
        break;
    case 13:
        func_801C5970((s32)arg0, 5);
        break;
    case 14:
        func_801C5970((s32)arg0, 1);
        break;
    }
    return 0;
}

INCLUDE_ASM("asm/USA/fdat080/nonmatchings/fdat080", func_801C5C5C);

void func_801C5D98(Obj801C4E64 *arg0) {
    arg0->unk36 = 2;
    arg0->unk50 = func_801C55C8;
    arg0->unk54 = func_801C5AB0;
    arg0->unk58 = func_801C582C;
    arg0->unk5C = func_801C5C5C;
    arg0->unk164 *= 4;
    if (arg0->unk54 != NULL) {
        arg0->unk54(arg0, 0);
    }
    if (arg0->unk50 != NULL) {
        arg0->unk50(arg0, arg0->unk41);
    }
}

void func_801C5E2C(Obj801C5E2C *arg0) {
    arg0->unk36 = 0x102;
    arg0->unk108 = &D_801CC190;
    func_801CC100(arg0);
}

void func_801C5E5C(Obj801C53A0 *arg0) {
    if (D_801D0B94[arg0->unkFC].unk0 == 0) {
        func_80078E1C(arg0);
    }
}

void func_801C5EA0(Obj801C4E64 *arg0) {
    if (arg0->unkFE == 0) {
        arg0->unk36 = 2;
    } else {
        arg0->unk36 = 1;
    }
    arg0->unk32 = 5;
    arg0->unk58 = func_801C5E5C;
}

INCLUDE_ASM("asm/USA/fdat080/nonmatchings/fdat080", func_801C5ED0);

void func_801C6128(Obj801C5E2C *arg0) {
    Sub801C6128 *task;

    task = func_80072120(0);
    arg0->unk2C = task;
    task->unk4 = func_801C5ED0;
}

s32 func_801C6164(Obj801C6164 *arg0, s32 arg1, Elem801C6164 **arg2, ...) {
    Sub801C6164 *data;

    if (arg1 == 0x8100) {
        if (((*arg2)->unkC & 7) == 2) {
            data = arg0->unk38;
            func_8008A0B0(data->unk0, data->unk1, data->unk2, data->unk4, data->unk5);
            if (arg0->unk38->unk6 == 1) {
                arg0->unk2C = NULL;
            }
            return 1;
        }
    }
    return 0;
}

void func_801C61FC(Obj801C5E2C *arg0) {
    s32 unused[36];
    Sub801C6128 *task;

    task = func_80072120(0);
    arg0->unk2C = task;
    task->unk4 = func_801C6164;
}

INCLUDE_ASM("asm/USA/fdat080/nonmatchings/fdat080", func_801C6238);

void func_801C6360(Obj801C5E2C *arg0) {
    Sub801C6128 *task;

    task = func_80072120(0);
    arg0->unk2C = task;
    task->unk0 = func_801C6238;
}

void func_801C639C(Obj801C5E2C *arg0) {
    Sub801C6128 *task;
    Sub801C639C *data;

    if (arg0->unk38->unk0 == 1) {
        task = arg0->unk2C;
        if (task->unk10 == 0) {
            if (func_8006D45C() != 0) {
                func_8006D39C(arg0);
                data = arg0->unk38;
                func_8008A0B0(data->unk4, data->unk5, data->unk6, data->unk8, data->unk9);
            }
        } else {
            task->unk10--;
        }
    }
}

s32 func_801C6438(Obj801C730C *arg0, s32 arg1, s32 arg2, ...) {
    if (arg1 == 0x8200) {
        arg0->unk38->unk0 = 1;
    }
    return 0;
}

void func_801C645C(Obj801C5E2C *arg0) {
    s32 unused[36];

    arg0->unk2C = func_80072120(4);
    arg0->unk2C->unk10 = arg0->unk38->unk2 * 22;
    arg0->unk2C->unk0 = func_801C639C;
    arg0->unk2C->unk4 = func_801C6438;
}

INCLUDE_ASM("asm/USA/fdat080/nonmatchings/fdat080", func_801C64D0);

INCLUDE_ASM("asm/USA/fdat080/nonmatchings/fdat080", func_801C6610);

void func_801C6658(Obj801C6658 *arg0) {
    Sub801C6B04 *task;

    if (func_801C6610(arg0->unk22, arg0->unk24) != 0 && func_801C6610(arg0->unk2A, arg0->unk2C) != 0) {
        task = func_80073674(4);
        arg0->unk14 = task;
        task->unk4 = func_801C64D0;
        return;
    }
    arg0->unk6 = -1;
}

INCLUDE_ASM("asm/USA/fdat080/nonmatchings/fdat080", func_801C66CC);

void func_801C67AC(Obj801C6658 *arg0) {
    Sub801C6B04 *task;

    task = func_80073674(0);
    arg0->unk14 = task;
    task->unk0 = func_801C66CC;
}

INCLUDE_ASM("asm/USA/fdat080/nonmatchings/fdat080", func_801C67E8);

void func_801C6B04(Obj801C6B04 *arg0) {
    Sub801C6B04 *task;

    task = func_80073674(0);
    arg0->unk14 = task;
    task->unk0 = func_801C67E8;
}

void func_801C6B40(void) {
}

void func_801C6B48(void) {
    func_8008A80C();
}

void func_801C6B68(Obj801C4E64 *arg0) {
    if (!(arg0->unk148 & 0xF)) {
        func_8004CE44(arg0->unk108->unk3A, &arg0->unk8, 0x64, -0x50);
        return;
    }
    func_8004CC30(arg0->unk108->unk3B, D_801A5DC0->unk1000, &arg0->unk8, 0x64, 0x1F40, 0x2710, -0x30);
}

void func_801C6BE8(Obj801C52C0 *arg0, Sub801C5634 *arg1) {
    arg0->unk148 &= 0xFFF0;
    arg0->unk15C &= ~arg1->unk38;
}

void func_801C6C10(Obj801C52C0 *arg0, Sub801C5634 *arg1) {
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

void func_801C6C7C(Obj801C52C0 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C ^= 1 << arg1->unk2D;
}

void func_801C6C98(Obj801C52C0 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C &= ~(1 << arg1->unk2D);
}

void func_801C6CB8(Obj801C52C0 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C |= 1 << arg1->unk6;
}

void func_801C6CD4(Obj801C52C0 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C ^= 1 << arg1->unk6;
}

void func_801C6CF0(Obj801C52C0 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C &= ~(1 << arg1->unk6);
}

void func_801C6D10(Obj801C52C0 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C ^= 1 << arg1->unk9;
}

void func_801C6D2C(Obj801C52C0 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C &= ~(1 << arg1->unk9);
}

void func_801C6D4C(Obj801C4E64 *arg0, s32 arg1) {
    if (arg0->unk3D != 0xB0) {
        func_8004DE88(&arg0->unk64, &arg0->unkCC);
        arg0->unkCC.unk2 = 0;
        arg0->unkCC.unk0 <<= 7;
        arg0->unkCC.unk4 <<= 7;
    }
    arg0->unk15C = 0;
    func_800775B8(arg0, arg1, 1, 0x200, &arg0->unkCC, func_801C726C);
    arg0->unk3C = 0x41;
    arg0->unk41 = 0x41;
}

INCLUDE_ASM("asm/USA/fdat080/nonmatchings/fdat080", func_801C6DE8);

INCLUDE_ASM("asm/USA/fdat080/nonmatchings/fdat080", func_801C6FA0);

INCLUDE_ASM("asm/USA/fdat080/nonmatchings/fdat080", func_801C726C);

INCLUDE_ASM("asm/USA/fdat080/nonmatchings/fdat080", func_801C7558);

INCLUDE_ASM("asm/USA/fdat080/nonmatchings/fdat080", func_801C785C);

INCLUDE_ASM("asm/USA/fdat080/nonmatchings/fdat080", func_801C7B4C);

INCLUDE_ASM("asm/USA/fdat080/nonmatchings/fdat080", func_801C7D00);

INCLUDE_ASM("asm/USA/fdat080/nonmatchings/fdat080", func_801C7FDC);

INCLUDE_ASM("asm/USA/fdat080/nonmatchings/fdat080", func_801C80E4);

INCLUDE_ASM("asm/USA/fdat080/nonmatchings/fdat080", func_801C81B4);

INCLUDE_ASM("asm/USA/fdat080/nonmatchings/fdat080", func_801C82C4);

INCLUDE_ASM("asm/USA/fdat080/nonmatchings/fdat080", func_801C848C);

void func_801C8818(Obj801C52C0 *arg0, s32 arg1) {
    if (arg0->unk126 == -1) {
        func_800759A4(arg0, arg1, &D_80039C78);
    } else {
        func_80075B08(arg0, arg1, &D_80198B08[arg0->unk126]);
    }
}

INCLUDE_ASM("asm/USA/fdat080/nonmatchings/fdat080", func_801C8878);

INCLUDE_ASM("asm/USA/fdat080/nonmatchings/fdat080", func_801C88D4);

INCLUDE_ASM("asm/USA/fdat080/nonmatchings/fdat080", func_801C8930);

INCLUDE_ASM("asm/USA/fdat080/nonmatchings/fdat080", func_801C8B70);

INCLUDE_ASM("asm/USA/fdat080/nonmatchings/fdat080", func_801C90D0);

void func_801C935C(Obj801C52C0 *arg0, Sub801C935C *arg1) {
    Seg801C935C seg;
    Sub801C50B0 rot;
    Tbl801C935C *tbl;
    Elem801C52C0 *sub;
    Mdl801C935C *mdl;
    Hdr801C935C *hdr;
    Part801C935C *part;
    Slot801C935C *slot;
    Elem801C935C *elem;
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
    ok = func_801C90D0(arg0, arg1, 0, tbl->unk0);
    if (sub->unk0 != 0
        || (arg0->unk3C == 0x22 && arg0->unk64.unk0 == arg0->unk135 && func_8004EBF8(&arg0->unk64))) {
        arg0->unk64.unk18 = arg1->unkB;
        mdl = arg0->unk60;
        if (mdl != NULL && mdl->unkE == arg1->unkB) {
            hdr = D_801A6134[arg0->unk8.unk6];
            part = (Part801C935C *)((u8 *)hdr + ((s32 *)((u8 *)hdr + hdr->unk14))[arg1->unkB]);
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
                    func_801C6DE8(arg0, 0, 0, 0x100, &arg0->unkCC);
                }
            }
            switch (arg1->unk2 & 0xF) {
            case 0:
                func_80085E98(arg0, &arg1->unk22, &seg.unk0, &seg.unk8, tbl->unk0, arg1->unk12, 7, &D_801CC6E0, 0x14, 3, 0x78, &D_801CC6E4, &D_801CC6E8, 0, 4);
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
                func_80085E98(arg0, &arg1->unk22, &seg.unk0, &seg.unk8, tbl->unk0, arg1->unk12, 7, &D_801CC6EC, 0x14, 3, 0x78, &D_801CC6F0, &D_801CC6F4, 0, 4);
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

INCLUDE_ASM("asm/USA/fdat080/nonmatchings/fdat080", func_801C9B30);

INCLUDE_ASM("asm/USA/fdat080/nonmatchings/fdat080", func_801C9EA0);

INCLUDE_ASM("asm/USA/fdat080/nonmatchings/fdat080", func_801CA21C);

INCLUDE_ASM("asm/USA/fdat080/nonmatchings/fdat080", func_801CA270);

INCLUDE_ASM("asm/USA/fdat080/nonmatchings/fdat080", func_801CA780);

void func_801CAACC(Obj801C52C0 *arg0) {
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

void func_801CAB6C(Obj801CAB6C *arg0) {
    Elem801C52C0 *elem;

    if (arg0->unk2E <= arg0->unk8.unk2 && arg0->unk2E >= arg0->unk8.unk2 - arg0->unk2A) {
        if (arg0->unk64.unk0 == 0x16) {
            if (arg0->unk64.unkA == 6) {
                func_8007847C(arg0, 0x64, 5, 0x12C, 0x2BC, 0x64, 0x12C, 0x40);
            }
        } else {
            elem = arg0->unk108;
            if (arg0->unk64.unkA == 0xC) {
                func_80078250(arg0, elem->unk30, elem->unk31, 0, 0x50, 0xC8, 0x41, 0);
            } else if (arg0->unk64.unkA == 5) {
                func_80078250(arg0, elem->unk32, elem->unk33, 0, 0x50, 0xC8, 0x41, 0);
            }
        }
    }
    func_80075FC0(arg0);
    if (func_8004F024(&arg0->unk64, &arg0->unk8) == 0) {
        if (arg0->unk50 != NULL) {
            arg0->unk50(arg0, arg0->unk41);
        }
    }
}

INCLUDE_ASM("asm/USA/fdat080/nonmatchings/fdat080", func_801CACA8);

INCLUDE_ASM("asm/USA/fdat080/nonmatchings/fdat080", func_801CADD0);

void func_801CC100(Obj801C4E64 *arg0) {
    arg0->unk50 = func_801CADD0;
    arg0->unk54 = func_801C8B70;
    arg0->unk58 = func_801CA270;
    arg0->unk5C = func_801CA780;
    func_801CAACC((Obj801C52C0 *)arg0);
}
