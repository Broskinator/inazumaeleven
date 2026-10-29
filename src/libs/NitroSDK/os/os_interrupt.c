// (asm for now)

extern char data_027e0060[];
extern char data_027e0000[];
extern char data_020bb09c[];
extern char data_020bb0a4[];
extern char data_020bb0a0[];
extern char data_020bb0cc[];
extern char data_020bb0d4[];
extern char data_020bb0d0[];
extern char data_020bb0fc[];
void func_0200878c(void);

asm void OS_InitIrqTable(void)
{
    ldr r0, =data_027e0060
    mov r1, #0
    str r1, [r0, #4]
    str r1, [r0]
    bx lr
}

asm void OS_SetIrqFunction(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    mov r8, #0
    mov r2, #0xc
    ldr r4, =data_027e0000
    ldr r6, =data_020bb09c
    mov r7, r8
    mov lr, r8
    mov r12, #1
    mov r3, r2
@L_020052c4:
    tst r0, #1
    beq @L_0200530c
    mov r9, r7
    cmp r8, #8
    blt @L_020052e8
    cmp r8, #0xb
    suble r5, r8, #8
    mlale r9, r5, r3, r6
    ble @L_02005304
@L_020052e8:
    cmp r8, #3
    blt @L_02005300
    cmp r8, #6
    addle r5, r8, #1
    mlale r9, r5, r2, r6
    ble @L_02005304
@L_02005300:
    str r1, [r4, r8, lsl #2]
@L_02005304:
    cmp r9, #0
    stmneia r9, {r1, r12, lr}
@L_0200530c:
    add r8, r8, #1
    cmp r8, #0x16
    mov r0, r0, lsr #1
    blt @L_020052c4
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

asm void OS_GetIrqFunction(void)
{
    ldr r2, =data_027e0000
    mov r1, #0
@L_02005330:
    tst r0, #1
    beq @L_02005390
    cmp r1, #8
    blt @L_02005360
    cmp r1, #0xb
    bgt @L_02005360
    sub r1, r1, #8
    mov r0, #0xc
    mul r2, r1, r0
    ldr r0, =data_020bb09c
    ldr r0, [r0, r2]
    bx lr
@L_02005360:
    cmp r1, #3
    blt @L_02005388
    cmp r1, #6
    bgt @L_02005388
    add r1, r1, #1
    mov r0, #0xc
    mul r2, r1, r0
    ldr r0, =data_020bb09c
    ldr r0, [r0, r2]
    bx lr
@L_02005388:
    ldr r0, [r2]
    bx lr
@L_02005390:
    add r1, r1, #1
    cmp r1, #0x16
    mov r0, r0, lsr #1
    add r2, r2, #4
    blt @L_02005330
    mov r0, #0
    bx lr
}

asm void OSi_EnterDmaCallback(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r3, #0xc
    mul r6, r0, r3
    ldr r12, =data_020bb09c
    add r4, r0, #8
    mov r5, #1
    mov r0, r5, lsl r4
    ldr r3, =data_020bb0a4
    str r1, [r12, r6]
    str r2, [r3, r6]
    bl OS_EnableIrqMask
    and r1, r0, r5, lsl r4
    ldr r0, =data_020bb0a0
    str r1, [r0, r6]
    ldmia sp!, {r4, r5, r6, pc}
}

asm void func_020053fc(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r3, #0xc
    mul r5, r0, r3
    ldr r12, =data_020bb0cc
    add r0, r0, #3
    mov r4, #1
    mov r0, r4, lsl r0
    ldr r3, =data_020bb0d4
    str r1, [r12, r5]
    str r2, [r3, r5]
    bl OS_EnableIrqMask
    ldr r0, =data_020bb0d0
    str r4, [r0, r5]
    ldmia sp!, {r3, r4, r5, pc}
}

asm void OS_SetIrqMask(void)
{
    ldr r3, =0x4000208
    mov r1, #0
    ldrh r2, [r3]
    strh r1, [r3]
    ldr r1, [r3, #8]
    str r0, [r3, #8]
    ldrh r0, [r3]
    mov r0, r1
    strh r2, [r3]
    bx lr
}

asm void OS_EnableIrqMask(void)
{
    ldr r3, =0x4000208
    mov r1, #0
    ldrh r2, [r3]
    strh r1, [r3]
    ldr r1, [r3, #8]
    orr r0, r1, r0
    str r0, [r3, #8]
    ldrh r0, [r3]
    mov r0, r1
    strh r2, [r3]
    bx lr
}

asm void OS_DisableIrqMask(void)
{
    ldr r12, =0x4000208
    mov r2, #0
    ldrh r3, [r12]
    mvn r1, r0
    strh r2, [r12]
    ldr r0, [r12, #8]
    and r1, r0, r1
    str r1, [r12, #8]
    ldrh r1, [r12]
    strh r3, [r12]
    bx lr
}

asm void OS_ResetRequestIrqMask(void)
{
    ldr r3, =0x4000208
    mov r1, #0
    ldrh r2, [r3]
    strh r1, [r3]
    ldr r1, [r3, #0xc]
    str r0, [r3, #0xc]
    ldrh r0, [r3]
    mov r0, r1
    strh r2, [r3]
    bx lr
}

asm void OS_SetIrqStackChecker(void)
{
    ldr r12, =data_027e0000
    ldr r3, =0xfddb597d
    add r0, r12, #0x3000
    ldr r2, =0x7bf9dd5b
    ldr r1, =0x400
    str r3, [r0, #0xf7c]
    add r0, r12, #0x3f80
    str r2, [r0, -r1]
    bx lr
}

asm void func_0200552c(void)
{
    ldr r0, =data_020bb0fc
    ldrh r0, [r0]
    bx lr
}

asm void func_0200553c(void)
{
    stmdb sp!, {r3, lr}
    and r0, r1, #0x7f00
    mov r0, r0, lsl #8
    mov r0, r0, lsr #0x10
    cmp r0, #0x10
    ldreq r0, =data_020bb0fc
    moveq r1, #1
    streqh r1, [r0]
    ldmeqia sp!, {r3, pc}
    bl func_0200878c
    ldmia sp!, {r3, pc}
}
