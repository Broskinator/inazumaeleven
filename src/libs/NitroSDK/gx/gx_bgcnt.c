// (asm for now)

void G2_GetBG0ScrPtr(void);
void G2S_GetBG0ScrPtr(void);
void G2_GetBG1ScrPtr(void);
void G2S_GetBG1ScrPtr(void);
void G2_GetBG2ScrPtr(void);
void G2S_GetBG2ScrPtr(void);
void G2_GetBG3ScrPtr(void);
void G2S_GetBG3ScrPtr(void);
void G2_GetBG0CharPtr(void);
void G2S_GetBG0CharPtr(void);
void G2_GetBG1CharPtr(void);
void G2S_GetBG1CharPtr(void);
void G2_GetBG2CharPtr(void);
void G2S_GetBG2CharPtr(void);
void G2_GetBG3CharPtr(void);
void G2S_GetBG3CharPtr(void);
void GX_LoadBGPltt(void);
void GXS_LoadBGPltt(void);
void GX_LoadOBJPltt(void);
void GXS_LoadOBJPltt(void);
void GX_LoadOAM(void);
void GXS_LoadOAM(void);
void GX_LoadOBJ(void);
void GXS_LoadOBJ(void);
void GX_LoadBG0Scr(void);
void GXS_LoadBG0Scr(void);
void GX_LoadBG1Scr(void);
void GXS_LoadBG1Scr(void);
void GX_LoadBG2Scr(void);
void GXS_LoadBG2Scr(void);
void GX_LoadBG3Scr(void);
void func_020038a8(void);
void GX_LoadBG0Char(void);
void GXS_LoadBG0Char(void);
void GX_LoadBG1Char(void);
void GXS_LoadBG1Char(void);
void GX_LoadBG2Char(void);
void GXS_LoadBG2Char(void);
void GX_LoadBG3Char(void);
void GXS_LoadBG3Char(void);
void GX_BeginLoadBGExtPltt(void);
void GX_LoadBGExtPltt(void);
void GX_EndLoadBGExtPltt(void);

extern char GXi_DmaId[];
void MIi_DmaCopy16(void);
void MIi_CpuCopy16(void);
void MIi_DmaCopy32(void);
void MIi_CpuCopy32(void);
void GX_ResetBankForBGExtPltt(void);
extern char sSubBGExtPltt[];
void MIi_DmaCopy32Async(void);
void MI_WaitDma(void);
void GX_SetBankForBGExtPltt(void);

asm void G2_GetBG0ScrPtr(void)
{
    ldr r1, =0x4000008
    mov r0, #0x4000000
    ldrh r1, [r1]
    ldr r0, [r0]
    and r0, r0, #0x38000000
    mov r0, r0, lsr #0x1b
    and r1, r1, #0x1f00
    mov r0, r0, lsl #0x10
    mov r1, r1, asr #8
    add r0, r0, #0x6000000
    add r0, r0, r1, lsl #11
    bx lr
}

asm void G2S_GetBG0ScrPtr(void)
{
    ldr r0, =0x4001008
    ldrh r0, [r0]
    and r0, r0, #0x1f00
    mov r0, r0, asr #8
    mov r0, r0, lsl #0xb
    add r0, r0, #0x6200000
    bx lr
}

asm void G2_GetBG1ScrPtr(void)
{
    ldr r1, =0x400000a
    mov r0, #0x4000000
    ldrh r1, [r1]
    ldr r0, [r0]
    and r0, r0, #0x38000000
    mov r0, r0, lsr #0x1b
    and r1, r1, #0x1f00
    mov r0, r0, lsl #0x10
    mov r1, r1, asr #8
    add r0, r0, #0x6000000
    add r0, r0, r1, lsl #11
    bx lr
}

asm void G2S_GetBG1ScrPtr(void)
{
    ldr r0, =0x400100a
    ldrh r0, [r0]
    and r0, r0, #0x1f00
    mov r0, r0, asr #8
    mov r0, r0, lsl #0xb
    add r0, r0, #0x6200000
    bx lr
}

