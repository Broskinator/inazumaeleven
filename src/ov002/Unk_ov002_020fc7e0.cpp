#include "ov002/Unk_ov002_020fc7e0.hpp"
#include "game/vcall.hpp"
struct P020fcbd0 { s32 a; s32 b; };

extern "C" s32 func_ov002_020fc7e0(u8 *arg0);
extern "C" s32 func_ov002_020fc874(u8 *arg0);
extern "C" void func_ov002_020fc8c4(void);
extern "C" s32 func_ov002_020fcaa0(s32 arg0, s32 arg1);
extern "C" s32 func_ov002_020fcad0(s32 arg0, s32 arg1);
extern "C" s32 func_ov002_020fcb10(s32 arg0);
extern "C" void func_ov002_020fcb24(void);
extern "C" s32 func_ov002_020fcb28(...);
extern "C" void func_ov002_020fcbd0(u8 *arg0);
extern "C" s32 func_ov002_020fcc20(...);
extern "C" s32 func_ov002_020fcc48(...);
extern "C" void func_ov002_020fce20(void);
extern "C" void func_ov002_020fce44(u8 *arg0);
extern "C" void func_ov002_020fce5c(s32 arg0);
extern "C" s32 func_ov002_020fce84(...);
extern "C" s32 func_ov002_020fcfc4(...);
extern "C" void func_ov002_020fd04c(u8 *arg0);
extern "C" void func_ov002_020fd0a4(void);
extern "C" s32 func_ov002_020fd15c(u8 *arg0);
extern "C" void func_ov002_020fd1a4(s32 arg0);
extern "C" void func_ov002_020fd1e0(u8 *arg0, s32 arg1);
extern "C" void func_ov002_020fd290(u8 *arg0, s32 arg1);
extern "C" s32 func_ov002_020fd368(s32 arg0);

extern "C" char data_020c46c0[];
extern "C" char data_020c47a4[];
extern "C" char data_020c4850[];
extern "C" char data_020c5e40[];
extern "C" char data_020c9660[];
extern "C" char data_020d0d20[];
extern "C" char data_020d1520[];
extern "C" char data_020d1d20[];
extern "C" char data_ov002_020fd37c[];
extern "C" char data_ov002_020fd37c_b[];
extern "C" char data_ov002_020fd460[];
extern "C" char data_ov002_020fd478[];
extern "C" char data_ov002_020fd5bc[];
extern "C" char data_ov002_020fd5e0[];
extern "C" char data_ov002_020fd5e4[];
extern "C" void DC_FlushRange(void);
extern "C" void G2_GetBG1CharPtr(void);
extern "C" void G2_GetBG2CharPtr(void);
extern "C" void G2_GetBG3CharPtr(void);
extern "C" s32 MI_CpuFill8(...);
extern "C" s32 MIi_CpuClearFast(...);
extern "C" s32 _ZN12SoundManager9PlaySoundEi(...);
extern "C" s32 _ZN17UnkClass_0203dc7c13func_0203dc9cEv(...);
extern "C" s32 _ZN17UnkClass_0203dc7c13func_0203e04cEii(...);
extern "C" s32 _ZN17UnkClass_0203dc7c13func_0203e114Eii(...);
extern "C" void _ZN17UnkClass_0203dc7c13func_0203e18cEv(void);
extern "C" void _ZN17UnkClass_0203dc7c13func_0203e1bcEv(void);
extern "C" void _ZN17UnkClass_0203dc7c13func_0203e1f4Ev(void);
extern "C" void _ZN17UnkClass_0203dc7c13func_0203e224Ev(void);
extern "C" s32 _ZdlPv(...);
extern "C" void func_02003678(void);
extern "C" void func_02003758(void);
extern "C" void func_02003838(void);
extern "C" void func_020039f8(void);
extern "C" void func_02003bb8(void);
extern "C" void func_ov015_02132224(void);
extern "C" void func_ov015_021322b0(void);
extern "C" s32 func_ov015_021324c4(...);
extern "C" s32 func_ov015_021326e0(...);
extern "C" void func_ov015_02132984(void);
extern "C" void func_ov015_02133f94(void);
extern "C" void func_ov015_021340c0(void);
extern "C" s32 func_ov015_02134198(...);
extern "C" void func_ov015_02134208(void);
extern "C" s32 func_ov015_02134ccc(...);
extern "C" s32 func_ov015_021353a4(...);
extern "C" s32 func_ov015_02135440(...);
extern "C" s32 func_ov015_02135e10(...);
extern "C" s32 func_ov015_0213b364(...);
extern "C" s32 func_ov015_0213b3fc(...);
extern "C" void func_ov015_0213b540(void);
extern "C" s32 func_ov015_0213bb80(...);
extern "C" s32 func_ov015_0213be3c(...);
extern "C" s32 func_ov015_0213be90(...);
extern "C" s32 func_ov015_0213bfcc(...);
extern "C" s32 func_ov015_0213c33c(...);
extern "C" s32 func_ov015_0213c3dc(...);
extern "C" s32 func_ov015_0213c4c0(...);
extern "C" s32 func_ov015_0213c4fc(...);
extern "C" void func_ov015_0213c530(void);
extern "C" s32 func_ov015_0213c730(...);

