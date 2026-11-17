// (asm for now)

void OSi_InsertVAlarm(void);
void OSi_AppendVAlarm(void);
void OSi_DetachVAlarm(void);
void OS_CreateVAlarm(void);
void OS_SetVAlarm(void);
void OSi_SetNextVAlarm(void);
void OSi_VAlarmHandler(void);
void OSi_CompareVCount(void);
void OSi_GetVFrame(void);
void OS_EnableInterrupts(void);
void OS_DisableInterrupts(void);

extern char OSi_UseVAlarm[];
void OS_Terminate(void);
void OS_RestoreInterrupts(void);
void OS_SetIrqFunction(void);
void GX_SetVCountEqVal(void);
void OS_EnableIrqMask(void);
void OS_DisableIrqMask(void);
extern char OS_IRQTable[];
void OS_ResetRequestIrqMask(void);

asm void OSi_InsertVAlarm(void)
{
    stmdb sp!, {r3, lr}
    ldr r1, =OSi_UseVAlarm
    ldr r3, [r1, #0xc]
    cmp r3, #0
    beq @L_02008074
    ldr r12, [r0, #0xc]
@L_0200801c:
    ldr r1, [r3, #0xc]
    cmp r1, r12
    blo @L_02008068
    bne @L_0200803c
    ldrsh r2, [r3, #0x10]
    ldrsh r1, [r0, #0x10]
    cmp r2, r1
    ble @L_02008068
@L_0200803c:
    ldr r1, [r3, #0x14]
    str r1, [r0, #0x14]
    str r3, [r0, #0x18]
    str r0, [r3, #0x14]
    cmp r1, #0
    strne r0, [r1, #0x18]
    ldmneia sp!, {r3, pc}
    ldr r1, =OSi_UseVAlarm
    str r0, [r1, #0xc]
    bl OSi_SetNextVAlarm
    ldmia sp!, {r3, pc}
@L_02008068:
    ldr r3, [r3, #0x18]
    cmp r3, #0
    bne @L_0200801c
@L_02008074:
    bl OSi_AppendVAlarm
    ldmia sp!, {r3, pc}
}

asm void OSi_AppendVAlarm(void)
{
    stmdb sp!, {r3, lr}
    ldr r1, =OSi_UseVAlarm
    mov r2, #0
    ldr r3, [r1, #0x10]
    str r3, [r0, #0x14]
    str r2, [r0, #0x18]
    str r0, [r1, #0x10]
    cmp r3, #0
    strne r0, [r3, #0x18]
    ldmneia sp!, {r3, pc}
    str r0, [r1, #0xc]
    bl OSi_SetNextVAlarm
    ldmia sp!, {r3, pc}
}

asm void OSi_DetachVAlarm(void)
{
    cmp r0, #0
    bxeq lr
    ldr r2, [r0, #0x18]
    ldr r1, [r0, #0x14]
    cmp r2, #0
    ldreq r0, =OSi_UseVAlarm
    strne r1, [r2, #0x14]
    streq r1, [r0, #0x10]
    cmp r1, #0
    ldreq r0, =OSi_UseVAlarm
    strne r2, [r1, #0x18]
    streq r2, [r0, #0xc]
    bx lr
}

asm void OS_CreateVAlarm(void)
{
    mov r1, #0
    str r1, [r0]
    str r1, [r0, #8]
    str r1, [r0, #0x20]
    bx lr
}

asm void OS_SetVAlarm(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    mov r8, r0
    mov r7, r1
    mov r6, r2
    mov r5, r3
    bl OS_DisableInterrupts
    mov r4, r0
    cmp r8, #0
    beq @L_02008134
    ldr r0, [r8]
    cmp r0, #0
    beq @L_02008138
@L_02008134:
    bl OS_Terminate
@L_02008138:
    ldr r0, =0x4000006
    ldrh r9, [r0]
    mov r0, r9
    bl OSi_GetVFrame
    mov r1, #0
    cmp r7, r9
    addle r0, r0, #1
    ldr r2, [sp, #0x20]
    str r1, [r8, #0x1c]
    str r0, [r8, #0xc]
    mov r1, #0
    mov r0, r8
    strh r7, [r8, #0x10]
    strh r6, [r8, #0x12]
    str r5, [r8]
    str r2, [r8, #4]
    str r1, [r8, #0x24]
    bl OSi_InsertVAlarm
    mov r0, r4
    bl OS_RestoreInterrupts
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

asm void OSi_SetNextVAlarm(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r4, #4
    mov r5, r0
    ldr r1, =OSi_VAlarmHandler
    mov r0, r4
    bl OS_SetIrqFunction
    ldrsh r0, [r5, #0x10]
    bl GX_SetVCountEqVal
    sub r2, r4, #0xfc000000
    ldrh r1, [r2]
    mov r0, r4
    orr r1, r1, #0x20
    strh r1, [r2]
    bl OS_EnableIrqMask
    ldmia sp!, {r3, r4, r5, pc}
}

asm void OSi_VAlarmHandler(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    mov r4, #4
    mov r0, r4
    bl OS_DisableIrqMask
    sub r9, r4, #0xfc000000
    ldr r0, =OS_IRQTable
    ldrh r1, [r9]
    ldr r11, =0xffdf
    add r0, r0, #0x3000
    and r1, r1, r11
    strh r1, [r9]
    ldr r1, [r0, #0xff8]
    orr r1, r1, #4
    str r1, [r0, #0xff8]
    ldrh r0, [r9]
    mov r1, r0, asr #8
    mov r0, r0, lsl #1
    and r1, r1, #0xff
    and r0, r0, #0x100
    orr r0, r1, r0
    sub r0, r0, #1
    bl OSi_GetVFrame
    ldr r4, =OSi_UseVAlarm
    ldr r10, [r4, #0xc]
    cmp r10, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r8, =0x4000006
    mov r5, #4
@L_02008240:
    ldrh r7, [r8]
    mov r0, r7
    bl OSi_GetVFrame
    mov r6, r0
    mov r0, r10
    mov r1, r6
    mov r2, r7
    bl OSi_CompareVCount
    cmp r0, #0
    beq @L_0200827c
    cmp r0, #1
    beq @L_020082b8
    cmp r0, #2
    beq @L_020082fc
    b @L_02008318
@L_0200827c:
    mov r0, r10
    bl OSi_SetNextVAlarm
    ldrh r1, [r8]
    ldrsh r0, [r10, #0x10]
    cmp r0, r1
    ldreq r0, [r10, #0xc]
    cmpeq r0, r6
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r0, r5
    bl OS_DisableIrqMask
    ldrh r1, [r9]
    mov r0, r5
    and r1, r1, r11
    strh r1, [r9]
    bl OS_ResetRequestIrqMask
@L_020082b8:
    ldr r6, [r10]
    mov r0, r10
    bl OSi_DetachVAlarm
    mov r0, #0
    str r0, [r10]
    cmp r6, #0
    beq @L_020082dc
    ldr r0, [r10, #4]
    blx r6
@L_020082dc:
    ldr r0, [r10, #0x1c]
    cmp r0, #0
    beq @L_02008318
    ldr r0, [r10, #0x24]
    cmp r0, #0
    bne @L_02008318
    str r6, [r10]
    b @L_02008304
@L_020082fc:
    mov r0, r10
    bl OSi_DetachVAlarm
@L_02008304:
    ldr r1, [r4, #8]
    mov r0, r10
    add r1, r1, #1
    str r1, [r10, #0xc]
    bl OSi_InsertVAlarm
@L_02008318:
    ldr r10, [r4, #0xc]
    cmp r10, #0
    bne @L_02008240
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

asm void OSi_CompareVCount(void)
{
    ldrsh r3, [r0, #0x10]
    ldr r12, [r0, #0xc]
    subs r1, r1, r12
    sub r2, r2, r3
    bmi @L_0200835c
    cmp r1, #0
    bne @L_02008364
    cmp r2, #0
    bge @L_02008364
@L_0200835c:
    mov r0, #0
    bx lr
@L_02008364:
    ldrsh r0, [r0, #0x12]
    cmp r2, #0
    addlt r1, r2, #7
    addlt r2, r1, #0x100
    cmp r2, r0
    movle r0, #1
    movgt r0, #2
    bx lr
}

asm void OSi_GetVFrame(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r5, r0
    bl OS_DisableInterrupts
    ldr r1, =OSi_UseVAlarm
    ldr r4, =OSi_UseVAlarm
    ldr r2, [r1, #4]
    cmp r5, r2
    ldrlt r2, [r1, #8]
    addlt r2, r2, #1
    strlt r2, [r1, #8]
    str r5, [r4, #4]
    bl OS_RestoreInterrupts
    ldr r0, [r4, #8]
    ldmia sp!, {r3, r4, r5, pc}
}

asm void OS_EnableInterrupts(void)
{
    mrs r0, CPSR
    bic r1, r0, #0x80
    msr cpsr_c, r1
    and r0, r0, #0x80
    bx lr
}

asm void OS_DisableInterrupts(void)
{
    mrs r0, CPSR
    orr r1, r0, #0x80
    msr cpsr_c, r1
    and r0, r0, #0x80
    bx lr
}
