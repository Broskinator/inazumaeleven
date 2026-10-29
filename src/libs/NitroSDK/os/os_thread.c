// (asm for now)

extern char data_020bb104[];
extern char data_020bb120[];
void func_02008438(void);
void OS_SaveContext(void);
void OS_LoadContext(void);
extern char data_020bb124[];
extern char data_020bb1f0[];
extern char data_027e0000[];
extern char data_020bb130[];
extern char data_020bb378[];
extern char data_020bb110[];
void OS_DisableInterrupts(void);
void func_020059ac(void);
void OS_InitContext(void);
void func_0200919c(void);
void OS_RestoreInterrupts(void);
void func_02006af8(void);
void func_0200878c(void);
void OS_CancelAlarm(void);
void func_020059c4(void);
void OS_CreateAlarm(void);
void func_02007d68(void);
void func_020083c0(void);
void func_020087cc(void);

asm void OSi_RemoveLinkFromQueue(void)
{
    ldr r2, [r0]
    cmp r2, #0
    beq @L_02005a68
    ldr r1, [r2, #0x80]
    str r1, [r0]
    cmp r1, #0
    movne r0, #0
    strne r0, [r1, #0x7c]
    moveq r1, #0
    streq r1, [r0, #4]
    streq r1, [r2, #0x78]
@L_02005a68:
    mov r0, r2
    bx lr
}

asm void OSi_RemoveSpecifiedLinkFromQueue(void)
{
    ldr r12, [r0]
    mov r2, r12
    cmp r12, #0
    beq @L_02005abc
@L_02005a80:
    cmp r2, r1
    ldr r3, [r2, #0x80]
    bne @L_02005ab0
    cmp r12, r2
    ldr r12, [r2, #0x7c]
    streq r3, [r0]
    strne r3, [r12, #0x80]
    ldr r1, [r0, #4]
    cmp r1, r2
    streq r12, [r0, #4]
    strne r12, [r3, #0x7c]
    b @L_02005abc
@L_02005ab0:
    mov r2, r3
    cmp r3, #0
    bne @L_02005a80
@L_02005abc:
    mov r0, r2
    bx lr
}

asm void OSi_RemoveMutexLinkFromQueue(void)
{
    ldr r2, [r0]
    cmp r2, #0
    beq @L_02005aec
    ldr r1, [r2, #0x10]
    str r1, [r0]
    cmp r1, #0
    movne r0, #0
    strne r0, [r1, #0x14]
    moveq r1, #0
    streq r1, [r0, #4]
@L_02005aec:
    mov r0, r2
    bx lr
}

asm void func_02005af4(void)
{
    stmdb sp!, {r3, lr}
    ldr r1, =data_020bb104
    mov r12, #0
    ldr lr, [r1, #0x24]
    mov r3, lr
    b @L_02005b14
@L_02005b0c:
    mov r12, r3
    ldr r3, [r3, #0x68]
@L_02005b14:
    cmp r3, #0
    beq @L_02005b2c
    ldr r2, [r3, #0x70]
    ldr r1, [r0, #0x70]
    cmp r2, r1
    blo @L_02005b0c
@L_02005b2c:
    cmp r12, #0
    ldreq r1, =data_020bb104
    streq lr, [r0, #0x68]
    streq r0, [r1, #0x24]
    ldrne r1, [r12, #0x68]
    strne r1, [r0, #0x68]
    strne r0, [r12, #0x68]
    ldmia sp!, {r3, pc}
}

asm void func_02005b50(void)
{
    ldr r1, =data_020bb104
    mov r2, #0
    ldr r1, [r1, #0x24]
    b @L_02005b68
@L_02005b60:
    mov r2, r1
    ldr r1, [r1, #0x68]
@L_02005b68:
    cmp r1, #0
    beq @L_02005b78
    cmp r1, r0
    bne @L_02005b60
@L_02005b78:
    cmp r2, #0
    ldreq r1, [r0, #0x68]
    ldreq r0, =data_020bb104
    streq r1, [r0, #0x24]
    ldrne r0, [r0, #0x68]
    strne r0, [r2, #0x68]
    bx lr
}

asm void func_02005b98(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    ldr r5, =data_020bb104
    ldr r0, [r5, #4]
    cmp r0, #0
    ldmneia sp!, {r4, r5, r6, pc}
    ldrh r0, [r5, #0x1e]
    ldr r4, =data_020bb120
    cmp r0, #0
    bne @L_02005bc8
    bl func_02008438
    cmp r0, #0x12
    bne @L_02005bd4
@L_02005bc8:
    mov r0, #1
    strh r0, [r4]
    ldmia sp!, {r4, r5, r6, pc}
@L_02005bd4:
    ldr r0, [r5, #8]
    ldr r6, [r0]
    bl func_02006178
    mov r5, r0
    cmp r6, r5
    cmpne r5, #0
    ldmeqia sp!, {r4, r5, r6, pc}
    ldr r0, [r6, #0x64]
    cmp r0, #2
    beq @L_02005c0c
    mov r0, r6
    bl OS_SaveContext
    cmp r0, #0
    ldmneia sp!, {r4, r5, r6, pc}
@L_02005c0c:
    ldr r0, =data_020bb104
    ldr r2, [r0]
    cmp r2, #0
    beq @L_02005c28
    mov r0, r6
    mov r1, r5
    blx r2
@L_02005c28:
    ldr r2, [r4, #0xc]
    cmp r2, #0
    beq @L_02005c40
    mov r0, r6
    mov r1, r5
    blx r2
@L_02005c40:
    ldr r1, =data_020bb104
    mov r0, r5
    str r5, [r1, #0x20]
    bl OS_LoadContext
    ldmia sp!, {r4, r5, r6, pc}
}

asm void func_02005c5c(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    sub sp, sp, #8
    ldr r0, =data_020bb104
    ldr r1, [r0, #0xc]
    cmp r1, #0
    addne sp, sp, #8
    ldmneia sp!, {r3, r4, r5, pc}
    mov r3, #1
    ldr r2, =data_020bb124
    str r3, [r0, #0xc]
    str r2, [r0, #8]
    ldr r1, =data_020bb1f0
    mov r2, #0x10
    str r2, [r1, #0x70]
    mov r2, #0
    str r2, [r1, #0x6c]
    str r3, [r1, #0x64]
    str r2, [r1, #0x68]
    str r2, [r1, #0x74]
    ldr r2, =0x0
    str r1, [r0, #0x24]
    str r1, [r0, #0x20]
    cmp r2, #0
    ldrle r0, =0x27e0080
    ldrgt r1, =data_027e0000
    ldrgt r0, =0x400
    addgt r1, r1, #0x3f80
    subgt r0, r1, r0
    sub r3, r0, r2
    ldr r1, =data_027e0000
    ldr r0, =0x400
    add r2, r1, #0x3f80
    sub r2, r2, r0
    ldr r1, =data_020bb1f0
    mov r4, #0
    str r2, [r1, #0x94]
    str r3, [r1, #0x90]
    ldr r0, =0xfddb597d
    str r4, [r1, #0x98]
    str r0, [r2, #-8]
    ldr r2, [r1, #0x90]
    ldr r3, =0x7bf9dd5b
    ldr r0, =data_020bb104
    str r3, [r2]
    str r4, [r1, #0xa0]
    str r4, [r1, #0x9c]
    strh r4, [r0, #0x1c]
    strh r4, [r0, #0x1e]
    ldr r2, =data_020bb120
    ldr r1, =0x2ffffa0
    mov r0, r4
    str r2, [r1]
    bl func_020063fc
    ldr r5, =data_020bb130
    mov r12, #0xc8
    mov r2, r4
    ldr r1, =func_02006424
    ldr r3, =data_020bb378
    mov r0, r5
    str r12, [sp]
    mov r4, #0x1f
    str r4, [sp, #4]
    bl OS_CreateThread
    mov r0, #0x20
    str r0, [r5, #0x70]
    mov r0, #1
    str r0, [r5, #0x64]
    add sp, sp, #8
    ldmia sp!, {r3, r4, r5, pc}
}

asm void func_02005da8(void)
{
    ldr r0, =data_020bb110
    ldr r0, [r0]
    bx lr
}

asm void OS_CreateThread(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    mov r9, r0
    mov r6, r1
    mov r8, r2
    mov r7, r3
    bl OS_DisableInterrupts
    mov r5, r0
    bl func_020059ac
    str r0, [r9, #0x6c]
    ldr r0, [sp, #0x24]
    mov r4, #0
    str r0, [r9, #0x70]
    str r4, [r9, #0x64]
    str r4, [r9, #0x74]
    mov r0, r9
    bl func_02005af4
    mov r1, r6
    str r7, [r9, #0x94]
    str r4, [r9, #0x98]
    ldr r2, [sp, #0x20]
    ldr r0, =0xfddb597d
    sub r6, r7, r2
    str r6, [r9, #0x90]
    str r0, [r7, #-8]
    sub r2, r7, #8
    ldr r7, =0x7bf9dd5b
    ldr r3, [r9, #0x90]
    mov r0, r9
    str r7, [r3]
    str r4, [r9, #0xa0]
    str r4, [r9, #0x9c]
    bl OS_InitContext
    str r8, [r9, #4]
    add r1, r6, #4
    ldr r2, =func_02005ea8
    mov r0, r4
    str r2, [r9, #0x3c]
    ldr r2, [sp, #0x20]
    sub r2, r2, #0xc
    bl func_0200919c
    str r4, [r9, #0x84]
    str r4, [r9, #0x88]
    str r4, [r9, #0x8c]
    mov r0, r9
    mov r1, r4
    bl func_02006498
    str r4, [r9, #0x78]
    str r4, [r9, #0x80]
    str r4, [r9, #0x7c]
    mov r0, r4
    add r1, r9, #0xa4
    mov r2, #0xc
    bl func_0200919c
    str r4, [r9, #0xb0]
    mov r0, r5
    bl OS_RestoreInterrupts
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

asm void func_02005ea8(void)
{
    stmdb sp!, {r3, lr}
    bl OS_DisableInterrupts
    ldr r0, =data_020bb104
    mov r1, #0
    ldr r0, [r0, #0x20]
    bl func_02005ec8
    ldmia sp!, {r3, pc}
}

asm void func_02005ec8(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    ldr r2, =data_020bb104
    mov r5, r0
    ldr r2, [r2, #0x14]
    mov r4, r1
    cmp r2, #0
    beq @L_02005f0c
    ldr r1, =OSi_ExitThread
    bl OS_InitContext
    ldr r0, [r5]
    mov r1, #1
    orr r2, r0, #0x80
    stmia r5, {r2, r4}
    mov r0, r5
    str r1, [r5, #0x64]
    bl OS_LoadContext
    ldmia sp!, {r3, r4, r5, pc}
@L_02005f0c:
    mov r0, r4
    bl OSi_ExitThread
    ldmia sp!, {r3, r4, r5, pc}
}

asm void OSi_ExitThread(void)
{
    stmdb sp!, {r3, lr}
    ldr r1, =data_020bb104
    ldr r1, [r1, #8]
    ldr r3, [r1]
    ldr r2, [r3, #0xb4]
    cmp r2, #0
    beq @L_02005f4c
    mov r1, #0
    str r1, [r3, #0xb4]
    blx r2
    bl OS_DisableInterrupts
@L_02005f4c:
    bl OSi_ExitThread_Destroy
    ldmia sp!, {r3, pc}
}

asm void OSi_ExitThread_Destroy(void)
{
    stmdb sp!, {r4, lr}
    ldr r0, =data_020bb104
    ldr r0, [r0, #8]
    ldr r4, [r0]
    bl func_02006434
    mov r0, r4
    bl func_02006af8
    ldr r0, [r4, #0x78]
    cmp r0, #0
    beq @L_02005f88
    mov r1, r4
    bl OSi_RemoveSpecifiedLinkFromQueue
@L_02005f88:
    mov r0, r4
    bl func_02005b50
    mov r1, #2
    add r0, r4, #0x9c
    str r1, [r4, #0x64]
    bl OS_WakeupThread
    bl OS_EnableScheduler
    bl func_020061a4
    bl func_0200878c
    ldmia sp!, {r4, pc}
}

asm void OS_DestroyThread(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r5, r0
    bl OS_DisableInterrupts
    ldr r1, =data_020bb104
    mov r4, r0
    ldr r0, [r1, #0x20]
    cmp r0, r5
    bne @L_02005fd8
    bl OSi_ExitThread_Destroy
@L_02005fd8:
    bl func_02006434
    mov r0, r5
    bl func_02006af8
    mov r0, r5
    bl OSi_CancelThreadAlarmForSleep
    ldr r0, [r5, #0x78]
    cmp r0, #0
    beq @L_02006000
    mov r1, r5
    bl OSi_RemoveSpecifiedLinkFromQueue
@L_02006000:
    mov r0, r5
    bl func_02005b50
    mov r1, #2
    add r0, r5, #0x9c
    str r1, [r5, #0x64]
    bl OS_WakeupThread
    bl OS_EnableScheduler
    mov r0, r4
    bl OS_RestoreInterrupts
    bl func_020061a4
    ldmia sp!, {r3, r4, r5, pc}
}

asm void OSi_CancelThreadAlarmForSleep(void)
{
    stmdb sp!, {r3, lr}
    ldr r0, [r0, #0xb0]
    cmp r0, #0
    ldmeqia sp!, {r3, pc}
    bl OS_CancelAlarm
    ldmia sp!, {r3, pc}
}

asm void func_02006048(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r5, r0
    bl OS_DisableInterrupts
    ldr r1, [r5, #0x64]
    mov r4, r0
    cmp r1, #2
    beq @L_02006078
@L_02006064:
    add r0, r5, #0x9c
    bl OS_SleepThread
    ldr r0, [r5, #0x64]
    cmp r0, #2
    bne @L_02006064
@L_02006078:
    mov r0, r4
    bl OS_RestoreInterrupts
    ldmia sp!, {r3, r4, r5, pc}
}

asm void OS_IsThreadTerminated(void)
{
    ldr r0, [r0, #0x64]
    cmp r0, #2
    moveq r0, #1
    movne r0, #0
    bx lr
}

asm void OS_SleepThread(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r6, r0
    bl OS_DisableInterrupts
    ldr r1, =data_020bb104
    mov r4, r0
    ldr r0, [r1, #8]
    cmp r6, #0
    ldr r5, [r0]
    beq @L_020060cc
    mov r0, r6
    mov r1, r5
    str r6, [r5, #0x78]
    bl func_020059c4
@L_020060cc:
    mov r0, #0
    str r0, [r5, #0x64]
    bl func_02005b98
    mov r0, r4
    bl OS_RestoreInterrupts
    ldmia sp!, {r4, r5, r6, pc}
}

asm void OS_WakeupThread(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r7, r0
    bl OS_DisableInterrupts
    ldr r1, [r7]
    mov r6, r0
    cmp r1, #0
    beq @L_02006144
    beq @L_02006134
    mov r5, #1
    mov r4, #0
@L_02006110:
    mov r0, r7
    bl OSi_RemoveLinkFromQueue
    str r5, [r0, #0x64]
    str r4, [r0, #0x78]
    str r4, [r0, #0x80]
    str r4, [r0, #0x7c]
    ldr r0, [r7]
    cmp r0, #0
    bne @L_02006110
@L_02006134:
    mov r0, #0
    str r0, [r7, #4]
    str r0, [r7]
    bl func_02005b98
@L_02006144:
    mov r0, r6
    bl OS_RestoreInterrupts
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

asm void OS_WakeupThreadDirect(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r5, r0
    bl OS_DisableInterrupts
    mov r1, #1
    mov r4, r0
    str r1, [r5, #0x64]
    bl func_02005b98
    mov r0, r4
    bl OS_RestoreInterrupts
    ldmia sp!, {r3, r4, r5, pc}
}

asm void func_02006178(void)
{
    ldr r0, =data_020bb104
    ldr r0, [r0, #0x24]
    b @L_02006188
@L_02006184:
    ldr r0, [r0, #0x68]
@L_02006188:
    cmp r0, #0
    bxeq lr
    ldr r1, [r0, #0x64]
    cmp r1, #1
    bne @L_02006184
    bx lr
}

asm void func_020061a4(void)
{
    stmdb sp!, {r4, lr}
    bl OS_DisableInterrupts
    mov r4, r0
    bl func_02005b98
    mov r0, r4
    bl OS_RestoreInterrupts
    ldmia sp!, {r4, pc}
}

asm void func_020061c0(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    ldr r5, =data_020bb104
    mov r7, #0
    mov r4, r7
    mov r8, r7
    ldr r6, [r5, #0x20]
    bl OS_DisableInterrupts
    ldr r1, [r5, #0x24]
    mov r5, r0
    mov r0, r7
    cmp r1, #0
    beq @L_0200621c
    ldr r2, [r6, #0x70]
@L_020061f4:
    cmp r1, r6
    moveq r7, r0
    ldr r0, [r1, #0x70]
    cmp r2, r0
    moveq r4, r1
    mov r0, r1
    ldr r1, [r1, #0x68]
    addeq r8, r8, #1
    cmp r1, #0
    bne @L_020061f4
@L_0200621c:
    cmp r8, #1
    ble @L_0200622c
    cmp r4, r6
    bne @L_02006238
@L_0200622c:
    mov r0, r5
    bl OS_RestoreInterrupts
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_02006238:
    cmp r7, #0
    ldreq r1, [r6, #0x68]
    ldreq r0, =data_020bb104
    streq r1, [r0, #0x24]
    ldrne r0, [r6, #0x68]
    strne r0, [r7, #0x68]
    ldr r0, [r4, #0x68]
    str r0, [r6, #0x68]
    str r6, [r4, #0x68]
    bl func_02005b98
    mov r0, r5
    bl OS_RestoreInterrupts
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

asm void OS_SetThreadStackWarningOffset(void)
{
    cmp r1, #0
    str r1, [r0, #0x98]
    ldrne r0, [r0, #0x90]
    ldrne r2, =0x597dfbd9
    strne r2, [r0, r1]
    bx lr
}

asm void func_0200628c(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    ldr r2, =data_020bb104
    mov r7, r0
    mov r6, r1
    ldr r8, [r2, #0x24]
    mov r4, #0
    bl OS_DisableInterrupts
    mov r5, r0
    b @L_020062b8
@L_020062b0:
    mov r4, r8
    ldr r8, [r8, #0x68]
@L_020062b8:
    cmp r8, #0
    beq @L_020062c8
    cmp r8, r7
    bne @L_020062b0
@L_020062c8:
    cmp r8, #0
    ldrne r0, =data_020bb130
    cmpne r8, r0
    bne @L_020062e8
    mov r0, r5
    bl OS_RestoreInterrupts
    mov r0, #0
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_020062e8:
    ldr r0, [r8, #0x70]
    cmp r0, r6
    beq @L_0200631c
    cmp r4, #0
    ldreq r1, [r7, #0x68]
    ldreq r0, =data_020bb104
    streq r1, [r0, #0x24]
    ldrne r0, [r7, #0x68]
    strne r0, [r4, #0x68]
    mov r0, r7
    str r6, [r7, #0x70]
    bl func_02005af4
    bl func_02005b98
@L_0200631c:
    mov r0, r5
    bl OS_RestoreInterrupts
    mov r0, #1
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

asm void func_02006334(void)
{
    ldr r0, [r0, #0x70]
    bx lr
}

asm void OS_Sleep(void)
{
    stmdb sp!, {r4, r5, lr}
    sub sp, sp, #0x34
    add r4, sp, #8
    mov r5, r0
    mov r0, r4
    bl OS_CreateAlarm
    ldr r0, =data_020bb104
    ldr r0, [r0, #8]
    ldr r0, [r0]
    str r0, [sp, #4]
    bl OS_DisableInterrupts
    ldr r1, =0x82ea
    ldr r2, [sp, #4]
    umull r1, r12, r5, r1
    mov r1, r1, lsr #6
    str r4, [r2, #0xb0]
    add r2, sp, #4
    mov r5, r0
    str r2, [sp]
    ldr r3, =OSi_SleepAlarmCallback
    mov r0, r4
    mov r2, r12, lsr #6
    orr r1, r1, r12, lsl #26
    bl func_02007d68
    ldr r0, [sp, #4]
    cmp r0, #0
    beq @L_020063c0
    mov r4, #0
@L_020063ac:
    mov r0, r4
    bl OS_SleepThread
    ldr r0, [sp, #4]
    cmp r0, #0
    bne @L_020063ac
@L_020063c0:
    mov r0, r5
    bl OS_RestoreInterrupts
    add sp, sp, #0x34
    ldmia sp!, {r4, r5, pc}
}

asm void OSi_SleepAlarmCallback(void)
{
    ldr r2, [r0]
    mov r1, #0
    str r1, [r0]
    ldr r12, =OS_WakeupThreadDirect
    mov r0, r2
    str r1, [r2, #0xb0]
    bx r12
}

asm void func_020063fc(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r5, r0
    bl OS_DisableInterrupts
    ldr r1, =data_020bb104
    ldr r4, [r1, #0x28]
    str r5, [r1, #0x28]
    bl OS_RestoreInterrupts
    mov r0, r4
    ldmia sp!, {r3, r4, r5, pc}
}

asm void func_02006424(void)
{
    stmdb sp!, {r3, lr}
    bl func_020083c0
@L_0200642c:
    bl func_020087cc
    b @L_0200642c
}

asm void func_02006434(void)
{
    stmdb sp!, {r4, lr}
    bl OS_DisableInterrupts
    ldr r1, =data_020bb104
    ldr r3, [r1, #4]
    cmn r3, #1
    addlo r2, r3, #1
    movlo r4, r3
    strlo r2, [r1, #4]
    bl OS_RestoreInterrupts
    mov r0, r4
    ldmia sp!, {r4, pc}
}

asm void OS_EnableScheduler(void)
{
    stmdb sp!, {r4, lr}
    bl OS_DisableInterrupts
    ldr r1, =data_020bb104
    mov r4, #0
    ldr r3, [r1, #4]
    cmp r3, #0
    subne r2, r3, #1
    movne r4, r3
    strne r2, [r1, #4]
    bl OS_RestoreInterrupts
    mov r0, r4
    ldmia sp!, {r4, pc}
}

asm void func_02006498(void)
{
    str r1, [r0, #0xb4]
    bx lr
}
