// (asm for now)

void GX_SendFifo48B(void);
void func_02009280(void);
void func_020029f4(void);
void G3X_InitMtxStack(void);
void func_02002c60(void);

asm void G3_LoadMtx43(void)
{
    ldr r1, =0x4000400
    mov r2, #0x17
    ldr r12, =GX_SendFifo48B
    str r2, [r1]
    bx r12
}

asm void G3_MultMtx43(void)
{
    ldr r1, =0x4000400
    mov r2, #0x19
    ldr r12, =GX_SendFifo48B
    str r2, [r1]
    bx r12
}

asm void G3_MultMtx33(void)
{
    ldr r1, =0x4000400
    mov r2, #0x1a
    ldr r12, =func_02009280
    str r2, [r1]
    bx r12
}

asm void func_02002884(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    bl func_020029f4
    ldr r0, =0x4000504
    mov r1, #0
    str r1, [r0]
@L_02002898:
    ldr r1, [r0, #0xfc]
    tst r1, #0x8000000
    bne @L_02002898
    ldr r4, =0x4000060
    mov r5, #0
    strh r5, [r4]
    str r5, [r0, #0xfc]
    str r5, [r4, #-0x50]
    ldrh r2, [r4]
    ldr r6, =0xffffcffd
    ldr r1, =0xcffb
    orr r2, r2, #0x2000
    strh r2, [r4]
    ldrh r2, [r4]
    orr r2, r2, #0x1000
    strh r2, [r4]
    ldrh r2, [r4]
    and r2, r2, r6
    strh r2, [r4]
    ldrh r2, [r4]
    bic r2, r2, #0x3000
    orr r2, r2, #0x10
    strh r2, [r4]
    ldrh r2, [r4]
    and r1, r2, r1
    strh r1, [r4]
    ldr r1, [r0, #0xfc]
    orr r1, r1, #0x8000
    str r1, [r0, #0xfc]
    ldr r1, [r0, #0xfc]
    bic r1, r1, #0xc0000000
    orr r1, r1, #0x80000000
    str r1, [r0, #0xfc]
    bl G3X_InitMtxStack
    str r5, [r4, #0x2f0]
    mov r2, r6, lsr #0x11
    add r1, r4, #0x2f4
    ldr r0, =0x4000356
    strh r2, [r1]
    strh r5, [r0]
    str r5, [r0, #2]
    strh r5, [r0, #6]
    sub r1, r4, #0x58
    ldrh r0, [r1]
    bic r0, r0, #3
    strh r0, [r1]
    bl func_02002c60
    ldr r1, =0x1f0080
    ldr r0, =0x40004a4
    str r1, [r0]
    str r5, [r0, #4]
    str r5, [r0, #8]
    ldmia sp!, {r4, r5, r6, pc}
}
