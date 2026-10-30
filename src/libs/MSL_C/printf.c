// (asm for now)

void __FileWrite(void);
void __StringWrite(void);
void func_0201a508(void);
void func_0201a630(void);
void sprintf(void);

void func_02017da4(void);
void func_02018328(void);
extern char data_020ab02c[];
void func_0201c058(void);
extern char data_020bf054[];
void OS_TryLockMutex(void);
extern char data_020bb120[];
extern char data_020befc4[];
extern char data_020befe8[];
void OS_LockMutex(void);
void func_02019bec(void);
void OS_UnlockMutex(void);

asm void __FileWrite(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r5, r0
    mov r0, r1
    mov r3, r5
    mov r1, #1
    mov r4, r2
    bl func_02017da4
    cmp r4, r0
    movne r5, #0
    mov r0, r5
    ldmia sp!, {r3, r4, r5, pc}
}

asm void __StringWrite(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r4, r0
    ldr r3, [r4, #8]
    mov r5, r2
    ldr r2, [r4, #4]
    add r0, r3, r5
    cmp r0, r2
    ldr r0, [r4]
    subhi r5, r2, r3
    mov r2, r5
    add r0, r0, r3
    bl func_02018328
    ldr r1, [r4, #8]
    mov r0, #1
    add r1, r1, r5
    str r1, [r4, #8]
    ldmia sp!, {r3, r4, r5, pc}
}

asm void func_0201a508(void)
{
    stmdb sp!, {r0, r1, r2, r3}
    stmdb sp!, {r3, r4, r5, r6, lr}
    sub sp, sp, #4
    mvn r4, #0
    ldr r0, =data_020ab02c
    mov r1, r4
    bl func_0201c058
    cmp r0, #0
    addge sp, sp, #4
    movge r0, r4
    ldmgeia sp!, {r3, r4, r5, r6, lr}
    addge sp, sp, #0x10
    bxge lr
    ldr r6, =data_020bf054
    mov r0, r6
    bl OS_TryLockMutex
    cmp r0, #0
    bne @L_0201a574
    ldr r0, =data_020bb120
    ldr r1, =data_020befc4
    ldr r2, [r0, #4]
    ldr r0, =data_020befe8
    ldr r3, [r2, #0x6c]
    mov r2, #1
    str r3, [r1, #0xc]
    str r2, [r0, #0xc]
    b @L_0201a5c0
@L_0201a574:
    ldr r4, =data_020bb120
    ldr r5, =data_020befc4
    ldr r0, [r4, #4]
    ldr r1, [r5, #0xc]
    ldr r0, [r0, #0x6c]
    cmp r1, r0
    ldreq r0, =data_020befe8
    ldreq r1, [r0, #0xc]
    addeq r1, r1, #1
    streq r1, [r0, #0xc]
    beq @L_0201a5c0
    mov r0, r6
    bl OS_LockMutex
    ldr r1, [r4, #4]
    ldr r0, =data_020befe8
    ldr r2, [r1, #0x6c]
    mov r1, #1
    str r2, [r5, #0xc]
    str r1, [r0, #0xc]
@L_0201a5c0:
    mov r1, #0
    str r1, [sp]
    add r0, sp, #0x18
    bic r3, r0, #3
    ldr r2, [sp, #0x18]
    ldr r0, =__FileWrite
    ldr r1, =data_020ab02c
    add r3, r3, #4
    bl func_02019bec
    ldr r1, =data_020befe8
    mov r4, r0
    ldr r0, [r1, #0xc]
    subs r0, r0, #1
    str r0, [r1, #0xc]
    bne @L_0201a604
    ldr r0, =data_020bf054
    bl OS_UnlockMutex
@L_0201a604:
    mov r0, r4
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, lr}
    add sp, sp, #0x10
    bx lr
}

asm void func_0201a630(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    sub sp, sp, #0x10
    mov r6, r0
    mov r5, r1
    mov r4, #0
    ldr r0, =__StringWrite
    add r1, sp, #4
    str r6, [sp, #4]
    str r5, [sp, #8]
    str r4, [sp, #0xc]
    str r4, [sp]
    bl func_02019bec
    cmp r6, #0
    addeq sp, sp, #0x10
    ldmeqia sp!, {r4, r5, r6, pc}
    cmp r0, r5
    addlo sp, sp, #0x10
    strlob r4, [r6, r0]
    ldmloia sp!, {r4, r5, r6, pc}
    cmp r5, #0
    addne r1, r6, r5
    strneb r4, [r1, #-1]
    add sp, sp, #0x10
    ldmia sp!, {r4, r5, r6, pc}
}

asm void sprintf(void)
{
    stmdb sp!, {r0, r1, r2, r3}
    stmdb sp!, {r3, lr}
    add r1, sp, #0xc
    bic r1, r1, #3
    add r3, r1, #4
    ldr r2, [sp, #0xc]
    mvn r1, #0
    bl func_0201a630
    ldmia sp!, {r3, lr}
    add sp, sp, #0x10
    bx lr
}
