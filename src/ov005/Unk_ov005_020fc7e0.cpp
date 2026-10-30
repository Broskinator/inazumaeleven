#include "ov005/Unk_ov005_020fc7e0.hpp"

extern "C" void func_ov005_020fc7e0(void);
extern "C" void func_ov005_020fc93c(void);
extern "C" void func_ov005_020fc98c(void);
extern "C" void func_ov005_020fcac4(void);
extern "C" void func_ov005_020fcb08(void);
extern "C" void func_ov005_020fcb5c(void);
extern "C" void func_ov005_020fcb70(void);
extern "C" void func_ov005_020fcb74(void);
extern "C" void func_ov005_020fcbb0(void);
extern "C" void func_ov005_020fcbf4(void);
extern "C" void func_ov005_020fcc58(void);
extern "C" void func_ov005_020fcc9c(void);
extern "C" void func_ov005_020fccc4(void);
extern "C" void func_ov005_020fcdb0(void);
extern "C" void func_ov005_020fcdc8(void);
extern "C" void func_ov005_020fce34(void);
extern "C" void func_ov005_020fce84(void);
extern "C" void func_ov005_020fcee4(void);
extern "C" void func_ov005_020fd3a4(void);
extern "C" void func_ov005_020fd3a8(void);
extern "C" void func_ov005_020fd3e0(void);
extern "C" void func_ov005_020fd3f4(void);
extern "C" void func_ov005_020fd488(void);
extern "C" void func_ov005_020fd4ac(void);
extern "C" void func_ov005_020fd524(void);
extern "C" void func_ov005_020fd52c(void);
extern "C" void func_ov005_020fd544(void);
extern "C" void func_ov005_020fd5a0(void);
extern "C" void func_ov005_020fd5e4(void);
extern "C" void func_ov005_020fd60c(void);
extern "C" void func_ov005_020fd670(void);
extern "C" void func_ov005_020fd6dc(void);
extern "C" void func_ov005_020fd6f8(void);
extern "C" void func_ov005_020fd8c0(void);
extern "C" void func_ov005_020fd8c4(void);
extern "C" void func_ov005_020fd8dc(void);
extern "C" void func_ov005_020fd8f0(void);
extern "C" void func_ov005_020fd8f4(void);

extern "C" char data_020c467c[];
extern "C" char data_020c47b4[];
extern "C" char data_020c4c70[];
extern "C" char data_020c5e40[];
extern "C" char data_ov005_020fdb1c[];
extern "C" char data_ov005_020fdb40[];
extern "C" char data_ov005_020fdb4c[];
extern "C" char data_ov005_020fdb58[];
extern "C" char data_ov005_020fdbf0[];
extern "C" char data_ov005_020fdc10[];
extern "C" char data_ov005_020fdc30[];
extern "C" char data_ov005_020fdc54[];
extern "C" char data_ov005_020fdc80[];
extern "C" void DC_FlushRange(void);
extern "C" void GXS_BeginLoadBGExtPltt(void);
extern "C" void MI_CpuFill8(void);
extern "C" void MIi_CpuClearFast(void);
extern "C" void OS_Sleep(void);
extern "C" void _ZN11FileManager4LoadEPKcPPvP8GameHeapiiiih(void);
extern "C" void _ZN12SceneManager13func_0203e2fcEl(void);
extern "C" void _ZN12SoundManager13AreBanksReadyEv(void);
extern "C" void _ZN12SoundManager13func_0203a790Eii(void);
extern "C" void _ZN12SoundManager13func_0203ba5cEi(void);
extern "C" void _ZN12SoundManager13func_0203bc10EPKc(void);
extern "C" void _ZN12SoundManager13func_0203bcb0EPKci(void);
extern "C" void _ZN12SoundManager6IsIdleEv(void);
extern "C" void _ZN12SoundManager8SetSceneEiii(void);
extern "C" void _ZN17UnkClass_0203dc7c13func_0203e04cEii(void);
extern "C" void _ZN17UnkClass_0203dc7c13func_0203e114Eii(void);
extern "C" void _ZN17UnkClass_0203dc7c13func_0203e18cEv(void);
extern "C" void _ZN17UnkClass_0203dc7c13func_0203e1bcEv(void);
extern "C" void _ZN17UnkClass_0203dc7c13func_0203e1f4Ev(void);
extern "C" void _ZN17UnkClass_0203dc7c13func_0203e224Ev(void);
extern "C" void _ZN8GameHeap4FreeEPv(void);
extern "C" void _ZN8GameHeap5AllocEiii(void);
extern "C" void _ZdlPv(void);
extern "C" void func_02003298(void);
extern "C" void func_02003678(void);
extern "C" void func_02003758(void);
extern "C" void func_020037c8(void);
extern "C" void func_020039f8(void);
extern "C" void func_02003ad8(void);
extern "C" void func_02003b48(void);
extern "C" void func_02003df0(void);
extern "C" void func_02003e58(void);
extern "C" void func_020887f0(void);
extern "C" void func_ov015_02132240(void);
extern "C" void func_ov015_021322b0(void);
extern "C" void func_ov015_021325a0(void);
extern "C" void func_ov015_02132628(void);
extern "C" void func_ov015_02132a04(void);
extern "C" void func_ov015_02133efc(void);
extern "C" void func_ov015_02134ccc(void);
extern "C" void func_ov015_021353a4(void);
extern "C" void func_ov015_02135440(void);
extern "C" void func_ov015_02135e10(void);
extern "C" void gGameState(void);
extern "C" void sprintf(void);

