#include "common.h"
#include "fdat050.h"

void func_801C5454(Obj801C5454 *arg0) {
    arg0->unk36 = 2;
    arg0->unk108 = &D_801CCD2C;
    func_801CCCE0(arg0);
}

INCLUDE_ASM("asm/USA/fdat050/nonmatchings/fdat050", func_801C5484);

void func_801C5564(Obj801C4EB8 *arg0) {
    func_8004ECA8(&arg0->unk64);
    if (--arg0->unk64.unk2 == 0) {
        if (arg0->unk50 != NULL) {
            arg0->unk50(arg0, arg0->unk41);
        }
    }
    arg0->unkCC += arg0->unkCE;
}

void func_801C55DC(Obj801C5454 *arg0) {
    func_801C5564(arg0);
    if (arg0->unkCC.unk0 >= 0x19) {
        arg0->unkCC.unk0 = 0x18;
    }
    arg0->unk12 += arg0->unkCC.unk0;
}

void func_801C5630(Obj801C5454 *arg0) {
    func_801C5564(arg0);
    if (arg0->unkCC.unk0 < -0x18) {
        arg0->unkCC.unk0 = -0x18;
    }
    arg0->unk12 += arg0->unkCC.unk0;
}

INCLUDE_RODATA("asm/USA/fdat050/nonmatchings/fdat050", D_801C4B40);

INCLUDE_ASM("asm/USA/fdat050/nonmatchings/fdat050", func_801C5684);

INCLUDE_ASM("asm/USA/fdat050/nonmatchings/fdat050", func_801C57D4);

INCLUDE_ASM("asm/USA/fdat050/nonmatchings/fdat050", func_801C5948);

INCLUDE_ASM("asm/USA/fdat050/nonmatchings/fdat050", func_801C5C2C);

void func_801C5D54(Obj801C5D08 *arg0) {
    Buf801C5D08 buf;
    Sub8004DE88 vec;
    Sub801C5D08 *sub;
    u8 *tbl;
    u8 kind;
    s32 flags;

    arg0->unk148 = 0;
    arg0->unk15C = 0;
    if (arg0->unk40 != 0xFF) {
        if (func_800754D0(arg0, D_801CD310) != 0) {
            func_80078E1C(arg0);
        }
        return;
    }
    kind = arg0->unkFC;
    if (kind == 1 && (rand() < 0x148 || (arg0->unk0->unk24 != 0 && rand() < 0x3D8)) &&
        func_800745D0(arg0, &vec, 0, 10, kind, kind) != 0 &&
        func_80073C2C(arg0->unk48, &vec, arg0->unk12, 0, 8, arg0->unk36, 10000, -800, 800, -500, 500, &buf) != 0 &&
        (buf.unk16 & 2) && func_800781E8(arg0) != 0) {
        sub = arg0->unk0;
        func_80077B78(arg0, 0x17, sub->unk1E, sub->unk21, D_801CD334, kind, 0, kind, 0, 0, arg0->unk48);
    }
    if (arg0->unk3F != 0) {
        arg0->unk3F--;
        return;
    }
    tbl = D_801CD290[arg0->unkFC];
    if (func_801C5C2C(arg0, tbl) == 0) {
        return;
    }
    if (arg0->unk3E == 0) {
        if (rand() < 0xA3E && (rand() < 0x148 || func_800781E8(arg0) != 0)) {
            arg0->unk3E = 6;
        }
        return;
    }
    if (arg0->unk3E & 1) {
        flags = 0x10;
        if (arg0->unkFC != 2) {
            flags = 0x20;
        }
        sub = arg0->unk0;
        func_80077B78(arg0, flags | 7, sub->unk1C, sub->unk20, tbl, 1, arg0->unk108, arg0->unk108 + 1);
        arg0->unk148 = 0xF;
        arg0->unk14A = 0xB4;
        arg0->unk14B = 0xA0;
        arg0->unk14C = 0x8C;
        arg0->unk15C = 0x10;
        arg0->unk108 ^= 2;
    }
    if (arg0->unk3E-- == 0) {
        arg0->unk3F = 10;
    }
}

