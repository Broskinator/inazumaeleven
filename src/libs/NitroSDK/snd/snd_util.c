// (asm for now)

void SND_CalcChannelVolume(void);
void SND_AssignWaveArc(void);
void SND_DestroyBank(void);

extern char data_020a3f80[];
void SNDi_LockMutex(void);
void SNDi_UnlockMutex(void);
void DC_StoreRange(void);

asm void SND_CalcChannelVolume(void)
{
    ldr r1, =0xfffffd2d
    cmp r0, r1
    movlt r0, r1
    blt @L_0200ab74
    cmp r0, #0
    movgt r0, #0
@L_0200ab74:
    add r1, r0, #0xd3
    mvn r2, #0xef
    cmp r0, r2
    ldr r3, =data_020a3f80
    add r1, r1, #0x200
    ldrb r3, [r3, r1]
    movlt r0, #3
    blt @L_0200abb4
    add r1, r2, #0x78
    cmp r0, r1
    movlt r0, #2
    blt @L_0200abb4
    add r1, r2, #0xb4
    cmp r0, r1
    movlt r0, #1
    movge r0, #0
@L_0200abb4:
    orr r0, r3, r0, lsl #8
    mov r0, r0, lsl #0x10
    mov r0, r0, lsr #0x10
    bx lr
}

asm void SND_AssignWaveArc(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r6, r0
    mov r5, r1
    mov r4, r2
    bl SNDi_LockMutex
    add r3, r6, r5, lsl #3
    ldr r2, [r3, #0x18]
    cmp r2, #0
    beq @L_0200ac5c
    cmp r4, r2
    bne @L_0200ac00
    bl SNDi_UnlockMutex
    ldmia sp!, {r4, r5, r6, pc}
@L_0200ac00:
    add r1, r6, #0x18
    ldr r0, [r2, #0x18]
    add r12, r1, r5, lsl #3
    cmp r12, r0
    bne @L_0200ac28
    ldr r0, [r3, #0x1c]
    mov r1, #0x3c
    str r0, [r2, #0x18]
    ldr r0, [r3, #0x18]
    b @L_0200ac58
@L_0200ac28:
    cmp r0, #0
    beq @L_0200ac48
@L_0200ac30:
    ldr r1, [r0, #4]
    cmp r12, r1
    beq @L_0200ac48
    mov r0, r1
    cmp r1, #0
    bne @L_0200ac30
@L_0200ac48:
    add r1, r6, r5, lsl #3
    ldr r2, [r1, #0x1c]
    mov r1, #8
    str r2, [r0, #4]
@L_0200ac58:
    bl DC_StoreRange
@L_0200ac5c:
    add r0, r6, #0x18
    ldr r1, [r4, #0x18]
    add r0, r0, r5, lsl #3
    str r0, [r4, #0x18]
    add r0, r6, r5, lsl #3
    str r1, [r0, #0x1c]
    str r4, [r0, #0x18]
    bl SNDi_UnlockMutex
    mov r5, #0x3c
    mov r0, r6
    mov r1, r5
    bl DC_StoreRange
    mov r0, r4
    mov r1, r5
    bl DC_StoreRange
    ldmia sp!, {r4, r5, r6, pc}
}

asm void SND_DestroyBank(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    mov r7, r0
    bl SNDi_LockMutex
    mov r6, #0
    add r5, r7, #0x18
    mov r8, #8
    mov r4, #0x3c
@L_0200acb8:
    add r1, r7, r6, lsl #3
    ldr r0, [r1, #0x18]
    cmp r0, #0
    beq @L_0200ad20
    ldr r3, [r0, #0x18]
    add r2, r5, r6, lsl #3
    cmp r2, r3
    bne @L_0200ace8
    ldr r2, [r1, #0x1c]
    mov r1, r4
    str r2, [r0, #0x18]
    b @L_0200ad1c
@L_0200ace8:
    cmp r3, #0
    beq @L_0200ad08
@L_0200acf0:
    ldr r0, [r3, #4]
    cmp r2, r0
    beq @L_0200ad08
    mov r3, r0
    cmp r0, #0
    bne @L_0200acf0
@L_0200ad08:
    add r0, r7, r6, lsl #3
    ldr r2, [r0, #0x1c]
    mov r0, r3
    mov r1, r8
    str r2, [r3, #4]
@L_0200ad1c:
    bl DC_StoreRange
@L_0200ad20:
    add r6, r6, #1
    cmp r6, #4
    blt @L_0200acb8
    bl SNDi_UnlockMutex
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}