asm void G2_GetBG2ScrPtr(void)
{
    mov r0, #0x4000000
    ldr r1, [r0]
    ldrh r3, [r0, #0xc]
    ldr r0, [r0]
    and r12, r1, #7
    and r0, r0, #0x38000000
    mov r1, r0, lsr #0x1b
    and r0, r3, #0x1f00
    mov r2, r1, lsl #0x10
    cmp r12, #6
    mov r1, r0, lsr #8
    addls pc, pc, r12, lsl #2
    b @L_02002f4c
    b @L_02002f20
    b @L_02002f20
    b @L_02002f20
    b @L_02002f20
    b @L_02002f20
    b @L_02002f2c
    b @L_02002f44
@L_02002f20:
    add r0, r2, #0x6000000
    add r0, r0, r1, lsl #11
    bx lr
@L_02002f2c:
    tst r3, #0x80
    movne r0, r1, lsl #0xe
    addne r0, r0, #0x6000000
    addeq r0, r2, #0x6000000
    addeq r0, r0, r1, lsl #11
    bx lr
@L_02002f44:
    mov r0, #0x6000000
    bx lr
@L_02002f4c:
    mov r0, #0
    bx lr
}

asm void G2S_GetBG2ScrPtr(void)
{
    ldr r1, =0x4001000
    ldr r0, [r1]
    ldrh r1, [r1, #0xc]
    and r2, r0, #7
    cmp r2, #6
    and r0, r1, #0x1f00
    mov r0, r0, lsr #8
    addls pc, pc, r2, lsl #2
    b @L_02002fbc
    b @L_02002f94
    b @L_02002f94
    b @L_02002f94
    b @L_02002f94
    b @L_02002f94
    b @L_02002fa0
    b @L_02002fb4
@L_02002f94:
    mov r0, r0, lsl #0xb
    add r0, r0, #0x6200000
    bx lr
@L_02002fa0:
    tst r1, #0x80
    movne r0, r0, lsl #0xe
    moveq r0, r0, lsl #0xb
    add r0, r0, #0x6200000
    bx lr
@L_02002fb4:
    mov r0, #0
    bx lr
@L_02002fbc:
    mov r0, #0
    bx lr
}

asm void G2_GetBG3ScrPtr(void)
{
    mov r0, #0x4000000
    ldr r1, [r0]
    ldrh r3, [r0, #0xe]
    ldr r0, [r0]
    and r12, r1, #7
    and r0, r0, #0x38000000
    mov r1, r0, lsr #0x1b
    and r0, r3, #0x1f00
    mov r2, r1, lsl #0x10
    cmp r12, #6
    mov r1, r0, lsr #8
    addls pc, pc, r12, lsl #2
    b @L_02003044
    b @L_02003018
    b @L_02003018
    b @L_02003018
    b @L_02003024
    b @L_02003024
    b @L_02003024
    b @L_0200303c
@L_02003018:
    add r0, r2, #0x6000000
    add r0, r0, r1, lsl #11
    bx lr
@L_02003024:
    tst r3, #0x80
    movne r0, r1, lsl #0xe
    addne r0, r0, #0x6000000
    addeq r0, r2, #0x6000000
    addeq r0, r0, r1, lsl #11
    bx lr
@L_0200303c:
    mov r0, #0
    bx lr
@L_02003044:
    mov r0, #0
    bx lr
}

asm void G2S_GetBG3ScrPtr(void)
{
    ldr r1, =0x4001000
    ldr r0, [r1]
    ldrh r1, [r1, #0xe]
    and r2, r0, #7
    cmp r2, #6
    and r0, r1, #0x1f00
    mov r0, r0, lsr #8
    addls pc, pc, r2, lsl #2
    b @L_020030b4
    b @L_0200308c
    b @L_0200308c
    b @L_0200308c
    b @L_02003098
    b @L_02003098
    b @L_02003098
    b @L_020030ac
@L_0200308c:
    mov r0, r0, lsl #0xb
    add r0, r0, #0x6200000
    bx lr
@L_02003098:
    tst r1, #0x80
    movne r0, r0, lsl #0xe
    moveq r0, r0, lsl #0xb
    add r0, r0, #0x6200000
    bx lr
@L_020030ac:
    mov r0, #0
    bx lr
@L_020030b4:
    mov r0, #0
    bx lr
}

asm void G2_GetBG0CharPtr(void)
{
    ldr r1, =0x4000008
    mov r0, #0x4000000
    ldrh r1, [r1]
    ldr r0, [r0]
    and r0, r0, #0x7000000
    mov r0, r0, lsr #0x18
    and r1, r1, #0x3c
    mov r0, r0, lsl #0x10
    mov r1, r1, asr #2
    add r0, r0, #0x6000000
    add r0, r0, r1, lsl #14
    bx lr
}

asm void G2S_GetBG0CharPtr(void)
{
    ldr r0, =0x4001008
    ldrh r0, [r0]
    and r0, r0, #0x3c
    mov r0, r0, asr #2
    mov r0, r0, lsl #0xe
    add r0, r0, #0x6200000
    bx lr
}

asm void G2_GetBG1CharPtr(void)
{
    ldr r1, =0x400000a
    mov r0, #0x4000000
    ldrh r1, [r1]
    ldr r0, [r0]
    and r0, r0, #0x7000000
    mov r0, r0, lsr #0x18
    and r1, r1, #0x3c
    mov r0, r0, lsl #0x10
    mov r1, r1, asr #2
    add r0, r0, #0x6000000
    add r0, r0, r1, lsl #14
    bx lr
}

asm void G2S_GetBG1CharPtr(void)
{
    ldr r0, =0x400100a
    ldrh r0, [r0]
    and r0, r0, #0x3c
    mov r0, r0, asr #2
    mov r0, r0, lsl #0xe
    add r0, r0, #0x6200000
    bx lr
}

asm void G2_GetBG2CharPtr(void)
{
    mov r1, #0x4000000
    ldr r0, [r1]
    ldrh r2, [r1, #0xc]
    and r0, r0, #7
    cmp r0, #5
    blt @L_02003188
    tst r2, #0x80
    bne @L_020031b0
@L_02003188:
    mov r0, #0x4000000
    ldr r1, [r0]
    and r0, r2, #0x3c
    and r1, r1, #0x7000000
    mov r1, r1, lsr #0x18
    mov r1, r1, lsl #0x10
    add r1, r1, #0x6000000
    mov r0, r0, lsr #2
    add r0, r1, r0, lsl #14
    bx lr
@L_020031b0:
    mov r0, #0
    bx lr
}

asm void G2S_GetBG2CharPtr(void)
{
    ldr r1, =0x4001000
    ldr r0, [r1]
    ldrh r1, [r1, #0xc]
    and r0, r0, #7
    cmp r0, #5
    blt @L_020031d8
    tst r1, #0x80
    bne @L_020031ec
@L_020031d8:
    and r0, r1, #0x3c
    mov r0, r0, lsr #2
    mov r0, r0, lsl #0xe
    add r0, r0, #0x6200000
    bx lr
@L_020031ec:
    mov r0, #0
    bx lr
}

asm void G2_GetBG3CharPtr(void)
{
    mov r1, #0x4000000
    ldr r0, [r1]
    ldrh r2, [r1, #0xe]
    and r0, r0, #7
    cmp r0, #3
    blt @L_02003220
    cmp r0, #6
    bge @L_02003248
    tst r2, #0x80
    bne @L_02003248
@L_02003220:
    mov r0, #0x4000000
    ldr r1, [r0]
    and r0, r2, #0x3c
    and r1, r1, #0x7000000
    mov r1, r1, lsr #0x18
    mov r1, r1, lsl #0x10
    add r1, r1, #0x6000000
    mov r0, r0, lsr #2
    add r0, r1, r0, lsl #14
    bx lr
@L_02003248:
    mov r0, #0
    bx lr
}

asm void G2S_GetBG3CharPtr(void)
{
    ldr r1, =0x4001000
    ldr r0, [r1]
    ldrh r1, [r1, #0xe]
    and r0, r0, #7
    cmp r0, #3
    blt @L_02003278
    cmp r0, #6
    bge @L_0200328c
    tst r1, #0x80
    bne @L_0200328c
@L_02003278:
    and r0, r1, #0x3c
    mov r0, r0, lsr #2
    mov r0, r0, lsl #0xe
    add r0, r0, #0x6200000
    bx lr
@L_0200328c:
    mov r0, #0
    bx lr
}

asm void GX_LoadBGPltt(void)
{
    stmdb sp!, {r3, r4, lr}
    sub sp, sp, #4
    ldr r3, =GXi_DmaId
    mov r4, r0
    ldr r0, [r3]
    mov lr, r1
    mov r3, r2
    cmn r0, #1
    beq @L_020032e0
    cmp r3, #0x1c
    bls @L_020032e0
    mov r12, #1
    mov r1, r4
    add r2, lr, #0x5000000
    str r12, [sp]
    bl MIi_DmaCopy16
    add sp, sp, #4
    ldmia sp!, {r3, r4, pc}
@L_020032e0:
    mov r0, r4
    mov r2, r3
    add r1, lr, #0x5000000
    bl MIi_CpuCopy16
    add sp, sp, #4
    ldmia sp!, {r3, r4, pc}
}

asm void GXS_LoadBGPltt(void)
{
    stmdb sp!, {r3, lr}
    ldr r3, =GXi_DmaId
    mov lr, r0
    ldr r0, [r3]
    mov r3, r2
    cmn r0, #1
    beq @L_0200333c
    cmp r3, #0x1c
    bls @L_0200333c
    add r2, r1, #0x400
    mov r12, #1
    mov r1, lr
    add r2, r2, #0x5000000
    str r12, [sp]
    bl MIi_DmaCopy16
    ldmia sp!, {r3, pc}
@L_0200333c:
    add r1, r1, #0x400
    mov r0, lr
    mov r2, r3
    add r1, r1, #0x5000000
    bl MIi_CpuCopy16
    ldmia sp!, {r3, pc}
}

asm void GX_LoadOBJPltt(void)
{
    stmdb sp!, {r3, lr}
    ldr r3, =GXi_DmaId
    mov lr, r0
    ldr r0, [r3]
    mov r3, r2
    cmn r0, #1
    beq @L_02003398
    cmp r3, #0x1c
    bls @L_02003398
    add r2, r1, #0x200
    mov r12, #1
    mov r1, lr
    add r2, r2, #0x5000000
    str r12, [sp]
    bl MIi_DmaCopy16
    ldmia sp!, {r3, pc}
@L_02003398:
    add r1, r1, #0x200
    mov r0, lr
    mov r2, r3
    add r1, r1, #0x5000000
    bl MIi_CpuCopy16
    ldmia sp!, {r3, pc}
}

asm void GXS_LoadOBJPltt(void)
{
    stmdb sp!, {r3, lr}
    ldr r3, =GXi_DmaId
    mov lr, r0
    ldr r0, [r3]
    mov r3, r2
    cmn r0, #1
    beq @L_020033f4
    cmp r3, #0x1c
    bls @L_020033f4
    add r2, r1, #0x600
    mov r12, #1
    mov r1, lr
    add r2, r2, #0x5000000
    str r12, [sp]
    bl MIi_DmaCopy16
    ldmia sp!, {r3, pc}
@L_020033f4:
    add r1, r1, #0x600
    mov r0, lr
    mov r2, r3
    add r1, r1, #0x5000000
    bl MIi_CpuCopy16
    ldmia sp!, {r3, pc}
}

asm void GX_LoadOAM(void)
{
    stmdb sp!, {r3, r4, lr}
    sub sp, sp, #4
    ldr r3, =GXi_DmaId
    mov r4, r0
    ldr r0, [r3]
    mov lr, r1
    mov r3, r2
    cmn r0, #1
    beq @L_02003458
    cmp r3, #0x30
    bls @L_02003458
    mov r12, #1
    mov r1, r4
    add r2, lr, #0x7000000
    str r12, [sp]
    bl MIi_DmaCopy32
    add sp, sp, #4
    ldmia sp!, {r3, r4, pc}
@L_02003458:
    mov r0, r4
    mov r2, r3
    add r1, lr, #0x7000000
    bl MIi_CpuCopy32
    add sp, sp, #4
    ldmia sp!, {r3, r4, pc}
}

asm void GXS_LoadOAM(void)
{
    stmdb sp!, {r3, lr}
    ldr r3, =GXi_DmaId
    mov lr, r0
    ldr r0, [r3]
    mov r3, r2
    cmn r0, #1
    beq @L_020034b4
    cmp r3, #0x30
    bls @L_020034b4
    add r2, r1, #0x400
    mov r12, #1
    mov r1, lr
    add r2, r2, #0x7000000
    str r12, [sp]
    bl MIi_DmaCopy32
    ldmia sp!, {r3, pc}
@L_020034b4:
    add r1, r1, #0x400
    mov r0, lr
    mov r2, r3
    add r1, r1, #0x7000000
    bl MIi_CpuCopy32
    ldmia sp!, {r3, pc}
}

asm void GX_LoadOBJ(void)
{
    stmdb sp!, {r3, r4, lr}
    sub sp, sp, #4
    ldr r3, =GXi_DmaId
    mov r4, r0
    ldr r0, [r3]
    mov lr, r1
    mov r3, r2
    cmn r0, #1
    beq @L_02003518
    cmp r3, #0x30
    bls @L_02003518
    mov r12, #1
    mov r1, r4
    add r2, lr, #0x6400000
    str r12, [sp]
    bl MIi_DmaCopy32
    add sp, sp, #4
    ldmia sp!, {r3, r4, pc}
@L_02003518:
    mov r0, r4
    mov r2, r3
    add r1, lr, #0x6400000
    bl MIi_CpuCopy32
    add sp, sp, #4
    ldmia sp!, {r3, r4, pc}
}

asm void GXS_LoadOBJ(void)
{
    stmdb sp!, {r3, r4, lr}
    sub sp, sp, #4
    ldr r3, =GXi_DmaId
    mov r4, r0
    ldr r0, [r3]
    mov lr, r1
    mov r3, r2
    cmn r0, #1
    beq @L_0200357c
    cmp r3, #0x30
    bls @L_0200357c
    mov r12, #1
    mov r1, r4
    add r2, lr, #0x6600000
    str r12, [sp]
    bl MIi_DmaCopy32
    add sp, sp, #4
    ldmia sp!, {r3, r4, pc}
@L_0200357c:
    mov r0, r4
    mov r2, r3
    add r1, lr, #0x6600000
    bl MIi_CpuCopy32
    add sp, sp, #4
    ldmia sp!, {r3, r4, pc}
}

asm void GX_LoadBG0Scr(void)
{
    stmdb sp!, {r3, r4, r5, r6, lr}
    sub sp, sp, #4
    mov r6, r0
    mov r5, r1
    mov r4, r2
    bl G2_GetBG0ScrPtr
    ldr r1, =GXi_DmaId
    mov lr, r0
    ldr r0, [r1]
    cmn r0, #1
    beq @L_020035ec
    cmp r4, #0x1c
    bls @L_020035ec
    mov r12, #1
    mov r1, r6
    mov r3, r4
    add r2, lr, r5
    str r12, [sp]
    bl MIi_DmaCopy16
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, pc}
@L_020035ec:
    mov r0, r6
    mov r2, r4
    add r1, lr, r5
    bl MIi_CpuCopy16
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, pc}
}

asm void GXS_LoadBG0Scr(void)
{
    stmdb sp!, {r3, r4, r5, r6, lr}
    sub sp, sp, #4
    mov r6, r0
    mov r5, r1
    mov r4, r2
    bl G2S_GetBG0ScrPtr
    ldr r1, =GXi_DmaId
    mov lr, r0
    ldr r0, [r1]
    cmn r0, #1
    beq @L_0200365c
    cmp r4, #0x1c
    bls @L_0200365c
    mov r12, #1
    mov r1, r6
    mov r3, r4
    add r2, lr, r5
    str r12, [sp]
    bl MIi_DmaCopy16
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, pc}
@L_0200365c:
    mov r0, r6
    mov r2, r4
    add r1, lr, r5
    bl MIi_CpuCopy16
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, pc}
}

asm void GX_LoadBG1Scr(void)
{
    stmdb sp!, {r3, r4, r5, r6, lr}
    sub sp, sp, #4
    mov r6, r0
    mov r5, r1
    mov r4, r2
    bl G2_GetBG1ScrPtr
    ldr r1, =GXi_DmaId
    mov lr, r0
    ldr r0, [r1]
    cmn r0, #1
    beq @L_020036cc
    cmp r4, #0x1c
    bls @L_020036cc
    mov r12, #1
    mov r1, r6
    mov r3, r4
    add r2, lr, r5
    str r12, [sp]
    bl MIi_DmaCopy16
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, pc}
@L_020036cc:
    mov r0, r6
    mov r2, r4
    add r1, lr, r5
    bl MIi_CpuCopy16
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, pc}
}

asm void GXS_LoadBG1Scr(void)
{
    stmdb sp!, {r3, r4, r5, r6, lr}
    sub sp, sp, #4
    mov r6, r0
    mov r5, r1
    mov r4, r2
    bl G2S_GetBG1ScrPtr
    ldr r1, =GXi_DmaId
    mov lr, r0
    ldr r0, [r1]
    cmn r0, #1
    beq @L_0200373c
    cmp r4, #0x1c
    bls @L_0200373c
    mov r12, #1
    mov r1, r6
    mov r3, r4
    add r2, lr, r5
    str r12, [sp]
    bl MIi_DmaCopy16
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, pc}
@L_0200373c:
    mov r0, r6
    mov r2, r4
    add r1, lr, r5
    bl MIi_CpuCopy16
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, pc}
}

