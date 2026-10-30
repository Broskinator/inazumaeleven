// (asm for now)

void RTC_ConvertDateToDay(void);
void RTCi_ConvertTimeToSecond(void);
void func_02010ab4(void);
void RTC_GetDayOfWeek(void);
void func_02010bcc(void);
void func_02010c24(void);
void CARD_Init(void);
void func_02010d34(void);

extern char data_020aadd8[];
void func_02008894(void);
void func_02008104(void);
void func_0200585c(void);
extern char data_020bd460[];
void func_0200848c(void);
void MI_CpuCopy8(void);
extern char data_020bdaa0[];
void func_02010fa8(void);
void func_02011100(void);
void OS_CreateThread(void);
void OS_WakeupThreadDirect(void);
void func_02010fd0(void);
void func_020121b0(void);
void func_02010d5c(void);
void func_02012240(void);
extern char data_020bd3e0[];

asm void RTC_ConvertDateToDay(void)
{
    ldr r3, [r0]
    cmp r3, #0x64
    bhs @L_02010a58
    ldr r2, [r0, #4]
    cmp r2, #1
    blo @L_02010a58
    cmp r2, #0xc
    bhi @L_02010a58
    ldr r1, [r0, #8]
    cmp r1, #1
    blo @L_02010a58
    cmp r1, #0x1f
    bhi @L_02010a58
    ldr r0, [r0, #0xc]
    cmp r0, #7
    bge @L_02010a58
    cmp r2, #1
    blo @L_02010a58
    cmp r2, #0xc
    bls @L_02010a60
@L_02010a58:
    mvn r0, #0
    bx lr
@L_02010a60:
    ldr r0, =data_020aadd8
    sub r1, r1, #1
    ldr r0, [r0, r2, lsl #2]
    cmp r2, #3
    add r2, r1, r0
    blo @L_02010a80
    tst r3, #3
    addeq r2, r2, #1
@L_02010a80:
    ldr r0, =0x16d
    add r1, r3, #3
    mla r0, r3, r0, r2
    add r0, r0, r1, lsr #2
    bx lr
}

asm void RTCi_ConvertTimeToSecond(void)
{
    mov r1, #0x3c
    ldmia r0, {r2, r3}
    mla r3, r2, r1, r3
    ldr r0, [r0, #8]
    mla r0, r3, r1, r0
    bx lr
}

asm void func_02010ab4(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r6, r1
    bl RTC_ConvertDateToDay
    mov r4, r0
    mvn r5, #0
    cmp r4, r5
    moveq r0, r5
    moveq r1, r5
    ldmeqia sp!, {r4, r5, r6, pc}
    mov r0, r6
    bl RTCi_ConvertTimeToSecond
    cmp r0, r5
    moveq r1, r5
    beq @L_02010b04
    ldr r1, =0x15180
    mov r2, r4, asr #0x1f
    umull r12, r3, r4, r1
    mla r3, r2, r1, r3
    adds r5, r0, r12
    adc r1, r3, r0, asr #31
@L_02010b04:
    mov r0, r5
    ldmia sp!, {r4, r5, r6, pc}
}

asm void RTC_GetDayOfWeek(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    ldr r1, [r0, #4]
    ldr r2, [r0]
    sub r1, r1, #2
    cmp r1, #1
    add r12, r2, #0x7d0
    sublt r12, r12, #1
    ldr r6, =0x51eb851f
    ldr lr, [r0, #8]
    smull r3, r2, r6, r12
    smull r4, r3, r6, r12
    mov r5, r12, lsr #0x1f
    add r3, r5, r3, asr #5
    add r2, r5, r2, asr #5
    mov r5, #0x64
    smull r2, r4, r5, r2
    sub r2, r12, r2
    addlt r1, r1, #0xc
    mov r0, #0x1a
    mul r0, r1, r0
    sub r1, r0, #2
    ldr r0, =0x66666667
    mov r5, r1, lsr #0x1f
    smull r1, r12, r0, r1
    add r12, r5, r12, asr #2
    mov r4, r2, asr #1
    add r0, lr, r12
    add r1, r2, r4, lsr #30
    add r2, r2, r0
    mov r6, r3, asr #1
    add r0, r3, r6, lsr #30
    add r1, r2, r1, asr #2
    add r1, r1, r0, asr #2
    add r0, r3, r3, lsl #2
    add r4, r1, r0
    ldr r3, =0x92492493
    mov r1, r4, lsr #0x1f
    smull r2, r0, r3, r4
    add r0, r4, r0
    add r0, r1, r0, asr #2
    mov r2, #7
    smull r0, r1, r2, r0
    sub r0, r4, r0
    ldmia sp!, {r4, r5, r6, pc}
}

asm void func_02010bcc(void)
{
    stmdb sp!, {r3, r4, lr}
    sub sp, sp, #4
    mov r4, r0
    ldr r0, [r4, #0x38]
    ldr r1, [r4, #0x34]
    blx r1
    cmp r0, #0
    beq @L_02010c00
    mov r0, r4
    mov r1, #1
    bl func_02008894
    add sp, sp, #4
    ldmia sp!, {r3, r4, pc}
@L_02010c00:
    mov r1, #0xc0
    ldr r3, =func_02010bcc
    add r0, r4, #0xc
    add r2, r1, #0x47
    str r4, [sp]
    bl func_02008104
    add sp, sp, #4
    ldmia sp!, {r3, r4, pc}
}

asm void func_02010c24(void)
{
    stmdb sp!, {r3, lr}
    ldrh r0, [r0]
    bl func_0200585c
    cmp r0, #0
    moveq r0, #1
    movne r0, #0
    ldmia sp!, {r3, pc}
}

asm void CARD_Init(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    sub sp, sp, #8
    ldr r5, =data_020bd460
    ldr r0, [r5, #4]
    cmp r0, #0
    addne sp, sp, #8
    ldmneia sp!, {r4, r5, r6, pc}
    mov r0, #1
    str r0, [r5, #4]
    bl func_0200848c
    cmp r0, #1
    bne @L_02010c80
    ldr r0, =0x2fffe00
    mov r2, #0x160
    sub r1, r0, #0x380
    bl MI_CpuCopy8
@L_02010c80:
    mov r4, #0
    ldr r0, =data_020bdaa0
    sub r3, r4, #1
    mov r6, #0x400
    mov r2, #0x2400
    mov r1, #4
    str r4, [r5, #0x4fc]
    str r4, [r5, #0x500]
    str r4, [r5, #0x504]
    str r3, [r5, #0x508]
    str r4, [r5, #0x50c]
    str r6, [r5, #0xc]
    str r2, [r5, #0x10]
    str r4, [r0]
    str r1, [r5, #8]
    bl func_02010fa8
    add r3, r5, #0xe8
    str r4, [r5, #0x4ec]
    str r4, [r5, #0x4f0]
    str r4, [r5, #0x4f8]
    str r4, [r5, #0x4f4]
    str r6, [sp]
    ldr r12, [r5, #8]
    ldr r1, =func_02011100
    mov r2, r4
    add r0, r5, #0x28
    add r3, r3, #0x400
    str r12, [sp, #4]
    bl OS_CreateThread
    add r0, r5, #0x28
    bl OS_WakeupThreadDirect
    bl func_02010fd0
    bl func_020121b0
    bl func_0200848c
    cmp r0, #1
    bne @L_02010d18
    mov r0, #1
    bl func_02010d5c
@L_02010d18:
    bl func_02012240
    add sp, sp, #8
    ldmia sp!, {r4, r5, r6, pc}
}

asm void func_02010d34(void)
{
    ldr r0, =data_020bd3e0
    ldr r0, [r0]
    bx lr
}
