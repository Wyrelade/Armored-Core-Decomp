#include "common.h"
#include "fdat040.h"

void func_801C52C0(Obj801C52C0 *arg0) {
    arg0->unk36 = 0x102;
    arg0->unk108 = &D_801CC084;
    func_801CC038((Obj801C52F0 *)arg0);
}

void func_801C52F0(Obj801C52F0 *arg0) {
    arg0->unk36 = 0x102;
    arg0->unk108 = &D_801CC5C8;
    func_801CC038(arg0);
}

INCLUDE_ASM("asm/USA/fdat040/nonmatchings/fdat040", func_801C5320);

INCLUDE_ASM("asm/USA/fdat040/nonmatchings/fdat040", func_801C53FC);

INCLUDE_ASM("asm/USA/fdat040/nonmatchings/fdat040", func_801C5560);

INCLUDE_ASM("asm/USA/fdat040/nonmatchings/fdat040", func_801C55B0);

void func_801C5604(Obj801C4C94 *arg0) {
    arg0->unk36 = 2;
    arg0->unk54 = func_801C5560;
    arg0->unk58 = func_801C53FC;
    arg0->unk5C = func_801C55B0;
    arg0->unk50 = NULL;
    arg0->unk2C = 0x7FFF;
    if (arg0->unk54 != NULL) {
        arg0->unk54(arg0, 0);
    }
    func_8004E98C(&arg0->unk64, 0, 0, 0);
}