asm void GX_LoadBG2Scr(void)
{
    stmdb sp!, {r3, r4, r5, r6, lr}
    sub sp, sp, #4
    mov r6, r0
    mov r5, r1
    mov r4, r2
    bl G2_GetBG2ScrPtr
    ldr r1, =GXi_DmaId
    mov lr, r0
    ldr r0, [r1]
    cmn r0, #1
    beq @L_020037ac
    cmp r4, #0x1c
    bls @L_020037ac
    mov r12, #1
    mov r1, r6
    mov r3, r4
    add r2, lr, r5
    str r12, [sp]
    bl MIi_DmaCopy16
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, pc}
@L_020037ac:
    mov r0, r6
    mov r2, r4
    add r1, lr, r5
    bl MIi_CpuCopy16
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, pc}
}

asm void GXS_LoadBG2Scr(void)
{
    stmdb sp!, {r3, r4, r5, r6, lr}
    sub sp, sp, #4
    mov r6, r0
    mov r5, r1
    mov r4, r2
    bl G2S_GetBG2ScrPtr
    ldr r1, =GXi_DmaId
    mov lr, r0
    ldr r0, [r1]
    cmn r0, #1
    beq @L_0200381c
    cmp r4, #0x1c
    bls @L_0200381c
    mov r12, #1
    mov r1, r6
    mov r3, r4
    add r2, lr, r5
    str r12, [sp]
    bl MIi_DmaCopy16
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, pc}
@L_0200381c:
    mov r0, r6
    mov r2, r4
    add r1, lr, r5
    bl MIi_CpuCopy16
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, pc}
}

