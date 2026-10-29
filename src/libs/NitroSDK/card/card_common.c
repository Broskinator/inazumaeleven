// (asm for now)

void func_02010d34(void);
void func_0200878c(void);
extern char data_020bd3e0[];
extern char data_020bd460[];
void func_02010e5c(void);
void func_020087d8(void);
void func_020080f0(void);
void func_02010c24(void);
void func_02010bcc(void);
void func_020087ec(void);
void func_02005840(void);
void func_02010ed4(void);
void CARD_TryWaitBackupAsync(void);
void CARD_WaitBackupAsync(void);

asm void CARD_CheckEnabled(void)
{
    stmdb sp!, {r3, lr}
    bl func_02010d34
    cmp r0, #0
    ldmneia sp!, {r3, pc}
    bl func_0200878c
    ldmia sp!, {r3, pc}
}

asm void func_02010d5c(void)
{
    ldr r1, =data_020bd3e0
    str r0, [r1]
    bx lr
}

asm void CARD_GetResultCode(void)
{
    ldr r0, =data_020bd460
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

asm void func_02010d98(void)
{
    stmdb sp!, {r0, r1, r2, r3}
    stmdb sp!, {r3, r4, r5, lr}
    sub sp, sp, #0x40
    ldrh r0, [sp, #0x50]
    mov r5, #1
    mov r1, r5
    bl func_02010e5c
    add r4, sp, #0
    mov r0, r4
    bl func_020087d8
    add r0, sp, #0xc
    bl func_020080f0
    ldr r1, =func_02010c24
    add r0, sp, #0x50
    str r0, [sp, #0x38]
    mov r0, r4
    str r1, [sp, #0x34]
    bl func_02010bcc
    mov r0, r4
    mov r1, r5
    mov r3, r5
    mov r2, #0
    bl func_020087ec
    add sp, sp, #0x40
    ldmia sp!, {r3, r4, r5, lr}
    add sp, sp, #0x10
    bx lr
}

asm void CARD_UnlockRom(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    bl func_02005840
    mov r0, r4
    mov r1, #1
    bl func_02010ed4
    ldmia sp!, {r4, pc}
}

asm void CARD_LockBackup(void)
{
    ldr r12, =func_02010e5c
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
    bl func_02010ed4
    ldmia sp!, {r4, pc}
}
