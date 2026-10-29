// (asm for now)

asm void NNS_FndInitList(void)
{
    mov r2, #0
    str r2, [r0]
    str r2, [r0, #4]
    strh r2, [r0, #8]
    strh r1, [r0, #0xa]
    bx lr
}

asm void func_020326cc(void)
{
    ldrh r3, [r0, #0xa]
    mov r2, #0
    add r12, r1, r3
    str r2, [r12, #4]
    str r2, [r1, r3]
    ldrh r2, [r0, #8]
    str r1, [r0]
    str r1, [r0, #4]
    add r1, r2, #1
    strh r1, [r0, #8]
    bx lr
}

asm void func_020326f8(void)
{
    stmdb sp!, {r3, lr}
    ldr r2, [r0]
    cmp r2, #0
    bne @L_02032710
    bl func_020326cc
    ldmia sp!, {r3, pc}
@L_02032710:
    ldrh r12, [r0, #0xa]
    ldr r3, [r0, #4]
    mov r2, #0
    str r3, [r1, r12]
    add r3, r1, r12
    str r2, [r3, #4]
    ldrh r2, [r0, #0xa]
    ldr r3, [r0, #4]
    add r2, r3, r2
    str r1, [r2, #4]
    ldrh r2, [r0, #8]
    str r1, [r0, #4]
    add r1, r2, #1
    strh r1, [r0, #8]
    ldmia sp!, {r3, pc}
}

asm void func_0203274c(void)
{
    stmdb sp!, {r3, lr}
    ldr r2, [r0]
    cmp r2, #0
    bne @L_02032764
    bl func_020326cc
    ldmia sp!, {r3, pc}
@L_02032764:
    ldrh r3, [r0, #0xa]
    mov r2, #0
    str r2, [r1, r3]
    ldr r2, [r0]
    add r3, r1, r3
    str r2, [r3, #4]
    ldrh r2, [r0, #0xa]
    ldr r3, [r0]
    str r1, [r3, r2]
    ldrh r2, [r0, #8]
    str r1, [r0]
    add r1, r2, #1
    strh r1, [r0, #8]
    ldmia sp!, {r3, pc}
}

asm void NNS_FndInsertListObject(void)
{
    stmdb sp!, {r3, lr}
    cmp r1, #0
    bne @L_020327b4
    mov r1, r2
    bl func_020326f8
    ldmia sp!, {r3, pc}
@L_020327b4:
    ldr r3, [r0]
    cmp r1, r3
    bne @L_020327cc
    mov r1, r2
    bl func_0203274c
    ldmia sp!, {r3, pc}
@L_020327cc:
    ldrh lr, [r0, #0xa]
    ldr r3, [r1, lr]
    add r12, r2, lr
    str r3, [r2, lr]
    str r1, [r12, #4]
    add r3, r3, lr
    str r2, [r3, #4]
    ldrh r3, [r0, #0xa]
    str r2, [r1, r3]
    ldrh r1, [r0, #8]
    add r1, r1, #1
    strh r1, [r0, #8]
    ldmia sp!, {r3, pc}
}

asm void NNS_FndRemoveListObject(void)
{
    stmdb sp!, {r3, lr}
    ldrh r12, [r0, #0xa]
    ldr r3, [r1, r12]
    add lr, r1, r12
    cmp r3, #0
    ldreq r1, [lr, #4]
    streq r1, [r0]
    ldrne r2, [lr, #4]
    addne r1, r3, r12
    strne r2, [r1, #4]
    ldr r3, [lr, #4]
    cmp r3, #0
    ldreq r1, [lr]
    streq r1, [r0, #4]
    ldrneh r1, [r0, #0xa]
    ldrne r2, [lr]
    strne r2, [r3, r1]
    mov r1, #0
    str r1, [lr]
    str r1, [lr, #4]
    ldrh r1, [r0, #8]
    sub r1, r1, #1
    strh r1, [r0, #8]
    ldmia sp!, {r3, pc}
}

asm void NNS_FndGetNextListObject(void)
{
    cmp r1, #0
    ldreq r0, [r0]
    ldrneh r0, [r0, #0xa]
    addne r0, r1, r0
    ldrne r0, [r0, #4]
    bx lr
}

asm void func_02032878(void)
{
    cmp r1, #0
    ldreq r0, [r0, #4]
    ldrneh r0, [r0, #0xa]
    ldrne r0, [r1, r0]
    bx lr
}

asm void NNS_FndGetNthListObject(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r4, #0
    mov r5, r1
    mov r1, r4
    mov r6, r0
    bl NNS_FndGetNextListObject
    movs r1, r0
    beq @L_020328cc
@L_020328ac:
    cmp r4, r5
    moveq r0, r1
    ldmeqia sp!, {r4, r5, r6, pc}
    mov r0, r6
    add r4, r4, #1
    bl NNS_FndGetNextListObject
    movs r1, r0
    bne @L_020328ac
@L_020328cc:
    mov r0, #0
    ldmia sp!, {r4, r5, r6, pc}
}
