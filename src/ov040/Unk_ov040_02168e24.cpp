#include "ov040/Unk_ov040_02168e24.hpp"

extern "C" s32 func_ov040_02168e24(u8 *arg0, s32 arg1);
extern "C" s32 func_ov040_02168f20(u8 *arg0);
extern "C" void func_ov040_02169088(void);
extern "C" s32 func_ov040_02169174(u8 *arg0);
extern "C" s32 func_ov040_021691c4(u8 *arg0);
extern "C" s32 func_ov040_021692a4(s32 arg0);
extern "C" s32 func_ov040_021692cc(s32 arg0);

extern "C" char data_020c47b4[];
extern "C" char data_020c4ab4[];
extern "C" char data_020c4ac8[];
extern "C" char data_020c9660[];
extern "C" char data_020e88a0[];
extern "C" s32 G2_GetBG1ScrPtr(...);
extern "C" s32 G2_GetBG2ScrPtr(...);
extern "C" s32 G2_GetBG3ScrPtr(...);
extern "C" s32 STD_CopyString(...);
extern "C" s32 STD_GetStringLength(...);
extern "C" s32 _ZN17UnkClass_020621b413func_0206a964Ei(...);
extern "C" s32 _ZN8GameHeap4FreeEPv(...);
extern "C" s32 _ZN8GameHeap5AllocEiii(...);
extern "C" s32 _ZN8TextFontD1Ev(...);
extern "C" s32 _ZdlPv(...);
extern "C" s32 func_0209e258(...);
extern "C" s32 func_0209e5cc(...);
extern "C" s32 func_ov015_021319bc(...);
extern "C" s32 func_ov015_02132c08(...);
extern "C" s32 func_ov015_02133e24(...);
extern "C" s32 func_ov015_02133e50(...);
extern "C" s32 func_ov015_02133e8c(...);
extern "C" s32 func_ov015_0213b364(...);
extern "C" s32 func_ov015_0213b3fc(...);
extern "C" s32 func_ov015_0213b478(...);
extern "C" s32 func_ov015_0213be90(...);
extern "C" void func_ov015_0213bfcc(void);
extern "C" s32 func_ov015_0213c33c(...);
extern "C" s32 func_ov040_02165d60(...);
extern "C" void func_ov040_02165e64(void);
extern "C" void func_ov040_02165ef4(void);
extern "C" s32 func_ov040_02165f08(...);
extern "C" s32 func_ov040_02165f34(...);
extern "C" s32 func_ov040_02165f5c(...);
extern "C" s32 func_ov040_021662f4(...);
extern "C" s32 func_ov040_02166514(...);
extern "C" void func_ov040_021665fc(void);
extern "C" s32 func_ov040_02166794(...);
extern "C" s32 func_ov040_02166b70(...);
extern "C" s32 func_ov040_02166bfc(...);
extern "C" void func_ov040_02167378(void);
extern "C" void func_ov040_02167634(void);
extern "C" void func_ov040_02167834(void);

extern "C" s32 func_ov040_02168e24(u8 *arg0, s32 arg1)
{
    u8 *r4;
    u8 *r5;
    s32 v0;
    s32 v3;
    u16 t0;
    u16 t1;
    u16 t2;
    u16 t3;
    s32 t4;
    s32 t5;
    if (*(s32 *)(arg0 + 0x34) != 4)
        return *(s32 *)(arg0 + 0x34);
    v0 = func_ov015_0213be90((s32)data_020c9660, 0);
    if (v0 != 0)
        return v0;
    r4 = arg0;
    r5 = (u8 *)arg1;
    if (*(u16 *)(r5 + 0x4) == 1) {
        if (*(u16 *)(r5 + 0x6) != 0)
            return *(u16 *)(r5 + 0x6);
        if (*(u8 *)(r4 + 0x40) == 0) {
            *(u8 *)(r4 + 0x40) = 1;
            t0 = *(u16 *)(r5);
            t1 = *(u16 *)(r5 + 0x2);
            func_ov040_02166794((s32)r4, t0, t1, (r4 + 0x4C));
        }
        t2 = *(u16 *)(r5);
        *(s32 *)(r4 + 0x44) = t2;
        t3 = *(u16 *)(r5 + 0x2);
        *(s32 *)(r4 + 0x48) = t3;
        func_ov040_02166794((s32)r4, t2, t3, (r4 + 0x58));
        v3 = func_ov040_02166b70((s32)r4);
        return v3;
    } else {
        if ((*(u8 *)(r4 + 0x40) != 0 && *(s32 *)(r4 + 0x4C) != 0)) {
            t4 = *(s32 *)(r4 + 0x44);
            t5 = *(s32 *)(r4 + 0x48);
            func_ov040_02166794((s32)r4, t4, t5, (r4 + 0x58));
            if (*(s32 *)(r4 + 0x4C) == *(s32 *)(r4 + 0x58)) {
                func_ov040_02166bfc((s32)r4);
            }
        }
        *(s32 *)(r4 + 0x58) = 0;
        *(s32 *)(r4 + 0x5C) = 0;
        *(u16 *)(r4 + 0x60) = 0;
        *(s32 *)(r4 + 0x4C) = 0;
        *(s32 *)(r4 + 0x50) = 0;
        *(u16 *)(r4 + 0x54) = 0;
        *(u8 *)(r4 + 0x40) = 0;
        return 0;
    }
}