extern "C" s32 func_ov002_020fc7e0(u8 *arg0)
{
    s32 v7;
    ((VCall *)arg0)->f3(2);
    *(s32 *)(arg0 + 0x80) = 0;
    *(s32 *)(arg0 + 0x84) = 0;
    _ZN17UnkClass_0203dc7c13func_0203dc9cEv((s32)arg0);
    _ZN17UnkClass_0203dc7c13func_0203e114Eii((s32)arg0, 0, 0);
    _ZN17UnkClass_0203dc7c13func_0203e114Eii((s32)arg0, 1, 0);
    _ZN17UnkClass_0203dc7c13func_0203e04cEii((s32)arg0, 0, 2);
    _ZN17UnkClass_0203dc7c13func_0203e04cEii((s32)arg0, 1, 0);
    *(u8 *)(arg0 + 0x89) = 0;
    *(u8 *)(arg0 + 0x88) = 0;
    func_ov015_021324c4();
    v7 = ((VCall *)arg0)->f13();
    return v7;
}

extern "C" s32 func_ov002_020fc874(u8 *arg0)
{
    u8 *r4;
    s32 v2;
    r4 = arg0;
    arg0 = (u8 *)*(s32 *)(arg0 + 0x80);
    if ((s32)arg0 != 0) {
        ((VCall *)arg0)->f8();
    }
    arg0 = (u8 *)*(s32 *)(r4 + 0x84);
    if ((s32)arg0 != 0) {
        ((VCall *)arg0)->f8();
    }
    v2 = ((VCall *)r4)->f10(2);
    return v2;
}

