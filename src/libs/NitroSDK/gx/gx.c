// (asm for now)

extern char data_020aad60[];
extern char data_020bb040[];
void func_02010240(void);

asm void GX_SetVCountEqVal(void)
{
    ldr r3, =0x4000004
    mov r1, r0, lsl #0x18
    ldrh r2, [r3]
    and r12, r0, #0x100
    and r0, r2, #0x3f
    orr r0, r0, r1, lsr #16
    orr r0, r0, r12, asr #1
    strh r0, [r3]
    bx lr
}

asm void func_02002570(void)
{
    ldr r3, =0x4000004
    cmp r0, #0
    ldrh r0, [r3]
    ldrneh r1, [r3]
    and r0, r0, #8
    orrne r1, r1, #8
    strneh r1, [r3]
    ldreqh r2, [r3]
    ldreq r1, =0xfff7
    andeq r1, r2, r1
    streqh r1, [r3]
    bx lr
}

asm void func_020025a8(void)
{
    ldr r0, =data_020aad60
    ldrh r0, [r0]
    bx lr
}

asm void func_020025b8(void)
{
    stmdb sp!, {r3, lr}
    mov lr, #0x4000000
    ldr r12, [lr]
    ldr r1, =data_020aad60
    and r2, r12, #0x30000
    mov r3, #0
    ldr r0, =data_020bb040
    mov r2, r2, lsr #0x10
    strh r3, [r1]
    strh r2, [r0]
    bic r0, r12, #0x30000
    str r0, [lr]
    bl func_02010240
    ldmia sp!, {r3, pc}
}

asm void func_020025f8(void)
{
    ldr r0, =data_020bb040
    ldr r1, =data_020aad60
    ldrh r2, [r0]
    mov r0, #1
    strh r0, [r1]
    mov r1, #0x4000000
    cmp r2, #0
    ldrne r0, [r1]
    bicne r0, r0, #0x30000
    orrne r0, r0, r2, lsl #16
    strne r0, [r1]
    ldreq r0, [r1]
    orreq r0, r0, #0x10000
    streq r0, [r1]
    bx lr
}

asm void GX_SetGraphicsMode(void)
{
    stmdb sp!, {r3, lr}
    ldr r3, =data_020aad60
    mov lr, #0x4000000
    ldrh r12, [r3]
    ldr lr, [lr]
    ldr r3, =data_020bb040
    cmp r12, #0
    strh r0, [r3]
    ldr r3, =0xfff0fff0
    moveq r0, #0
    and r3, lr, r3
    orr r0, r3, r0, lsl #16
    orr r0, r1, r0
    orr r1, r0, r2, lsl #3
    mov r12, #0x4000000
    ldr r0, =data_020bb040
    str r1, [r12]
    ldrh r0, [r0]
    cmp r0, #0
    ldreq r0, =data_020aad60
    moveq r1, #0
    streqh r1, [r0]
    ldmia sp!, {r3, pc}
}

asm void GXS_SetGraphicsMode(void)
{
    ldr r2, =0x4001000
    ldr r1, [r2]
    bic r1, r1, #7
    orr r0, r1, r0
    str r0, [r2]
    bx lr
}

asm void GXx_SetMasterBrightness_(void)
{
    cmp r1, #0
    moveq r1, #0
    streqh r1, [r0]
    bxeq lr
    orrgt r1, r1, #0x4000
    strgth r1, [r0]
    rsble r1, r1, #0
    orrle r1, r1, #0x8000
    strleh r1, [r0]
    bx lr
}

asm void func_020026e8(void)
{
    ldrh r1, [r0]
    and r1, r1, #0xc000
    mov r1, r1, lsl #0x10
    movs r1, r1, lsr #0x10
    moveq r0, #0
    bxeq lr
    cmp r1, #0x4000
    ldreqh r0, [r0]
    andeq r0, r0, #0x1f
    bxeq lr
    cmp r1, #0x8000
    ldreqh r0, [r0]
    andeq r0, r0, #0x1f
    rsbeq r0, r0, #0
    movne r0, #0
    bx lr
}

asm void func_02002728(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    ldr r4, [sp, #0x1c]
    ldr r5, [r1, #4]
    sub r8, r4, r3
    ldr lr, [r1, #0xc]
    mul r7, r5, r8
    ldr r4, [sp, #0x18]
    ldr r6, [r1]
    sub r12, r4, r2
    ldr r4, [r1, #8]
    mul r8, lr, r8
    mov r5, r5, lsl #0xc
    mla r1, r6, r12, r7
    mov r7, r5, asr #0x10
    mov lr, lr, lsl #0xc
    mla r12, r4, r12, r8
    mov r5, r6, lsl #0xc
    mov r6, r7, lsl #0x10
    mov r7, lr, asr #0x10
    mov r5, r5, asr #0x10
    mov lr, r6, lsr #0x10
    mov r4, r4, lsl #0xc
    mov r6, r7, lsl #0x10
    mov r7, r4, asr #0x10
    mov r4, r6, lsr #0x10
    add r2, r1, r2, lsl #12
    add r3, r12, r3, lsl #12
    mov r1, r5, lsl #0x10
    mov r5, lr, lsl #0x10
    orr r5, r5, r1, lsr #16
    mov r1, r7, lsl #0x10
    mov r4, r4, lsl #0x10
    str r5, [r0]
    orr r1, r4, r1, lsr #16
    str r1, [r0, #4]
    mov r1, r2, asr #4
    str r1, [r0, #8]
    mov r1, r3, asr #4
    str r1, [r0, #0xc]
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

asm void func_020027c8(void)
{
    cmp r2, #0
    orrlt r1, r1, #0xc0
    strlth r1, [r0]
    rsblt r1, r2, #0
    strlth r1, [r0, #4]
    orrge r1, r1, #0x80
    strgeh r1, [r0]
    strgeh r2, [r0, #4]
    bx lr
}
