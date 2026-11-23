#include "common.h"
#include "fdat034.h"

void func_801C52FC(Obj801C52C0 *arg0) {
    arg0->unk36 = 2;
    arg0->unk108 = &D_801CC4EC;
    func_801CC4A0(arg0);
}

INCLUDE_ASM("asm/USA/fdat034/nonmatchings/fdat034", func_801C532C);

INCLUDE_ASM("asm/USA/fdat034/nonmatchings/fdat034", func_801C55F8);

INCLUDE_ASM("asm/USA/fdat034/nonmatchings/fdat034", func_801C5738);

void func_801C585C(Obj801C52C0 *arg0) {
    u8 n;

    func_80078598();
    arg0->unk148 = 0;
    arg0->unk15C = 0;
    if (arg0->unk40 != 0xFF) {
        if (func_800754D0(arg0, D_801CCA30) != 0) {
            func_80078E1C(arg0);
        }
    } else if (arg0->unk64.unk18 == 0 && func_801C5738(arg0) != 0) {
        arg0->unk64.unk18 = 0;
        if ((*(s32 *)&arg0->unk3C & 0xFFFF00) == 0xC000) {
            if (rand() < 0x51F) {
                arg0->unk3E = 5;
            }
        } else {
            n = arg0->unk3F;
            if (n == 0) {
                func_80077B78(arg0, 0x17, arg0->unk0->unk1C, arg0->unk0->unk20, D_801CCA54, 1, 0, 1);
                arg0->unk3F = 1;
                arg0->unk148 = 0xF;
                arg0->unk14A[0] = 0xB4;
                arg0->unk14A[1] = 0xA0;
                arg0->unk14A[2] = 0x8C;
                arg0->unk15C = 1;
                arg0->unk3E--;
                return;
            }
            arg0->unk3F = n - 1;
        }
    }
}

void func_801C59A0(s32 arg0, s32 arg1) {
    Sub8004DE88 vec;

    vec.unk0 = func_80014D78(2000) - 1000;
    vec.unk4 = func_80014D78(2000) - 1000;
    vec.unk2 = -func_80014D78(2000);
    func_800759A4((Obj801C52C0_fdat000 *)arg0, arg1, (Sub8004DE88 *)&vec);
}

void func_801C5A10(s32 arg0, s32 arg1) {
    Sub8004DE88 vec;

    vec.unk0 = func_80014DAC(2000);
    vec.unk4 = func_80014DAC(2000);
    vec.unk2 = -func_80014D30(1000);
    func_80075A18(arg0, arg1, &vec);
}

void func_801C5A78(s32 arg0, s32 arg1) {
    Sub8004DE88 vec;

    vec.unk0 = func_80014DAC(2000);
    vec.unk4 = func_80014DAC(2000);
    vec.unk2 = -func_80014D30(1000);
    func_80075A54(arg0, arg1, &vec);
}

INCLUDE_RODATA("asm/USA/fdat034/nonmatchings/fdat034", D_801C4B40);

s32 func_801C5AE0(Obj801C52C0_fdat000 *arg0, s32 arg1, ...) {
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
        func_801C59A0((s32)arg0, 2);
        return 0;
    }
    arg0->unk64.unk18 = 0;
    r = rand() & 0x3F;
pick:
    switch (r) {
    case 0:
    case 1:
    case 2:
        func_801C59A0((s32)arg0, 2);
        break;
    case 3:
        func_801C59A0((s32)arg0, 3);
        break;
    case 4:
    case 5:
        func_801C5A10((s32)arg0, 2);
        return 0;
    case 6:
    case 7:
        func_801C5A78((s32)arg0, 2);
        return 0;
    case 8:
        func_801C5A10((s32)arg0, 3);
        return 0;
    case 11:
        func_801C5A78((s32)arg0, 3);
        return 0;
    case 12:
        func_801C59A0((s32)arg0, 4);
        break;
    case 13:
        func_801C59A0((s32)arg0, 5);
        break;
    case 14:
        func_801C59A0((s32)arg0, 1);
        break;
    }
    return 0;
}

INCLUDE_ASM("asm/USA/fdat034/nonmatchings/fdat034", func_801C5C8C);