asm void GX_LoadBG3Scr(void)
{
    stmdb sp!, {r3, r4, r5, r6, lr}
    sub sp, sp, #4
    mov r6, r0
    mov r5, r1
    mov r4, r2
    bl G2_GetBG3ScrPtr
    ldr r1, =GXi_DmaId
    mov lr, r0
    ldr r0, [r1]
    cmn r0, #1
    beq @L_0200388c
    cmp r4, #0x1c
    bls @L_0200388c
    mov r12, #1
    mov r1, r6
    mov r3, r4
    add r2, lr, r5
    str r12, [sp]
    bl MIi_DmaCopy16
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, pc}
@L_0200388c:
    mov r0, r6
    mov r2, r4
    add r1, lr, r5
    bl MIi_CpuCopy16
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, pc}
}

asm void func_020038a8(void)
{
    stmdb sp!, {r3, r4, r5, r6, lr}
    sub sp, sp, #4
    mov r6, r0
    mov r5, r1
    mov r4, r2
    bl G2S_GetBG3ScrPtr
    ldr r1, =GXi_DmaId
    mov lr, r0
    ldr r0, [r1]
    cmn r0, #1
    beq @L_020038fc
    cmp r4, #0x1c
    bls @L_020038fc
    mov r12, #1
    mov r1, r6
    mov r3, r4
    add r2, lr, r5
    str r12, [sp]
    bl MIi_DmaCopy16
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, pc}
@L_020038fc:
    mov r0, r6
    mov r2, r4
    add r1, lr, r5
    bl MIi_CpuCopy16
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, pc}
}