extern "C" void func_ov015_02134118(void);
extern "C" void func_ov015_0213257c(void);
extern "C" void _ZN12SceneManager13func_0203e2fcEl(void);
extern "C" asm void func_ov002_020fc8c4(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    ldr r1, =data_ov002_020fd5e0
    mov r5, r0
    ldr r2, [r1]
    tst r2, #1
    ldreq r0, =data_ov002_020fd460
    addeq r3, r5, #0x8c
    orreq r2, r2, #1
    streq r3, [r0, #0x1c]
    mov r0, r5
    streq r2, [r1]
    bl _ZN17UnkClass_0203dc7c13func_0203e1bcEv
    mov r4, r0
    mov r0, r5
    bl _ZN17UnkClass_0203dc7c13func_0203e18cEv
    cmp r4, r0
    bne @L_020fc914
    ldrb r0, [r5, #4]
    cmp r0, #0
    beq @L_020fc9bc
@L_020fc914:
    ldr r0, [r5, #0x80]
    cmp r0, #0
    beq @L_020fc934
    ldr r1, [r0]
    ldr r1, [r1, #0x58]
    blx r1
    cmp r0, #0
    bne @L_020fc9bc
@L_020fc934:
    ldr r0, [r5, #0x80]
    cmp r0, #0
    beq @L_020fc95c
    ldr r1, [r0]
    ldr r1, [r1, #0x20]
    blx r1
    ldr r0, [r5, #0x80]
    ldr r1, [r0]
    ldr r1, [r1, #0x44]
    blx r1
@L_020fc95c:
    mov r1, #0
    ldr r0, =data_ov002_020fd460
    str r1, [r5, #0x80]
    ldr r1, [r0, #0x18]
    ldr r0, =data_ov002_020fd478
    cmp r1, #0
    beq @L_020fc994
@L_020fc978:
    cmp r4, r1
    ldreq r0, [r0, #4]
    streq r0, [r5, #0x80]
    beq @L_020fc994
    ldr r1, [r0, #0x10]!
    cmp r1, #0
    bne @L_020fc978
@L_020fc994:
    mov r0, r5
    mov r2, r4
    mov r1, #0
    bl _ZN17UnkClass_0203dc7c13func_0203e114Eii
    ldr r0, [r5, #0x80]
    cmp r0, #0
    beq @L_020fc9bc
    ldr r1, [r0]
    ldr r1, [r1, #0x10]
    blx r1
@L_020fc9bc:
    mov r0, r5
    bl _ZN17UnkClass_0203dc7c13func_0203e224Ev
    mov r4, r0
    mov r0, r5
    bl _ZN17UnkClass_0203dc7c13func_0203e1f4Ev
    cmp r4, r0
    bne @L_020fc9e4
    ldrb r0, [r5, #5]
    cmp r0, #0
    ldmeqia sp!, {r3, r4, r5, pc}
@L_020fc9e4:
    ldr r0, [r5, #0x84]
    cmp r0, #0
    beq @L_020fca04
    ldr r1, [r0]
    ldr r1, [r1, #0x58]
    blx r1
    cmp r0, #0
    ldmneia sp!, {r3, r4, r5, pc}
@L_020fca04:
    ldr r0, [r5, #0x84]
    cmp r0, #0
    beq @L_020fca2c
    ldr r1, [r0]
    ldr r1, [r1, #0x20]
    blx r1
    ldr r0, [r5, #0x84]
    ldr r1, [r0]
    ldr r1, [r1, #0x44]
    blx r1
@L_020fca2c:
    mov r1, #0
    ldr r0, =data_ov002_020fd5e0
    str r1, [r5, #0x84]
    ldr r0, [r0, #4]
    ldr r1, =data_ov002_020fd5e4
    cmp r0, #0
    beq @L_020fca64
@L_020fca48:
    cmp r4, r0
    ldreq r0, [r1, #4]
    streq r0, [r5, #0x84]
    beq @L_020fca64
    ldr r0, [r1, #0x10]!
    cmp r0, #0
    bne @L_020fca48
@L_020fca64:
    mov r0, r5
    mov r2, r4
    mov r1, #1
    bl _ZN17UnkClass_0203dc7c13func_0203e114Eii
    ldr r0, [r5, #0x84]
    cmp r0, #0
    ldmeqia sp!, {r3, r4, r5, pc}
    ldr r1, [r0]
    ldr r1, [r1, #0x10]
    blx r1
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" s32 func_ov002_020fcaa0(s32 arg0, s32 arg1)
{
    s32 r4;
    s32 v1;
    r4 = arg1;
    if ((r4 == 0 || r4 == 2)) {
        func_ov015_02134ccc(1);
    }
    if ((u32)(r4 - 1) > (u32)1)
        return (r4 - 1);
    v1 = func_ov015_02135440(1);
    return v1;
}

extern "C" s32 func_ov002_020fcad0(s32 arg0, s32 arg1)
{
    s32 r4;
    s32 v1;
    s32 v2;
    r4 = arg1;
    if ((r4 == 0 || r4 == 2)) {
        func_ov015_021353a4();
    }
    arg0 = (r4 - 1);
    if ((u32)arg0 <= (u32)1) {
        v1 = func_ov015_02135e10();
        arg0 = v1;
    }
    if (r4 != 2)
        return arg0;
    v2 = MIi_CpuClearFast(0, 0x6800000, 0xA4000);
    return v2;
}

extern "C" s32 func_ov002_020fcb10(s32 arg0)
{
    _ZdlPv(arg0);
    return arg0;
}

extern "C" void func_ov002_020fcb24(void)
{
}

extern "C" asm s32 func_ov002_020fcb28(...)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    mov r8, r0
    mov r4, #0
    mov r1, r4
    add r0, r8, #0xc
    mov r2, #0x3c
    bl MI_CpuFill8
    ldr r0, =data_ov002_020fd5bc
    add r1, r8, #0xc
    bl func_ov015_02133f94
    ldr r7, =data_020d0d20
    mov r6, #0x800
    mov r0, r4
    mov r1, r7
    mov r2, r6
    bl MIi_CpuClearFast
    mov r0, r4
    ldr r5, =data_020d1d20
    mov r2, r6
    mov r1, r5
    bl MIi_CpuClearFast
    mov r0, r4
    ldr r4, =data_020d1520
    mov r2, r6
    mov r1, r4
    bl MIi_CpuClearFast
    mov r0, r7
    mov r1, r6
    bl DC_FlushRange
    mov r0, r5
    mov r1, r6
    bl DC_FlushRange
    mov r0, r4
    mov r1, r6
    bl DC_FlushRange
    mov r0, #1
    str r0, [r8, #8]
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

extern "C" void func_ov002_020fcbd0(u8 *arg0)
{
    s32 a = *(s32 *)data_ov002_020fd37c;
    s32 v = *(s32 *)(arg0 + 0xC);
    P020fcbd0 *e = (P020fcbd0 *)data_ov002_020fd37c_b;
    if (a == 0)
        return;
    do {
        ((void (*)(s32, u8 *, s32))func_ov015_021340c0)(a, arg0 + 0xC + e->b * 0xC, v);
        e++;
        a = e->a;
    } while (a != 0);
}

extern "C" asm s32 func_ov002_020fcc20(...)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r6, #0
    add r5, r0, #0xc
    mov r4, #0xc
@L_020fcc30:
    mla r0, r6, r4, r5
    bl func_ov015_02134208
    add r6, r6, #1
    cmp r6, #5
    blt @L_020fcc30
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm s32 func_ov002_020fcc48(...)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    mov r8, r0
    bl G2_GetBG3CharPtr
    mov r6, #0x20
    mov r4, #0
    mov r1, r0
    mov r0, r4
    mov r2, r6
    bl MIi_CpuClearFast
    bl G2_GetBG3CharPtr
    mov r1, r6
    bl DC_FlushRange
    ldr r0, =data_020d0d20
    mov r1, r4
    mov r5, #0x800
    mov r2, r5
    bl func_02003838
    ldr r0, =data_020c4850
    mov r1, r4
    ldr r3, [r0]
    ldr r2, [r3, #0x18]
    ldr r0, [r3, #0x14]
    add r0, r3, r0
    bl func_02003bb8
    bl G2_GetBG1CharPtr
    mov r1, r0
    mov r0, r4
    mov r2, r6
    bl MIi_CpuClearFast
    bl G2_GetBG1CharPtr
    mov r1, r6
    bl DC_FlushRange
    mov r2, r5
    ldr r0, =data_020d1520
    mov r1, r4
    bl func_02003678
    mov r5, r4
    ldr r1, =data_020c46c0
    sub r0, r6, #0x9a
    ldr r1, [r1]
    cmp r1, r0
    bne @L_020fcd80
    ldr r7, [r8, #0x24]
    cmp r7, #0
    beq @L_020fcd48
    ldr r0, [r7, #0xc]
    mov r9, #2
    ldr r1, [r7, #0x10]
    mov r3, r9
    add r0, r7, r0
    add r2, r4, #1
    bl func_ov015_02132984
    mov r5, r0
    mov r0, r7
    mov r1, r4
    mov r2, r9
    bl func_ov015_021322b0
    ldr r0, [r7, #0x14]
    ldr r2, [r7, #0x18]
    mov r1, r6
    add r0, r7, r0
    bl func_020039f8
    ldr r0, [r7, #0x18]
    add r6, r6, r0
@L_020fcd48:
    ldr r7, [r8, #0x30]
    cmp r7, #0
    beq @L_020fcdcc
    ldr r0, [r7, #0xc]
    mov r4, #2
    ldr r1, [r7, #0x10]
    mov r3, r4
    add r0, r7, r0
    add r2, r5, #1
    bl func_ov015_02132984
    mov r0, r7
    mov r2, r4
    mov r1, #0
    b @L_020fcdb4
@L_020fcd80:
    ldr r7, [r8, #0x18]
    cmp r7, #0
    beq @L_020fcdcc
    ldr r0, [r7, #0xc]
    mov r5, #1
    ldr r1, [r7, #0x10]
    mov r3, r5
    add r0, r7, r0
    add r2, r4, #1
    bl func_ov015_02132984
    mov r0, r7
    mov r1, r4
    mov r2, r5
@L_020fcdb4:
    bl func_ov015_021322b0
    ldr r0, [r7, #0x14]
    ldr r2, [r7, #0x18]
    mov r1, r6
    add r0, r7, r0
    bl func_020039f8
@L_020fcdcc:
    bl G2_GetBG2CharPtr
    mov r4, #0x20
    mov r5, #0
    mov r1, r0
    mov r0, r5
    mov r2, r4
    bl MIi_CpuClearFast
    bl G2_GetBG2CharPtr
    mov r1, r4
    bl DC_FlushRange
    ldr r0, =data_020d1d20
    mov r1, r5
    mov r2, #0x800
    bl func_02003758
    bl func_ov015_02132224
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

extern "C" void func_ov002_020fce20(void)
{
    func_ov015_0213bb80((s32)data_020c9660);
    func_ov015_0213bfcc((s32)data_020c9660, 0);
}

extern "C" void func_ov002_020fce44(u8 *arg0)
{
    *(s32 *)(arg0 + 0x8) = 5;
    func_ov015_021326e0(8, 5);
}

extern "C" void func_ov002_020fce5c(s32 arg0)
{
    if (*(s32 *)(((u8 *)&data_020c46c0)) == -0x7A) {
        func_ov002_020fce84(arg0);
        return;
    } else {
        func_ov002_020fcfc4();
        return;
    }
}

extern "C" asm s32 func_ov002_020fce84(...)
{
    stmdb sp!, {r3, r4, r5, r6, lr}
    sub sp, sp, #0x2c
    mov r4, r0
    ldr r2, [r4, #0x24]
    cmp r2, #0
    beq @L_020fcf04
    ldr r0, [r2, #0xc]
    mov r1, #0
    add r6, r2, r0
    mov r5, #3
    mov r3, #7
    mov r2, #0x1a
    mov r0, #0xa
    strh r3, [sp, #0x16]
    strh r2, [sp, #0x18]
    strh r0, [sp, #0x1a]
    strh r5, [sp, #0x14]
    strh r1, [sp, #0x1c]
    strh r1, [sp, #0x1e]
    strh r1, [sp, #0x20]
    strh r1, [sp, #0x22]
    strb r1, [sp, #0x24]
    str r6, [sp, #0x28]
    mov r2, #1
    add r0, sp, #0x14
    str r2, [sp]
    stmib sp, {r0, r1}
    str r1, [sp, #0xc]
    ldr r0, =data_020c9660
    mov r3, #2
    str r1, [sp, #0x10]
    bl func_ov015_0213b540
@L_020fcf04:
    ldr r2, [r4, #0x30]
    cmp r2, #0
    beq @L_020fcf7c
    ldr r0, [r2, #0xc]
    mov r1, #0
    add r6, r2, r0
    mov lr, #0xd
    mov r12, #0xe
    mov r5, #6
    mov r3, #3
    mov r2, #0x30
    mov r0, #0x18
    strh r2, [sp, #0x20]
    strh r0, [sp, #0x22]
    strh lr, [sp, #0x14]
    strh r12, [sp, #0x16]
    strh r5, [sp, #0x18]
    strh r3, [sp, #0x1a]
    strh r1, [sp, #0x1c]
    strh r1, [sp, #0x1e]
    strb r1, [sp, #0x24]
    str r6, [sp, #0x28]
    mov r2, #1
    add r0, sp, #0x14
    str r2, [sp]
    stmib sp, {r0, r1}
    str r1, [sp, #0xc]
    ldr r0, =data_020c9660
    str r1, [sp, #0x10]
    bl func_ov015_0213b540
@L_020fcf7c:
    ldr r5, =data_020c47a4
    mov r1, #0
    mov r12, #0xa
    mov r0, r5
    mov r3, r1
    mov r2, #3
    str r12, [sp]
    bl func_ov015_0213c530
    mov r3, r0
    mov r0, r5
    and r1, r3, #0xff
    mov r2, #1
    strb r3, [r4, #0x48]
    bl func_ov015_0213c730
    add sp, sp, #0x2c
    ldmia sp!, {r3, r4, r5, r6, pc}
}

extern "C" asm s32 func_ov002_020fcfc4(...)
{
    stmdb sp!, {lr}
    sub sp, sp, #0x2c
    ldr r2, [r0, #0x18]
    cmp r2, #0
    addeq sp, sp, #0x2c
    ldmeqia sp!, {pc}
    ldr r0, [r2, #0xc]
    mov r1, #0
    add lr, r2, r0
    mov r3, #8
    mov r12, #4
    mov r0, #0x18
    strh r0, [sp, #0x18]
    mov r2, #1
    strh r12, [sp, #0x14]
    strh r3, [sp, #0x16]
    strh r3, [sp, #0x1a]
    strh r1, [sp, #0x1c]
    strh r1, [sp, #0x1e]
    strh r1, [sp, #0x20]
    strh r1, [sp, #0x22]
    strb r1, [sp, #0x24]
    str lr, [sp, #0x28]
    add r0, sp, #0x14
    str r2, [sp]
    stmib sp, {r0, r1}
    str r1, [sp, #0xc]
    ldr r0, =data_020c9660
    mov r3, r2
    str r1, [sp, #0x10]
    bl func_ov015_0213b540
    add sp, sp, #0x2c
    ldmia sp!, {pc}
}

extern "C" void func_ov002_020fd04c(u8 *arg0)
{
    *(s32 *)(arg0 + 0x8) = 0;
    *(u8 *)(arg0 + 0x49) = 0;
    *(u8 *)(arg0 + 0x4A) = 0;
    func_ov015_0213b364((s32)((u8 *)&data_020c9660), 0);
    func_ov015_0213c4c0((s32)((u8 *)&data_020c47a4), 1);
    MI_CpuFill8((s32)(arg0 + 0x48), 0, 1);
    func_ov002_020fcb28((s32)arg0);
}

extern "C" asm void func_ov002_020fd0a4(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    ldr r1, [r4, #8]
    cmp r1, #5
    addls pc, pc, r1, lsl #2
    ldmia sp!, {r4, pc}
    ldmia sp!, {r4, pc}
    b @L_020fd0d4
    ldmia sp!, {r4, pc}
    b @L_020fd0fc
    b @L_020fd118
    b @L_020fd13c
@L_020fd0d4:
    add r0, r4, #0xc
    mov r1, #5
    bl func_ov015_02134118
    cmp r0, #0
    ldmeqia sp!, {r4, pc}
    mov r0, r4
    bl func_ov002_020fcbd0
    mov r0, #2
    str r0, [r4, #8]
    ldmia sp!, {r4, pc}
@L_020fd0fc:
    mov r1, #4
    str r1, [r4, #8]
    bl func_ov002_020fce5c
    mov r0, r4
    bl func_ov002_020fce20
    mov r0, #6
    bl func_ov015_0213257c
@L_020fd118:
    mov r0, r4
    ldr r1, [r0]
    ldr r1, [r1, #0x58]
    blx r1
    cmp r0, #0
    ldmneia sp!, {r4, pc}
    mov r0, r4
    bl func_ov002_020fce20
    ldmia sp!, {r4, pc}
@L_020fd13c:
    ldr r1, [r0]
    ldr r1, [r1, #0x58]
    blx r1
    cmp r0, #0
    ldmneia sp!, {r4, pc}
    mov r0, #4
    bl _ZN12SceneManager13func_0203e2fcEl
    ldmia sp!, {r4, pc}
}

extern "C" s32 func_ov002_020fd15c(u8 *arg0)
{
    s32 r1;
    s32 v1;
    r1 = *(s32 *)(arg0 + 0x8);
    switch (r1) {
        default:
            return (s32)arg0;
        case 2:
            func_ov002_020fcc48((s32)arg0);
            *(s32 *)(arg0 + 0x8) = 3;
            return 3;
        case 4:
        case 5:
            v1 = func_ov015_0213c33c((u8 *)((u8 *)&data_020c9660), 0);
            return v1;
    }
}

extern "C" void func_ov002_020fd1a4(s32 arg0)
{
    func_ov015_0213b3fc((s32)data_020c9660, 0);
    func_ov015_0213c4fc((s32)data_020c47a4);
    func_ov015_02134198((arg0 + 0xC), 5);
    func_ov002_020fcc20(arg0);
}

extern "C" void func_ov002_020fd1e0(u8 *arg0, s32 arg1)
{
    s32 r4;
    u8 *r6;
    s32 v0;
    u8 t0;
    u8 t1;
    if (*(s32 *)(arg0 + 0x8) != 4)
        return;
    v0 = func_ov015_0213be90((s32)data_020c9660, 0);
    if (v0 != 0)
        return;
    if (*(u8 *)(arg0 + 0x49) != 0)
        return;
    if (*(s32 *)(data_020c46c0) != (0 - 0x7A))
        return;
    r4 = (s32)data_020c9660;
    r6 = arg0;
    if ((arg1 & 1) != 0) {
        _ZN12SoundManager9PlaySoundEi((s32)data_020c5e40, 6);
        t0 = *(u8 *)(r6 + 0x48);
        func_ov015_0213c730((s32)data_020c47a4, t0, 1);
        t1 = *(u8 *)(r6 + 0x48);
        func_ov015_0213be3c(r4, t1);
        *(u8 *)(r6 + 0x4A) = 1;
        return;
    } else {
        if (*(u8 *)(r6 + 0x4A) == 0)
            return;
        func_ov002_020fce44(r6);
        return;
    }
}

extern "C" void func_ov002_020fd290(u8 *arg0, s32 arg1)
{
    s32 r4;
    s32 r5;
    u8 *r6;
    u8 *r7;
    s32 v0;
    s32 v1;
    u16 t0;
    u16 t1;
    u8 t2;
    u8 t3;
    if (*(s32 *)(arg0 + 0x8) != 4)
        return;
    if (*(u8 *)(arg0 + 0x4A) != 0)
        return;
    v0 = func_ov015_0213be90((s32)data_020c9660, 0);
    if (v0 != 0)
        return;
    if (*(s32 *)(data_020c46c0) != (0 - 0x7A))
        return;
    r4 = 0;
    r5 = (s32)data_020c9660;
    r6 = (u8 *)arg1;
    r7 = arg0;
    if (*(u8 *)(r7 + 0x49) == 0) {
        if (*(u16 *)(r6 + 0x4) != 1)
            return;
        if (*(u16 *)(r6 + 0x6) != 0)
            return;
        t0 = *(u16 *)(r6);
        t1 = *(u16 *)(r6 + 0x2);
        v1 = func_ov015_0213c3dc(r5, r4, t0, t1);
        if (v1 != 3)
            return;
        t2 = *(u8 *)(r7 + 0x48);
        *(u8 *)(r7 + 0x49) = 1;
        func_ov015_0213c730((s32)data_020c47a4, t2, 1);
        t3 = *(u8 *)(r7 + 0x48);
        func_ov015_0213be3c(r5, t3);
        return;
    } else {
        *(u8 *)(r7 + 0x49) = r4;
        _ZN12SoundManager9PlaySoundEi((s32)data_020c5e40, 6);
        func_ov002_020fce44(r7);
        return;
    }
}

extern "C" s32 func_ov002_020fd368(s32 arg0)
{
    _ZdlPv(arg0);
    return arg0;
}
