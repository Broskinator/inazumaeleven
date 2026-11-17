// (asm for now)

void MBi_InitTaskThread(void);
void MBi_IsTaskAvailable(void);
void MBi_InitTaskInfo(void);
void MBi_IsTaskBusy(void);
void MBi_SetTask(void);
void MBi_EndTaskThread(void);
void MBi_SetChildMPMaxSize(void);

void OS_DisableInterrupts(void);
extern char mbi_task_work[];
void MBi_TaskThread(void);
void OS_CreateThread(void);
void OS_WakeupThreadDirect(void);
void OS_RestoreInterrupts(void);
void MI_CpuFill8(void);
void OS_GetThreadPriority(void);
extern char req_data_piece_idx[];
void _s32_div_f(void);

asm void MBi_InitTaskThread(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    sub sp, sp, #8
    mov r5, r0
    mov r6, r1
    bl OS_DisableInterrupts
    ldr r1, =mbi_task_work
    mov r4, r0
    ldr r0, [r1]
    cmp r0, #0
    bne @L_02178c94
    add r0, r5, #0xc4
    str r5, [r1]
    bl MBi_InitTaskInfo
    sub r0, r6, #0xe4
    mov lr, #0
    bic r12, r0, #3
    add r3, r5, #0xe4
    str lr, [r5, #0xc0]
    ldr r1, =MBi_TaskThread
    mov r0, r5
    mov r2, r5
    add r3, r3, r12
    stmia sp, {r12, lr}
    bl OS_CreateThread
    mov r0, r5
    bl OS_WakeupThreadDirect
@L_02178c94:
    mov r0, r4
    bl OS_RestoreInterrupts
    add sp, sp, #8
    ldmia sp!, {r4, r5, r6, pc}
}

asm void MBi_IsTaskAvailable(void)
{
    ldr r0, =mbi_task_work
    ldr r0, [r0]
    cmp r0, #0
    movne r0, #1
    moveq r0, #0
    bx lr
}

asm void MBi_InitTaskInfo(void)
{
    ldr r12, =MI_CpuFill8
    mov r1, #0
    mov r2, #0x20
    bx r12
}

asm void MBi_IsTaskBusy(void)
{
    ldr r0, [r0, #4]
    mov r0, r0, lsl #0x1f
    movs r0, r0, lsr #0x1f
    movne r0, #1
    moveq r0, #0
    bx lr
}

asm void MBi_SetTask(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    ldr r4, =mbi_task_work
    mov r8, r0
    ldr r4, [r4]
    mov r7, r1
    mov r5, r2
    mov r6, r3
    bl MBi_IsTaskAvailable
    cmp r0, #0
    ldmeqia sp!, {r4, r5, r6, r7, r8, pc}
    ldr r0, [r8, #4]
    mov r0, r0, lsl #0x1f
    movs r0, r0, lsr #0x1f
    ldmneia sp!, {r4, r5, r6, r7, r8, pc}
    cmp r6, #0x1f
    bls @L_02178d78
    mov r0, r4
    bl OS_GetThreadPriority
    cmp r6, #0x20
    bne @L_02178d54
    sub r6, r0, #1
    cmp r0, #0
    moveq r6, #0
    b @L_02178d78
@L_02178d54:
    cmp r6, #0x21
    bne @L_02178d6c
    add r6, r0, #1
    cmp r0, #0x1f
    movhs r6, #0x1f
    b @L_02178d78
@L_02178d6c:
    cmp r6, #0x22
    moveq r6, r0
    movne r6, #0x1f
@L_02178d78:
    bl OS_DisableInterrupts
    ldr r1, [r8, #4]
    str r5, [r8, #0xc]
    bic r1, r1, #1
    orr r1, r1, #1
    and r1, r1, #1
    orr r1, r1, r6, lsl #1
    mov r5, r0
    str r7, [r8, #8]
    str r1, [r8, #4]
    ldr r1, [r4, #0xc0]
    add r0, r4, #0xc4
    cmp r1, #0
    bne @L_02178dd0
    cmp r8, r0
    ldreq r0, =mbi_task_work
    moveq r1, #0
    streq r1, [r0]
    mov r0, r4
    str r8, [r4, #0xc0]
    bl OS_WakeupThreadDirect
    b @L_02178e48
@L_02178dd0:
    cmp r8, r0
    ldr r1, [r4, #0xc0]
    bne @L_02178e0c
    ldr r0, [r1]
    cmp r0, #0
    beq @L_02178df8
@L_02178de8:
    mov r1, r0
    ldr r0, [r0]
    cmp r0, #0
    bne @L_02178de8
@L_02178df8:
    ldr r0, =mbi_task_work
    str r8, [r1]
    mov r1, #0
    str r1, [r0]
    b @L_02178e48
@L_02178e0c:
    ldr r0, [r1, #4]
    cmp r6, r0, lsr #1
    bhs @L_02178e28
    str r8, [r4, #0xc0]
    str r1, [r8]
    b @L_02178e48
@L_02178e24:
    mov r1, r2
@L_02178e28:
    ldr r2, [r1]
    cmp r2, #0
    beq @L_02178e40
    ldr r0, [r2, #4]
    cmp r6, r0, lsr #1
    bhs @L_02178e24
@L_02178e40:
    str r2, [r8]
    str r8, [r1]
@L_02178e48:
    mov r0, r5
    bl OS_RestoreInterrupts
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

asm void MBi_EndTaskThread(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r5, r0
    bl OS_DisableInterrupts
    mov r4, r0
    bl MBi_IsTaskAvailable
    cmp r0, #0
    beq @L_02178e90
    ldr r0, =mbi_task_work
    mov r1, #0
    ldr r0, [r0]
    mov r2, r5
    mov r3, r1
    add r0, r0, #0xc4
    bl MBi_SetTask
@L_02178e90:
    mov r0, r4
    bl OS_RestoreInterrupts
    ldmia sp!, {r3, r4, r5, pc}
}

asm void MBi_SetChildMPMaxSize(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    ldr r4, =req_data_piece_idx
    sub r1, r0, #2
    mov r5, #0x1e
    mov r0, r5
    str r1, [r4, #8]
    bl _s32_div_f
    str r0, [r4, #0xc]
    str r5, [r4, #0x10]
    ldmia sp!, {r3, r4, r5, pc}
}
