// (asm for now)

extern char data_020c2380[];
extern char data_020aad64[];
void func_0202b4c4(void);
extern char data_020c2384[];
void func_02009080(void);
void func_02008e80(void);
void MIi_CpuCopyFast(void);
void MIi_CpuSend32(void);
void G3X_GetClipMtx(void);
void MTX_Copy44To43_(void);
void G3X_GetVectorMtx(void);

asm void NNS_G3dGeWaitSendDL(void)
{
    ldr r0, =data_020c2380
@L_0202b520:
    ldr r1, [r0, #4]
    cmp r1, #0
    bne @L_0202b520
    bx lr
}

asm void func_0202b534(void)
{
    mov r1, #0
    str r1, [r0]
    bx lr
}

asm void func_0202b540(void)
{
    ldr r1, =data_020c2380
    str r0, [r1, #8]
    bx lr
}

asm void func_0202b550(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r4, r1
    mov r5, r0
    cmp r4, #0x100
    blo @L_0202b578
    ldr r7, =data_020aad64
    mvn r6, #0
    ldr r0, [r7]
    cmp r0, r6
    bne @L_0202b590
@L_0202b578:
    mov r2, r4, lsr #2
    ldr r0, [r5]
    add r1, r5, #4
    sub r2, r2, #1
    bl func_0202b608
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_0202b590:
    bl func_0202b4c4
    ldr r0, =data_020c2380
    mov r1, #1
    str r1, [r0, #4]
    ldr r0, [r0, #8]
    cmp r0, #0
    ldr r0, [r7]
    beq @L_0202b5d4
    cmp r0, #3
    movhi r0, r6
    ldr r6, =data_020c2384
    ldr r3, =func_0202b534
    mov r1, r5
    mov r2, r4
    str r6, [sp]
    bl func_02009080
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_0202b5d4:
    cmp r0, #3
    movhi r0, r6
    ldr r6, =data_020c2384
    ldr r3, =func_0202b534
    mov r1, r5
    mov r2, r4
    str r6, [sp]
    bl func_02008e80
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

asm void func_0202b608(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    ldr r7, =data_020c2380
    mov r6, r0
    ldr r3, [r7]
    mov r5, r1
    mov r4, r2
    cmp r3, #0
    beq @L_0202b6b4
    ldr r0, [r7, #4]
    cmp r0, #0
    beq @L_0202b68c
    ldr r2, [r3]
    add r0, r2, #1
    add r1, r0, r4
    cmp r1, #0xc0
    bhi @L_0202b68c
    str r0, [r3]
    ldr r0, [r7]
    cmp r4, #0
    add r0, r0, r2, lsl #2
    str r6, [r0, #4]
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    ldr r2, [r7]
    mov r0, r5
    ldr r1, [r2], #4
    add r1, r2, r1, lsl #2
    mov r2, r4, lsl #2
    bl MIi_CpuCopyFast
    ldr r1, [r7]
    ldr r0, [r1]
    add r0, r0, r4
    str r0, [r1]
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_0202b68c:
    ldr r0, [r3]
    cmp r0, #0
    beq @L_0202b6a0
    bl func_0202b4c4
    b @L_0202b6c4
@L_0202b6a0:
    ldr r0, =data_020c2380
    ldr r0, [r0, #4]
    cmp r0, #0
    beq @L_0202b6c4
    b @L_0202b6c0
@L_0202b6b4:
    ldr r0, [r7, #4]
    cmp r0, #0
    beq @L_0202b6c4
@L_0202b6c0:
    bl NNS_G3dGeWaitSendDL
@L_0202b6c4:
    ldr r1, =0x4000400
    mov r0, r5
    mov r2, r4, lsl #2
    str r6, [r1]
    bl MIi_CpuSend32
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

asm void func_0202b6e4(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    sub sp, sp, #0x40
    mov r6, r0
    mov r5, r1
    bl func_0202b4c4
    ldr r0, =0x4000440
    mov r1, #0
    str r1, [r0]
    str r1, [r0, #4]
    str r1, [r0, #0x14]
    cmp r6, #0
    beq @L_0202b734
    add r4, sp, #0
@L_0202b718:
    mov r0, r4
    bl G3X_GetClipMtx
    cmp r0, #0
    bne @L_0202b718
    mov r0, r4
    mov r1, r6
    bl MTX_Copy44To43_
@L_0202b734:
    cmp r5, #0
    beq @L_0202b74c
@L_0202b73c:
    mov r0, r5
    bl G3X_GetVectorMtx
    cmp r0, #0
    bne @L_0202b73c
@L_0202b74c:
    ldr r1, =0x4000448
    mov r0, #1
    str r0, [r1]
    mov r0, #2
    str r0, [r1, #-8]
    add sp, sp, #0x40
    ldmia sp!, {r4, r5, r6, pc}
}