asm void GX_LoadBG0Char(void)
{
    stmdb sp!, {r3, r4, r5, r6, lr}
    sub sp, sp, #4
    mov r6, r0
    mov r5, r1
    mov r4, r2
    bl G2_GetBG0CharPtr
    ldr r1, =GXi_DmaId
    mov lr, r0
    ldr r0, [r1]
    cmn r0, #1
    beq @L_0200396c
    cmp r4, #0x30
    bls @L_0200396c
    mov r12, #1
    mov r1, r6
    mov r3, r4
    add r2, lr, r5
    str r12, [sp]
    bl MIi_DmaCopy32
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, pc}
@L_0200396c:
    mov r0, r6
    mov r2, r4
    add r1, lr, r5
    bl MIi_CpuCopy32
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, pc}
}

asm void GXS_LoadBG0Char(void)
{
    stmdb sp!, {r3, r4, r5, r6, lr}
    sub sp, sp, #4
    mov r6, r0
    mov r5, r1
    mov r4, r2
    bl G2S_GetBG0CharPtr
    ldr r1, =GXi_DmaId
    mov lr, r0
    ldr r0, [r1]
    cmn r0, #1
    beq @L_020039dc
    cmp r4, #0x30
    bls @L_020039dc
    mov r12, #1
    mov r1, r6
    mov r3, r4
    add r2, lr, r5
    str r12, [sp]
    bl MIi_DmaCopy32
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, pc}
@L_020039dc:
    mov r0, r6
    mov r2, r4
    add r1, lr, r5
    bl MIi_CpuCopy32
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, pc}
}