void func_801C6024(s32 arg0, s32 arg1) {
    Sub8004DE88 vec;

    vec.unk0 = func_80014D78(100) - 50;
    vec.unk4 = func_80014D78(100) - 50;
    vec.unk2 = 0;
    func_800759A4((Obj801C52C0 *)arg0, arg1, (Sub8004DE88 *)&vec);
}

INCLUDE_ASM("asm/USA/fdat050/nonmatchings/fdat050", func_801C6088);

INCLUDE_ASM("asm/USA/fdat050/nonmatchings/fdat050", func_801C62A8);

INCLUDE_ASM("asm/USA/fdat050/nonmatchings/fdat050", func_801C6438);

void func_801C650C(Obj801C5454 *arg0) {
    arg0->unk36 = 2;
    func_801C6438(arg0);
}

void func_801C6530(Obj801C5454 *arg0) {
    arg0->unk36 = 1;
    func_801C6438(arg0);
}

INCLUDE_ASM("asm/USA/fdat050/nonmatchings/fdat050", func_801C6554);

void func_801C67AC(Obj801C5454 *arg0) {
    Sub801C67AC *task;

    task = func_80072120(0);
    arg0->unk2C = task;
    task->unk4 = func_801C6554;
}

INCLUDE_ASM("asm/USA/fdat050/nonmatchings/fdat050", func_801C67E8);

void func_801C6910(Obj801C5454 *arg0) {
    Sub801C67AC *task;

    task = func_80072120(0);
    arg0->unk2C = task;
    task->unk0 = func_801C67E8;
}

void func_801C694C(Obj801C5454 *arg0) {
    Sub801C67AC *task;
    Sub801C694C *data;
    s32 timer;

    if (arg0->unk38->unk0 == 1) {
        task = arg0->unk2C;
        timer = task->unk10;
        if (timer == 0) {
            if (func_8006D45C() != 0) {
                func_8006D39C(arg0);
                data = arg0->unk38;
                func_8008A0B0(data->unk4, data->unk5, data->unk6, data->unk8, data->unk9);
            }
        } else {
            task->unk10 = timer - 1;
        }
    }
}

s32 func_801C69E8(Obj801C730C *arg0, s32 arg1, s32 arg2, ...) {
    if (arg1 == 0x8200) {
        arg0->unk38->unk0 = 1;
    }
    return 0;
}

void func_801C6A0C(Obj801C5454 *arg0) {
    s32 unused[0x24];
    Sub801C67AC *task;

    task = func_80072120(4);
    arg0->unk2C = task;
    task->unk10 = arg0->unk38->unk2 * 0x16;
    arg0->unk2C->unk0 = func_801C694C;
    arg0->unk2C->unk4 = func_801C69E8;
}

void func_801C6A80(Obj801C7360 *arg0) {
    arg0->unk8 += arg0->unk22;
    arg0->unkA += arg0->unk24;
    arg0->unkC += arg0->unk26;
}

void func_801C6AB4(Obj801C5B54 *arg0) {
    Sub801C5B54 *task;

    task = func_80073674(0);
    arg0->unk14 = task;
    task->unk0 = func_801C6A80;
}

INCLUDE_ASM("asm/USA/fdat050/nonmatchings/fdat050", func_801C6AF0);

INCLUDE_ASM("asm/USA/fdat050/nonmatchings/fdat050", func_801C6C30);

void func_801C6C78(Obj801C5B54 *arg0) {
    Sub801C5B54 *task;

    if (func_801C6C30(arg0->unk22, arg0->unk24) != 0 && func_801C6C30(arg0->unk2A, arg0->unk2C) != 0) {
        task = func_80073674(4);
        arg0->unk14 = task;
        task->unk4 = func_801C6AF0;
        return;
    }
    arg0->unk6 = -1;
}

