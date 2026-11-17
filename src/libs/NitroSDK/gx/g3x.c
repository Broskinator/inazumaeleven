// (asm for now)

void G3X_Reset(void);
void G3X_ClearFifo(void);
void G3X_InitMtxStack(void);
void G3X_ResetMtxStack(void);
void G3X_SetFog(void);
void G3X_GetClipMtx(void);
void G3X_GetVectorMtx(void);
void G3X_SetEdgeColorTable(void);
void G3X_SetFogTable(void);
void G3X_SetToonTable(void);
void G3X_SetClearColor(void);
void G3X_InitTable(void);
void G3X_GetMtxStackLevelPV(void);
void G3X_GetMtxStackLevelPJ(void);
void G3X_GetBoxTestResult(void);
void GXi_NopClearFifo128_(void);

void MI_Copy64B(void);
void MI_Copy36B(void);
void MIi_CpuCopy16(void);
void MI_Copy32B(void);
extern char GXi_DmaId[];
void MIi_DmaFill32Async(void);
void MIi_DmaFill32(void);
void MIi_CpuClear32(void);

asm void G3X_Reset(void)
{
    stmdb sp!, {r3, lr}
    ldr r2, =0x4000600
@L_02002990:
    ldr r0, [r2]
    tst r0, #0x8000000
    bne @L_02002990
    ldr r0, [r2]
    ldr r1, =0x4000060
    orr r0, r0, #0x8000
    str r0, [r2]
    ldrh r0, [r1]
    orr r0, r0, #0x2000
    strh r0, [r1]
    ldrh r0, [r1]
    orr r0, r0, #0x1000
    strh r0, [r1]
    bl G3X_ResetMtxStack
    ldr r2, =0x1f0080
    ldr r1, =0x40004a4
    mov r0, #0
    str r2, [r1]
    str r0, [r1, #4]
    str r0, [r1, #8]
    ldmia sp!, {r3, pc}
}

asm void G3X_ClearFifo(void)
{
    stmdb sp!, {r4, lr}
    ldr r4, =0x4000400
    mov r0, r4
    bl GXi_NopClearFifo128_
@L_02002a04:
    ldr r0, [r4, #0x200]
    tst r0, #0x8000000
    bne @L_02002a04
    ldmia sp!, {r4, pc}
}

asm void G3X_InitMtxStack(void)
{
    stmdb sp!, {r4, lr}
    sub sp, sp, #8
    ldr r1, =0x4000600
    ldr r0, [r1]
    orr r0, r0, #0x8000
    str r0, [r1]
    add r4, sp, #4
@L_02002a34:
    mov r0, r4
    bl G3X_GetMtxStackLevelPV
    cmp r0, #0
    bne @L_02002a34
    add r4, sp, #0
@L_02002a48:
    mov r0, r4
    bl G3X_GetMtxStackLevelPJ
    cmp r0, #0
    bne @L_02002a48
    ldr r1, =0x4000440
    mov r0, #3
    str r0, [r1]
    mov r0, #0
    str r0, [r1, #0x14]
    str r0, [r1]
    ldr r0, [sp]
    mov r2, #0
    cmp r0, #0
    strne r0, [r1, #8]
    ldr r1, =0x4000454
    mov r0, #2
    str r2, [r1]
    str r0, [r1, #-0x14]
    ldr r0, [sp, #4]
    str r0, [r1, #-0xc]
    str r2, [r1]
    add sp, sp, #8
    ldmia sp!, {r4, pc}
}

asm void G3X_ResetMtxStack(void)
{
    stmdb sp!, {r4, lr}
    sub sp, sp, #8
    ldr r1, =0x4000600
    ldr r0, [r1]
    orr r0, r0, #0x8000
    str r0, [r1]
    add r4, sp, #4
@L_02002acc:
    mov r0, r4
    bl G3X_GetMtxStackLevelPV
    cmp r0, #0
    bne @L_02002acc
    add r4, sp, #0
@L_02002ae0:
    mov r0, r4
    bl G3X_GetMtxStackLevelPJ
    cmp r0, #0
    bne @L_02002ae0
    ldr r1, =0x4000440
    mov r0, #3
    str r0, [r1]
    mov r0, #0
    str r0, [r1, #0x14]
    str r0, [r1]
    ldr r0, [sp]
    ldr r2, =0x4000440
    cmp r0, #0
    strne r0, [r1, #8]
    mov r0, #2
    str r0, [r2]
    ldr r1, [sp, #4]
    mov r0, #0
    str r1, [r2, #8]
    str r0, [r2, #0x14]
    add sp, sp, #8
    ldmia sp!, {r4, pc}
}

asm void G3X_SetFog(void)
{
    cmp r0, #0
    ldreq r2, =0x4000060
    ldreq r0, =0xcf7f
    ldreqh r1, [r2]
    andeq r0, r1, r0
    streqh r0, [r2]
    bxeq lr
    ldr r12, =0x400035c
    mov r0, r1, lsl #6
    strh r3, [r12]
    sub r3, r12, #0x2fc
    ldrh r1, [r3]
    orr r0, r0, r2, lsl #8
    orr r0, r0, #0x80
    bic r1, r1, #0x3f40
    orr r0, r1, r0
    strh r0, [r3]
    bx lr
}

asm void G3X_GetClipMtx(void)
{
    stmdb sp!, {r3, lr}
    ldr r2, =0x4000600
    mov r1, r0
    ldr r0, [r2]
    tst r0, #0x8000000
    mvnne r0, #0
    ldmneia sp!, {r3, pc}
    add r0, r2, #0x40
    bl MI_Copy64B
    mov r0, #0
    ldmia sp!, {r3, pc}
}

asm void G3X_GetVectorMtx(void)
{
    stmdb sp!, {r3, lr}
    ldr r2, =0x4000600
    mov r1, r0
    ldr r0, [r2]
    tst r0, #0x8000000
    mvnne r0, #0
    ldmneia sp!, {r3, pc}
    add r0, r2, #0x80
    bl MI_Copy36B
    mov r0, #0
    ldmia sp!, {r3, pc}
}

asm void G3X_SetEdgeColorTable(void)
{
    ldr r1, =0x4000330
    ldr r12, =MIi_CpuCopy16
    mov r2, #0x10
    bx r12
}

asm void G3X_SetFogTable(void)
{
    ldr r1, =0x4000360
    ldr r12, =MI_Copy32B
    bx r12
}

asm void G3X_SetToonTable(void)
{
    ldr r1, =0x4000380
    ldr r12, =MIi_CpuCopy16
    mov r2, #0x40
    bx r12
}

asm void G3X_SetClearColor(void)
{
    ldr r12, [sp]
    orr r0, r0, r1, lsl #16
    orr r1, r0, r3, lsl #24
    cmp r12, #0
    ldr r0, =0x4000350
    orrne r1, r1, #0x8000
    str r1, [r0]
    strh r2, [r0, #4]
    bx lr
}

asm void G3X_InitTable(void)
{
    stmdb sp!, {r4, r5, r6, r7, lr}
    sub sp, sp, #0xc
    ldr r4, =GXi_DmaId
    ldr r0, [r4]
    cmn r0, #1
    beq @L_02002cbc
    mov r7, #0
    str r7, [sp]
    ldr r5, =0x4000330
    str r7, [sp, #4]
    mov r6, #1
    mov r1, r5
    mov r2, r7
    str r6, [sp, #8]
    mov r3, #0x10
    bl MIi_DmaFill32Async
    str r6, [sp]
    ldr r0, [r4]
    mov r2, r7
    add r1, r5, #0x30
    mov r3, #0x60
    bl MIi_DmaFill32
    b @L_02002ce4
@L_02002cbc:
    ldr r4, =0x4000330
    mov r5, #0
    mov r0, r5
    mov r1, r4
    mov r2, #0x10
    bl MIi_CpuClear32
    mov r0, r5
    add r1, r4, #0x30
    mov r2, #0x60
    bl MIi_CpuClear32
@L_02002ce4:
    mov r2, #0
    ldr r0, =0x40004d0
    mov r1, r2
@L_02002cf0:
    add r2, r2, #1
    str r1, [r0]
    cmp r2, #0x20
    blt @L_02002cf0
    add sp, sp, #0xc
    ldmia sp!, {r4, r5, r6, r7, pc}
}

asm void G3X_GetMtxStackLevelPV(void)
{
    ldr r2, =0x4000600
    ldr r1, [r2]
    tst r1, #0x4000
    ldreq r1, [r2]
    mvnne r0, #0
    andeq r1, r1, #0x1f00
    moveq r1, r1, lsr #8
    streq r1, [r0]
    moveq r0, #0
    bx lr
}

asm void G3X_GetMtxStackLevelPJ(void)
{
    ldr r2, =0x4000600
    ldr r1, [r2]
    tst r1, #0x4000
    ldreq r1, [r2]
    mvnne r0, #0
    andeq r1, r1, #0x2000
    moveq r1, r1, lsr #0xd
    streq r1, [r0]
    moveq r0, #0
    bx lr
}

asm void G3X_GetBoxTestResult(void)
{
    ldr r2, =0x4000600
    ldr r1, [r2]
    tst r1, #1
    ldreq r1, [r2]
    mvnne r0, #0
    andeq r1, r1, #2
    streq r1, [r0]
    moveq r0, #0
    bx lr
}

asm void GXi_NopClearFifo128_(void)
{
    mov r1, #0
    mov r2, #0
    mov r3, #0
    mov r12, #0
    stmia r0, {r1, r2, r3, r12}
    stmia r0, {r1, r2, r3, r12}
    stmia r0, {r1, r2, r3, r12}
    stmia r0, {r1, r2, r3, r12}
    stmia r0, {r1, r2, r3, r12}
    stmia r0, {r1, r2, r3, r12}
    stmia r0, {r1, r2, r3, r12}
    stmia r0, {r1, r2, r3, r12}
    stmia r0, {r1, r2, r3, r12}
    stmia r0, {r1, r2, r3, r12}
    stmia r0, {r1, r2, r3, r12}
    stmia r0, {r1, r2, r3, r12}
    stmia r0, {r1, r2, r3, r12}
    stmia r0, {r1, r2, r3, r12}
    stmia r0, {r1, r2, r3, r12}
    stmia r0, {r1, r2, r3, r12}
    stmia r0, {r1, r2, r3, r12}
    stmia r0, {r1, r2, r3, r12}
    stmia r0, {r1, r2, r3, r12}
    stmia r0, {r1, r2, r3, r12}
    stmia r0, {r1, r2, r3, r12}
    stmia r0, {r1, r2, r3, r12}
    stmia r0, {r1, r2, r3, r12}
    stmia r0, {r1, r2, r3, r12}
    stmia r0, {r1, r2, r3, r12}
    stmia r0, {r1, r2, r3, r12}
    stmia r0, {r1, r2, r3, r12}
    stmia r0, {r1, r2, r3, r12}
    stmia r0, {r1, r2, r3, r12}
    stmia r0, {r1, r2, r3, r12}
    stmia r0, {r1, r2, r3, r12}
    stmia r0, {r1, r2, r3, r12}
    bx lr
}
