typedef unsigned short u16; typedef short s16; typedef unsigned char u8; typedef int s32;
typedef struct { u8 flags; u8 pad; u16 val; } P;
extern u8 D_80041214, D_80041215;
s32 func_80075280(P *p) {
    s32 v = p->val;
    switch (p->flags & 0x30) {
    case 0x10:
        v = (v * D_80041214) >> 6;
        break;
    case 0x20:
        v = (v * D_80041215) >> 6;
        break;
    }
    return (v * 2) / 3;
}