extern "C" s32 func_ov040_02168f20(u8 *arg0)
{
    s32 r4;
    u8 *r5;
    s32 r7;
    s32 v2;
    s32 v3;
    s32 v4;
    s32 v5;
    s32 v7;
    s32 v9;
    s32 v10;
    s32 v14;
    *(s32 *)(arg0 + 0x34) = 0;
    *(s32 *)(arg0 + 0x38) = 0;
    *(s32 *)(arg0 + 0x3C) = 0;
    *(u8 *)(arg0 + 0x40) = 0;
    *(s32 *)(arg0 + 0x44) = (0 - 1);
    *(s32 *)(arg0 + 0x48) = (0 - 1);
    *(s32 *)(arg0 + 0x70) = 0;
    *(u8 *)(arg0 + 0x78) = 0;
    *(s32 *)(arg0 + 0x7C) = 0;
    *(u8 *)(arg0 + 0xA1) = 0;
    *(u8 *)(arg0 + 0xA2) = 0;
    *(s32 *)(arg0 + 0xA4) = 0;
    *(s32 *)(arg0 + 0x4C) = 0;
    *(s32 *)(arg0 + 0x50) = 0;
    *(u16 *)(arg0 + 0x54) = 0;
    *(s32 *)(arg0 + 0x58) = 0;
    *(s32 *)(arg0 + 0x5C) = 0;
    *(u16 *)(arg0 + 0x60) = 0;
    *(s32 *)(arg0 + 0x64) = 0;
    *(s32 *)(arg0 + 0x68) = 0;
    *(u16 *)(arg0 + 0x6C) = 0;
    func_ov040_02166514((s32)arg0, 0, (0 - 1));
    STD_CopyString((arg0 + 0x88), (s32)data_020c4ac8);
    v2 = _ZN8GameHeap5AllocEiii((s32)data_020c47b4, 0x6C0, 0, 1);
    *(s32 *)(arg0 + 0x80) = v2;
    v3 = _ZN8GameHeap5AllocEiii((s32)data_020c47b4, 0x6C, 0, 1);
    *(s32 *)(arg0 + 0x84) = v3;
    r4 = (s32)arg0;
    r5 = (u8 *)data_020c4ab4;
    r7 = (s32)data_020c4ac8;
    if (*(s32 *)(r5 + 0x4) == 3) {
        v4 = func_ov015_021319bc();
        v5 = _ZN17UnkClass_020621b413func_0206a964Ei((s32)data_020e88a0, v4);
        STD_CopyString(r7, v5);
        v7 = STD_GetStringLength(r7);
        *(s32 *)(r5 + 0x8) = v7;
    }
    func_ov015_0213b364((s32)data_020c9660, 0);
    v9 = G2_GetBG3ScrPtr();
    v10 = G2_GetBG1ScrPtr();
    func_ov015_0213b478((s32)data_020c9660, 0, v9, v10, 0);
    func_ov015_02133e24((r4 + 0xA8), 1);
    func_ov015_02133e50((r4 + 0xA8), 0x1E, 7);
    v14 = func_ov040_02165d60(r4);
    return v14;
}

