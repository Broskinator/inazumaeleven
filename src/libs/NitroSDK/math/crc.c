// (asm for now)

asm void MATHi_CRC16InitTableRev(void)
{
    stmdb sp!, {r3, lr}
    mov lr, #0
    mov r3, lr
@L_02016684:
    mov r12, lr
    mov r2, r3
@L_0201668c:
    tst r12, #1
    eorne r12, r1, r12, lsr #1
    add r2, r2, #1
    moveq r12, r12, lsr #1
    cmp r2, #8
    blo @L_0201668c
    mov r2, lr, lsl #1
    add lr, lr, #1
    strh r12, [r0, r2]
    cmp lr, #0x100
    blo @L_02016684
    ldmia sp!, {r3, pc}
}

asm void MATHi_CRC16UpdateRev(void)
{
    stmdb sp!, {r4, lr}
    cmp r3, #0
    ldrh lr, [r1]
    mov r4, #0
    bls @L_020166f4
@L_020166d0:
    ldrb r12, [r2], #1
    add r4, r4, #1
    cmp r4, r3
    eor r12, lr, r12
    mov r12, r12, lsl #0x18
    mov r12, r12, lsr #0x17
    ldrh r12, [r0, r12]
    eor lr, r12, lr, lsr #8
    blo @L_020166d0
@L_020166f4:
    strh lr, [r1]
    ldmia sp!, {r4, pc}
}

asm void MATH_CalcCRC16(void)
{
    stmdb sp!, {r3, lr}
    mov lr, r1
    mov r12, #0
    mov r3, r2
    add r1, sp, #0
    mov r2, lr
    strh r12, [sp]
    bl MATHi_CRC16UpdateRev
    ldrh r0, [sp]
    ldmia sp!, {r3, pc}
}