asm void GX_LoadBG1Char(void)
{
    stmdb sp!, {r3, r4, r5, r6, lr}
    sub sp, sp, #4
    mov r6, r0
    mov r5, r1
    mov r4, r2
    bl G2_GetBG1CharPtr
    ldr r1, =GXi_DmaId
    mov lr, r0
    ldr r0, [r1]
    cmn r0, #1
    beq @L_02003a4c
    cmp r4, #0x30
    bls @L_02003a4c
    mov r12, #1
    mov r1, r6
    mov r3, r4
    add r2, lr, r5
    str r12, [sp]
    bl MIi_DmaCopy32
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, pc}
@L_02003a4c:
    mov r0, r6
    mov r2, r4
    add r1, lr, r5
    bl MIi_CpuCopy32
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, pc}
}

asm void GXS_LoadBG1Char(void)
{
    stmdb sp!, {r3, r4, r5, r6, lr}
    sub sp, sp, #4
    mov r6, r0
    mov r5, r1
    mov r4, r2
    bl G2S_GetBG1CharPtr
    ldr r1, =GXi_DmaId
    mov lr, r0
    ldr r0, [r1]
    cmn r0, #1
    beq @L_02003abc
    cmp r4, #0x30
    bls @L_02003abc
    mov r12, #1
    mov r1, r6
    mov r3, r4
    add r2, lr, r5
    str r12, [sp]
    bl MIi_DmaCopy32
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, pc}
@L_02003abc:
    mov r0, r6
    mov r2, r4
    add r1, lr, r5
    bl MIi_CpuCopy32
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, pc}
}