extern "C" asm void func_ov040_02169088(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r4, r0
    ldr r1, [r4, #0x34]
    cmp r1, #5
    addls pc, pc, r1, lsl #2
    ldmia sp!, {r4, r5, r6, pc}
    ldmia sp!, {r4, r5, r6, pc}
    b @L_021690b8
    ldmia sp!, {r4, r5, r6, pc}
    b @L_021690e8
    b @L_02169140
    b @L_02169140
@L_021690b8:
    bl func_ov040_02165ef4
    cmp r0, #0
    ldmeqia sp!, {r4, r5, r6, pc}
    mov r0, r4
    bl func_ov040_02165e64
    mov r0, r4
    add r2, r4, #0x64
    mov r1, #0
    bl func_ov040_021665fc
    mov r0, #2
    str r0, [r4, #0x34]
    ldmia sp!, {r4, r5, r6, pc}
@L_021690e8:
    ldr r6, =data_020c9660
    mov r5, #0
    mov r0, r6
    mov r1, r5
    bl func_ov015_0213b3fc
    mov r0, r6
    mov r1, r5
    bl func_ov015_0213b364
    mov r0, r4
    bl func_ov040_02167834
    mov r0, r4
    bl func_ov040_02167378
    mov r0, r6
    mov r1, r5
    bl func_ov015_0213bfcc
    mov r0, r4
    ldr r1, [r0]
    ldr r1, [r1, #0x4c]
    blx r1
    mov r0, #4
    str r0, [r4, #0x34]
    ldmia sp!, {r4, r5, r6, pc}
@L_02169140:
    ldr r0, [r4, #0xa4]
    add r0, r0, #1
    str r0, [r4, #0xa4]
    cmp r0, #0x3c
    movge r0, #0
    strge r0, [r4, #0xa4]
    mov r0, r4
    bl func_ov040_02167634
    ldr r0, =data_020c9660
    mov r1, #0
    bl func_ov015_0213bfcc
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" s32 func_ov040_02169174(u8 *arg0)
{
    s32 r1;
    s32 v2;
    r1 = *(s32 *)(arg0 + 0x34);
    switch (r1) {
        default:
            return (s32)arg0;
        case 2:
            func_ov040_02165f5c((s32)arg0, r1);
            *(s32 *)(arg0 + 0x34) = 3;
            return 3;
        case 4:
        case 5:
            func_ov040_021662f4((s32)arg0, r1);
            v2 = func_ov015_0213c33c((u8 *)((u8 *)&data_020c9660), 0);
            return v2;
    }
}

extern "C" s32 func_ov040_021691c4(u8 *arg0)
{
    s32 r1;
    s32 r4;
    s32 v1;
    s32 v2;
    s32 v3;
    s32 v13;
    func_0209e5cc((s32)(arg0 + 0x2C));
    v1 = G2_GetBG3ScrPtr();
    v2 = G2_GetBG1ScrPtr();
    v3 = G2_GetBG2ScrPtr();
    r4 = 0;
    func_ov015_0213b478((s32)((u8 *)&data_020c9660), 0, v1, v2, v3);
    func_ov015_0213b3fc((s32)((u8 *)&data_020c9660), 0);
    r1 = *(s32 *)(arg0 + 0x80);
    if (r1 != 0) {
        _ZN8GameHeap4FreeEPv((s32)((u8 *)&data_020c47b4), r1);
        *(s32 *)(arg0 + 0x80) = r4;
    }
    r1 = *(s32 *)(arg0 + 0x84);
    if (r1 != 0) {
        _ZN8GameHeap4FreeEPv((s32)((u8 *)&data_020c47b4), r1);
        *(s32 *)(arg0 + 0x84) = 0;
    }
    func_ov015_02133e8c((s32)(arg0 + 0xA8), 1);
    func_ov040_02165f08((s32)arg0);
    func_ov040_02165f34((s32)arg0);
    func_ov015_02132c08(1, 0x10);
    func_ov015_02132c08(2, 0x10);
    v13 = func_ov015_02132c08(3, 0x10);
    return v13;
}

extern "C" s32 func_ov040_021692a4(s32 arg0)
{
    func_0209e258((arg0 + 0x2C));
    _ZN8TextFontD1Ev((arg0 + 8));
    _ZdlPv(arg0);
    return arg0;
}

extern "C" s32 func_ov040_021692cc(s32 arg0)
{
    func_0209e258((arg0 + 0x2C));
    _ZN8TextFontD1Ev((arg0 + 8));
    return arg0;
}