void func_801C6CEC(Obj801C63CC *arg0) {
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

INCLUDE_ASM("asm/USA/fdat050/nonmatchings/fdat050", func_801C6DB8);

void func_801C706C(Obj801C5B54 *arg0) {
    Sub801C5B54 *task;

    task = func_80073674(4);
    arg0->unk14 = task;
    task->unk0 = func_801C6DB8;
    arg0->unk14->unk8 = func_80014D78(arg0->unk28);
}

void func_801C70C0(Obj801C6A40 *arg0) {
    Sub801C6A40 *task;
    Sub801C6568 info;
    Sub8004DE88 vec;
    Sub8004DE88 pos;
    s32 hit;
    s32 n;

    task = arg0->unk14;
    if (task->unk8 == -1) {
        return;
    }
    if (task->unk8 == 0) {
        info.unk0 = 7;
        info.unk2 = arg0->unk2A;
        info.unk4 = arg0->unk29;
        task->unk8 = arg0->unk28;
        func_80014774(&arg0->unk8, &vec);
        switch (arg0->unk22) {
        case 0:
            arg0->unk24 = 0x240;
            vec.unk0 = (arg0->unk24 * vec.unk0) >> 12;
            vec.unk2 = (arg0->unk24 * vec.unk2) >> 12;
            vec.unk4 = (arg0->unk24 * vec.unk4) >> 12;
            func_80086598(0, &info, D_801CD378, D_801CD37C, arg0, &arg0->unk8, &vec, 0x37, 0x7530);
            func_800889B4(0, arg0, &vec, &info, 0x7530, 9);
            break;
        case 1:
        case 3:
            hit = D_801AC860[arg0->unk8.unk6 >> 5] & (1 << (arg0->unk8.unk6 & 0x1F));
            if (hit != 0) {
                vec.unk0 = (arg0->unk24 * vec.unk0) >> 12;
                vec.unk2 = (arg0->unk24 * vec.unk2) >> 12;
                vec.unk4 = (arg0->unk24 * vec.unk4) >> 12;
                func_80089628(arg0, &vec, 0xC, arg0->unk22);
            }
            break;
        case 2:
            hit = D_801AC860[arg0->unk8.unk6 >> 5] & (1 << (arg0->unk8.unk6 & 0x1F));
            if (hit != 0) {
                vec.unk0 = (vec.unk0 * 0x80) >> 12;
                vec.unk2 = (vec.unk2 * 0x80) >> 12;
                vec.unk4 = (vec.unk4 * 0x80) >> 12;
                func_800898A4(&info, D_801CD380, D_801CD384, arg0, &vec, &arg0->unk8, 6);
            }
            break;
        case 4:
            vec.unk0 = (arg0->unk24 * vec.unk0) >> 12;
            vec.unk2 = (arg0->unk24 * vec.unk2) >> 12;
            vec.unk4 = (arg0->unk24 * vec.unk4) >> 12;
            func_80086598(0, &info, D_801CD388, D_801CD38C, arg0, &arg0->unk8, &vec, 0x3B, 0x7530);
            break;
        case 5:
            hit = D_801AC860[arg0->unk8.unk6 >> 5] & (1 << (arg0->unk8.unk6 & 0x1F));
            if (hit != 0) {
                vec.unk0 = (arg0->unk24 * vec.unk0) >> 12;
                vec.unk2 = (arg0->unk24 * vec.unk2) >> 12;
                vec.unk4 = (arg0->unk24 * vec.unk4) >> 12;
                func_80089A80(arg0, &vec);
            }
            break;
        case 6:
            n = arg0->unk26;
            vec.unk0 = (arg0->unk24 * vec.unk0) >> 12;
            vec.unk2 = (arg0->unk24 * vec.unk2) >> 12;
            vec.unk4 = (arg0->unk24 * vec.unk4) >> 12;
            for (n--; n != -1; n--) {
                pos.unk0 = arg0->unk0 + (((rand() * 14000) >> 15) - 7000);
                pos.unk2 = arg0->unk2 + (((rand() * 2800) >> 15) - 2000);
                pos.unk4 = arg0->unk4;
                func_80089C30(&pos, &vec, 0x60);
            }
            break;
        }
    } else {
        task->unk8--;
    }
}

void func_801C7598(Obj801C5B54 *arg0) {
    Sub801C5B54 *task;
    u8 id;

    task = func_80073674(4);
    arg0->unk14 = task;
    task->unk0 = func_801C70C0;
    id = arg0->unk28;
    if (id == 0xFF) {
        arg0->unk14->unk8 = -1;
        return;
    }
    arg0->unk14->unk8 = func_80014D78(id);
}

INCLUDE_ASM("asm/USA/fdat050/nonmatchings/fdat050", func_801C7604);

void func_801C76E4(Obj801C5B54 *arg0) {
    Sub801C5B54 *task;

    task = func_80073674(0);
    arg0->unk14 = task;
    task->unk0 = func_801C7604;
}

void func_801C7720(void) {
}

void func_801C7728(void) {
    func_8008A80C();
}

void func_801C7748(Obj801C5454 *arg0) {
    if (!(arg0->unk148 & 0xF)) {
        func_8004CE44(arg0->unk108->unk3A, &arg0->unk8, 0x64, -0x50);
        return;
    }
    func_8004CC30(arg0->unk108->unk3B, D_801A5DC0->unk1000, &arg0->unk8, 0x64, 0x1F40, 0x2710, -0x30);
}

void func_801C77C8(Obj801C52C0 *arg0, Sub801C5634 *arg1) {
    arg0->unk148 &= 0xFFF0;
    arg0->unk15C &= ~arg1->unk38;
}

void func_801C77F0(Obj801C52C0 *arg0, Sub801C5634 *arg1) {
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

void func_801C785C(Obj801C52C0 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C ^= 1 << arg1->unk2D;
}

void func_801C7878(Obj801C52C0 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C &= ~(1 << arg1->unk2D);
}

void func_801C7898(Obj801C52C0 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C |= 1 << arg1->unk6;
}

void func_801C78B4(Obj801C52C0 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C ^= 1 << arg1->unk6;
}

void func_801C78D0(Obj801C52C0 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C &= ~(1 << arg1->unk6);
}

void func_801C78F0(Obj801C52C0 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C ^= 1 << arg1->unk9;
}

void func_801C790C(Obj801C52C0 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C &= ~(1 << arg1->unk9);
}

void func_801C792C(Obj801C5454 *arg0, s32 arg1) {
    if (arg0->unk3D != 0xB0) {
        func_8004DE88(&arg0->unk64, &arg0->unkCC);
        arg0->unkCC.unk2 = 0;
        arg0->unkCC.unk0 <<= 7;
        arg0->unkCC.unk4 <<= 7;
    }
    arg0->unk15C = 0;
    func_800775B8(arg0, arg1, 1, 0x200, &arg0->unkCC, func_801C7E4C);
    arg0->unk3C = 0x41;
    arg0->unk41 = 0x41;
}

INCLUDE_ASM("asm/USA/fdat050/nonmatchings/fdat050", func_801C79C8);

INCLUDE_ASM("asm/USA/fdat050/nonmatchings/fdat050", func_801C7B80);

INCLUDE_ASM("asm/USA/fdat050/nonmatchings/fdat050", func_801C7E4C);

INCLUDE_ASM("asm/USA/fdat050/nonmatchings/fdat050", func_801C8138);

INCLUDE_ASM("asm/USA/fdat050/nonmatchings/fdat050", func_801C843C);

INCLUDE_ASM("asm/USA/fdat050/nonmatchings/fdat050", func_801C872C);

INCLUDE_ASM("asm/USA/fdat050/nonmatchings/fdat050", func_801C88E0);

INCLUDE_ASM("asm/USA/fdat050/nonmatchings/fdat050", func_801C8BBC);

INCLUDE_ASM("asm/USA/fdat050/nonmatchings/fdat050", func_801C8CC4);

INCLUDE_ASM("asm/USA/fdat050/nonmatchings/fdat050", func_801C8D94);

INCLUDE_ASM("asm/USA/fdat050/nonmatchings/fdat050", func_801C8EA4);

INCLUDE_ASM("asm/USA/fdat050/nonmatchings/fdat050", func_801C906C);

void func_801C93F8(Obj801C52C0 *arg0, s32 arg1) {
    if (arg0->unk126 == -1) {
        func_800759A4(arg0, arg1, &D_80039C78);
    } else {
        func_80075B08(arg0, arg1, &D_80198B08[arg0->unk126]);
    }
}

INCLUDE_ASM("asm/USA/fdat050/nonmatchings/fdat050", func_801C9458);

INCLUDE_ASM("asm/USA/fdat050/nonmatchings/fdat050", func_801C94B4);

INCLUDE_ASM("asm/USA/fdat050/nonmatchings/fdat050", func_801C9510);

INCLUDE_ASM("asm/USA/fdat050/nonmatchings/fdat050", func_801C9750);

INCLUDE_ASM("asm/USA/fdat050/nonmatchings/fdat050", func_801C9CB0);

void func_801C9F3C(Obj801C52C0 *arg0, Sub801C9F3C *arg1) {
    Seg801C9F3C seg;
    Sub8004DE88 rot;
    Tbl801C9F3C *tbl;
    Elem801C52C0 *sub;
    Mdl801C9F3C *mdl;
    Hdr801C9F3C *hdr;
    Part801C9F3C *part;
    Slot801C9F3C *slot;
    Elem801C9F3C *elem;
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
    ok = func_801C9CB0(arg0, arg1, 0, tbl->unk0);
    if (sub->unk0 != 0
        || (arg0->unk3C == 0x22 && arg0->unk64.unk0 == arg0->unk135 && func_8004EBF8(&arg0->unk64))) {
        arg0->unk64.unk18 = arg1->unkB;
        mdl = arg0->unk60;
        if (mdl != NULL && mdl->unkE == arg1->unkB) {
            hdr = D_801A6134[arg0->unk8.unk6];
            part = (Part801C9F3C *)((u8 *)hdr + ((s32 *)((u8 *)hdr + hdr->unk14))[arg1->unkB]);
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
            hit = func_800745D0(arg0, &seg.unk0, arg1->unk5, arg1->unk6, 2, 0, 1);
        } else if (arg0->unk3E & 1) {
            hit = func_800745D0(arg0, &seg.unk0, arg1->unk5, arg1->unk6, 2, 0, 1);
        } else {
            hit = func_800745D0(arg0, &seg.unk0, arg1->unk7, arg1->unk8, 2, 0, 1);
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
                    func_801C79C8(arg0, 0, 0, 0x100, &arg0->unkCC);
                }
            }
            switch (arg1->unk2 & 0xF) {
            case 0:
                func_80085E98(arg0, &arg1->unk22, &seg.unk0, &seg.unk8, tbl->unk0, arg1->unk12, 7, &D_801CD390, 0x14, 3, 0x78, &D_801CD394, &D_801CD398, 0, 4);
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
                func_80085E98(arg0, &arg1->unk22, &seg.unk0, &seg.unk8, tbl->unk0, arg1->unk12, 7, &D_801CD39C, 0x14, 3, 0x78, &D_801CD3A0, &D_801CD3A4, 0, 4);
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

INCLUDE_ASM("asm/USA/fdat050/nonmatchings/fdat050", func_801CA710);

INCLUDE_ASM("asm/USA/fdat050/nonmatchings/fdat050", func_801CAA80);

INCLUDE_ASM("asm/USA/fdat050/nonmatchings/fdat050", func_801CADFC);

INCLUDE_ASM("asm/USA/fdat050/nonmatchings/fdat050", func_801CAE50);

INCLUDE_ASM("asm/USA/fdat050/nonmatchings/fdat050", func_801CB360);

void func_801CB6AC(Obj801C52C0 *arg0) {
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

void func_801CB74C(Obj801CB74C *arg0) {
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

INCLUDE_ASM("asm/USA/fdat050/nonmatchings/fdat050", func_801CB888);

INCLUDE_ASM("asm/USA/fdat050/nonmatchings/fdat050", func_801CB9B0);

void func_801CCCE0(Obj801C5454 *arg0) {
    arg0->unk50 = func_801CB9B0;
    arg0->unk54 = func_801C9750;
    arg0->unk58 = func_801CAE50;
    arg0->unk5C = func_801CB360;
    func_801CB6AC(arg0);
}