void func_801C5DC8(Obj801C52C0_fdat000 *arg0) {
    arg0->unk36 = 2;
    arg0->unk50 = func_801C55F8;
    arg0->unk54 = func_801C5AE0;
    arg0->unk58 = func_801C585C;
    arg0->unk5C = func_801C5C8C;
    arg0->unk164 *= 4;
    if (arg0->unk54 != NULL) {
        arg0->unk54(arg0, 0);
    }
    if (arg0->unk50 != NULL) {
        arg0->unk50(arg0, arg0->unk41);
    }
}

INCLUDE_ASM("asm/USA/fdat034/nonmatchings/fdat034", func_801C5E5C);

void func_801C60B4(Obj801C60B4 *arg0) {
    Sub801C60B4 *task;

    task = func_80072120(0);
    arg0->unk2C = task;
    task->unk4 = func_801C5E5C;
}

INCLUDE_ASM("asm/USA/fdat034/nonmatchings/fdat034", func_801C60F0);

void func_801C6218(Obj801C60B4 *arg0) {
    Sub801C60B4 *task;

    task = func_80072120(0);
    arg0->unk2C = task;
    task->unk0 = func_801C60F0;
}

void func_801C6254(Obj801C52C0 *arg0) {
    Sub801C60B4 *task;
    Sub801C6254 *data;
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

s32 func_801C62F0(Obj801C730C *arg0, s32 arg1, s32 arg2, ...) {
    if (arg1 == 0x8200) {
        arg0->unk38->unk0 = 1;
    }
    return 0;
}

void func_801C6314(Obj801C52C0 *arg0) {
    s32 unused[36];
    Sub801C60B4 *task;

    task = func_80072120(4);
    arg0->unk2C = task;
    task->unk10 = arg0->unk38->unk2 * 22;
    arg0->unk2C->unk0 = func_801C6254;
    arg0->unk2C->unk4 = func_801C62F0;
}

INCLUDE_ASM("asm/USA/fdat034/nonmatchings/fdat034", func_801C6388);

void func_801C6420(Obj801C52C0 *arg0) {
    s32 unused[36];
    Sub801C60B4 *task;

    task = func_80072120(0);
    arg0->unk2C = task;
    task->unk0 = func_801C6388;
    arg0->unk2C->unk4 = 0;
}

INCLUDE_ASM("asm/USA/fdat034/nonmatchings/fdat034", func_801C6468);

INCLUDE_ASM("asm/USA/fdat034/nonmatchings/fdat034", func_801C65A8);

void func_801C65F0(Obj801C61D0 *arg0) {
    Sub801C61D0 *task;

    if (func_801C65A8(arg0->unk22, arg0->unk24) != 0 && func_801C65A8(arg0->unk2A, arg0->unk2C) != 0) {
        task = func_80073674(4);
        arg0->unk14 = task;
        task->unk4 = func_801C6468;
        return;
    }
    arg0->unk6 = -1;
}

INCLUDE_ASM("asm/USA/fdat034/nonmatchings/fdat034", func_801C6664);

void func_801C6744(Obj801C61D0 *arg0) {
    Sub801C61D0 *task;

    task = func_80073674(0);
    arg0->unk14 = task;
    task->unk0 = func_801C6664;
}

INCLUDE_ASM("asm/USA/fdat034/nonmatchings/fdat034", func_801C6780);

void func_801C6A9C(Obj801C61D0 *arg0) {
    Sub801C61D0 *task;

    task = func_80073674(0);
    arg0->unk14 = task;
    task->unk0 = func_801C6780;
}

void func_801C6AD8(void) {
}

s32 func_801C6AE0(Sub801C6AE0 *arg0) {
    s32 dx;
    s32 dy;
    s32 dz;

    dx = (arg0->unk4 - D_801A26C0) >> 2;
    dy = (arg0->unk6 - D_801A26C2) >> 2;
    dz = (arg0->unk8 - D_801A26C4) >> 2;
    return dx * dx + dy * dy + dz * dz;
}

INCLUDE_ASM("asm/USA/fdat034/nonmatchings/fdat034", func_801C6B44);

void func_801C6C5C(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    Elem801C6C5C *e;
    s32 unused;

    for (arg3--; arg3 != -1; arg3--) {
        func_801C6B44(arg0, arg1, arg2);
    }
    e = &D_8019FAB8[arg1];
    for (arg2--; arg2 != -1; arg2--) {
        if (e->unk0 == 0) {
            e->unk0 = 3;
        }
        e++;
    }
}

INCLUDE_ASM("asm/USA/fdat034/nonmatchings/fdat034", func_801C6D24);

void func_801C6E70(void) {
    func_8008A80C();
    if (D_8019F528 == 0 && D_801CCA80 != 0 && func_80052338() != 0) {
        if (D_801CCA84 == 10) {
            func_800529F0(0, 0, 0x68);
            func_8004C318(0x80);
        }
        D_801CCA84++;
    }
}

void func_801C6F08(Obj801C52C0 *arg0) {
    if (!(arg0->unk148 & 0xF)) {
        func_8004CE44(arg0->unk108->unk3A, &arg0->unk8, 0x64, -0x50);
        return;
    }
    func_8004CC30(arg0->unk108->unk3B, D_801A5DC0->unk1000, &arg0->unk8, 0x64, 0x1F40, 0x2710, -0x30);
}

void func_801C6F88(Obj801C52C0_fdat000 *arg0, Sub801C5634 *arg1) {
    arg0->unk148 &= 0xFFF0;
    arg0->unk15C &= ~arg1->unk38;
}

void func_801C6FB0(Obj801C52C0 *arg0, Sub801C5634 *arg1) {
    u16 mask;

    arg0->unk148 |= 0xF;
    mask = arg1->unk38;
    if (arg0->unk15C & mask) {
        arg0->unk15C &= ~mask;
        arg0->unk14A[0] = 0x3C;
        arg0->unk14A[1] = 0x28;
        arg0->unk14A[2] = 0x14;
    } else {
        arg0->unk15C |= mask;
        arg0->unk14A[0] = 0xB4;
        arg0->unk14A[1] = 0xA0;
        arg0->unk14A[2] = 0x8C;
    }
}

void func_801C701C(Obj801C52C0_fdat000 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C ^= 1 << arg1->unk2D;
}

void func_801C7038(Obj801C52C0_fdat000 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C &= ~(1 << arg1->unk2D);
}

void func_801C7058(Obj801C52C0_fdat000 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C |= 1 << arg1->unk6;
}

void func_801C7074(Obj801C52C0_fdat000 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C ^= 1 << arg1->unk6;
}

void func_801C7090(Obj801C52C0_fdat000 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C &= ~(1 << arg1->unk6);
}

void func_801C70B0(Obj801C52C0_fdat000 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C ^= 1 << arg1->unk9;
}

void func_801C70CC(Obj801C52C0_fdat000 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C &= ~(1 << arg1->unk9);
}

void func_801C70EC(Obj801C52C0 *arg0, s32 arg1) {
    if (arg0->unk3D != 0xB0) {
        func_8004DE88(&arg0->unk64, &arg0->unkCC);
        arg0->unkCC.unk2 = 0;
        arg0->unkCC.unk0 <<= 7;
        arg0->unkCC.unk4 <<= 7;
    }
    arg0->unk15C = 0;
    func_800775B8(arg0, arg1, 1, 0x200, &arg0->unkCC, func_801C760C);
    arg0->unk3C = 0x41;
    arg0->unk41 = 0x41;
}

INCLUDE_ASM("asm/USA/fdat034/nonmatchings/fdat034", func_801C7188);

INCLUDE_ASM("asm/USA/fdat034/nonmatchings/fdat034", func_801C7340);

INCLUDE_ASM("asm/USA/fdat034/nonmatchings/fdat034", func_801C760C);

INCLUDE_ASM("asm/USA/fdat034/nonmatchings/fdat034", func_801C78F8);

INCLUDE_ASM("asm/USA/fdat034/nonmatchings/fdat034", func_801C7BFC);

INCLUDE_ASM("asm/USA/fdat034/nonmatchings/fdat034", func_801C7EEC);

INCLUDE_ASM("asm/USA/fdat034/nonmatchings/fdat034", func_801C80A0);

INCLUDE_ASM("asm/USA/fdat034/nonmatchings/fdat034", func_801C837C);

INCLUDE_ASM("asm/USA/fdat034/nonmatchings/fdat034", func_801C8484);

INCLUDE_ASM("asm/USA/fdat034/nonmatchings/fdat034", func_801C8554);

INCLUDE_ASM("asm/USA/fdat034/nonmatchings/fdat034", func_801C8664);

INCLUDE_ASM("asm/USA/fdat034/nonmatchings/fdat034", func_801C882C);

void func_801C8BB8(Obj801C52C0_fdat000 *arg0, s32 arg1) {
    if (arg0->unk126 == -1) {
        func_800759A4(arg0, arg1, &D_80039C78);
        return;
    }
    func_80075B08(arg0, arg1, &D_80198B08[arg0->unk126]);
}

INCLUDE_ASM("asm/USA/fdat034/nonmatchings/fdat034", func_801C8C18);

INCLUDE_ASM("asm/USA/fdat034/nonmatchings/fdat034", func_801C8C74);

INCLUDE_ASM("asm/USA/fdat034/nonmatchings/fdat034", func_801C8CD0);

INCLUDE_ASM("asm/USA/fdat034/nonmatchings/fdat034", func_801C8F10);

INCLUDE_ASM("asm/USA/fdat034/nonmatchings/fdat034", func_801C9470);

void func_801C96FC(Obj801C52C0_fdat000 *arg0, Sub801C96FC *arg1) {
    Seg801C96FC seg;
    Sub8004DE88 rot;
    Tbl801C96FC *tbl;
    Elem801C52C0 *sub;
    Mdl801C96FC *mdl;
    Hdr801C96FC *hdr;
    Part801C96FC *part;
    Slot801C96FC *slot;
    Elem801C96FC *elem;
    Obj801C52C0_fdat000 *target;
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
    ok = func_801C9470(arg0, arg1, 0, tbl->unk0);
    if (sub->unk0 != 0
        || (arg0->unk3C == 0x22 && arg0->unk64.unk0 == arg0->unk135 && func_8004EBF8(&arg0->unk64))) {
        arg0->unk64.unk18 = arg1->unkB;
        mdl = arg0->unk60;
        if (mdl != NULL && mdl->unkE == arg1->unkB) {
            hdr = D_801A6134[arg0->unk8.unk6];
            part = (Part801C96FC *)((u8 *)hdr + ((s32 *)((u8 *)hdr + hdr->unk14))[arg1->unkB]);
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
                    func_801C7188(arg0, 0, 0, 0x100, &arg0->unkCC);
                }
            }
            switch (arg1->unk2 & 0xF) {
            case 0:
                func_80085E98(arg0, &arg1->unk22, &seg.unk0, &seg.unk8, tbl->unk0, arg1->unk12, 7, &D_801CCA88, 0x14, 3, 0x78, &D_801CCA8C, &D_801CCA90, 0, 4);
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
                func_80085E98(arg0, &arg1->unk22, &seg.unk0, &seg.unk8, tbl->unk0, arg1->unk12, 7, &D_801CCA94, 0x14, 3, 0x78, &D_801CCA98, &D_801CCA9C, 0, 4);
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

INCLUDE_ASM("asm/USA/fdat034/nonmatchings/fdat034", func_801C9ED0);

INCLUDE_ASM("asm/USA/fdat034/nonmatchings/fdat034", func_801CA240);

INCLUDE_ASM("asm/USA/fdat034/nonmatchings/fdat034", func_801CA5BC);

INCLUDE_ASM("asm/USA/fdat034/nonmatchings/fdat034", func_801CA610);

INCLUDE_ASM("asm/USA/fdat034/nonmatchings/fdat034", func_801CAB20);

void func_801CAE6C(Obj801C52C0_fdat000 *arg0) {
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

void func_801CAF0C(Obj801C95A8 *arg0) {
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

INCLUDE_ASM("asm/USA/fdat034/nonmatchings/fdat034", func_801CB048);

INCLUDE_ASM("asm/USA/fdat034/nonmatchings/fdat034", func_801CB170);

void func_801CC4A0(Obj801C52C0 *arg0) {
    arg0->unk50 = func_801CB170;
    arg0->unk54 = func_801C8F10;
    arg0->unk58 = func_801CA610;
    arg0->unk5C = func_801CAB20;
    func_801CAE6C((Obj801C52C0_fdat000 *)arg0);
}