asm void GX_LoadBG2Char(void)
{
    stmdb sp!, {r3, r4, r5, r6, lr}
    sub sp, sp, #4
    mov r6, r0
    mov r5, r1
    mov r4, r2
    bl G2_GetBG2CharPtr
    ldr r1, =GXi_DmaId
    mov lr, r0
    ldr r0, [r1]
    cmn r0, #1
    beq @L_02003b2c
    cmp r4, #0x30
    bls @L_02003b2c
    mov r12, #1
    mov r1, r6
    mov r3, r4
    add r2, lr, r5
    str r12, [sp]
    bl MIi_DmaCopy32
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, pc}
@L_02003b2c:
    mov r0, r6
    mov r2, r4
    add r1, lr, r5
    bl MIi_CpuCopy32
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, pc}
}

asm void GXS_LoadBG2Char(void)
{
    stmdb sp!, {r3, r4, r5, r6, lr}
    sub sp, sp, #4
    mov r6, r0
    mov r5, r1
    mov r4, r2
    bl G2S_GetBG2CharPtr
    ldr r1, =GXi_DmaId
    mov lr, r0
    ldr r0, [r1]
    cmn r0, #1
    beq @L_02003b9c
    cmp r4, #0x30
    bls @L_02003b9c
    mov r12, #1
    mov r1, r6
    mov r3, r4
    add r2, lr, r5
    str r12, [sp]
    bl MIi_DmaCopy32
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, pc}
@L_02003b9c:
    mov r0, r6
    mov r2, r4
    add r1, lr, r5
    bl MIi_CpuCopy32
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, pc}
}

