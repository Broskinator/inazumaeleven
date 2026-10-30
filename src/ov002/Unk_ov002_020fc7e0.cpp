#include "ov002/Unk_ov002_020fc7e0.hpp"

extern "C" void func_ov002_020fc7e0(void);
extern "C" void func_ov002_020fc874(void);
extern "C" void func_ov002_020fc8c4(void);
extern "C" s32 func_ov002_020fcaa0(s32 arg0, s32 arg1);
extern "C" s32 func_ov002_020fcad0(s32 arg0, s32 arg1);
extern "C" s32 func_ov002_020fcb10(s32 arg0);
extern "C" void func_ov002_020fcb24(void);
extern "C" void func_ov002_020fcb28(void);
extern "C" void func_ov002_020fcbd0(void);
extern "C" s32 func_ov002_020fcc20(...);
extern "C" void func_ov002_020fcc48(void);
extern "C" void func_ov002_020fce20(void);
extern "C" void func_ov002_020fce44(u8 *arg0);
extern "C" void func_ov002_020fce5c(void);
extern "C" void func_ov002_020fce84(void);
extern "C" void func_ov002_020fcfc4(void);
extern "C" void func_ov002_020fd04c(void);
extern "C" void func_ov002_020fd0a4(void);
extern "C" void func_ov002_020fd15c(void);
extern "C" void func_ov002_020fd1a4(s32 arg0);
extern "C" void func_ov002_020fd1e0(void);
extern "C" void func_ov002_020fd290(void);
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
extern "C" void MI_CpuFill8(void);
extern "C" s32 MIi_CpuClearFast(...);
extern "C" void _ZN12SoundManager9PlaySoundEi(void);
extern "C" void _ZN17UnkClass_0203dc7c13func_0203dc9cEv(void);
extern "C" void _ZN17UnkClass_0203dc7c13func_0203e04cEii(void);
extern "C" void _ZN17UnkClass_0203dc7c13func_0203e114Eii(void);
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
extern "C" void func_ov015_021324c4(void);
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
extern "C" void func_ov015_0213b364(void);
extern "C" s32 func_ov015_0213b3fc(...);
extern "C" void func_ov015_0213b540(void);
extern "C" s32 func_ov015_0213bb80(...);
extern "C" void func_ov015_0213be3c(void);
extern "C" void func_ov015_0213be90(void);
extern "C" s32 func_ov015_0213bfcc(...);
extern "C" void func_ov015_0213c33c(void);
extern "C" void func_ov015_0213c3dc(void);
extern "C" void func_ov015_0213c4c0(void);
extern "C" s32 func_ov015_0213c4fc(...);
extern "C" void func_ov015_0213c530(void);
extern "C" void func_ov015_0213c730(void);

