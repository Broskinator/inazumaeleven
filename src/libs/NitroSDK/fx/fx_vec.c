// (asm for now)

void VEC_DotProduct(void);
void func_02001fa4(void);
void func_02002024(void);
void func_02002084(void);
void func_02002198(void);
void func_020021f0(void);
void func_0200226c(void);
void func_020023fc(void);
void func_02002400(void);

void func_02001d60(void);
extern char data_020a3cf8[];
void GX_InitGXState(void);
extern char data_020bb040[];
void OS_GetLockID(void);
void func_0200878c(void);
extern char data_020aad60[];
void func_020088e0(void);
void func_0200919c(void);

asm void VEC_DotProduct(void)
{
    stmdb sp!, {r4, lr}
    ldr r3, [r0, #4]
    ldr r2, [r1, #4]
    ldr r12, [r0]
    smull r4, lr, r3, r2
    ldr r2, [r1]
    ldr r3, [r0, #8]
    smlal r4, lr, r12, r2
    ldr r0, [r1, #8]
    smlal r4, lr, r3, r0
    adds r0, r4, #0x800
    adc r1, lr, #0
    mov r0, r0, lsr #0xc
    orr r0, r0, r1, lsl #20
    ldmia sp!, {r4, pc}
}

asm void func_02001fa4(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    ldmia r0, {r5, lr}
    ldr r6, [r1, #8]
    ldr r0, [r0, #8]
    ldmia r1, {r4, r12}
    smull r8, r7, lr, r6
    smull r3, r1, r0, r12
    subs r3, r8, r3
    sbc r1, r7, r1
    adds r3, r3, #0x800
    smull r8, r7, r0, r4
    smull r6, r0, r5, r6
    adc r1, r1, #0
    subs r6, r8, r6
    mov r3, r3, lsr #0xc
    sbc r7, r7, r0
    adds r0, r6, #0x800
    orr r3, r3, r1, lsl #20
    smull r12, r6, r5, r12
    smull r4, r1, lr, r4
    adc r5, r7, #0
    subs r4, r12, r4
    sbc r1, r6, r1
    mov r6, r0, lsr #0xc
    adds r4, r4, #0x800
    orr r6, r6, r5, lsl #20
    adc r0, r1, #0
    mov r1, r4, lsr #0xc
    stmia r2, {r3, r6}
    orr r1, r1, r0, lsl #20
    str r1, [r2, #8]
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

asm void func_02002024(void)
{
    ldr r1, [r0, #4]
    ldr r2, [r0]
    smull r12, r3, r1, r1
    smlal r12, r3, r2, r2
    ldr r0, [r0, #8]
    ldr r1, =0x40002b0
    smlal r12, r3, r0, r0
    mov r2, #1
    mov r0, r3, lsl #2
    strh r2, [r1]
    mov r2, r12, lsl #2
    str r2, [r1, #8]
    orr r0, r0, r12, lsr #30
    str r0, [r1, #0xc]
@L_0200205c:
    ldrh r0, [r1]
    tst r0, #0x8000
    bne @L_0200205c
    ldr r0, =0x40002b4
    ldr r0, [r0]
    add r0, r0, #1
    mov r0, r0, asr #1
    bx lr
}

asm void func_02002084(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    ldr r2, [r0, #4]
    ldr r3, [r0]
    smull r6, r7, r2, r2
    smlal r6, r7, r3, r3
    ldr r2, [r0, #8]
    ldr r5, =0x4000280
    smlal r6, r7, r2, r2
    mov r3, #2
    strh r3, [r5]
    mov r4, #0
    str r4, [r5, #0x10]
    mov r3, #0x1000000
    str r3, [r5, #0x14]
    str r6, [r5, #0x18]
    mov r2, r7, lsl #2
    str r7, [r5, #0x1c]
    mov r3, #1
    strh r3, [r5, #0x30]
    mov r4, r6, lsl #2
    str r4, [r5, #0x38]
    orr r2, r2, r6, lsr #30
    str r2, [r5, #0x3c]
@L_020020e0:
    ldrh r2, [r5, #0x30]
    tst r2, #0x8000
    bne @L_020020e0
    ldr r2, =0x40002b4
    ldr r12, [r2]
    sub r3, r2, #0x34
@L_020020f8:
    ldrh r2, [r3]
    tst r2, #0x8000
    bne @L_020020f8
    ldr r7, =0x40002a0
    ldr r8, [r0]
    ldr r6, [r7]
    ldmib r0, {r5, lr}
    umull r3, r2, r6, r12
    mov r0, r12, asr #0x1f
    mla r2, r6, r0, r2
    ldr r11, [r7, #4]
    umull r10, r9, r3, r8
    mov r4, r8, asr #0x1f
    mla r2, r11, r12, r2
    mla r9, r3, r4, r9
    mla r9, r2, r8, r9
    mov r0, r5, asr #0x1f
    umull r7, r6, r3, r5
    mla r6, r3, r0, r6
    adds r10, r10, #0
    adc r0, r9, #0x1000
    mov r4, r0, asr #0xd
    str r4, [r1]
    mov r0, lr, asr #0x1f
    umull r4, r12, r3, lr
    mla r12, r3, r0, r12
    mla r6, r2, r5, r6
    adds r0, r7, #0
    adc r0, r6, #0x1000
    mov r3, r0, asr #0xd
    mla r12, r2, lr, r12
    adds r0, r4, #0
    adc r0, r12, #0x1000
    mov r0, r0, asr #0xd
    str r3, [r1, #4]
    str r0, [r1, #8]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

asm void func_02002198(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    ldmia r1, {r4, r12}
    smull r6, r5, r0, r4
    smull r4, lr, r0, r12
    ldr r1, [r1, #8]
    mov r6, r6, lsr #0xc
    smull r12, r1, r0, r1
    mov r0, r12, lsr #0xc
    mov r4, r4, lsr #0xc
    ldr r12, [r2]
    orr r6, r6, r5, lsl #20
    add r5, r12, r6
    ldr r12, [r2, #4]
    orr r4, r4, lr, lsl #20
    add r4, r12, r4
    ldr r2, [r2, #8]
    orr r0, r0, r1, lsl #20
    add r0, r2, r0
    str r5, [r3]
    str r4, [r3, #4]
    str r0, [r3, #8]
    ldmia sp!, {r4, r5, r6, pc}
}

asm void func_020021f0(void)
{
    stmdb sp!, {r4, lr}
    ldr r3, [r0, #4]
    ldr r2, [r1, #4]
    ldr r4, [r0]
    sub r2, r3, r2
    smull r12, r3, r2, r2
    ldr lr, [r1]
    ldr r2, [r0, #8]
    sub r4, r4, lr
    ldr r0, [r1, #8]
    smlal r12, r3, r4, r4
    sub r0, r2, r0
    smlal r12, r3, r0, r0
    mov r0, r3, lsl #2
    ldr r1, =0x40002b0
    mov r2, #1
    strh r2, [r1]
    mov r2, r12, lsl #2
    str r2, [r1, #8]
    orr r0, r0, r12, lsr #30
    str r0, [r1, #0xc]
@L_02002244:
    ldrh r0, [r1]
    tst r0, #0x8000
    bne @L_02002244
    ldr r0, =0x40002b4
    ldr r0, [r0]
    add r0, r0, #1
    mov r0, r0, asr #1
    ldmia sp!, {r4, pc}
}

asm void func_0200226c(void)
{
    stmdb sp!, {r4, lr}
    cmp r0, #0
    ble @L_020022f0
    cmp r1, #0
    ble @L_020022b0
    cmp r1, r0
    movgt r2, r0
    movgt r4, #0
    movgt r0, #1
    bgt @L_02002398
    movlt r2, r1
    movlt r1, r0
    movlt r4, #0x4000
    movlt r0, #0
    blt @L_02002398
    mov r0, #0x2000
    ldmia sp!, {r4, pc}
@L_020022b0:
    bge @L_020022e8
    rsb r1, r1, #0
    cmp r1, r0
    movlt r2, r1
    movlt r1, r0
    movlt r4, #0x4000
    movlt r0, #1
    blt @L_02002398
    movgt r2, r0
    movgt r4, #0x8000
    movgt r0, #0
    bgt @L_02002398
    mov r0, #0x6000
    ldmia sp!, {r4, pc}
@L_020022e8:
    mov r0, #0x4000
    ldmia sp!, {r4, pc}
@L_020022f0:
    bge @L_02002388
    cmp r1, #0
    rsb r0, r0, #0
    bge @L_02002340
    rsb r1, r1, #0
    cmp r1, r0
    movgt r4, #0x8000
    movgt r2, r0
    rsbgt r4, r4, #0
    movgt r0, #1
    bgt @L_02002398
    bge @L_02002338
    mov r4, #0x4000
    mov r2, r1
    mov r1, r0
    rsb r4, r4, #0
    mov r0, #0
    b @L_02002398
@L_02002338:
    mov r0, #0xa000
    ldmia sp!, {r4, pc}
@L_02002340:
    cmp r1, #0
    ble @L_02002380
    cmp r1, r0
    bge @L_02002368
    mov r4, #0x4000
    mov r2, r1
    mov r1, r0
    rsb r4, r4, #0
    mov r0, #1
    b @L_02002398
@L_02002368:
    movgt r4, #0
    movgt r2, r0
    movgt r0, r4
    bgt @L_02002398
    mov r0, #0xe000
    ldmia sp!, {r4, pc}
@L_02002380:
    mov r0, #0xc000
    ldmia sp!, {r4, pc}
@L_02002388:
    mov r0, #0
    cmp r1, #0
    movlt r0, #0x8000
    ldmia sp!, {r4, pc}
@L_02002398:
    cmp r1, #0
    moveq r0, #0
    ldmeqia sp!, {r4, pc}
    cmp r0, #0
    mov r0, r2
    beq @L_020023d4
    bl func_02001d60
    mov r1, r0, asr #5
    ldr r0, =data_020a3cf8
    mov r1, r1, lsl #1
    ldrsh r0, [r0, r1]
    add r0, r4, r0
    mov r0, r0, lsl #0x10
    mov r0, r0, lsr #0x10
    ldmia sp!, {r4, pc}
@L_020023d4:
    bl func_02001d60
    mov r1, r0, asr #5
    ldr r0, =data_020a3cf8
    mov r1, r1, lsl #1
    ldrsh r0, [r0, r1]
    sub r0, r4, r0
    mov r0, r0, lsl #0x10
    mov r0, r0, lsr #0x10
    ldmia sp!, {r4, pc}
}

asm void func_020023fc(void)
{
    bx lr
}

asm void func_02002400(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    ldr r1, =0x4000304
    ldr r4, =0xfffffdf1
    ldrh r0, [r1]
    orr r0, r0, #0x8000
    strh r0, [r1]
    ldrh r0, [r1]
    and r0, r0, r4
    orr r0, r0, #0xe
    orr r0, r0, #0x200
    strh r0, [r1]
    ldrh r0, [r1]
    orr r0, r0, #1
    strh r0, [r1]
    bl GX_InitGXState
    ldr r5, =data_020bb040
    ldrh r0, [r5, #2]
    cmp r0, #0
    bne @L_02002474
    add r4, r4, #0x20c
@L_02002450:
    bl OS_GetLockID
    mov r6, r0
    cmp r6, r4
    bne @L_02002464
    bl func_0200878c
@L_02002464:
    strh r6, [r5, #2]
    ldrh r0, [r5, #2]
    cmp r0, #0
    beq @L_02002450
@L_02002474:
    ldr r0, =0x4000004
    mov r7, #0
    mov r6, #0x4000000
    strh r7, [r0]
    ldr r4, =data_020aad60
    str r7, [r6]
    ldr r0, [r4, #4]
    sub r1, r6, #0x4000001
    cmp r0, r1
    beq @L_020024d4
    mov r5, #1
    mov r2, r7
    str r5, [sp]
    add r1, r6, #8
    mov r3, #0x60
    bl func_020088e0
    strh r7, [r6, #0x6c]
    str r5, [sp]
    ldr r0, [r4, #4]
    mov r2, r7
    add r1, r6, #0x1000
    mov r3, #0x70
    bl func_020088e0
    b @L_020024f8
@L_020024d4:
    mov r0, r7
    add r1, r6, #8
    mov r2, #0x60
    bl func_0200919c
    mov r0, r7
    add r1, r6, #0x1000
    mov r2, #0x70
    strh r7, [r6, #0x6c]
    bl func_0200919c
@L_020024f8:
    ldr r0, =0x4000020
    mov r2, #0x100
    strh r2, [r0]
    strh r2, [r0, #6]
    strh r2, [r0, #0x10]
    strh r2, [r0, #0x16]
    add r1, r0, #0x1000
    ldr r0, =0x4001026
    strh r2, [r1]
    strh r2, [r0]
    strh r2, [r0, #0xa]
    strh r2, [r0, #0x10]
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}
