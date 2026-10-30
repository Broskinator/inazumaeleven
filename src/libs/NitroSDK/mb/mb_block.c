// (asm for now)

void MBi_SetParentPieceBuffer(void);
void func_ov089_02178eec(void);
void func_ov089_02178f2c(void);
void func_ov089_02178fa4(void);
void func_ov089_021790c0(void);
void IsGetAllRequestData(void);

extern char data_ov089_02179348[];
void MI_CpuFill8(void);
void MI_CpuCopy8(void);

asm void MBi_SetParentPieceBuffer(void)
{
    ldr r3, =data_ov089_02179348
    ldr r12, =MI_CpuFill8
    mov r1, #0
    mov r2, #0x21c
    str r0, [r3, #4]
    bx r12
}

asm void func_ov089_02178eec(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    ldr r4, =data_ov089_02179348
    ldr r2, [r4, #4]
    cmp r2, #0
    ldmeqia sp!, {r4, r5, r6, pc}
    sub r6, r0, #1
    mov r5, #0
    mov r1, r5
    add r0, r2, r6, lsl #5
    mov r2, #0x1e
    bl MI_CpuFill8
    ldr r0, [r4, #4]
    add r0, r0, r6, lsl #2
    str r5, [r0, #0x1e0]
    ldmia sp!, {r4, r5, r6, pc}
}

asm void func_ov089_02178f2c(void)
{
    ldrb r2, [r0]
    mov r12, r1
    add r12, r12, #1
    strb r2, [r1]
    cmp r2, #6
    addls pc, pc, r2, lsl #2
    b @L_02178f94
    dcd 0xea000011
    dcd 0xea000012
    dcd 0xea000011
    dcd 0xea000010
    dcd 0xea000001
    dcd 0xea00000e
    dcd 0xea00000d
    dcd 0xe1d030b2
    dcd 0xe1d010b4
    dcd 0xe2032cff
    dcd 0xe2010cff
    dcd 0xe1a02442
    dcd 0xe1a00440
    dcd 0xe5cc3000
    dcd 0xe5cc2001
    dcd 0xe5cc1002
    dcd 0xe5cc0003
    dcd 0xe28cc004
    dcd 0xea000001
@L_02178f94:
    mov r0, #0
    bx lr
    dcd 0xe1a0000c
    dcd 0xe12fff1e
}

asm void func_ov089_02178fa4(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r6, r0
    ldrb r0, [r6]
    mov r5, r1
    mov r4, r2
    strb r0, [r5]
    cmp r0, #7
    beq @L_02178fd8
    cmp r0, #8
    beq @L_02179038
    cmp r0, #9
    beq @L_02179064
    b @L_021790ac
@L_02178fd8:
    mov r0, r4
    bl IsGetAllRequestData
    cmp r0, #0
    ldrne r0, =data_ov089_02179348
    subne r1, r4, #1
    ldrne r0, [r0, #4]
    addne r0, r0, r1, lsl #5
    ldmneia sp!, {r3, r4, r5, r6, r7, pc}
    ldrb r2, [r6, #1]
    ldr r0, =data_ov089_02179348
    strb r2, [r5, #2]
    ldr r1, [r0, #0xc]
    cmp r2, r1
    movgt r0, #0
    ldmgtia sp!, {r3, r4, r5, r6, r7, pc}
    ldr r2, [r0, #8]
    add r0, r6, #2
    add r1, r5, #3
    bl MI_CpuCopy8
    mov r0, r5
    mov r1, r4
    bl func_ov089_021790c0
    mov r4, r0
    b @L_021790b4
@L_02179038:
    ldrb r0, [r6, #1]
    add r4, r6, #3
    strh r0, [r5, #2]
    ldrb r0, [r6, #2]
    ldrh r1, [r5, #2]
    mov r0, r0, lsl #8
    and r0, r0, #0xff00
    mov r0, r0, lsl #0x10
    orr r0, r1, r0, lsr #16
    strh r0, [r5, #2]
    b @L_021790b4
@L_02179064:
    ldrb r0, [r6, #1]
    add r4, r6, #3
    ldr r7, =data_ov089_02179348
    strh r0, [r5, #2]
    ldrb r1, [r6, #2]
    ldrh r2, [r5, #2]
    mov r0, r4
    mov r1, r1, lsl #8
    and r1, r1, #0xff00
    mov r1, r1, lsl #0x10
    orr r1, r2, r1, lsr #16
    strh r1, [r5, #2]
    ldr r2, [r7, #8]
    add r1, r5, #4
    bl MI_CpuCopy8
    ldr r0, [r7, #8]
    add r4, r4, r0
    b @L_021790b4
@L_021790ac:
    mov r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_021790b4:
    mov r0, r4
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

asm void func_ov089_021790c0(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    ldr r7, =data_ov089_02179348
    mov r6, r1
    ldr r3, [r7, #4]
    cmp r3, #0
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    ldrb r5, [r0, #2]
    ldr r1, [r7, #0xc]
    cmp r5, r1
    movgt r0, #0
    ldmgtia sp!, {r3, r4, r5, r6, r7, pc}
    sub r4, r6, #1
    ldr r2, [r7, #8]
    add r1, r3, r4, lsl #5
    mla r1, r5, r2, r1
    add r0, r0, #3
    bl MI_CpuCopy8
    ldr r0, [r7, #4]
    mov r1, #1
    add r3, r0, #0x1e0
    ldr r2, [r3, r4, lsl #2]
    mov r0, r6
    orr r1, r2, r1, lsl r5
    str r1, [r3, r4, lsl #2]
    bl IsGetAllRequestData
    cmp r0, #0
    ldrne r0, [r7, #4]
    addne r0, r0, r4, lsl #5
    moveq r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

asm void IsGetAllRequestData(void)
{
    ldr r1, =data_ov089_02179348
    mov r2, #0
    ldr r12, [r1, #0xc]
    cmp r12, #0
    ble @L_02179188
    ldr r1, [r1, #4]
    sub r0, r0, #1
    add r0, r1, r0, lsl #2
    ldr r3, [r0, #0x1e0]
    mov r1, #1
@L_02179168:
    tst r3, r1, lsl r2
    moveq r0, #0
    bxeq lr
    add r0, r2, #1
    mov r0, r0, lsl #0x10
    cmp r12, r0, lsr #16
    mov r2, r0, lsr #0x10
    bgt @L_02179168
@L_02179188:
    mov r0, #1
    bx lr
}
