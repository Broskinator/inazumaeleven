#include "ov089/Unk_ov089_02176bfc.hpp"

extern "C" void func_ov089_02176bfc(void);
extern "C" void func_ov089_02176c64(void);
extern "C" void func_ov089_02176cc4(void);
extern "C" s32 func_ov089_02176d20(s32 arg0);
extern "C" void func_ov089_02176d64(void);
extern "C" void func_ov089_02177538(void);
extern "C" void func_ov089_02177598(void);
extern "C" void func_ov089_02177f38(void);
extern "C" void func_ov089_02177fa0(void);

extern "C" char data_ov089_021791ec[];
extern "C" char data_ov089_021792d0[];
extern "C" char data_ov089_02179300[];
extern "C" void DC_InvalidateRange(void);
extern "C" void MBi_CheckMBParent(void);
extern "C" void MI_CpuCopy8(void);
extern "C" void MIi_CpuClear16(void);
extern "C" void MIi_CpuCopy16(void);
extern "C" void OS_DisableInterrupts(void);
extern "C" void OS_RestoreInterrupts(void);
extern "C" s32 WM_SetIndCallback(...);
extern "C" void WM_StartMPEx(void);
extern "C" void func_02008450(void);
extern "C" void func_02008564(void);
extern "C" void func_0200878c(void);
extern "C" void func_02008a08(void);
extern "C" void func_0200919c(void);
extern "C" void func_02012e6c(void);
extern "C" void func_020131c0(void);
extern "C" void func_020134f8(void);
extern "C" void func_02013768(void);
extern "C" void func_020137ac(void);
extern "C" void func_020138d8(void);
extern "C" void func_02013994(void);
extern "C" void func_02013b28(void);
extern "C" void func_02015160(void);
extern "C" s32 func_020151b4(...);
extern "C" void func_ov089_02178580(void);
extern "C" s32 func_ov089_021789d0(...);

