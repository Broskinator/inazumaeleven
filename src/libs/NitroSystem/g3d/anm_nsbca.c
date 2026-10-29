// (asm for now)

void func_0202c61c(void);
extern char data_020bf67c[];
void func_02009bc8(void);
extern char data_020a48f0[];
extern char data_020a48f1[];
extern char data_020a48f2[];
extern char data_020a48f3[];

asm void NNSi_G3dAnmCalcNsBca(void)
{
    stmdb sp!, {r3, lr}
    mov r3, r0
    ldr r0, [r1, #8]
    ldr r12, [r1]
    ldrh r1, [r0, #4]
    cmp r12, r1, lsl #12
    mov r1, r1, lsl #0xc
    subge r12, r1, #1
    bge @L_0202c368
    cmp r12, #0
    movlt r12, #0
@L_0202c368:
    mov r1, r2
    mov r2, r12
    bl func_0202c61c
    ldmia sp!, {r3, pc}
}

asm void func_0202c378(void)
{
    ldr r1, =data_020bf67c
    ldr r2, [r1]
    ldr r1, [r2]
    ldr r12, [r2, #0xd4]
    ldrb r3, [r1, #1]
    cmp r12, #0
    beq @L_0202c3d0
    beq @L_0202c3bc
    ldrb r1, [r12, #1]
    cmp r3, r1
    bhs @L_0202c3bc
    ldrh r2, [r12, #6]
    ldrh r1, [r12, r2]
    add r2, r12, r2
    add r2, r2, #4
    mla r2, r1, r3, r2
    b @L_0202c3c0
@L_0202c3bc:
    mov r2, #0
@L_0202c3c0:
    cmp r2, #0
    ldrne r1, [r2]
    addne r2, r12, r1
    bne @L_0202c3d4
@L_0202c3d0:
    mov r2, #0
@L_0202c3d4:
    ldrh r1, [r2]
    tst r1, #1
    ldrne r1, [r0]
    orrne r1, r1, #4
    strne r1, [r0]
    bxne lr
    ldr r1, [r2, #4]
    str r1, [r0, #0x4c]
    ldr r1, [r2, #8]
    str r1, [r0, #0x50]
    ldr r1, [r2, #0xc]
    str r1, [r0, #0x54]
    bx lr
}

asm void getMdlScale_(void)
{
    stmdb sp!, {r4, lr}
    ldr r1, =data_020bf67c
    ldr r12, [r1]
    ldr r2, [r12]
    ldr r4, [r12, #0xd4]
    ldrb lr, [r2, #1]
    cmp r4, #0
    beq @L_0202c468
    beq @L_0202c454
    ldrb r1, [r4, #1]
    cmp lr, r1
    bhs @L_0202c454
    ldrh r3, [r4, #6]
    ldrh r1, [r4, r3]
    add r3, r4, r3
    add r3, r3, #4
    mla r3, r1, lr, r3
    b @L_0202c458
@L_0202c454:
    mov r3, #0
@L_0202c458:
    cmp r3, #0
    ldrne r1, [r3]
    addne r1, r4, r1
    bne @L_0202c46c
@L_0202c468:
    mov r1, #0
@L_0202c46c:
    ldrh r3, [r1], #4
    tst r3, #1
    addeq r1, r1, #0xc
    tst r3, #2
    bne @L_0202c48c
    tst r3, #8
    addne r1, r1, #4
    addeq r1, r1, #0x10
@L_0202c48c:
    ldr r12, [r12, #0xe8]
    blx r12
    ldmia sp!, {r4, pc}
}

asm void getMdlRot_(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    ldr r1, =data_020bf67c
    mov r8, r0
    ldr r1, [r1]
    ldr r0, [r1]
    ldr r3, [r1, #0xd4]
    ldrb r2, [r0, #1]
    cmp r3, #0
    beq @L_0202c4fc
    beq @L_0202c4e8
    ldrb r0, [r3, #1]
    cmp r2, r0
    bhs @L_0202c4e8
    ldrh r1, [r3, #6]
    ldrh r0, [r3, r1]
    add r1, r3, r1
    add r1, r1, #4
    mla r1, r0, r2, r1
    b @L_0202c4ec
@L_0202c4e8:
    mov r1, #0
@L_0202c4ec:
    cmp r1, #0
    ldrne r0, [r1]
    addne r5, r3, r0
    bne @L_0202c500
@L_0202c4fc:
    mov r5, #0
@L_0202c500:
    ldrh r0, [r5]
    add r1, r5, #4
    tst r0, #1
    addeq r1, r1, #0xc
    tst r0, #2
    bne @L_0202c5f8
    tst r0, #8
    beq @L_0202c5ac
    and r2, r0, #0xf0
    add r0, r8, #0x28
    mov r4, r2, asr #4
    ldrsh r7, [r1]
    ldrsh r6, [r1, #2]
    bl func_02009bc8
    ldrh r0, [r5]
    ldr r1, =data_020a48f0
    mov r3, #0x1000
    tst r0, #0x100
    ldr r0, =data_020a48f1
    ldrb r1, [r1, r4, lsl #2]
    ldrb r0, [r0, r4, lsl #2]
    rsbne r3, r3, #0
    add r2, r8, r4, lsl #2
    str r3, [r2, #0x28]
    add r1, r8, r1, lsl #2
    str r7, [r1, #0x28]
    add r0, r8, r0, lsl #2
    str r6, [r0, #0x28]
    ldrh r0, [r5]
    tst r0, #0x200
    ldr r0, =data_020a48f2
    rsbne r6, r6, #0
    ldrb r0, [r0, r4, lsl #2]
    add r0, r8, r0, lsl #2
    str r6, [r0, #0x28]
    ldrh r0, [r5]
    tst r0, #0x400
    ldr r0, =data_020a48f3
    rsbne r7, r7, #0
    ldrb r0, [r0, r4, lsl #2]
    add r0, r8, r0, lsl #2
    str r7, [r0, #0x28]
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_0202c5ac:
    ldrsh r0, [r5, #2]
    str r0, [r8, #0x28]
    ldrsh r0, [r1]
    str r0, [r8, #0x2c]
    ldrsh r0, [r1, #2]
    str r0, [r8, #0x30]
    ldrsh r0, [r1, #4]
    str r0, [r8, #0x34]
    ldrsh r0, [r1, #6]
    str r0, [r8, #0x38]
    ldrsh r0, [r1, #8]
    str r0, [r8, #0x3c]
    ldrsh r0, [r1, #0xa]
    str r0, [r8, #0x40]
    ldrsh r0, [r1, #0xc]
    str r0, [r8, #0x44]
    ldrsh r0, [r1, #0xe]
    str r0, [r8, #0x48]
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_0202c5f8:
    ldr r0, [r8]
    orr r0, r0, #2
    str r0, [r8]
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}
