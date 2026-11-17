// (asm for now)

void CARD_CheckEnabled(void);
void CARD_Enable(void);
void CARD_GetResultCode(void);
void CARD_GetOwnRomHeader(void);
void func_02010d8c(void);
void CARD_LockRom(void);
void CARD_UnlockRom(void);
void CARD_LockBackup(void);
void CARD_UnlockBackup(void);

void CARD_IsEnabled(void);
void OS_Terminate(void);
extern char CARDi_EnableFlag[];
extern char cardi_common[];
void CARDi_LockResource(void);
void OS_InitEvent(void);
void OS_CreateVAlarm(void);
void CARDi_LockBusCondition(void);
void CARDi_PeekEventListener(void);
void OS_WaitEventEx(void);
void OS_UnlockCard(void);
void CARDi_UnlockResource(void);
void CARD_TryWaitBackupAsync(void);
void CARD_WaitBackupAsync(void);

asm void CARD_CheckEnabled(void)
{
    stmdb sp!, {r3, lr}
    bl CARD_IsEnabled
    cmp r0, #0
    ldmneia sp!, {r3, pc}
    bl OS_Terminate
    ldmia sp!, {r3, pc}
}

asm void CARD_Enable(void)
{
    ldr r1, =CARDi_EnableFlag
    str r0, [r1]
    bx lr
}

asm void CARD_GetResultCode(void)
{
    ldr r0, =cardi_common
    ldr r0, [r0]
    ldr r0, [r0]
    bx lr
}

asm void CARD_GetOwnRomHeader(void)
{
    ldr r0, =0x2fffa80
    bx lr
}

asm void func_02010d8c(void)
{
    ldr r0, =0x2fffe00
    bx lr
}

asm void CARD_LockRom(void)
{
    stmdb sp!, {r0, r1, r2, r3}
    stmdb sp!, {r3, r4, r5, lr}
    sub sp, sp, #0x40
    ldrh r0, [sp, #0x50]
    mov r5, #1
    mov r1, r5
    bl CARDi_LockResource
    add r4, sp, #0
    mov r0, r4
    bl OS_InitEvent
    add r0, sp, #0xc
    bl OS_CreateVAlarm
    ldr r1, =CARDi_LockBusCondition
    add r0, sp, #0x50
    str r0, [sp, #0x38]
    mov r0, r4
    str r1, [sp, #0x34]
    bl CARDi_PeekEventListener
    mov r0, r4
    mov r1, r5
    mov r3, r5
    mov r2, #0
    bl OS_WaitEventEx
    add sp, sp, #0x40
    ldmia sp!, {r3, r4, r5, lr}
    add sp, sp, #0x10
    bx lr
}

asm void CARD_UnlockRom(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    bl OS_UnlockCard
    mov r0, r4
    mov r1, #1
    bl CARDi_UnlockResource
    ldmia sp!, {r4, pc}
}

asm void CARD_LockBackup(void)
{
    ldr r12, =CARDi_LockResource
    mov r1, #2
    bx r12
}

asm void CARD_UnlockBackup(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    bl CARD_TryWaitBackupAsync
    cmp r0, #0
    bne @L_02010e4c
    bl CARD_WaitBackupAsync
@L_02010e4c:
    mov r0, r4
    mov r1, #2
    bl CARDi_UnlockResource
    ldmia sp!, {r4, pc}
}