extern "C" asm void func_ov089_02176bfc(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    bl func_020131c0
    cmp r0, #0
    moveq r0, #0
    ldmeqia sp!, {r4, pc}
    ldrh r12, [r4, #6]
    mov r3, #0
    mov r2, #1
    mov lr, r12
@L_02176c24:
    tst r0, lr
    cmpne r12, lr
    strneh lr, [r4, #6]
    bne @L_02176c5c
    add r1, r3, #1
    mov r1, r1, lsl #0x10
    cmp lr, #0
    mov r3, r1, lsr #0x10
    moveq r1, r2
    movne r1, lr, lsl #1
    mov r1, r1, lsl #0x10
    cmp r3, #0x10
    mov lr, r1, lsr #0x10
    blo @L_02176c24
@L_02176c5c:
    mov r0, #1
    ldmia sp!, {r4, pc}
}

extern "C" asm void func_ov089_02176c64(void)
{
    ldr r1, =data_ov089_021792d0
    mov r0, #0
    ldr r12, [r1, #0xc]
    mov r3, r0
    add r1, r12, #0x500
    ldrh r1, [r1, #0x28]
    mov r2, r0
    cmp r1, #1
    ldreqb r1, [r12, #0x50c]
    cmpeq r1, #0
    moveq r3, #1
    cmp r3, #0
    beq @L_02176ca8
    add r1, r12, #0x500
    ldrh r1, [r1, #0x26]
    cmp r1, #0
    moveq r2, #1
@L_02176ca8:
    cmp r2, #0
    addne r1, r12, #0x500
    ldrneh r1, [r1, #0x2a]
    cmpne r1, #0
    movne r0, #1
    bx lr
}

extern "C" void func_ov089_02176cc4(void)
{
    s32 v0 = WM_SetIndCallback((s32)func_ov089_02176d64);
    func_ov089_021789d0(0x80, v0);
    s32 v2 = func_020151b4((s32)func_ov089_02176d64, *(u16 *)(data_ov089_021791ec + 0x4), *(u16 *)(data_ov089_021791ec + 0x2), *(u16 *)(data_ov089_021791ec + 0x6), *(u16 *)(data_ov089_021791ec));
    func_ov089_021789d0(0x1D, v2);
}

extern "C" s32 func_ov089_02176d20(s32 arg0)
{
    s32 v0;
    u8 *t0;
    u8 *t1;
    s32 t2;
    t0 = (u8 *)*(s32 *)(data_ov089_021792d0 + 0xC);
    *(u8 *)(t0 + 0x50D) = 0;
    t1 = (u8 *)(*(s32 *)(data_ov089_021792d0 + 0x10) + 0x1300);
    *(u16 *)(t1 + 0x16) = 0;
    if (*(s32 *)(*(u8 * *)(data_ov089_021792d0 + 0xC) + 0x51C) == 0)
        return (s32)*(u8 * *)(data_ov089_021792d0 + 0xC);
    t2 = *(s32 *)(*(u8 * *)(data_ov089_021792d0 + 0xC) + 0x51C);
    v0 = ((s32 (*)(...))*(s32 *)(*(u8 * *)(data_ov089_021792d0 + 0xC) + 0x51C))(0x11, arg0, t2, (s32)t0);
    return v0;
}

extern "C" asm void func_ov089_02176d64(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, lr}
    sub sp, sp, #0x1c
    mov r8, r0
    ldrh r1, [r8]
    mov r5, #1
    mov r6, #0
    cmp r1, #0x19
    ldr r4, =data_ov089_021792d0
    bgt @L_02176ddc
    cmp r1, #0x19
    bge @L_02176ea8
    cmp r1, #0xf
    addls pc, pc, r1, lsl #2
    b @L_0217750c
    b @L_02176df8
    b @L_02177304
    b @L_021773e4
    b @L_0217750c
    b @L_0217750c
    b @L_0217750c
    b @L_0217750c
    b @L_02176e74
    b @L_02176f3c
    b @L_0217750c
    b @L_0217750c
    b @L_0217750c
    b @L_0217750c
    b @L_02177424
    b @L_02177160
    b @L_021771f8
@L_02176ddc:
    cmp r1, #0x1d
    bgt @L_02176dec
    beq @L_02176e2c
    b @L_0217750c
@L_02176dec:
    cmp r1, #0x80
    beq @L_0217745c
    b @L_0217750c
@L_02176df8:
    ldrh r0, [r8, #2]
    cmp r0, #0
    beq @L_02176e20
    ldr r0, [r4, #0xc]
    mov r1, r8
    ldr r2, [r0, #0x51c]
    mov r0, #0x100
    blx r2
    add sp, sp, #0x1c
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
@L_02176e20:
    bl func_ov089_02176cc4
    add sp, sp, #0x1c
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
@L_02176e2c:
    ldrh r0, [r8, #2]
    cmp r0, #0
    beq @L_02176e54
    ldr r0, [r4, #0xc]
    mov r1, r8
    ldr r2, [r0, #0x51c]
    mov r0, #0x100
    blx r2
    add sp, sp, #0x1c
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
@L_02176e54:
    ldr r1, [r4, #0xc]
    ldr r0, =func_ov089_02176d64
    bl func_020137ac
    mov r1, r0
    mov r0, #7
    bl func_ov089_021789d0
    add sp, sp, #0x1c
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
@L_02176e74:
    ldr r0, [r4, #0xc]
    mov r1, r8
    ldr r2, [r0, #0x51c]
    mov r0, #0x15
    blx r2
    ldr r0, =func_ov089_02176d64
    mov r1, r5
    bl func_02015160
    mov r1, r0
    mov r0, #0x19
    bl func_ov089_021789d0
    add sp, sp, #0x1c
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
@L_02176ea8:
    ldr r3, [r4, #0xc]
    add r1, r3, #0x500
    ldrh r2, [r1, #0x26]
    cmp r2, #0
    bne @L_02176f04
    ldrh r0, [r8, #2]
    cmp r0, #0
    beq @L_02176ee0
    ldr r2, [r3, #0x51c]
    mov r1, r8
    mov r0, #0x100
    blx r2
    add sp, sp, #0x1c
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
@L_02176ee0:
    ldr r1, =data_ov089_021791ec
    ldr r0, =func_ov089_02176d64
    ldr r1, [r1, #8]
    bl func_020138d8
    mov r1, r0
    mov r0, #8
    bl func_ov089_021789d0
    add sp, sp, #0x1c
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
@L_02176f04:
    ldrh r2, [r8, #2]
    cmp r2, #0
    beq @L_02176f30
    strh r6, [r1, #0x26]
    ldr r0, [r4, #0xc]
    mov r1, r8
    ldr r2, [r0, #0x51c]
    mov r0, #0x100
    blx r2
    add sp, sp, #0x1c
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
@L_02176f30:
    bl func_ov089_02176d20
    add sp, sp, #0x1c
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
@L_02176f3c:
    ldrh r0, [r8, #2]
    cmp r0, #0
    beq @L_02176f64
    ldr r0, [r4, #0xc]
    mov r1, r8
    ldr r2, [r0, #0x51c]
    mov r0, #0x100
    blx r2
    add sp, sp, #0x1c
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
@L_02176f64:
    ldrh r0, [r8, #8]
    cmp r0, #7
    bgt @L_02176f94
    bge @L_02176fd4
    cmp r0, #2
    bgt @L_02177144
    cmp r0, #0
    blt @L_02177144
    beq @L_02176fb4
    cmp r0, #2
    beq @L_02177114
    b @L_02177144
@L_02176f94:
    cmp r0, #9
    bgt @L_02176fa4
    beq @L_021770d8
    b @L_02177144
@L_02176fa4:
    cmp r0, #0x1a
    addeq sp, sp, #0x1c
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, pc}
    b @L_02177144
@L_02176fb4:
    ldr r0, [r4, #0xc]
    add sp, sp, #0x1c
    add r0, r0, #0x500
    strh r6, [r0, #0x2a]
    ldr r0, [r4, #0xc]
    add r0, r0, #0x500
    strh r6, [r0, #0x28]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
@L_02176fd4:
    ldr r0, [r4, #0xc]
    add r2, r0, #0x500
    ldrh r0, [r2, #0x26]
    cmp r0, #1
    addeq sp, sp, #0x1c
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, pc}
    ldrh r0, [r8, #0x10]
    mov r7, r5
    ldrh r3, [r2, #0x2a]
    mov r0, r7, lsl r0
    mov r1, r0, lsl #0x10
    orr r1, r3, r1, lsr #16
    strh r1, [r2, #0x2a]
    ldr r2, [r4, #0xc]
    mov r0, r6
    ldr r2, [r2, #0x51c]
    mov r1, r8
    blx r2
    ldr r0, [r4, #0xc]
    add r0, r0, #0x500
    ldrh r0, [r0, #0x28]
    cmp r0, #0
    ldreq r0, [r4, #0x10]
    addeq r0, r0, #0x1000
    ldreq r1, [r0, #0x31c]
    cmpeq r1, #0
    bne @L_021770ac
    str r7, [r0, #0x31c]
    ldr r0, [r4, #0xc]
    ldr r3, [r4, #0xc]
    add r0, r0, #0x500
    ldrh r0, [r0, #0x2c]
    add r1, r3, #0x500
    ldrh r2, [r1, #0x18]
    cmp r0, #0
    movne r7, r6
    mov r0, r7, lsl #0x10
    mov r0, r0, lsr #0x10
    str r2, [sp]
    stmib sp, {r0, r6}
    str r6, [sp, #0xc]
    str r6, [sp, #0x10]
    str r5, [sp, #0x14]
    str r5, [sp, #0x18]
    ldrh r2, [r1, #0x1a]
    ldr r1, [r3, #0x504]
    ldr r0, =func_ov089_02176d64
    add r3, r3, #0x40
    bl WM_StartMPEx
    mov r1, r0
    mov r0, #0xe
    bl func_ov089_021789d0
    add sp, sp, #0x1c
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
@L_021770ac:
    bl func_ov089_02176c64
    cmp r0, #0
    addeq sp, sp, #0x1c
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, pc}
    ldr r1, [r4, #0xc]
    mov r0, #0x19
    ldr r2, [r1, #0x51c]
    mov r1, #0
    blx r2
    add sp, sp, #0x1c
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
@L_021770d8:
    ldr r0, [r4, #0xc]
    ldrh r1, [r8, #0x10]
    add r3, r0, #0x500
    mov r0, r5
    mvn r1, r0, lsl r1
    mov r2, r1, lsl #0x10
    ldrh r5, [r3, #0x2a]
    mov r1, r8
    and r2, r5, r2, lsr #16
    strh r2, [r3, #0x2a]
    ldr r2, [r4, #0xc]
    ldr r2, [r2, #0x51c]
    blx r2
    add sp, sp, #0x1c
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
@L_02177114:
    ldr r1, [r4, #0xc]
    add r0, r1, #0x500
    ldrh r0, [r0, #0x26]
    cmp r0, #1
    addeq sp, sp, #0x1c
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, pc}
    ldr r2, [r1, #0x51c]
    mov r1, r8
    mov r0, #0x1c
    blx r2
    add sp, sp, #0x1c
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
@L_02177144:
    ldr r0, [r4, #0xc]
    mov r1, r8
    ldr r2, [r0, #0x51c]
    mov r0, #0x100
    blx r2
    add sp, sp, #0x1c
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
@L_02177160:
    ldr r0, [r4, #0x10]
    mov r1, r6
    add r0, r0, #0x1000
    str r1, [r0, #0x31c]
    ldrh r0, [r8, #4]
    cmp r0, #0xa
    beq @L_02177188
    cmp r0, #0xb
    beq @L_021771c0
    b @L_021771dc
@L_02177188:
    ldr r0, [r4, #0xc]
    add r0, r0, #0x500
    strh r5, [r0, #0x28]
    ldr r2, [r4, #0xc]
    add r0, r2, #0x500
    ldrh r0, [r0, #0x26]
    cmp r0, #0
    addne sp, sp, #0x1c
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, pc}
    ldr r2, [r2, #0x51c]
    mov r0, #0x19
    blx r2
    add sp, sp, #0x1c
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
@L_021771c0:
    ldr r0, [r4, #0xc]
    ldr r1, [r8, #8]
    ldr r2, [r0, #0x51c]
    mov r0, #3
    blx r2
    add sp, sp, #0x1c
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
@L_021771dc:
    ldr r0, [r4, #0xc]
    mov r1, r8
    ldr r2, [r0, #0x51c]
    mov r0, #0x100
    blx r2
    add sp, sp, #0x1c
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
@L_021771f8:
    ldr r3, [r4, #0x10]
    add r0, r3, #0x7000
    ldr r0, [r0, #0x4c8]
    cmp r0, #0
    beq @L_02177250
    mov r2, r6
    mov r1, r2
@L_02177214:
    add r0, r3, r1, lsl #2
    add r0, r0, #0x1000
    ldr r0, [r0, #0x4e8]
    cmp r0, #0
    beq @L_02177234
    add r2, r2, #1
    cmp r2, #2
    bhs @L_02177240
@L_02177234:
    add r1, r1, #1
    cmp r1, #0xf
    blo @L_02177214
@L_02177240:
    cmp r2, #1
    bne @L_02177250
    ldr r0, =0x1964
    bl func_02008450
@L_02177250:
    ldr r0, [r4, #0xc]
    strb r6, [r0, #0x50c]
    ldrh r0, [r8, #2]
    cmp r0, #0
    bne @L_021772a8
    ldr r0, [r4, #0xc]
    mov r1, r8
    ldr r2, [r0, #0x51c]
    mov r0, #2
    blx r2
    ldr r1, [r4, #0xc]
    add r0, r1, #0x500
    ldrh r0, [r0, #0x26]
    cmp r0, #0
    addne sp, sp, #0x1c
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, pc}
    ldr r2, [r1, #0x51c]
    mov r1, r6
    mov r0, #0x19
    blx r2
    add sp, sp, #0x1c
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
@L_021772a8:
    cmp r0, #0xa
    ldr r0, [r4, #0xc]
    mov r1, r8
    ldr r2, [r0, #0x51c]
    bne @L_021772cc
    mov r0, #0x2a
    blx r2
    add sp, sp, #0x1c
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
@L_021772cc:
    mov r0, #0x13
    blx r2
    ldr r1, [r4, #0xc]
    add r0, r1, #0x500
    ldrh r0, [r0, #0x26]
    cmp r0, #0
    addne sp, sp, #0x1c
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, pc}
    ldr r2, [r1, #0x51c]
    mov r1, r6
    mov r0, #0x19
    blx r2
    add sp, sp, #0x1c
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
@L_02177304:
    ldr r0, [r4, #0x10]
    add r0, r0, #0x1000
    ldr r0, [r0, #0x320]
    cmp r0, #0
    bne @L_02177378
    ldrh r0, [r8, #2]
    cmp r0, #0
    ldr r0, [r4, #0xc]
    add r0, r0, #0x500
    beq @L_0217734c
    strh r6, [r0, #0x26]
    ldr r0, [r4, #0xc]
    mov r1, r8
    ldr r2, [r0, #0x51c]
    mov r0, #0x100
    blx r2
    add sp, sp, #0x1c
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
@L_0217734c:
    strh r6, [r0, #0x2a]
    ldr r1, [r4, #0xc]
    ldr r0, =func_ov089_02176d64
    add r1, r1, #0x500
    strh r6, [r1, #0x28]
    bl func_02013768
    mov r1, r0
    mov r0, #2
    bl func_ov089_021789d0
    add sp, sp, #0x1c
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
@L_02177378:
    mov r1, r6
    mov r2, r6
    mov r0, r5
    bl func_02012e6c
    mov r0, r6
    bl WM_SetIndCallback
    ldrh r0, [r8, #2]
    cmp r0, #0
    beq @L_021773c4
    ldr r0, [r4, #0xc]
    mov r1, r8
    add r0, r0, #0x500
    strh r6, [r0, #0x26]
    ldr r2, [r4, #0xc]
    mov r0, #0x100
    ldr r2, [r2, #0x51c]
    blx r2
    add sp, sp, #0x1c
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
@L_021773c4:
    ldr r0, =func_ov089_02176d64
    mov r1, r6
    bl func_02015160
    mov r1, r0
    mov r0, #0x19
    bl func_ov089_021789d0
    add sp, sp, #0x1c
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
@L_021773e4:
    ldrh r1, [r8, #2]
    cmp r1, #0
    beq @L_02177418
    ldr r0, [r4, #0xc]
    mov r1, r8
    add r0, r0, #0x500
    strh r6, [r0, #0x26]
    ldr r0, [r4, #0xc]
    ldr r2, [r0, #0x51c]
    mov r0, #0x100
    blx r2
    add sp, sp, #0x1c
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
@L_02177418:
    bl func_ov089_02176d20
    add sp, sp, #0x1c
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
@L_02177424:
    ldrh r0, [r8, #2]
    cmp r0, #0
    addne sp, sp, #0x1c
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, pc}
    ldr r1, [r4, #0xc]
    ldrh r0, [r8, #0xa]
    add r1, r1, #0x500
    ldrh r2, [r1, #0x2a]
    mvn r0, r0
    mov r0, r0, lsl #0x10
    and r0, r2, r0, lsr #16
    strh r0, [r1, #0x2a]
    add sp, sp, #0x1c
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
@L_0217745c:
    ldrh r0, [r8, #4]
    sub r0, r0, #0x10
    cmp r0, #7
    addls pc, pc, r0, lsl #2
    b @L_02177520
    b @L_02177490
    b @L_021774ac
    b @L_021774c8
    b @L_021774e4
    b @L_02177520
    b @L_02177520
    b @L_02177500
    b @L_02177520
@L_02177490:
    ldr r0, [r4, #0xc]
    mov r1, r8
    ldr r2, [r0, #0x51c]
    mov r0, #0x1d
    blx r2
    add sp, sp, #0x1c
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
@L_021774ac:
    ldr r0, [r4, #0xc]
    mov r1, r8
    ldr r2, [r0, #0x51c]
    mov r0, #0x1f
    blx r2
    add sp, sp, #0x1c
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
@L_021774c8:
    ldr r0, [r4, #0xc]
    mov r1, r8
    ldr r2, [r0, #0x51c]
    mov r0, #0x20
    blx r2
    add sp, sp, #0x1c
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
@L_021774e4:
    ldr r0, [r4, #0xc]
    mov r1, r8
    ldr r2, [r0, #0x51c]
    mov r0, #0x21
    blx r2
    add sp, sp, #0x1c
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
@L_02177500:
    bl func_0200878c
    add sp, sp, #0x1c
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
@L_0217750c:
    ldr r0, [r4, #0xc]
    mov r1, r8
    ldr r2, [r0, #0x51c]
    mov r0, #0x100
    blx r2
@L_02177520:
    add sp, sp, #0x1c
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
}

extern "C" asm void func_ov089_02177538(void)
{
    stmdb sp!, {r3, lr}
    mov r1, r0
    ldrh r0, [r1, #2]
    cmp r0, #0
    ldmneia sp!, {r3, pc}
    ldrh r0, [r1, #4]
    cmp r0, #0x15
    bgt @L_0217756c
    bge @L_0217757c
    cmp r0, #9
    ldmgtia sp!, {r3, pc}
    cmp r0, #7
    ldmia sp!, {r3, pc}
@L_0217756c:
    cmp r0, #0x1a
    ldmgtia sp!, {r3, pc}
    cmp r0, #0x19
    ldmia sp!, {r3, pc}
@L_0217757c:
    ldr r2, =data_ov089_021792d0
    mov r0, #9
    ldr r2, [r2, #0xc]
    ldr r2, [r2, #0x51c]
    blx r2
    ldmia sp!, {r3, pc}
}

extern "C" asm void func_ov089_02177598(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x28
    ldrh r2, [r0]
    ldr r4, =data_ov089_021792d0
    str r0, [sp, #0x1c]
    ldr r1, =data_ov089_02179300
    cmp r2, #0x15
    ldr r11, [r4, #0xc]
    mov r5, #0
    mov r6, #1
    bgt @L_02177624
    cmp r2, #0xe
    blt @L_021775e4
    beq @L_02177d50
    cmp r2, #0xf
    beq @L_02177db8
    cmp r2, #0x15
    beq @L_02177ec8
    b @L_02177f0c
@L_021775e4:
    cmp r2, #0xb
    bgt @L_02177618
    bge @L_02177b9c
    cmp r2, #2
    bgt @L_02177f0c
    cmp r2, #0
    blt @L_02177f0c
    beq @L_02177648
    cmp r2, #1
    beq @L_02177e2c
    cmp r2, #2
    beq @L_02177e8c
    b @L_02177f0c
@L_02177618:
    cmp r2, #0xc
    beq @L_02177bec
    b @L_02177f0c
@L_02177624:
    cmp r2, #0x26
    bgt @L_0217763c
    bge @L_02177738
    cmp r2, #0x1d
    beq @L_021776ac
    b @L_02177f0c
@L_0217763c:
    cmp r2, #0x80
    beq @L_02177ef0
    b @L_02177f0c
@L_02177648:
    ldrh r0, [r0, #2]
    ldr r2, [r11, #0x51c]
    cmp r0, #0
    beq @L_0217766c
    ldr r1, [sp, #0x1c]
    mov r0, #0x100
    blx r2
    add sp, sp, #0x28
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_0217766c:
    ldr r1, [sp, #0x1c]
    mov r0, #0x15
    blx r2
    ldr r3, =data_ov089_021791ec
    ldr r0, =func_ov089_02177598
    ldrh r1, [r3]
    str r1, [sp]
    ldrh r1, [r3, #4]
    ldrh r2, [r3, #2]
    ldrh r3, [r3, #6]
    bl func_020151b4
    mov r1, r0
    mov r0, #0x1d
    bl func_ov089_021789d0
    add sp, sp, #0x28
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_021776ac:
    ldrh r0, [r0, #2]
    cmp r0, #0
    beq @L_021776d0
    ldr r2, [r11, #0x51c]
    ldr r1, [sp, #0x1c]
    mov r0, #0x100
    blx r2
    add sp, sp, #0x28
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_021776d0:
    ldrh r0, [r1, #6]
    cmp r0, #0
    streqh r6, [r1, #6]
    ldrh r0, [r1, #8]
    cmp r0, #0
    moveq r0, #0xc8
    streqh r0, [r1, #8]
    ldr r1, =data_ov089_02179300
    mov r0, #0xff
    strb r0, [r1, #0xa]
    strb r0, [r1, #0xb]
    strb r0, [r1, #0xc]
    strb r0, [r1, #0xd]
    strb r0, [r1, #0xe]
    strb r0, [r1, #0xf]
    strh r6, [r1, #0x10]
    strh r5, [r1, #0x12]
    str r6, [r11, #0x5e4]
    ldr r0, =func_ov089_02177598
    str r6, [r11, #0x5e8]
    bl func_02013994
    mov r1, r0
    mov r0, #0x26
    bl func_ov089_021789d0
    add sp, sp, #0x28
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02177738:
    ldrh r0, [r0, #2]
    cmp r0, #0
    beq @L_0217775c
    ldr r2, [r11, #0x51c]
    ldr r1, [sp, #0x1c]
    mov r0, #0x100
    blx r2
    add sp, sp, #0x28
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_0217775c:
    ldr r0, [sp, #0x1c]
    ldrh r0, [r0, #8]
    cmp r0, #3
    addeq sp, sp, #0x28
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    cmp r0, #4
    beq @L_02177b24
    cmp r0, #5
    bne @L_02177b84
    mov r0, r5
    str r0, [sp, #0x20]
    b @L_02177aa0
@L_0217778c:
    ldr r1, [sp, #0x1c]
    ldr r0, [sp, #0x24]
    mov r2, #0
    add r0, r1, r0, lsl #2
    ldr r4, [r0, #0x10]
    mov r3, r2
    ldrh r1, [r4, #0x3c]
    mov r6, r2
    mov r0, r2
    cmp r1, #0x10
    add r5, r11, #0x600
    blo @L_021777c4
    cmp r1, #0x80
    movls r0, #1
@L_021777c4:
    cmp r0, #0
    beq @L_021777dc
    ldrb r0, [r4, #0x4a]
    add r0, r0, #0x10
    cmp r1, r0
    moveq r6, #1
@L_021777dc:
    cmp r6, #0
    mov r7, #1
    beq @L_021777f4
    ldrh r0, [r4, #0x40]
    cmp r0, #1
    moveq r3, r7
@L_021777f4:
    cmp r3, #0
    beq @L_02177810
    ldrh r0, [r4, #0x3c]
    ldrh r1, [r4]
    add r0, r0, #0x41
    cmp r1, r0, lsr #1
    moveq r2, #1
@L_02177810:
    cmp r2, #0
    beq @L_02177828
    mov r0, r4
    bl MBi_CheckMBParent
    cmp r0, #0
    bne @L_0217783c
@L_02177828:
    ldr r0, [sp, #0x20]
    add r0, r0, #1
    and r0, r0, #0xff
    str r0, [sp, #0x20]
    b @L_02177a94
@L_0217783c:
    ldr r0, =data_ov089_021792d0
    ldr r0, [r0, #8]
    cmp r0, #1
    bne @L_0217787c
    ldr r0, =data_ov089_021791ec
    ldr r2, [r4, #0x44]
    ldr r1, [r0, #0x14]
    ldr r0, [r0, #0x10]
    and r2, r2, r1
    and r0, r0, r1
    cmp r2, r0
    ldreq r0, [sp, #0x20]
    addeq r0, r0, #1
    andeq r0, r0, #0xff
    streq r0, [sp, #0x20]
    beq @L_02177a94
@L_0217787c:
    mov r6, #0
    add r0, r11, #0x500
    b @L_021779d4
@L_02177888:
    mov r1, #0x180
    mla r2, r6, r1, r5
    ldrb r3, [r4, #4]
    ldrb r1, [r2, #0xca]
    mov r12, #0
    mov r10, r12
    cmp r3, r1
    ldreqb r1, [r2, #0xcb]
    ldreqb r2, [r4, #5]
    mov lr, r12
    mov r8, r12
    cmpeq r2, r1
    moveq r10, r7
    mov r9, r12
    cmp r10, #0
    beq @L_021778e0
    mov r2, #0x180
    mla r2, r6, r2, r5
    ldrb r1, [r4, #6]
    ldrb r2, [r2, #0xcc]
    cmp r1, r2
    moveq r9, r7
@L_021778e0:
    cmp r9, #0
    beq @L_02177900
    mov r1, #0x180
    mla r1, r6, r1, r5
    ldrb r2, [r4, #7]
    ldrb r1, [r1, #0xcd]
    cmp r2, r1
    moveq r8, r7
@L_02177900:
    cmp r8, #0
    beq @L_02177920
    mov r1, #0x180
    mla r1, r6, r1, r5
    ldrb r2, [r4, #8]
    ldrb r1, [r1, #0xce]
    cmp r2, r1
    moveq lr, r7
@L_02177920:
    cmp lr, #0
    beq @L_02177940
    mov r1, #0x180
    mla r1, r6, r1, r5
    ldrb r2, [r4, #9]
    ldrb r1, [r1, #0xcf]
    cmp r2, r1
    moveq r12, r7
@L_02177940:
    cmp r12, #0
    beq @L_021779d0
    mov r0, #0x180
    mla r0, r6, r0, r5
    ldrh r1, [r4, #0x3c]
    add r8, r4, #0x40
    add r7, r0, #0xf8
    strh r1, [r0, #0xf6]
    mov r5, #8
@L_02177964:
    ldmia r8!, {r0, r1, r2, r3}
    stmia r7!, {r0, r1, r2, r3}
    subs r5, r5, #1
    bne @L_02177964
    add r0, r11, #0x600
    mov r7, #0x180
    mla r0, r6, r7, r0
    mov r5, #0xc0
    mov r1, r5
    bl DC_InvalidateRange
    add r1, r11, #0x600
    mla r2, r6, r7, r1
    ldr r0, =data_ov089_021792d0
    mov r7, #1
    ldrh r0, [r0]
    mov r1, r4
    mov r3, r5
    str r7, [sp]
    bl func_02008a08
    ldr r0, [sp, #0x1c]
    str r6, [r11, #0x5ec]
    add r1, r0, #0x50
    ldr r0, [sp, #0x24]
    ldr r2, [r11, #0x51c]
    add r1, r1, r0, lsl #1
    mov r0, #4
    b @L_02177ad0
@L_021779d0:
    add r6, r6, #1
@L_021779d4:
    ldrh r1, [r0, #0xe0]
    cmp r6, r1
    blt @L_02177888
    cmp r6, #0x10
    ldr r8, =data_ov089_021792d0
    mov r7, #0x180
    mov r9, #1
    bge @L_02177a94
    mla r1, r6, r7, r5
    add r10, r6, #1
    add r3, r11, #0x500
    add r0, r4, #4
    add r1, r1, #0xca
    mov r2, #6
    strh r10, [r3, #0xe0]
    bl MI_CpuCopy8
    mla r3, r6, r7, r5
    ldrh r2, [r4, #0x36]
    ldr r0, [sp, #0x24]
    ldr r1, [sp, #0x1c]
    strh r2, [r3, #0xd0]
    add r1, r1, r0, lsl #1
    ldrh r5, [r1, #0x50]
    add r0, r4, #0x40
    add r1, r3, #0xf8
    mov r2, #0x80
    strh r5, [r3, #0xd2]
    bl MIi_CpuCopy16
    add r0, r11, #0x600
    mov r5, #0xc0
    mla r0, r6, r7, r0
    mov r1, r5
    bl DC_InvalidateRange
    add r2, r11, #0x600
    ldrh r0, [r8]
    mla r2, r6, r7, r2
    mov r1, r4
    mov r3, r5
    str r9, [sp]
    bl func_02008a08
    ldr r0, [sp, #0x1c]
    str r6, [r11, #0x5ec]
    add r1, r0, #0x50
    ldr r0, [sp, #0x24]
    ldr r2, [r11, #0x51c]
    add r1, r1, r0, lsl #1
    mov r0, #4
    b @L_02177ad0
@L_02177a94:
    ldr r0, [sp, #0x24]
    add r0, r0, #1
    and r0, r0, #0xff
@L_02177aa0:
    str r0, [sp, #0x24]
    ldr r0, [sp, #0x1c]
    ldrh r1, [r0, #0xe]
    ldr r0, [sp, #0x24]
    cmp r0, r1
    blt @L_0217778c
    ldr r0, [sp, #0x20]
    cmp r1, r0
    bne @L_02177ad4
    ldr r2, [r11, #0x51c]
    ldr r1, [sp, #0x1c]
    mov r0, #5
@L_02177ad0:
    blx r2
@L_02177ad4:
    ldr r0, [r11, #0x5e4]
    cmp r0, #0
    addeq sp, sp, #0x28
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r0, [r11, #0x5e8]
    cmp r0, #0
    beq @L_02177b04
    ldr r0, =data_ov089_02179300
    bl func_ov089_02176bfc
    cmp r0, #0
    bne @L_02177b04
    bl func_ov089_02178580
@L_02177b04:
    ldr r0, =func_ov089_02177598
    ldr r1, =data_ov089_02179300
    bl func_02013994
    mov r1, r0
    mov r0, #0x26
    bl func_ov089_021789d0
    add sp, sp, #0x28
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02177b24:
    ldr r2, [r11, #0x51c]
    ldr r1, [sp, #0x1c]
    mov r0, #5
    blx r2
    ldr r0, [r11, #0x5e4]
    cmp r0, #0
    addeq sp, sp, #0x28
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r0, [r11, #0x5e8]
    cmp r0, #0
    beq @L_02177b64
    ldr r0, =data_ov089_02179300
    bl func_ov089_02176bfc
    cmp r0, #0
    bne @L_02177b64
    bl func_ov089_02178580
@L_02177b64:
    ldr r0, =func_ov089_02177598
    ldr r1, =data_ov089_02179300
    bl func_02013994
    mov r1, r0
    mov r0, #0x26
    bl func_ov089_021789d0
    add sp, sp, #0x28
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02177b84:
    ldr r2, [r11, #0x51c]
    ldr r1, [sp, #0x1c]
    mov r0, #0x100
    blx r2
    add sp, sp, #0x28
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02177b9c:
    ldrh r0, [r0, #2]
    cmp r0, #0
    beq @L_02177bc0
    ldr r2, [r11, #0x51c]
    ldr r1, [sp, #0x1c]
    mov r0, #0x100
    blx r2
    add sp, sp, #0x28
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02177bc0:
    ldr r1, [r11, #0x520]
    mov r2, r5
    ldr r0, =func_ov089_02177598
    mov r3, r6
    str r2, [sp]
    bl func_02013b28
    mov r1, r0
    mov r0, #0xc
    bl func_ov089_021789d0
    add sp, sp, #0x28
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02177bec:
    ldrh r0, [r0, #2]
    cmp r0, #0
    beq @L_02177c18
    add r0, r11, #0x500
    strh r5, [r0, #0xe0]
    ldr r2, [r11, #0x51c]
    ldr r1, [sp, #0x1c]
    mov r0, #0xb
    blx r2
    add sp, sp, #0x28
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02177c18:
    ldr r0, [sp, #0x1c]
    ldrh r0, [r0, #8]
    cmp r0, #9
    bgt @L_02177c48
    cmp r0, #6
    blt @L_02177d38
    beq @L_02177c58
    cmp r0, #7
    beq @L_02177c6c
    cmp r0, #9
    beq @L_02177d14
    b @L_02177d38
@L_02177c48:
    cmp r0, #0x1a
    addeq sp, sp, #0x28
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    b @L_02177d38
@L_02177c58:
    add r0, r11, #0x500
    strh r5, [r0, #0x2a]
    add sp, sp, #0x28
    strh r6, [r0, #0x28]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02177c6c:
    ldr r0, [sp, #0x1c]
    ldr r1, [sp, #0x1c]
    ldrh r2, [r0, #0xa]
    add r0, r11, #0x500
    strh r2, [r0, #0xe2]
    ldr r2, [r11, #0x51c]
    mov r0, #6
    blx r2
    mov r4, r5
    add r3, r11, #0x500
    ldr r1, =func_ov089_02177538
    mov r0, r6
    mov r2, r4
    strh r6, [r3, #0x2a]
    bl func_02012e6c
    cmp r0, #0
    addne sp, sp, #0x28
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    add r0, r11, #0x500
    ldrh r0, [r0, #0x2c]
    add r1, r11, #0x500
    ldrh r2, [r1, #0x18]
    cmp r0, #0
    moveq r4, r6
    mov r0, r4, lsl #0x10
    mov r0, r0, lsr #0x10
    str r2, [sp]
    stmib sp, {r0, r5}
    str r5, [sp, #0xc]
    str r5, [sp, #0x10]
    str r6, [sp, #0x14]
    str r6, [sp, #0x18]
    ldrh r2, [r1, #0x1a]
    ldr r1, [r11, #0x504]
    ldr r0, =func_ov089_02177598
    add r3, r11, #0x40
    bl WM_StartMPEx
    mov r1, r0
    mov r0, #0xe
    bl func_ov089_021789d0
    add sp, sp, #0x28
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02177d14:
    ldr r2, [r11, #0x51c]
    ldr r1, [sp, #0x1c]
    mov r0, #0xa
    blx r2
    add r0, r11, #0x500
    strh r5, [r0, #0x2a]
    add sp, sp, #0x28
    strh r5, [r0, #0x28]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02177d38:
    ldr r2, [r11, #0x51c]
    ldr r1, [sp, #0x1c]
    mov r0, #0x100
    blx r2
    add sp, sp, #0x28
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02177d50:
    ldrh r0, [r0, #4]
    cmp r0, #0xa
    beq @L_02177d70
    cmp r0, #0xc
    cmpne r0, #0xd
    addeq sp, sp, #0x28
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    b @L_02177da0
@L_02177d70:
    add r0, r11, #0x500
    strh r6, [r0, #0x28]
    bl func_ov089_02176c64
    cmp r0, #0
    addeq sp, sp, #0x28
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r2, [r11, #0x51c]
    mov r0, #0x19
    mov r1, r5
    blx r2
    add sp, sp, #0x28
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02177da0:
    ldr r2, [r11, #0x51c]
    ldr r1, [sp, #0x1c]
    mov r0, #0x100
    blx r2
    add sp, sp, #0x28
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02177db8:
    strb r5, [r11, #0x50c]
    ldrh r0, [r0, #2]
    cmp r0, #0
    bne @L_02177dd8
    ldr r2, [r11, #0x51c]
    ldr r1, [sp, #0x1c]
    mov r0, #8
    b @L_02177df8
@L_02177dd8:
    cmp r0, #9
    ldr r2, [r11, #0x51c]
    bne @L_02177df0
    ldr r1, [sp, #0x1c]
    mov r0, #0x29
    b @L_02177df8
@L_02177df0:
    ldr r1, [sp, #0x1c]
    mov r0, #0x12
@L_02177df8:
    blx r2
    ldr r0, [r4, #0xc]
    add r0, r0, #0x500
    ldrh r0, [r0, #0x26]
    cmp r0, #0
    addne sp, sp, #0x28
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r2, [r11, #0x51c]
    mov r0, #0x19
    mov r1, #0
    blx r2
    add sp, sp, #0x28
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02177e2c:
    ldrh r0, [r0, #2]
    cmp r0, #0
    beq @L_02177e58
    add r0, r11, #0x500
    strh r5, [r0, #0x26]
    ldr r2, [r11, #0x51c]
    ldr r1, [sp, #0x1c]
    mov r0, #0x100
    blx r2
    add sp, sp, #0x28
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02177e58:
    ldr r0, [r4, #0xc]
    add r0, r0, #0x500
    strh r5, [r0, #0x2a]
    ldr r1, [r4, #0xc]
    ldr r0, =func_ov089_02177598
    add r1, r1, #0x500
    strh r5, [r1, #0x28]
    bl func_02013768
    mov r1, r0
    mov r0, #2
    bl func_ov089_021789d0
    add sp, sp, #0x28
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02177e8c:
    mov r1, r0
    ldrh r1, [r1, #2]
    cmp r1, #0
    beq @L_02177ebc
    add r0, r11, #0x500
    strh r5, [r0, #0x26]
    ldr r2, [r11, #0x51c]
    ldr r1, [sp, #0x1c]
    mov r0, #0x100
    blx r2
    add sp, sp, #0x28
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02177ebc:
    bl func_ov089_02176d20
    add sp, sp, #0x28
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02177ec8:
    bl func_ov089_02176c64
    cmp r0, #0
    addeq sp, sp, #0x28
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r2, [r11, #0x51c]
    mov r0, #0x19
    mov r1, r5
    blx r2
    add sp, sp, #0x28
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02177ef0:
    ldrh r0, [r0, #4]
    cmp r0, #0x16
    addne sp, sp, #0x28
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    bl func_0200878c
    add sp, sp, #0x28
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02177f0c:
    ldr r2, [r11, #0x51c]
    ldr r1, [sp, #0x1c]
    mov r0, #0x100
    blx r2
    add sp, sp, #0x28
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_ov089_02177f38(void)
{
    stmdb sp!, {r4, lr}
    sub sp, sp, #8
    add r4, sp, #0
    mov r0, r4
    bl func_02008564
    mov r1, #0
    mov r3, r1
@L_02177f54:
    ldrb r0, [r4, r1]
    add r1, r1, #1
    cmp r1, #6
    add r3, r3, r0
    blt @L_02177f54
    ldr r1, =0x2fffc3c
    ldr r0, =0xcccccccd
    ldr r1, [r1]
    mov r2, #0x14
    add r1, r3, r1
    rsb r3, r1, r1, lsl #3
    umull r1, r0, r3, r0
    mov r0, r0, lsr #4
    umull r0, r1, r2, r0
    sub r0, r3, r0
    add sp, sp, #8
    ldmia sp!, {r4, pc}
}

extern "C" asm void func_ov089_02177fa0(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    ldr r4, =data_ov089_021792d0
    mov r7, r1
    ldr r1, [r4, #0x10]
    mov r5, r2
    cmp r1, #0
    addne r1, r1, #0x1300
    ldrneh r1, [r1, #0x16]
    mov r4, r3
    cmpne r1, #0
    movne r0, #2
    ldmneia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    add r0, r0, #0x1f
    bic r8, r0, #0x1f
    add r0, r8, #0x1f
    add r0, r0, #0x1e00
    cmp r4, #0x10000
    bic r9, r0, #0x1f
    bne @L_02177ff4
    bl func_020134f8
    mov r4, r0
@L_02177ff4:
    bl OS_DisableInterrupts
    ldr r3, =0xffff
    ldr r1, =data_ov089_021791ec
    mov r2, #5
    strh r3, [r1, #4]
    strh r2, [r1, #6]
    mov r2, #0x28
    strh r2, [r1, #2]
    strh r2, [r1]
    mov r6, #1
    ldr r2, [sp, #0x20]
    ldr r3, =data_ov089_021792d0
    str r6, [r1, #8]
    strh r2, [r3]
    str r8, [r3, #0xc]
    mov r6, #0
    mov r10, r0
    mov r0, r6
    mov r1, r8
    mov r2, #0x1e00
    str r9, [r3, #0x10]
    bl func_0200919c
    mov r0, r6
    mov r1, r9
    mov r2, #0x1340
    bl MIi_CpuClear16
    ldrb r0, [r7, #1]
    add r2, r8, #0x530
    cmp r0, #0
    ble @L_02178088
@L_0217806c:
    add r0, r7, r6, lsl #1
    ldrh r1, [r0, #2]
    ldrb r0, [r7, #1]
    add r6, r6, #1
    strh r1, [r2], #2
    cmp r6, r0
    blt @L_0217806c
@L_02178088:
    add r0, r8, #0x138
    add r3, r0, #0x400
    ldr r0, =data_ov089_021791ec
    mov r6, #0
    ldr r1, [r0, #0xc]
@L_0217809c:
    ldrh r2, [r1]
    cmp r2, #0
    beq @L_021780c0
    add r1, r1, #2
    add r6, r6, #1
    str r1, [r0, #0xc]
    cmp r6, #0x10
    strh r2, [r3], #2
    blt @L_0217809c
@L_021780c0:
    mov r0, r7
    add r1, r9, #0x1300
    mov r2, #0x16
    bl MI_CpuCopy8
    ldrb r0, [r7, #1]
    mov r7, #0
    mov r6, #1
    cmp r0, #0xa
    addlo r0, r9, r0, lsl #1
    addlo r0, r0, #0x1300
    movlo r1, #0
    strloh r1, [r0, #2]
    add r0, r8, #0x500
    mov r1, #0x100
    strh r1, [r0]
    mov r1, #8
    strh r1, [r0, #2]
    strh r7, [r0, #0x18]
    strh r7, [r0, #0x1a]
    strh r6, [r0, #0x2c]
    add r0, r9, #0x400
    str r0, [r8, #0x504]
    strh r7, [r8, #0xe]
    strh r7, [r8, #0x12]
    strh r6, [r8, #0x16]
    strh r7, [r8, #0x14]
    str r5, [r8, #8]
    strh r4, [r8, #0xc]
    bl func_ov089_02177f38
    add r0, r0, #0xc8
    strh r0, [r8, #0x18]
    mov r0, #0xf
    strh r0, [r8, #0x10]
    strb r7, [r8, #0x50c]
    strb r7, [r8, #0x50d]
    add r1, r9, #0x1300
    strh r6, [r1, #0x16]
    add r1, r9, #0x1000
    mov r0, r10
    str r7, [r1, #0x31c]
    bl OS_RestoreInterrupts
    mov r0, r7
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
}