extern "C" asm void func_ov005_020fc7e0(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    ldr r1, =data_020c4c70
    mov r4, #0
    ldr r6, [r1, #0x28]
    mov r5, #1
    mov r3, r4, lsl #0x15
    ldr r2, [r1, #0x2c]
    orr r3, r3, r5, lsr #11
    orr r6, r6, r5, lsl #21
    str r6, [r1, #0x28]
    orr r2, r2, r3
    str r2, [r1, #0x2c]
    strb r5, [r1, #0x40]
    ldr r2, [r0]
    mov r1, #2
    ldr r2, [r2, #0xc]
    mov r6, r0
    blx r2
    ldr r3, =data_ov005_020fdc80
    mov r0, r6
    mov r1, r4
    mov r2, r4
    str r4, [r6, #0x80]
    str r4, [r6, #0x84]
    strb r5, [r3]
    bl _ZN17UnkClass_0203dc7c13func_0203e114Eii
    mov r0, r6
    mov r1, r5
    mov r2, r4
    bl _ZN17UnkClass_0203dc7c13func_0203e114Eii
    mov r7, #0x96
    mov r0, r6
    mov r1, r4
    mov r2, r7
    bl _ZN17UnkClass_0203dc7c13func_0203e04cEii
    mov r1, r5
    mov r2, r7
    mov r0, r6
    bl _ZN17UnkClass_0203dc7c13func_0203e04cEii
    mov r5, #6
    mov r0, r5
    strb r4, [r6, #0x89]
    strb r4, [r6, #0x88]
    bl func_ov015_02132628
    mov r1, r5
    ldr r5, =data_020c5e40
    mov r2, r4
    mov r0, r5
    mov r3, r4
    bl _ZN12SoundManager8SetSceneEiii
    mov r0, r5
    mov r1, r4
    mov r2, r4
    bl _ZN12SoundManager13func_0203a790Eii
    mov r4, #0x14
    b @L_020fc8c8
@L_020fc8c0:
    mov r0, r4
    bl OS_Sleep
@L_020fc8c8:
    mov r0, r5
    bl _ZN12SoundManager6IsIdleEv
    cmp r0, #0
    beq @L_020fc8c0
    mov r5, #0x14
    ldr r4, =data_020c5e40
    b @L_020fc8ec
@L_020fc8e4:
    mov r0, r5
    bl OS_Sleep
@L_020fc8ec:
    mov r0, r4
    bl _ZN12SoundManager13AreBanksReadyEv
    cmp r0, #0
    beq @L_020fc8e4
    mov r0, r6
    ldr r1, [r0]
    ldr r1, [r1, #0x34]
    blx r1
    ldr r0, =data_020c467c
    ldr r1, =0x7335
    ldr r0, [r0]
    mov r2, #0x1f
    mov r3, #0
    bl func_020887f0
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm void func_ov005_020fc93c(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    ldr r0, [r4, #0x80]
    cmp r0, #0
    beq @L_020fc95c
    ldr r1, [r0]
    ldr r1, [r1, #0x20]
    blx r1
@L_020fc95c:
    ldr r0, [r4, #0x84]
    cmp r0, #0
    beq @L_020fc974
    ldr r1, [r0]
    ldr r1, [r1, #0x20]
    blx r1
@L_020fc974:
    mov r0, r4
    ldr r2, [r0]
    mov r1, #2
    ldr r2, [r2, #0x28]
    blx r2
    ldmia sp!, {r4, pc}
}

extern "C" asm void func_ov005_020fc98c(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r4, r0
    bl _ZN17UnkClass_0203dc7c13func_0203e1bcEv
    mov r5, r0
    mov r0, r4
    bl _ZN17UnkClass_0203dc7c13func_0203e18cEv
    cmp r5, r0
    bne @L_020fc9b8
    ldrb r0, [r4, #5]
    cmp r0, #0
    beq @L_020fca28
@L_020fc9b8:
    ldr r0, [r4, #0x80]
    cmp r0, #0
    beq @L_020fc9d8
    ldr r1, [r0]
    ldr r1, [r1, #0x58]
    blx r1
    cmp r0, #0
    bne @L_020fca28
@L_020fc9d8:
    ldr r0, [r4, #0x80]
    cmp r0, #0
    beq @L_020fc9f0
    ldr r1, [r0]
    ldr r1, [r1, #0x20]
    blx r1
@L_020fc9f0:
    cmp r5, #0x96
    addeq r0, r4, #0x8c
    movne r0, #0
    str r0, [r4, #0x80]
    mov r0, r4
    mov r2, r5
    mov r1, #0
    bl _ZN17UnkClass_0203dc7c13func_0203e114Eii
    ldr r0, [r4, #0x80]
    cmp r0, #0
    beq @L_020fca28
    ldr r1, [r0]
    ldr r1, [r1, #0x10]
    blx r1
@L_020fca28:
    mov r0, r4
    bl _ZN17UnkClass_0203dc7c13func_0203e224Ev
    mov r5, r0
    mov r0, r4
    bl _ZN17UnkClass_0203dc7c13func_0203e1f4Ev
    cmp r5, r0
    bne @L_020fca50
    ldrb r0, [r4, #5]
    cmp r0, #0
    ldmeqia sp!, {r3, r4, r5, pc}
@L_020fca50:
    ldr r0, [r4, #0x84]
    cmp r0, #0
    beq @L_020fca70
    ldr r1, [r0]
    ldr r1, [r1, #0x58]
    blx r1
    cmp r0, #0
    ldmneia sp!, {r3, r4, r5, pc}
@L_020fca70:
    ldr r0, [r4, #0x84]
    cmp r0, #0
    beq @L_020fca88
    ldr r1, [r0]
    ldr r1, [r1, #0x20]
    blx r1
@L_020fca88:
    cmp r5, #0x96
    addeq r0, r4, #0x24c
    movne r0, #0
    str r0, [r4, #0x84]
    mov r0, r4
    mov r2, r5
    mov r1, #1
    bl _ZN17UnkClass_0203dc7c13func_0203e114Eii
    ldr r0, [r4, #0x84]
    cmp r0, #0
    ldmeqia sp!, {r3, r4, r5, pc}
    ldr r1, [r0]
    ldr r1, [r1, #0x10]
    blx r1
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_ov005_020fcac4(void)
{
    stmdb sp!, {r4, lr}
    ldr r2, =0x4000304
    movs r4, r1
    ldrh r0, [r2]
    cmpne r4, #2
    bic r0, r0, #0x8000
    strh r0, [r2]
    bne @L_020fcaec
    mov r0, #9
    bl func_ov015_02134ccc
@L_020fcaec:
    sub r0, r4, #1
    cmp r0, #1
    ldmhiia sp!, {r4, pc}
    mov r0, #9
    bl func_ov015_02135440
    ldmia sp!, {r4, pc}
}

extern "C" asm void func_ov005_020fcb08(void)
{
    stmdb sp!, {r4, lr}
    movs r4, r1
    cmpne r4, #2
    bne @L_020fcb1c
    bl func_ov015_021353a4
@L_020fcb1c:
    sub r0, r4, #1
    cmp r0, #1
    bhi @L_020fcb2c
    bl func_ov015_02135e10
@L_020fcb2c:
    cmp r4, #2
    bne @L_020fcb44
    mov r0, #0
    mov r1, #0x6800000
    mov r2, #0xa4000
    bl MIi_CpuClearFast
@L_020fcb44:
    ldr r1, =0x4000304
    ldrh r0, [r1]
    bic r0, r0, #0x8000
    strh r0, [r1]
    ldmia sp!, {r4, pc}
}

extern "C" asm void func_ov005_020fcb5c(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    bl _ZdlPv
    mov r0, r4
    ldmia sp!, {r4, pc}
}

extern "C" asm void func_ov005_020fcb70(void)
{
    bx lr
}

extern "C" asm void func_ov005_020fcb74(void)
{
    stmdb sp!, {r3, lr}
    ldrb r2, [r0, #0x1ac]
    cmp r2, #0
    beq @L_020fcb94
    tst r1, #1
    ldmeqia sp!, {r3, pc}
    bl func_ov005_020fcdc8
    ldmia sp!, {r3, pc}
@L_020fcb94:
    ldr r2, [r0, #0x190]
    cmp r2, #7
    ldmneia sp!, {r3, pc}
    tst r1, #1
    ldmeqia sp!, {r3, pc}
    bl func_ov005_020fcdb0
    ldmia sp!, {r3, pc}
}

extern "C" asm void func_ov005_020fcbb0(void)
{
    stmdb sp!, {r3, lr}
    ldrb r2, [r0, #0x1ac]
    cmp r2, #0
    ldr r2, [r0, #0x190]
    beq @L_020fcbdc
    cmp r2, #7
    ldreqh r1, [r1, #4]
    cmpeq r1, #1
    ldmneia sp!, {r3, pc}
    bl func_ov005_020fcdc8
    ldmia sp!, {r3, pc}
@L_020fcbdc:
    cmp r2, #7
    ldreqh r1, [r1, #4]
    cmpeq r1, #1
    ldmneia sp!, {r3, pc}
    bl func_ov005_020fcdb0
    ldmia sp!, {r3, pc}
}

extern "C" asm void func_ov005_020fcbf4(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    sub sp, sp, #0x100
    mov r8, #0
    add r7, sp, #0
    mov r4, r0
    mov r0, r7
    mov r1, r8
    mov r2, #0x100
    bl MI_CpuFill8
    ldr r6, =data_ov005_020fdb1c
    add r5, r4, #4
    mov r4, #0xc
@L_020fcc24:
    mov r0, r7
    mov r1, r6
    add r2, r8, #1
    bl sprintf
    mla r1, r8, r4, r5
    mov r0, r7
    bl func_ov015_02133efc
    add r8, r8, #1
    cmp r8, #0x20
    blt @L_020fcc24
    add sp, sp, #0x100
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

extern "C" asm void func_ov005_020fcc58(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r2, #0xc
    mul r4, r1, r2
    mov r5, r0
    add r0, r5, r4
    ldr r1, [r0, #4]
    cmp r1, #0
    ldrneb r0, [r0, #0xd]
    cmpne r0, #0
    ldmeqia sp!, {r3, r4, r5, pc}
    ldr r0, =data_020c47b4
    bl _ZN8GameHeap4FreeEPv
    add r0, r5, r4
    mov r1, #0
    str r1, [r0, #4]
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_ov005_020fcc9c(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r5, r0
    mov r4, #0
@L_020fcca8:
    mov r0, r5
    mov r1, r4
    bl func_ov005_020fcc58
    add r4, r4, #1
    cmp r4, #0x21
    blt @L_020fcca8
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_ov005_020fccc4(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r3, #0xc
    mla r0, r1, r3, r0
    ldr r4, [r0, #4]
    cmp r4, #0
    ldmeqia sp!, {r4, r5, r6, pc}
    cmp r2, #0
    mov r6, #0
    bne @L_020fcd4c
    mov r5, #1
    mov r0, r4
    mov r1, r6
    mov r2, r5
    bl func_ov015_02132a04
    ldr r0, [r4, #0xc]
    ldr r2, [r4, #0x10]
    mov r1, r6
    add r0, r4, r0
    bl func_02003758
    ldr r0, [r4, #0x14]
    ldr r2, [r4, #0x18]
    mov r1, r6
    add r0, r4, r0
    bl func_02003ad8
    mov r0, r4
    mov r1, r6
    mov r2, r5
    bl func_ov015_021322b0
    ldr r0, [r4, #4]
    ldr r2, [r4, #8]
    mov r1, #0x20
    add r0, r4, r0
    bl func_02003298
    ldmia sp!, {r4, r5, r6, pc}
@L_020fcd4c:
    mov r5, #2
    mov r0, r4
    mov r1, r6
    mov r2, r5
    bl func_ov015_02132a04
    ldr r0, [r4, #0xc]
    ldr r2, [r4, #0x10]
    mov r1, r6
    add r0, r4, r0
    bl func_02003678
    ldr r0, [r4, #0x14]
    ldr r2, [r4, #0x18]
    mov r1, r6
    add r0, r4, r0
    bl func_020039f8
    mov r0, r4
    mov r1, r6
    mov r2, r5
    bl func_ov015_021322b0
    ldr r0, [r4, #4]
    ldr r2, [r4, #8]
    mov r1, #0x40
    add r0, r4, r0
    bl func_02003298
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void func_ov005_020fcdb0(void)
{
    stmdb sp!, {r3, lr}
    mov r0, #6
    bl func_ov015_02132628
    mov r0, #3
    bl _ZN12SceneManager13func_0203e2fcEl
    ldmia sp!, {r3, pc}
}

extern "C" asm void func_ov005_020fcdc8(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    ldr r4, =data_020c5e40
    ldr r1, =data_ov005_020fdb40
    mov r5, r0
    mov r0, r4
    bl _ZN12SoundManager13func_0203bc10EPKc
    cmp r0, #0
    beq @L_020fce04
    ldr r1, =data_ov005_020fdb4c
    mov r0, r4
    mov r2, #0x1f4
    bl _ZN12SoundManager13func_0203bcb0EPKci
    mov r0, r4
    mov r1, #0
    bl _ZN12SoundManager13func_0203ba5cEi
@L_020fce04:
    mov r1, #9
    mov r0, r5
    str r1, [r5, #0x190]
    ldr r1, [r0]
    ldr r1, [r1, #0x50]
    blx r1
    mov r0, #1
    bl _ZN12SceneManager13func_0203e2fcEl
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_ov005_020fce34(void)
{
    ldr r1, [r0, #0x19c]
    cmp r1, #0x1f
    blt @L_020fce7c
    mov r2, r1, lsr #0x1f
    rsb r1, r2, r1, lsl #31
    adds r1, r2, r1, ror #31
    beq @L_020fce68
    ldr r1, [r0, #0x194]
    cmp r1, #0xc0
    movge r2, #2
    movge r1, #1
    strgeb r2, [r0, #0x1a4]
    b @L_020fce78
@L_020fce68:
    ldr r1, [r0, #0x198]
    cmp r1, #0xc0
    movge r1, #1
    strgeb r1, [r0, #0x1a4]
@L_020fce78:
    strge r1, [r0, #0x1a8]
@L_020fce7c:
    ldr r0, [r0, #0x1a8]
    bx lr
}

extern "C" asm void func_ov005_020fce84(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r4, #0
    mov r5, r0
    sub r3, r4, #0xc0
    mov r1, r4
    add r0, r5, #0x1b4
    mov r2, #0xc
    str r4, [r5, #0x190]
    str r4, [r5, #0x198]
    str r3, [r5, #0x194]
    str r4, [r5, #0x19c]
    str r4, [r5, #0x1a0]
    str r4, [r5, #0x1a8]
    strb r4, [r5, #0x1a4]
    strb r4, [r5, #0x1ac]
    bl MI_CpuFill8
    mov r1, r4
    add r0, r5, #4
    mov r2, #0x18c
    str r4, [r5, #0x1b4]
    str r4, [r5, #0x1b8]
    str r4, [r5, #0x1bc]
    bl MI_CpuFill8
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_ov005_020fcee4(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r4, r0
    ldr r1, [r4, #0x190]
    mov r5, #1
    cmp r1, #8
    mov r6, #0
    addls pc, pc, r1, lsl #2
    ldmia sp!, {r4, r5, r6, pc}
    dcd 0xea000007
    dcd 0xe8bd8070
    dcd 0xea000028
    dcd 0xea000056
    dcd 0xea000049
    dcd 0xea0000eb
    dcd 0xea000109
    dcd 0xe8bd8070
    dcd 0xe8bd8070
    dcd 0xe59f2458
    dcd 0xe59f1458
    dcd 0xe5d2509b
    dcd 0xe5943198
    dcd 0xe59f2450
    dcd 0xe5c451ac
    dcd 0xe0023803
    dcd 0xe5813000
    dcd 0xe5943194
    dcd 0xe241500a
    dcd 0xe0022803
    dcd 0xe5812004
    dcd 0xe1d520b0
    dcd 0xe2413008
    dcd 0xe3c22003
    dcd 0xe1c520b0
    dcd 0xe1d320b0
    dcd 0xe3c22003
    dcd 0xe3822001
    dcd 0xe1c320b0
    dcd 0xe1d123b4
    dcd 0xe3c2203f
    dcd 0xe3822004
    dcd 0xe1c123b4
    dcd 0xe1d123b4
    dcd 0xe3c22c3f
    dcd 0xe3822b01
    dcd 0xe1c123b4
    dcd 0xe1d123b6
    dcd 0xe3c2203f
    dcd 0xe3822002
    dcd 0xe1c123b6
    dcd 0xebffff11
    dcd 0xe3a00002
    dcd 0xe5840190
    dcd 0xe594019c
    dcd 0xe2400001
    dcd 0xe1a01fa0
    dcd 0xe0610f80
    dcd 0xe0910fe0
    dcd 0xe594119c
    dcd 0x13a02001
    dcd 0xe2813001
    dcd 0x03a02000
    dcd 0xe1a00004
    dcd 0xe584319c
    dcd 0xebffff37
    dcd 0xe594019c
    dcd 0xe2400001
    dcd 0xe1a01fa0
    dcd 0xe0610f80
    dcd 0xe0910fe0
    dcd 0xe594119c
    dcd 0x13a02001
    dcd 0xe2813001
    dcd 0x03a02000
    dcd 0xe1a00004
    dcd 0xe584319c
    dcd 0xebffff2b
    dcd 0xe3a01003
    dcd 0xe5841190
    dcd 0xe59401b0
    dcd 0xe2841f6d
    dcd 0xe5902000
    dcd 0xe592203c
    dcd 0xe12fff32
    dcd 0xe1a00004
    dcd 0xe5901000
    dcd 0xe591104c
    dcd 0xe12fff31
    dcd 0xe59401b8
    dcd 0xe3a01004
    dcd 0xe5841190
    dcd 0xe3500000
    dcd 0x08bd8070
    dcd 0xe59f0338
    dcd 0xe59f2338
    dcd 0xe3a01000
    dcd 0xebfcfa84
    dcd 0xe3a00003
    dcd 0xe5840190
    dcd 0xe8bd8070
    dcd 0xe1a05006
    dcd 0xe1a00005
    dcd 0xeb00d5d2
    dcd 0xe3500000
    dcd 0x18bd8070
    dcd 0xe3a01301
    dcd 0xe5910000
    dcd 0xe3c00a0e
    dcd 0xe3800a06
    dcd 0xe5810000
    dcd 0xe59401a8
    dcd 0xe3500000
    dcd 0x1a000034
    dcd 0xe5941198
    dcd 0xe5940194
    dcd 0xe2811001
    dcd 0xe2800001
    dcd 0xe5841198
    dcd 0xe5840194
    dcd 0xe35100c0
    dcd 0xda000010
    dcd 0xe594019c
    dcd 0xe3500020
    dcd 0xaa00000d
    dcd 0xe2400001
    dcd 0xe1a01fa0
    dcd 0xe0610f80
    dcd 0xe0910fe0
    dcd 0xe594119c
    dcd 0x13a05001
    dcd 0xe2813001
    dcd 0xe1a00004
    dcd 0xe1a02005
    dcd 0xe584319c
    dcd 0xebfffef1
    dcd 0xe5940198
    dcd 0xe2400d06
    dcd 0xe5840198
    dcd 0xe5940194
    dcd 0xe35000c0
    dcd 0xda000010
    dcd 0xe594019c
    dcd 0xe3500020
    dcd 0xaa00000d
    dcd 0xe2400001
    dcd 0xe1a01fa0
    dcd 0xe0610f80
    dcd 0xe0910fe0
    dcd 0xe594119c
    dcd 0x13a02001
    dcd 0xe2813001
    dcd 0x03a02000
    dcd 0xe1a00004
    dcd 0xe584319c
    dcd 0xebfffedd
    dcd 0xe5940194
    dcd 0xe2400d06
    dcd 0xe5840194
    dcd 0xe5941198
    dcd 0xe59f022c
    dcd 0xe59f2224
    dcd 0xe0001801
    dcd 0xe5821000
    dcd 0xe5941194
    dcd 0xe0000801
    dcd 0xe5820004
    dcd 0xe5940194
    dcd 0xe3a020ff
    dcd 0xe3500000
    dcd 0xe59f0210
    dcd 0xe3a01cff
    dcd 0xca000013
    dcd 0xe1d030b0
    dcd 0xe3c3303f
    dcd 0xe3833002
    dcd 0xe1c030b0
    dcd 0xe1d030b0
    dcd 0xe3c33c3f
    dcd 0xe3833c02
    dcd 0xe1c030b0
    dcd 0xe1d030b2
    dcd 0xe3c3303f
    dcd 0xe3833004
    dcd 0xe1c030b2
    dcd 0xe5943194
    dcd 0xe2633000
    dcd 0xe14020b8
    dcd 0xe20320ff
    dcd 0xe14020b4
    dcd 0xe5942194
    dcd 0xe2622000
    dcd 0xea000012
    dcd 0xe1d030b0
    dcd 0xe3c3303f
    dcd 0xe3833004
    dcd 0xe1c030b0
    dcd 0xe1d030b0
    dcd 0xe3c33c3f
    dcd 0xe3833b01
    dcd 0xe1c030b0
    dcd 0xe1d030b2
    dcd 0xe3c3303f
    dcd 0xe3833002
    dcd 0xe1c030b2
    dcd 0xe5943194
    dcd 0xe26330c0
    dcd 0xe14020b8
    dcd 0xe20320ff
    dcd 0xe14020b4
    dcd 0xe5942194
    dcd 0xe26220c0
    dcd 0xe14010b6
    dcd 0xe20210ff
    dcd 0xe14010b2
    dcd 0xe1a00004
    dcd 0xebfffefc
    dcd 0xe3500000
    dcd 0x159401b4
    dcd 0x13500000
    dcd 0x08bd8070
    dcd 0xe3a0501e
    dcd 0xe1a01005
    dcd 0xe3a00000
    dcd 0xeb00d528
    dcd 0xe1a01005
    dcd 0xe3a00001
    dcd 0xeb00d525
    dcd 0xe3a01301
    dcd 0xe5910000
    dcd 0xe3c00a0e
    dcd 0xe5810000
    dcd 0xe5d401a4
    dcd 0xe3500001
    dcd 0x1a000006
    dcd 0xe1d100ba
    dcd 0xe3c00003
    dcd 0xe3800001
    dcd 0xe1c100ba
    dcd 0xe1d100bc
    dcd 0xe3c00003
    dcd 0xea000005
    dcd 0xe1d100ba
    dcd 0xe3c00003
    dcd 0xe1c100ba
    dcd 0xe1d100bc
    dcd 0xe3c00003
    dcd 0xe3800001
    dcd 0xe1c100bc
    dcd 0xe3a00005
    dcd 0xe5840190
    dcd 0xe8bd8070
    dcd 0xe1a00006
    dcd 0xeb00d53c
    dcd 0xe3500000
    dcd 0x18bd8070
    dcd 0xe1a00004
    dcd 0xe1a02005
    dcd 0xe3a0101f
    dcd 0xebfffe75
    dcd 0xe59fc0ac
    dcd 0xe3a03301
    dcd 0xe1dc00b0
    dcd 0xe3a02006
    dcd 0xe2841f6d
    dcd 0xe3c00003
    dcd 0xe1cc00b0
    dcd 0xe1dc00b2
    dcd 0xe3c00003
    dcd 0xe3800001
    dcd 0xe1cc00b2
    dcd 0xe58c600a
    dcd 0xe58c600e
    dcd 0xe5930000
    dcd 0xe3c00a0e
    dcd 0xe5830000
    dcd 0xe59401b0
    dcd 0xe58451bc
    dcd 0xe5842190
    dcd 0xe5902000
    dcd 0xe592203c
    dcd 0xe12fff32
    dcd 0xe8bd8070
    dcd 0xe59401a0
    dcd 0xe2800001
    dcd 0xe58401a0
    dcd 0xe350003c
    dcd 0xb8bd8070
    dcd 0xe3a0501e
    dcd 0xe1a00006
    dcd 0xe3a02007
    dcd 0xe1a01005
    dcd 0xe58401a0
    dcd 0xe5842190
    dcd 0xeb00d489
    dcd 0xe1a01005
    dcd 0xe3a00001
    dcd 0xeb00d486
    dcd 0xe8bd8070
    dcd gGameState
    dcd 0x04000014
    dcd 0x01ff0000
    dcd data_020c5e40
    dcd data_ov005_020fdb58
    dcd 0x04000048
    dcd 0x0400000a
}

extern "C" asm void func_ov005_020fd3a4(void)
{
    bx lr
}

extern "C" asm void func_ov005_020fd3a8(void)
{
    stmdb sp!, {r3, lr}
    bl func_ov005_020fcc9c
    mov r1, #0
    ldr r2, =0x4000014
    ldr r0, =data_020c467c
    str r1, [r2]
    str r1, [r2, #4]
    ldr r0, [r0]
    mov r2, r1
    mov r3, r1
    bl func_020887f0
    ldmia sp!, {r3, pc}
}

extern "C" asm void func_ov005_020fd3e0(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    bl _ZdlPv
    mov r0, r4
    ldmia sp!, {r4, pc}
}

extern "C" asm void func_ov005_020fd3f4(void)
{
    stmdb sp!, {r3, r4, lr}
    sub sp, sp, #0x14
    ldr r3, =data_020c47b4
    mov r4, r0
    ldr r0, [r3]
    ldr r1, =data_ov005_020fdbf0
    cmp r0, #0
    moveq r0, #0
    beq @L_020fd43c
    mov r2, #0
    str r2, [sp]
    str r2, [sp, #4]
    str r2, [sp, #8]
    mov r12, #1
    str r12, [sp, #0xc]
    add r2, r4, #0x170
    str r12, [sp, #0x10]
    bl _ZN11FileManager4LoadEPKcPPvP8GameHeapiiiih
@L_020fd43c:
    cmp r0, #0
    addeq sp, sp, #0x14
    moveq r0, #0
    ldmeqia sp!, {r3, r4, pc}
    mov r3, #0
    mov r0, #0x22
@L_020fd454:
    ldr r1, [r4, #0x170]
    mla r2, r3, r0, r1
    ldrh r1, [r2, #0x20]
    add r3, r3, #1
    cmp r3, #0x1c
    add r1, r1, #1
    strh r1, [r2, #0x20]
    blt @L_020fd454
    mov r0, #1
    add sp, sp, #0x14
    ldmia sp!, {r3, r4, pc}
}

extern "C" asm void func_ov005_020fd488(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    ldr r1, [r4, #0x170]
    ldr r0, =data_020c47b4
    bl _ZN8GameHeap4FreeEPv
    mov r0, #0
    str r0, [r4, #0x170]
    ldmia sp!, {r4, pc}
}

extern "C" asm void func_ov005_020fd4ac(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    ldr r7, =data_020c47b4
    mov r6, #0x200
    mov r5, #0
    mov r0, r7
    mov r1, r6
    mov r2, r5
    mov r3, #1
    bl _ZN8GameHeap5AllocEiii
    movs r4, r0
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    mov r0, r5
    mov r1, r4
    mov r2, r6
    bl MIi_CpuClearFast
    mov r0, r4
    mov r1, r6
    bl DC_FlushRange
    bl GXS_BeginLoadBGExtPltt
    mov r0, r4
    mov r2, r6
    mov r1, #0x4000
    bl func_02003df0
    bl func_02003e58
    bl func_ov015_02132240
    mov r0, r7
    mov r1, r4
    bl _ZN8GameHeap4FreeEPv
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm void func_ov005_020fd524(void)
{
    mov r0, #1
    bx lr
}

extern "C" asm void func_ov005_020fd52c(void)
{
    mov r2, r0
    mov r0, r1
    ldr r12, =func_ov015_02133efc
    add r1, r2, #0x164
    bx r12
}

extern "C" asm void func_ov005_020fd544(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    sub sp, sp, #0x100
    add r4, sp, #0
    mov r6, r0
    mov r5, r1
    mov r0, r4
    mov r1, #0
    mov r2, #0x100
    bl MI_CpuFill8
    ldr r1, [r6, #0x170]
    mov r0, #0x22
    mla r2, r5, r0, r1
    ldr r1, =data_ov005_020fdc10
    mov r0, r4
    bl sprintf
    add r1, r6, #8
    mov r0, #0xc
    mla r1, r5, r0, r1
    mov r0, r4
    bl func_ov015_02133efc
    add sp, sp, #0x100
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void func_ov005_020fd5a0(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r2, #0xc
    mul r4, r1, r2
    mov r5, r0
    add r0, r5, r4
    ldr r1, [r0, #8]
    cmp r1, #0
    ldrneb r0, [r0, #0x11]
    cmpne r0, #0
    ldmeqia sp!, {r3, r4, r5, pc}
    ldr r0, =data_020c47b4
    bl _ZN8GameHeap4FreeEPv
    add r0, r5, r4
    mov r1, #0
    str r1, [r0, #8]
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_ov005_020fd5e4(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r5, r0
    mov r4, #0
@L_020fd5f0:
    mov r0, r5
    mov r1, r4
    bl func_ov005_020fd5a0
    add r4, r4, #1
    cmp r4, #0x1e
    blt @L_020fd5f0
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_ov005_020fd60c(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r2, #0xc
    mla r0, r1, r2, r0
    ldr r5, [r0, #8]
    cmp r5, #0
    beq @L_020fd668
    ldr r0, [r5, #0xc]
    mov r4, #0
    ldr r2, [r5, #0x10]
    mov r1, r4
    add r0, r5, r0
    bl func_020037c8
    ldr r0, [r5, #0x14]
    ldr r2, [r5, #0x18]
    mov r1, r4
    add r0, r5, r0
    bl func_02003b48
    bl GXS_BeginLoadBGExtPltt
    ldmib r5, {r0, r2}
    add r0, r5, r0
    mov r1, #0x4000
    bl func_02003df0
    bl func_02003e58
@L_020fd668:
    bl func_ov015_02132240
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_ov005_020fd670(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r6, r0
    mov r5, #0
    add r1, r6, #0x100
    str r5, [r6, #0x170]
    strh r5, [r1, #0x78]
    strh r5, [r1, #0x7a]
    strb r5, [r6, #0x17c]
    bl func_ov005_020fd3f4
    mov r1, r5
    add r0, r6, #8
    mov r2, #0x168
    bl MI_CpuFill8
    ldr r1, =data_ov005_020fdc30
    mov r0, r6
    bl func_ov005_020fd52c
    mov r0, r6
    mov r1, #0x1d
    bl func_ov005_020fd60c
    mov r4, #1
    mov r0, r4
    mov r1, #8
    bl func_ov015_021325a0
    str r4, [r6, #0x174]
    str r5, [r6, #0x180]
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void func_ov005_020fd6dc(void)
{
    str r1, [r0, #0x180]
    ldr r1, [r1, #8]
    cmp r1, #0
    movne r1, #3
    strne r1, [r0, #0x174]
    mov r0, #1
    bx lr
}

extern "C" asm void func_ov005_020fd6f8(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r4, r0
    ldr r1, [r4, #0x174]
    cmp r1, #4
    addls pc, pc, r1, lsl #2
    ldmia sp!, {r3, r4, r5, pc}
    dcd 0xe8bd8038
    dcd 0xea000002
    dcd 0xea000024
    dcd 0xea00005e
    dcd 0xe8bd8038
    dcd 0xe2840c01
    dcd 0xe1d017b8
    dcd 0xe2811001
    dcd 0xe1c017b8
    dcd 0xe1d017b8
    dcd 0xe351007e
    dcd 0x1a000002
    dcd 0xe3a00010
    dcd 0xeb00d3e0
    dcd 0xe8bd8038
    dcd 0xe351008e
    dcd 0x1a00000c
    dcd 0xe3a00001
    dcd 0xe3a01010
    dcd 0xeb00d38f
    dcd 0xe1a00004
    dcd 0xe3a01000
    dcd 0xebffff75
    dcd 0xe5d4117c
    dcd 0xe1a00004
    dcd 0xebffffa4
    dcd 0xe1a00004
    dcd 0xe3a0101d
    dcd 0xebffff86
    dcd 0xe8bd8038
    dcd 0xe3510096
    dcd 0x38bd8038
    dcd 0xe5941180
    dcd 0xe3a02001
    dcd 0xe5812004
    dcd 0xe3a02000
    dcd 0xe3a01002
    dcd 0xe1c027b8
    dcd 0xe5841174
    dcd 0xe8bd8038
    dcd 0xe5d4317c
    dcd 0xe5942170
    dcd 0xe3a00022
    dcd 0xe2841c01
    dcd 0xe1d157ba
    dcd 0xe0202093
    dcd 0xe2852001
    dcd 0xe1c127ba
    dcd 0xe1d022b0
    dcd 0xe1d107ba
    dcd 0xe1500002
    dcd 0x1a00000d
    dcd 0xe353001b
    dcd 0x1a000002
    dcd 0xe3a00008
    dcd 0xeb00d3b6
    dcd 0xea000001
    dcd 0xe3a00006
    dcd 0xeb00d385
    dcd 0xe5d4017c
    dcd 0xe2801001
    dcd 0xe351001c
    dcd 0xa8bd8038
    dcd 0xe1a00004
    dcd 0xebffff4b
    dcd 0xe8bd8038
    dcd 0x98bd8038
    dcd 0xe3a05001
    dcd 0xe1a00005
    dcd 0xeb00d44d
    dcd 0xe3500000
    dcd 0x08bd8038
    dcd 0xe1a00005
    dcd 0xeb00d3e3
    dcd 0xe3500000
    dcd 0x18bd8038
    dcd 0xe5d4017c
    dcd 0xe2800001
    dcd 0xe20010ff
    dcd 0xe5c4017c
    dcd 0xe351001c
    dcd 0xe1a00004
    dcd 0x2a00000b
    dcd 0xebffff6a
    dcd 0xe5d4117c
    dcd 0xe1a00004
    dcd 0xe2411001
    dcd 0xebffff4b
    dcd 0xe1a00005
    dcd 0xe3a01008
    dcd 0xeb00d348
    dcd 0xe2840c01
    dcd 0xe3a01000
    dcd 0xe1c017ba
    dcd 0xe8bd8038
    dcd 0xebffff06
    dcd 0xe5940180
    dcd 0xe5805000
    dcd 0xe8bd8038
    dcd 0xe59f1018
    dcd 0xebffff21
    dcd 0xe1a00004
    dcd 0xe3a0101d
    dcd 0xebffff56
    dcd 0xe3a00004
    dcd 0xe5840174
    dcd 0xe8bd8038
    dcd data_ov005_020fdc54
}

extern "C" asm void func_ov005_020fd8c0(void)
{
    bx lr
}

extern "C" asm void func_ov005_020fd8c4(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    bl func_ov005_020fd488
    mov r0, r4
    bl func_ov005_020fd5e4
    ldmia sp!, {r4, pc}
}

extern "C" asm void func_ov005_020fd8dc(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    bl _ZdlPv
    mov r0, r4
    ldmia sp!, {r4, pc}
}

extern "C" asm void func_ov005_020fd8f0(void)
{
    bx lr
}

extern "C" asm void func_ov005_020fd8f4(void)
{
    bx lr
}