extern "C" asm void func_ov002_020fc7e0(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    ldr r2, [r0]
    mov r6, #2
    ldr r2, [r2, #0xc]
    mov r7, r0
    mov r1, r6
    blx r2
    mov r5, #0
    mov r0, r7
    str r5, [r7, #0x80]
    str r5, [r7, #0x84]
    bl _ZN17UnkClass_0203dc7c13func_0203dc9cEv
    mov r0, r7
    mov r1, r5
    mov r2, r5
    bl _ZN17UnkClass_0203dc7c13func_0203e114Eii
    mov r4, #1
    mov r0, r7
    mov r1, r4
    mov r2, r5
    bl _ZN17UnkClass_0203dc7c13func_0203e114Eii
    mov r2, r6
    mov r0, r7
    mov r1, r5
    bl _ZN17UnkClass_0203dc7c13func_0203e04cEii
    mov r1, r4
    mov r0, r7
    mov r2, r5
    bl _ZN17UnkClass_0203dc7c13func_0203e04cEii
    strb r5, [r7, #0x89]
    strb r5, [r7, #0x88]
    bl func_ov015_021324c4
    mov r0, r7
    ldr r1, [r0]
    ldr r1, [r1, #0x34]
    blx r1
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm void func_ov002_020fc874(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    ldr r0, [r4, #0x80]
    cmp r0, #0
    beq @L_020fc894
    ldr r1, [r0]
    ldr r1, [r1, #0x20]
    blx r1
@L_020fc894:
    ldr r0, [r4, #0x84]
    cmp r0, #0
    beq @L_020fc8ac
    ldr r1, [r0]
    ldr r1, [r1, #0x20]
    blx r1
@L_020fc8ac:
    mov r0, r4
    ldr r2, [r0]
    mov r1, #2
    ldr r2, [r2, #0x28]
    blx r2
    ldmia sp!, {r4, pc}
}

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

extern "C" asm void func_ov002_020fcb28(void)
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

extern "C" asm void func_ov002_020fcbd0(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    ldr r1, =data_ov002_020fd37c
    ldr r6, [r0, #0xc]
    ldr r1, [r1]
    ldr r7, =data_ov002_020fd37c_b
    cmp r1, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    add r5, r0, #0xc
    mov r4, #0xc
@L_020fcbf4:
    ldr r2, [r7, #4]
    mov r0, r1
    mla r1, r2, r4, r5
    mov r2, r6
    bl func_ov015_021340c0
    ldr r1, [r7, #8]!
    cmp r1, #0
    bne @L_020fcbf4
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
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

extern "C" asm void func_ov002_020fcc48(void)
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

extern "C" asm void func_ov002_020fce5c(void)
{
    stmdb sp!, {r3, lr}
    ldr r1, =data_020c46c0
    ldr r1, [r1]
    cmn r1, #0x7a
    bne @L_020fce78
    bl func_ov002_020fce84
    ldmia sp!, {r3, pc}
@L_020fce78:
    bl func_ov002_020fcfc4
    ldmia sp!, {r3, pc}
}

extern "C" asm void func_ov002_020fce84(void)
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

extern "C" asm void func_ov002_020fcfc4(void)
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

extern "C" asm void func_ov002_020fd04c(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r6, r0
    mov r5, #0
    ldr r0, =data_020c9660
    mov r1, r5
    str r5, [r6, #8]
    strb r5, [r6, #0x49]
    strb r5, [r6, #0x4a]
    bl func_ov015_0213b364
    mov r4, #1
    ldr r0, =data_020c47a4
    mov r1, r4
    bl func_ov015_0213c4c0
    mov r1, r5
    mov r2, r4
    add r0, r6, #0x48
    bl MI_CpuFill8
    mov r0, r6
    bl func_ov002_020fcb28
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void func_ov002_020fd0a4(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    ldr r1, [r4, #8]
    cmp r1, #5
    addls pc, pc, r1, lsl #2
    ldmia sp!, {r4, pc}
    dcd 0xe8bd8010
    dcd 0xea000003
    dcd 0xe8bd8010
    dcd 0xea00000b
    dcd 0xea000011
    dcd 0xea000019
    dcd 0xe284000c
    dcd 0xe3a01005
    dcd 0xeb00dc0d
    dcd 0xe3500000
    dcd 0x08bd8010
    dcd 0xe1a00004
    dcd 0xebfffeb7
    dcd 0xe3a00002
    dcd 0xe5840008
    dcd 0xe8bd8010
    dcd 0xe3a01004
    dcd 0xe5841008
    dcd 0xebffff54
    dcd 0xe1a00004
    dcd 0xebffff43
    dcd 0xe3a00006
    dcd 0xeb00d518
    dcd 0xe1a00004
    dcd 0xe5901000
    dcd 0xe5911058
    dcd 0xe12fff31
    dcd 0xe3500000
    dcd 0x18bd8010
    dcd 0xe1a00004
    dcd 0xebffff39
    dcd 0xe8bd8010
    dcd 0xe5901000
    dcd 0xe5911058
    dcd 0xe12fff31
    dcd 0xe3500000
    dcd 0x18bd8010
    dcd 0xe3a00004
    dcd 0xebfd0468
    dcd 0xe8bd8010
}

extern "C" asm void func_ov002_020fd15c(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    ldr r1, [r4, #8]
    cmp r1, #2
    beq @L_020fd180
    cmp r1, #4
    cmpne r1, #5
    beq @L_020fd190
    ldmia sp!, {r4, pc}
@L_020fd180:
    bl func_ov002_020fcc48
    mov r0, #3
    str r0, [r4, #8]
    ldmia sp!, {r4, pc}
@L_020fd190:
    ldr r0, =data_020c9660
    mov r1, #0
    bl func_ov015_0213c33c
    ldmia sp!, {r4, pc}
}

extern "C" void func_ov002_020fd1a4(s32 arg0)
{
    func_ov015_0213b3fc((s32)data_020c9660, 0);
    func_ov015_0213c4fc((s32)data_020c47a4);
    func_ov015_02134198((arg0 + 0xC), 5);
    func_ov002_020fcc20(arg0);
}

extern "C" asm void func_ov002_020fd1e0(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r6, r0
    ldr r0, [r6, #8]
    mov r5, r1
    cmp r0, #4
    ldmneia sp!, {r3, r4, r5, r6, r7, pc}
    ldr r4, =data_020c9660
    mov r7, #0
    mov r0, r4
    mov r1, r7
    bl func_ov015_0213be90
    cmp r0, #0
    ldreqb r0, [r6, #0x49]
    cmpeq r0, #0
    ldreq r1, =data_020c46c0
    subeq r0, r7, #0x7a
    ldreq r1, [r1]
    cmpeq r1, r0
    ldmneia sp!, {r3, r4, r5, r6, r7, pc}
    tst r5, #1
    beq @L_020fd268
    ldr r0, =data_020c5e40
    mov r1, #6
    bl _ZN12SoundManager9PlaySoundEi
    mov r5, #1
    ldrb r1, [r6, #0x48]
    ldr r0, =data_020c47a4
    mov r2, r5
    bl func_ov015_0213c730
    ldrb r1, [r6, #0x48]
    mov r0, r4
    bl func_ov015_0213be3c
    strb r5, [r6, #0x4a]
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_020fd268:
    ldrb r0, [r6, #0x4a]
    cmp r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    mov r0, r6
    bl func_ov002_020fce44
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm void func_ov002_020fd290(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r7, r0
    ldr r0, [r7, #8]
    mov r6, r1
    cmp r0, #4
    ldreqb r0, [r7, #0x4a]
    cmpeq r0, #0
    ldmneia sp!, {r3, r4, r5, r6, r7, pc}
    ldr r5, =data_020c9660
    mov r4, #0
    mov r0, r5
    mov r1, r4
    bl func_ov015_0213be90
    cmp r0, #0
    ldreq r1, =data_020c46c0
    subeq r0, r4, #0x7a
    ldreq r1, [r1]
    cmpeq r1, r0
    ldmneia sp!, {r3, r4, r5, r6, r7, pc}
    ldrb r0, [r7, #0x49]
    cmp r0, #0
    bne @L_020fd33c
    ldrh r0, [r6, #4]
    cmp r0, #1
    ldreqh r0, [r6, #6]
    cmpeq r0, #0
    ldmneia sp!, {r3, r4, r5, r6, r7, pc}
    ldrh r2, [r6]
    ldrh r3, [r6, #2]
    mov r0, r5
    mov r1, r4
    bl func_ov015_0213c3dc
    cmp r0, #3
    ldmneia sp!, {r3, r4, r5, r6, r7, pc}
    ldrb r1, [r7, #0x48]
    ldr r0, =data_020c47a4
    mov r2, #1
    strb r2, [r7, #0x49]
    bl func_ov015_0213c730
    ldrb r1, [r7, #0x48]
    mov r0, r5
    bl func_ov015_0213be3c
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_020fd33c:
    ldr r0, =data_020c5e40
    mov r1, #6
    strb r4, [r7, #0x49]
    bl _ZN12SoundManager9PlaySoundEi
    mov r0, r7
    bl func_ov002_020fce44
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" s32 func_ov002_020fd368(s32 arg0)
{
    _ZdlPv(arg0);
    return arg0;
}