void func_801C5684(Elem801C5F00 *arg0, s32 arg1) {
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

INCLUDE_ASM("asm/USA/fdat040/nonmatchings/fdat040", func_801C56D4);

s32 func_801C57F0(Obj801C4EB8 *arg0) {
    return func_80012794(&arg0->unk22, arg0->unk16, arg0->unk18, 0, D_801A26C0, D_801A26E0, D_801A26E2);
}

s32 func_801C5840(Elem801C5F00 *arg0, s32 arg1) {
    Sub801C5EA8 *sub;
    s32 turn;
    s32 rot;
    s32 dir;
    s16 speed;
    s16 v;
    s32 neg;

    sub = arg0->unk2C;
    if (arg1 >= 4) {
        turn = 0;
        dir = 1;
        if (arg1 == 4) {
            dir = -1;
        }
    } else {
        turn = 1;
        rot = arg1;
    }
    switch (sub->unk10) {
    case 2:
        rot += 2;
        dir = -dir;
    case 1:
    case 4:
        if (turn) {
            rot = (rot + arg0->unk16) & 3;
            sub->unk1E -= sub->unk20;
            if (sub->unk1E <= 0) {
                sub->unk1E += sub->unk12;
                speed = sub->unk1C;
            } else {
                speed = sub->unk1A;
            }
            D_801CCB54 = speed;
            func_8001380C(&D_801CCB50, &sub->unk8, rot);
        } else if (dir > 0) {
            sub->unk1E -= sub->unk20;
            if (sub->unk1E <= 0) {
                sub->unk1E += sub->unk12;
                v = sub->unk1C;
            } else {
                v = sub->unk1A;
            }
            sub->unk8.unk2 = v;
        } else {
            sub->unk1E -= sub->unk20;
            if (sub->unk1E <= 0) {
                sub->unk1E += sub->unk12;
                neg = -sub->unk1C;
            } else {
                neg = -sub->unk1A;
            }
            sub->unk8.unk2 = neg;
        }
        func_80072180(arg0);
        if (sub->unk10 == 1 || sub->unk10 == 4) {
            if (++sub->unk11 >= sub->unk12) {
                sub->unk10 += 2;
            }
            return 1;
        }
        if (--sub->unk11 == 0) {
            sub->unk10 = 0;
            D_801D0B98[*arg0->unk28].unk0 |= 0x100;
            return 2;
        }
        if (sub->unk11 >= sub->unk13 && arg0->unk38->unkA == 0) {
            if (func_801C57F0((struct Obj801C4EB8 *)sub) != 0) {
                func_801C5684(arg0, 1);
            }
        }
        return 1;
    case 3:
        if (arg0->unk38->unkA == 0) {
            if (func_801C57F0((struct Obj801C4EB8 *)sub) == 0) {
                func_801C5684(arg0, 2);
            }
        }
        return 0;
    }
    return 0;
}

void func_801C5B00(Elem801C5F00 *arg0) {
    u8 id;

    switch (func_801C5840(arg0, arg0->unk38->unk7)) {
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

INCLUDE_ASM("asm/USA/fdat040/nonmatchings/fdat040", func_801C5BD4);

INCLUDE_ASM("asm/USA/fdat040/nonmatchings/fdat040", func_801C5CE0);

s32 func_801C5D80(Obj801C52F0 *arg0, s32 arg1, Sub801C5D80 **arg2, ...) {
    if (arg1 == 0x8100 && ((*arg2)->unkC & 7) == 2) {
        func_801C5CE0(arg0, &arg0->unk10, arg0->unk38->unkA);
        return 1;
    }
    return 0;
}

INCLUDE_ASM("asm/USA/fdat040/nonmatchings/fdat040", func_801C5DE4);

INCLUDE_ASM("asm/USA/fdat040/nonmatchings/fdat040", func_801C5E5C);

void func_801C6020(Obj801C52F0 *arg0) {
    s32 unused[36];
    Sub801C6020 *task;
    u16 val;

    task = func_80072120(0xC);
    arg0->unk2C = task;
    task->unk0 = func_801C5E5C;
    task->unk4 = func_801C5D80;
    task->unk10 = arg0->unk38->unk7;
    task->unk12 = 0;
    task->unk16 = arg0->unk38->unk0 << 5;
    val = arg0->unk38->unk0;
    task->unk1A = 0;
    task->unk14 = val;
    task->unk18 = (s16)val * 0x11;
}

void func_801C60BC(Obj801C52F0 *arg0) {
    Sub801C6020 *task;

    task = func_80072120(0);
    arg0->unk2C = task;
    task->unk4 = func_801C5DE4;
}

INCLUDE_ASM("asm/USA/fdat040/nonmatchings/fdat040", func_801C60F8);

void func_801C6350(Obj801C52F0 *arg0) {
    Sub801C6020 *task;

    task = func_80072120(0);
    arg0->unk2C = task;
    task->unk4 = func_801C60F8;
}

void func_801C638C(Obj801C638C *arg0) {
    s32 idx;
    s32 n;

    if (D_801A26CE == arg0->unk2C->unk10) {
        idx = arg0->unk38->unk6;
        if (idx != 0) {
            n = arg0->unk38->unk8;
            for (n--; n != -1; n--) {
                if (D_801D0B94[idx].unk0 != NULL) {
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

void func_801C644C(Obj801C638C *arg0) {
    s32 unused[36];
    Task801C638C *task;

    task = (Task801C638C *)func_80072120(2);
    arg0->unk2C = task;
    task->unk10 = (Elem801C5F00 *)arg0 - D_801D0B68;
    arg0->unk2C->unk0 = func_801C638C;
}

INCLUDE_ASM("asm/USA/fdat040/nonmatchings/fdat040", func_801C64A0);

void func_801C6538(Obj801C52F0 *arg0) {
    s32 unused[36];
    Sub801C6020 *task;

    task = func_80072120(0);
    arg0->unk2C = task;
    task->unk0 = func_801C64A0;
    arg0->unk2C->unk4 = 0;
}

void func_801C6580(Obj801C5F00 *arg0) {
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

void func_801C65E4(Obj801C5F00 *arg0) {
    u8 num;
    s32 count;
    Elem801C8750 *elem;

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

void func_801C665C(Obj801C665C *arg0) {
    Sub801C665C *task;

    task = arg0->unk14 = func_80073674(0);
    switch (arg0->unk22) {
    case 0:
        task->unk0 = func_801C6580;
        break;
    case 1:
        task->unk0 = func_801C65E4;
        break;
    }
}

void func_801C66C8(void) {
}

void func_801C66D0(s32 arg0) {
    Sub801C6068 *p;

    p = D_801D0B94[arg0].unk0;
    if (p != NULL) {
        p->unk0 = 0;
    }
}

INCLUDE_ASM("asm/USA/fdat040/nonmatchings/fdat040", func_801C66F8);

INCLUDE_ASM("asm/USA/fdat040/nonmatchings/fdat040", func_801C67F8);

void func_801C6A24(Obj801C52F0 *arg0) {
    if (arg0->unk160 == 0 && D_8019F51C->unk20[arg0->unk0->unkA] == func_801C52C0) {
        D_801CCB90 += 0xBB8;
    }
}

void func_801C6A84(s32 *arg0) {
    *arg0 += D_801CCB90;
}

void func_801C6AA0(Obj801C52F0 *arg0) {
    if (!(arg0->unk148 & 0xF)) {
        func_8004CE44(arg0->unk108->unk3A, &arg0->unk8, 0x64, -0x50);
        return;
    }
    func_8004CC30(arg0->unk108->unk3B, D_801A5DC0->unk1000, &arg0->unk8, 0x64, 0x1F40, 0x2710, -0x30);
}

void func_801C6B20(Obj801C52C0_fdat000 *arg0, Sub801C5634 *arg1) {
    arg0->unk148 &= 0xFFF0;
    arg0->unk15C &= ~arg1->unk38;
}

INCLUDE_ASM("asm/USA/fdat040/nonmatchings/fdat040", func_801C6B48);

void func_801C6BB4(Obj801C52C0_fdat000 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C ^= 1 << arg1->unk2D;
}

void func_801C6BD0(Obj801C52C0_fdat000 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C &= ~(1 << arg1->unk2D);
}

void func_801C6BF0(Obj801C52C0_fdat000 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C |= 1 << arg1->unk6;
}

void func_801C6C0C(Obj801C52C0_fdat000 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C ^= 1 << arg1->unk6;
}

void func_801C6C28(Obj801C52C0_fdat000 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C &= ~(1 << arg1->unk6);
}

void func_801C6C48(Obj801C52C0_fdat000 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C ^= 1 << arg1->unk9;
}

void func_801C6C64(Obj801C52C0_fdat000 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C &= ~(1 << arg1->unk9);
}

void func_801C6C84(Obj801C52F0 *arg0, s32 arg1) {
    if (arg0->unk3D != 0xB0) {
        func_8004DE88(&arg0->unk64, &arg0->unkCC);
        arg0->unkCC.unk2 = 0;
        arg0->unkCC.unk0 <<= 7;
        arg0->unkCC.unk4 <<= 7;
    }
    arg0->unk15C = 0;
    func_800775B8(arg0, arg1, 1, 0x200, &arg0->unkCC, func_801C71A4);
    arg0->unk3C = 0x41;
    arg0->unk41 = 0x41;
}

INCLUDE_ASM("asm/USA/fdat040/nonmatchings/fdat040", func_801C6D20);

INCLUDE_RODATA("asm/USA/fdat040/nonmatchings/fdat040", D_801C4B40);

INCLUDE_ASM("asm/USA/fdat040/nonmatchings/fdat040", func_801C6ED8);

INCLUDE_ASM("asm/USA/fdat040/nonmatchings/fdat040", func_801C71A4);

INCLUDE_ASM("asm/USA/fdat040/nonmatchings/fdat040", func_801C7490);

INCLUDE_ASM("asm/USA/fdat040/nonmatchings/fdat040", func_801C7794);

INCLUDE_ASM("asm/USA/fdat040/nonmatchings/fdat040", func_801C7A84);

INCLUDE_ASM("asm/USA/fdat040/nonmatchings/fdat040", func_801C7C38);

INCLUDE_ASM("asm/USA/fdat040/nonmatchings/fdat040", func_801C7F14);

INCLUDE_ASM("asm/USA/fdat040/nonmatchings/fdat040", func_801C801C);

INCLUDE_ASM("asm/USA/fdat040/nonmatchings/fdat040", func_801C80EC);

INCLUDE_ASM("asm/USA/fdat040/nonmatchings/fdat040", func_801C81FC);

INCLUDE_ASM("asm/USA/fdat040/nonmatchings/fdat040", func_801C83C4);

void func_801C8750(Obj801C52C0_fdat000 *arg0, s32 arg1) {
    if (arg0->unk126 == -1) {
        func_800759A4(arg0, arg1, &D_80039C78);
        return;
    }
    func_80075B08(arg0, arg1, &D_80198B08[arg0->unk126]);
}

INCLUDE_ASM("asm/USA/fdat040/nonmatchings/fdat040", func_801C87B0);

INCLUDE_ASM("asm/USA/fdat040/nonmatchings/fdat040", func_801C880C);

INCLUDE_ASM("asm/USA/fdat040/nonmatchings/fdat040", func_801C8868);

INCLUDE_ASM("asm/USA/fdat040/nonmatchings/fdat040", func_801C8AA8);

INCLUDE_ASM("asm/USA/fdat040/nonmatchings/fdat040", func_801C9008);

void func_801C9294(View801C9294 *arg0, Sub801C7DA8 *arg1) {
    Seg801C7DA8 seg;
    Sub801C6AA0 rot;
    Tbl801C7DA8 *tbl;
    Elem801C52C0 *sub;
    Mdl801C7DA8 *mdl;
    Hdr801C7DA8 *hdr;
    Part801C7DA8 *part;
    Slot801C7DA8 *slot;
    Elem801C7DA8 *elem;
    View801C9294 *target;
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
    ok = func_801C9008(arg0, arg1, 0, tbl->unk0);
    if (sub->unk0 != 0
        || (arg0->unk3C == 0x22 && arg0->unk64.unk0 == arg0->unk135 && func_8004EBF8(&arg0->unk64))) {
        arg0->unk64.unk18 = arg1->unkB;
        mdl = arg0->unk60;
        if (mdl != NULL && mdl->unkE == arg1->unkB) {
            hdr = D_801A6134[arg0->unk8.unk6];
            part = (Part801C7DA8 *)((u8 *)hdr + ((s32 *)((u8 *)hdr + hdr->unk14))[arg1->unkB]);
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
                    func_801C6D20(arg0, 0, 0, 0x100, &arg0->unkCC);
                }
            }
            switch (arg1->unk2 & 0xF) {
            case 0:
                func_80085E98(arg0, &arg1->unk22, &seg.unk0, &seg.unk8, tbl->unk0, arg1->unk12, 7, &D_801CCB94, 0x14, 3, 0x78, &D_801CCB98, &D_801CCB9C, 0, 4);
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
                func_80085E98(arg0, &arg1->unk22, &seg.unk0, &seg.unk8, tbl->unk0, arg1->unk12, 7, &D_801CCBA0, 0x14, 3, 0x78, &D_801CCBA4, &D_801CCBA8, 0, 4);
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

INCLUDE_ASM("asm/USA/fdat040/nonmatchings/fdat040", func_801C9A68);

INCLUDE_ASM("asm/USA/fdat040/nonmatchings/fdat040", func_801C9DD8);

INCLUDE_ASM("asm/USA/fdat040/nonmatchings/fdat040", func_801CA154);

INCLUDE_ASM("asm/USA/fdat040/nonmatchings/fdat040", func_801CA1A8);

INCLUDE_ASM("asm/USA/fdat040/nonmatchings/fdat040", func_801CA6B8);

void func_801CAA04(Obj801C52C0_fdat000 *arg0) {
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

void func_801CAAA4(Obj801C95A8 *arg0) {
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

INCLUDE_ASM("asm/USA/fdat040/nonmatchings/fdat040", func_801CABE0);

void func_801CAD08(Obj801C95A8 *arg0, s32 arg1) {
    Elem801C52C0 *info;
    s32 state;
    s32 orig;
    s32 hit;
    s32 *flag;
    s32 dir;
    Sub801C6AA0 pos;

    info = arg0->unk108;
    orig = arg1;
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
    } else if (info->unk16 != 0 && arg0->unk3D != 0xC0 && (u32)(state - 0x60) >= 2) {
        if (arg0->unk41 != 0x40 || arg0->unk3D != 0xB0) {
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
        }
        arg0->unk148 = 0;
        arg0->unk15C = 0;
        switch (arg0->unk64.unk0) {
        case 1:
        case 2:
        case 0x30:
            func_801C6C84(arg0, 0x1A);
            return;
        case 3:
        case 4:
        case 0x34:
            func_801C6C84(arg0, 0x20);
            return;
        case 5:
        case 6:
        case 0x35:
            func_801C6C84(arg0, 0x21);
            return;
        case 14:
        case 15:
        case 0x31:
            func_801C6C84(arg0, 0x1B);
            return;
        case 16:
        case 17:
        case 0x36:
            func_801C6C84(arg0, 0x22);
            return;
        case 18:
        case 19:
        case 0x37:
            func_801C6C84(arg0, 0x23);
            return;
        case 8:
        case 9:
        case 0x32:
            func_801C6C84(arg0, 0x1C);
            return;
        case 11:
        case 12:
        case 0x33:
            func_801C6C84(arg0, 0x1D);
            return;
        case 0x2D:
        case 0x2E:
            arg0->unk36 &= ~0x10;
            func_801C6C84(arg0, 0x18);
            return;
        }
    }
act:
    switch (state) {
    case 1:
        switch (arg0->unk64.unk0) {
        case 2:
        case 4:
        case 6:
        case 9:
        case 12:
        case 15:
        case 17:
        case 19:
            func_800766E0(arg0, 2, 1, 1, 0, NULL, D_800760DC);
            arg0->unk64.unkE = info->unk22;
            break;
        case 1:
            if (func_8004EAD0(&arg0->unk64) != 0) {
                func_800766E0(arg0, 2, 1, 0, 2, &info->unk1, func_801CAAA4);
            } else {
                func_800766E0(arg0, 1, 1, 0, 0, NULL, D_800760DC);
            }
            break;
        case 3:
        case 5:
            func_800766E0(arg0, 1, 1, 1, 0, NULL, D_800760DC);
            arg0->unk64.unkE = info->unk22;
            break;
        default:
            if (func_801CABE0(arg0) != 0) {
                func_800766E0(arg0, 1, 1, 0, 0, NULL, D_800760DC);
                arg0->unk64.unkE = info->unk22;
            }
            break;
        }
        break;
    case 2:
        switch (arg0->unk64.unk0) {
        case 2:
        case 4:
        case 6:
        case 9:
        case 12:
        case 15:
        case 17:
        case 19:
            func_800766E0(arg0, 4, 1, 1, 0, NULL, D_800760DC);
            arg0->unk64.unkE = info->unk22;
            break;
        case 3:
            if (func_8004EAD0(&arg0->unk64) != 0) {
                func_800766E0(arg0, 4, 1, 0, 2, &info->unk1, func_801CAAA4);
            } else {
                func_800766E0(arg0, 3, 1, 0, 0, NULL, D_800760DC);
            }
            break;
        case 1:
        case 5:
            func_800766E0(arg0, 3, 1, 1, 0, NULL, D_800760DC);
            arg0->unk64.unkE = info->unk22;
            break;
        default:
            if (func_801CABE0(arg0) != 0) {
                func_800766E0(arg0, 3, 1, 0, 0, NULL, D_800760DC);
                arg0->unk64.unkE = info->unk22;
            }
            break;
        }
        break;
    case 3:
        switch (arg0->unk64.unk0) {
        case 2:
        case 4:
        case 6:
        case 9:
        case 12:
        case 15:
        case 17:
        case 19:
            func_800766E0(arg0, 6, 1, 1, 0, NULL, D_800760DC);
            arg0->unk64.unkE = info->unk22;
            break;
        case 5:
            if (func_8004EAD0(&arg0->unk64) != 0) {
                func_800766E0(arg0, 6, 1, 0, 2, &info->unk1, func_801CAAA4);
            } else {
                func_800766E0(arg0, 5, 1, 0, 0, NULL, D_800760DC);
            }
            break;
        case 1:
        case 3:
            func_800766E0(arg0, 5, 1, 1, 0, NULL, D_800760DC);
            arg0->unk64.unkE = info->unk22;
            break;
        default:
            if (func_801CABE0(arg0) != 0) {
                func_800766E0(arg0, 5, 1, 0, 0, NULL, D_800760DC);
                arg0->unk64.unkE = info->unk22;
            }
            break;
        }
        break;
    case 6:
        switch (arg0->unk64.unk0) {
        case 2:
        case 4:
        case 6:
        case 9:
        case 12:
        case 15:
        case 17:
        case 19:
            func_800766E0(arg0, 0xF, 1, 1, 0, NULL, D_800760DC);
            arg0->unk64.unkE = info->unk22;
            break;
        case 14:
            if (func_8004EAD0(&arg0->unk64) != 0) {
                func_800766E0(arg0, 0xF, 1, 0, 2, &info->unk1, func_801CAAA4);
            } else {
                func_800766E0(arg0, 0xE, 1, 0, 0, NULL, D_800760DC);
            }
            break;
        case 16:
        case 18:
            func_800766E0(arg0, 0xE, 1, 1, 0, NULL, D_800760DC);
            arg0->unk64.unkE = info->unk22;
            break;
        default:
            if (func_801CABE0(arg0) != 0) {
                func_800766E0(arg0, 0xE, 1, 0, 0, NULL, D_800760DC);
                arg0->unk64.unkE = info->unk22;
            }
            break;
        }
        break;
    case 7:
        switch (arg0->unk64.unk0) {
        case 2:
        case 4:
        case 6:
        case 9:
        case 12:
        case 15:
        case 17:
        case 19:
            func_800766E0(arg0, 0x11, 1, 1, 0, NULL, D_800760DC);
            arg0->unk64.unkE = info->unk22;
            break;
        case 16:
            if (func_8004EAD0(&arg0->unk64) != 0) {
                func_800766E0(arg0, 0x11, 1, 0, 2, &info->unk1, func_801CAAA4);
            } else {
                func_800766E0(arg0, 0x10, 1, 0, 0, NULL, D_800760DC);
            }
            break;
        case 14:
        case 18:
            func_800766E0(arg0, 0x10, 1, 1, 0, NULL, D_800760DC);
            arg0->unk64.unkE = info->unk22;
            break;
        default:
            if (func_801CABE0(arg0) != 0) {
                func_800766E0(arg0, 0x10, 1, 0, 0, NULL, D_800760DC);
                arg0->unk64.unkE = info->unk22;
            }
            break;
        }
        break;
    case 8:
        switch (arg0->unk64.unk0) {
        case 2:
        case 4:
        case 6:
        case 9:
        case 12:
        case 15:
        case 17:
        case 19:
            func_800766E0(arg0, 0x13, 1, 1, 0, NULL, D_800760DC);
            arg0->unk64.unkE = info->unk22;
            break;
        case 18:
            if (func_8004EAD0(&arg0->unk64) != 0) {
                func_800766E0(arg0, 0x13, 1, 0, 2, &info->unk1, func_801CAAA4);
            } else {
                func_800766E0(arg0, 0x12, 1, 0, 0, NULL, D_800760DC);
            }
            break;
        case 14:
        case 16:
            func_800766E0(arg0, 0x12, 1, 1, 0, NULL, D_800760DC);
            arg0->unk64.unkE = info->unk22;
            break;
        default:
            if (func_801CABE0(arg0) != 0) {
                func_800766E0(arg0, 0x12, 1, 0, 0, NULL, D_800760DC);
                arg0->unk64.unkE = info->unk22;
            }
            break;
        }
        break;
    case 4:
        switch (arg0->unk64.unk0) {
        case 2:
        case 4:
        case 6:
        case 9:
        case 15:
        case 17:
        case 19:
            func_800766E0(arg0, 9, 1, 1, 0, NULL, D_800760DC);
            arg0->unk64.unkE = info->unk22;
            break;
        case 8:
            if (func_8004EAD0(&arg0->unk64) != 0) {
                func_800766E0(arg0, 9, 1, 0, 2, &info->unk1, func_801CAAA4);
            } else {
                func_800766E0(arg0, 8, 1, 0, 0, NULL, D_800760DC);
            }
            break;
        default:
            if (func_801CABE0(arg0) != 0) {
                func_800766E0(arg0, 8, 1, 0, 0, NULL, D_800760DC);
                arg0->unk64.unkE = info->unk22;
            }
            break;
        }
        break;
    case 5:
        switch (arg0->unk64.unk0) {
        case 2:
        case 4:
        case 6:
        case 12:
        case 15:
        case 17:
        case 19:
            func_800766E0(arg0, 0xC, 1, 1, 0, NULL, D_800760DC);
            arg0->unk64.unkE = info->unk22;
            break;
        case 11:
            if (func_8004EAD0(&arg0->unk64) != 0) {
                func_800766E0(arg0, 0xC, 1, 0, 2, &info->unk1, func_801CAAA4);
            } else {
                func_800766E0(arg0, 0xB, 1, 0, 0, NULL, D_800760DC);
            }
            break;
        default:
            if (func_801CABE0(arg0) != 0) {
                func_800766E0(arg0, 0xB, 1, 0, 0, NULL, D_800760DC);
                arg0->unk64.unkE = info->unk22;
            }
            break;
        }
        break;
    case 0:
        if (func_801CABE0(arg0) != 0) {
            func_80076578(arg0, 0, 1, D_80076014);
            arg0->unk64.unkE = info->unk22;
        }
        break;
    case 0x40:
        if (arg0->unk3D != 0xC0) {
            if (func_801CABE0(arg0) != 0) {
                if (arg0->unk64.unk0 == 0x38) {
                    func_80076A84(arg0, 0x16, 1, 0xFF, info->unkD, D_800760DC);
                    arg0->unk64.unkE = 0x400;
                } else {
                    func_80076A84(arg0, 0x16, 1, 0xFF, info->unkD, D_800760DC);
                }
            }
            break;
        }
    fall:
        func_800775B8(arg0, 0x19, 1, info->unk22, &arg0->unkCC, func_801C71A4);
        break;
    case 0x41:
        func_800775B8(arg0, 0x1A, 1, info->unk22, &arg0->unkCC, func_801C71A4);
        break;
    case 0x42:
        func_800775B8(arg0, 0x20, 1, info->unk22, &arg0->unkCC, func_801C71A4);
        break;
    case 0x43:
        func_800775B8(arg0, 0x21, 1, info->unk22, &arg0->unkCC, func_801C71A4);
        break;
    case 0x44:
        func_800775B8(arg0, 0x1B, 1, info->unk22, &arg0->unkCC, func_801C71A4);
        break;
    case 0x45:
        func_800775B8(arg0, 0x22, 1, info->unk22, &arg0->unkCC, func_801C71A4);
        break;
    case 0x46:
        func_800775B8(arg0, 0x23, 1, info->unk22, &arg0->unkCC, func_801C71A4);
        break;
    case 0x47:
        func_800775B8(arg0, 0x1C, 1, info->unk22, &arg0->unkCC, func_801C71A4);
        break;
    case 0x48:
        func_800775B8(arg0, 0x1D, 1, info->unk22, &arg0->unkCC, func_801C71A4);
        break;
    case 0x4B:
        func_800775B8(arg0, 0x18, 1, info->unk22, &arg0->unkCC, func_801C71A4);
        break;
    case 0x60:
        func_801C6B20(arg0, info);
        if (arg0->unk64.unk0 != 0x17) {
            arg0->unk15C = 0;
            arg0->unk148 = 0;
            func_8004CE44(0xE, &arg0->unk8, 0x3C, 0);
        }
        switch (orig) {
        case 1:
            func_800766E0(arg0, 2, 1, 0, 2, info->unk1, func_801CAAA4);
            state = orig;
            arg0->unk64.unkE = info->unk22;
            arg0->unk36 &= ~0x10;
            break;
        case 2:
            func_800766E0(arg0, 4, 1, 0, 2, info->unk1, func_801CAAA4);
            state = orig;
            arg0->unk64.unkE = info->unk22;
            arg0->unk36 &= ~0x10;
            break;
        case 3:
            func_800766E0(arg0, 6, 1, 0, 2, info->unk1, func_801CAAA4);
            state = orig;
            arg0->unk64.unkE = info->unk22;
            arg0->unk36 &= ~0x10;
            break;
        case 6:
            func_800766E0(arg0, 0xF, 1, 0, 2, info->unk1, func_801CAAA4);
            state = orig;
            arg0->unk64.unkE = info->unk22;
            arg0->unk36 &= ~0x10;
            break;
        case 7:
            func_800766E0(arg0, 0x11, 1, 0, 2, info->unk1, func_801CAAA4);
            state = orig;
            arg0->unk64.unkE = info->unk22;
            arg0->unk36 &= ~0x10;
            break;
        case 8:
            func_800766E0(arg0, 0x13, 1, 0, 2, info->unk1, func_801CAAA4);
            state = orig;
            arg0->unk64.unkE = info->unk22;
            arg0->unk36 &= ~0x10;
            break;
        case 4:
            func_800766E0(arg0, 9, 1, 0, 2, info->unk1, func_801CAAA4);
            state = orig;
            arg0->unk64.unkE = info->unk22;
            arg0->unk36 &= ~0x10;
            break;
        case 5:
            func_800766E0(arg0, 0xC, 1, 0, 2, info->unk1, func_801CAAA4);
            state = orig;
            arg0->unk64.unkE = info->unk22;
            arg0->unk36 &= ~0x10;
            break;
        default:
            if (arg0->unk64.unk0 == 0x17) {
                if (func_8004EBF8(&arg0->unk64) != 0) {
                    arg0->unk36 &= ~0x10;
                    func_80076578(arg0, 0, 1, D_80076014);
                } else {
                    func_800765E8(arg0, 0x17, 1, D_80076078);
                }
            } else {
                func_800765E8(arg0, 0x17, 1, D_80076078);
                arg0->unkCC = D_80039C78;
            }
            arg0->unk64.unkE = info->unk22;
            break;
        }
        break;
    case 0x61:
        func_801C6B20(arg0, info);
        if (arg0->unk64.unk0 == 0x24) {
            if (func_8004EBF8(&arg0->unk64) != 0) {
                arg0->unk36 &= ~0x10;
                func_80076578(arg0, 0, 1, D_80076014);
            } else {
                func_800765E8(arg0, 0x24, 1, D_80076078);
            }
        } else {
            arg0->unk15C = 0;
            arg0->unk148 = 0;
            func_800765E8(arg0, 0x24, 1, D_80076078);
            func_8004EA3C(&arg0->unk64, 1, info->unk9);
            arg0->unkCC = D_80039C78;
            if (arg0->unk2E <= arg0->unk8.unk2 && arg0->unk2E >= arg0->unk8.unk2 - arg0->unk2A) {
                func_8007847C(arg0, 0x64, 5, 0x12C, 0x2BC, 0x64, 0x12C, 0x40);
            }
        }
        break;
    case 0x30:
        func_8007732C(arg0, 0x30, 1, info->unk22, &arg0->unkCC, func_801C7490);
        break;
    case 0x31:
        func_8007732C(arg0, 0x34, 1, info->unk22, &arg0->unkCC, func_801C7490);
        break;
    case 0x32:
        func_8007732C(arg0, 0x35, 1, info->unk22, &arg0->unkCC, func_801C7490);
        break;
    case 0x35:
        func_8007732C(arg0, 0x31, 1, info->unk22, &arg0->unkCC, func_801C7490);
        break;
    case 0x37:
        func_8007732C(arg0, 0x37, 1, info->unk22, &arg0->unkCC, func_801C7490);
        break;
    case 0x33:
        func_8007732C(arg0, 0x32, 1, info->unk22, &arg0->unkCC, func_801C7490);
        break;
    case 0x34:
        func_8007732C(arg0, 0x33, 1, info->unk22, &arg0->unkCC, func_801C7490);
        break;
    case 0x36:
        func_8007732C(arg0, 0x36, 1, info->unk22, &arg0->unkCC, func_801C7490);
        break;
    case 0x38:
        if (abs(arg0->unkCC.unk0) >= 0x15 || abs(arg0->unkCC.unk4) >= 0x15) {
            dir = -ratan2(arg0->unkCC.unk0, arg0->unkCC.unk4);
            dir = dir - arg0->unk12 + 0x100;
            switch ((dir >> 9) & 7) {
            case 0:
                func_8007732C(arg0, 0x31, 1, info->unk22, &arg0->unkCC, func_801C7490);
                break;
            case 1:
                func_8007732C(arg0, 0x37, 1, info->unk22, &arg0->unkCC, func_801C7490);
                break;
            case 2:
                func_8007732C(arg0, 0x33, 1, info->unk22, &arg0->unkCC, func_801C7490);
                break;
            case 3:
                func_8007732C(arg0, 0x35, 1, info->unk22, &arg0->unkCC, func_801C7490);
                break;
            case 4:
                func_8007732C(arg0, 0x30, 1, info->unk22, &arg0->unkCC, func_801C7490);
                break;
            case 5:
                func_8007732C(arg0, 0x34, 1, info->unk22, &arg0->unkCC, func_801C7490);
                break;
            case 6:
                func_8007732C(arg0, 0x32, 1, info->unk22, &arg0->unkCC, func_801C7490);
                break;
            case 7:
                func_8007732C(arg0, 0x36, 1, info->unk22, &arg0->unkCC, func_801C7490);
                break;
            }
        } else {
            func_80076578(arg0, 0, 1, D_80076014);
            func_801C6B20(arg0, info);
            arg0->unk64.unkE = info->unk22;
        }
        break;
    case 0x20:
        if (arg0->unk64.unk0 == 0x38 && func_8004EBF8(&arg0->unk64) != 0) {
            arg0->unk36 &= ~0x10;
        }
        func_800766E0(arg0, 0x38, 1, 0, 0, NULL, func_801C7A84);
        arg0->unk64.unkE = 0x400;
        break;
    case 0x21:
        if (arg0->unk64.unk0 == 0x2F && func_8004EBF8(&arg0->unk64) != 0) {
            arg0->unk36 &= ~0x10;
        }
        func_800775B8(arg0, 0x2F, 1, 0x400, &arg0->unkCC, func_801C7C38);
        break;
    case 0x22:
        if ((u8)(arg0->unk64.unk0 - 0x2D) >= 2) {
            arg0->unkCC = D_80039C78;
        }
        func_80077170(arg0, arg0->unk135, 1, &arg0->unkCC, func_801C7F14);
        break;
    case 0x23:
        if (arg0->unk64.unkC < 0) {
            if (func_8004EBF8(&arg0->unk64) != 0) {
                arg0->unk36 &= ~0x10;
            }
            func_80077170(arg0, arg0->unk135, -1, &arg0->unkCC, func_801C7F14);
        } else {
            func_80077170(arg0, arg0->unk135, 1, &arg0->unkCC, func_801C7F14);
            arg0->unk64.unkC = -1;
            arg0->unk64.unk6 = arg0->unk28;
            arg0->unk64.unk8 = arg0->unk2A;
        }
        break;
    case 0x80:
        func_8007790C(arg0, arg0->unk64.unk0, 1, 0x400, &arg0->unkCC, -1, D_800764C4);
        break;
    case 0x81:
        func_800778B8(arg0, arg0->unk64.unk0, 0x400, &arg0->unkCC, -1, func_801C71A4);
        break;
    }
    if (!(arg0->unk36 & 0x10)) {
        arg0->unk3C = state;
    }
}

void func_801CC038(Obj801C52F0 *arg0) {
    arg0->unk50 = func_801CAD08;
    arg0->unk54 = func_801C8AA8;
    arg0->unk58 = func_801CA1A8;
    arg0->unk5C = func_801CA6B8;
    func_801CAA04(arg0);
}