asm void GX_LoadBG3Char(void)
{
    stmdb sp!, {r3, r4, r5, r6, lr}
    sub sp, sp, #4
    mov r6, r0
    mov r5, r1
    mov r4, r2
    bl G2_GetBG3CharPtr
    ldr r1, =GXi_DmaId
    mov lr, r0
    ldr r0, [r1]
    cmn r0, #1
    beq @L_02003c0c
    cmp r4, #0x30
    bls @L_02003c0c
    mov r12, #1
    mov r1, r6
    mov r3, r4
    add r2, lr, r5
    str r12, [sp]
    bl MIi_DmaCopy32
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, pc}
@L_02003c0c:
    mov r0, r6
    mov r2, r4
    add r1, lr, r5
    bl MIi_CpuCopy32
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, pc}
}

asm void GXS_LoadBG3Char(void)
{
    stmdb sp!, {r3, r4, r5, r6, lr}
    sub sp, sp, #4
    mov r6, r0
    mov r5, r1
    mov r4, r2
    bl G2S_GetBG3CharPtr
    ldr r1, =GXi_DmaId
    mov lr, r0
    ldr r0, [r1]
    cmn r0, #1
    beq @L_02003c7c
    cmp r4, #0x30
    bls @L_02003c7c
    mov r12, #1
    mov r1, r6
    mov r3, r4
    add r2, lr, r5
    str r12, [sp]
    bl MIi_DmaCopy32
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, pc}
@L_02003c7c:
    mov r0, r6
    mov r2, r4
    add r1, lr, r5
    bl MIi_CpuCopy32
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, pc}
}

asm void GX_BeginLoadBGExtPltt(void)
{
    stmdb sp!, {r3, lr}
    bl GX_ResetBankForBGExtPltt
    ldr r1, =sSubBGExtPltt
    cmp r0, #0x20
    str r0, [r1, #0x14]
    bgt @L_02003cd8
    cmp r0, #0x20
    bge @L_02003cfc
    cmp r0, #0
    ldmleia sp!, {r3, pc}
    cmp r0, #0x10
    ldreq r2, =0x6880000
    moveq r0, #0
    streq r2, [r1, #0x10]
    streq r0, [r1, #0xc]
    ldmia sp!, {r3, pc}
@L_02003cd8:
    cmp r0, #0x40
    bgt @L_02003cf4
    ldreq r2, =0x6894000
    moveq r0, #0x4000
    streq r2, [r1, #0x10]
    streq r0, [r1, #0xc]
    ldmia sp!, {r3, pc}
@L_02003cf4:
    cmp r0, #0x60
    ldmneia sp!, {r3, pc}
@L_02003cfc:
    ldr r2, =0x6890000
    ldr r0, =sSubBGExtPltt
    mov r1, #0
    str r2, [r0, #0x10]
    str r1, [r0, #0xc]
    ldmia sp!, {r3, pc}
}

asm void GX_LoadBGExtPltt(void)
{
    stmdb sp!, {r3, r4, lr}
    sub sp, sp, #0xc
    ldr r12, =sSubBGExtPltt
    ldr r3, =GXi_DmaId
    ldr r4, [r12, #0x10]
    ldr lr, [r3]
    ldr r12, [r12, #0xc]
    add r4, r4, r1
    mov r1, r0
    mov r3, r2
    cmn lr, #1
    sub r4, r4, r12
    beq @L_02003d80
    mov r12, #0
    str r12, [sp]
    str r12, [sp, #4]
    mov r12, #1
    mov r0, lr
    mov r2, r4
    str r12, [sp, #8]
    bl MIi_DmaCopy32Async
    add sp, sp, #0xc
    ldmia sp!, {r3, r4, pc}
@L_02003d80:
    mov r1, r4
    bl MIi_CpuCopy32
    add sp, sp, #0xc
    ldmia sp!, {r3, r4, pc}
}

asm void GX_EndLoadBGExtPltt(void)
{
    stmdb sp!, {r4, lr}
    ldr r0, =GXi_DmaId
    ldr r0, [r0]
    cmn r0, #1
    beq @L_02003db0
    bl MI_WaitDma
@L_02003db0:
    ldr r4, =sSubBGExtPltt
    ldr r0, [r4, #0x14]
    bl GX_SetBankForBGExtPltt
    mov r0, #0
    str r0, [r4, #0x14]
    str r0, [r4, #0x10]
    str r0, [r4, #0xc]
    ldmia sp!, {r4, pc}
}
