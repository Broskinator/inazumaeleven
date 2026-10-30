// (asm for now)

void rand(void);
void func_0201a6f4(void);
void func_0201a704(void);
void func_0201a77c(void);
void func_0201a7a4(void);
void func_0201a7a8(void);
void strlen(void);
void strcpy(void);
void strncpy(void);
void func_0201aa04(void);

extern char data_020ab328[];
extern char data_020bf3e8[];
extern char data_020bf0b4[];
void OS_TryLockMutex(void);
extern char data_020bb120[];
extern char data_020befc4[];
extern char data_020befe8[];
void OS_LockMutex(void);
extern char data_020bf3ec[];
void OS_UnlockMutex(void);
void func_02017aa4(void);

asm void rand(void)
{
    ldr r2, =data_020ab328
    ldr r0, =0x41c64e6d
    ldr r3, [r2]
    ldr r1, =0x7fff
    mul r0, r3, r0
    add r0, r0, #0x39
    add r0, r0, #0x3000
    str r0, [r2]
    and r0, r1, r0, lsr #16
    bx lr
}

asm void func_0201a6f4(void)
{
    ldr r1, =data_020ab328
    str r0, [r1]
    bx lr
}

asm void func_0201a704(void)
{
    cmp r2, #0
    beq @L_0201a720
    cmp r2, #1
    beq @L_0201a748
    cmp r2, #2
    beq @L_0201a76c
    b @L_0201a774
@L_0201a720:
    ldr r1, [r0]
    ldrb r2, [r1]
    cmp r2, #0
    moveq r1, #1
    streq r1, [r0, #4]
    subeq r0, r1, #2
    addne r1, r1, #1
    strne r1, [r0]
    movne r0, r2
    bx lr
@L_0201a748:
    ldr r2, [r0, #4]
    cmp r2, #0
    ldreq r2, [r0]
    subeq r2, r2, #1
    streq r2, [r0]
    movne r2, #0
    strne r2, [r0, #4]
    mov r0, r1
    bx lr
@L_0201a76c:
    ldr r0, [r0, #4]
    bx lr
@L_0201a774:
    mov r0, #0
    bx lr
}

asm void func_0201a77c(void)
{
    stmdb sp!, {r3, lr}
    ldr r3, =data_020bf3e8
    ldr r3, [r3]
    cmp r3, #0
    beq @L_0201a798
    blx r3
    ldmia sp!, {r3, pc}
@L_0201a798:
    bl func_0201a7a4
    ldmia sp!, {r3, pc}
}

asm void func_0201a7a4(void)
{
    bx lr
}

asm void func_0201a7a8(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r5, r0
    cmp r5, #1
    blt @L_0201a7c0
    cmp r5, #7
    ble @L_0201a7c8
@L_0201a7c0:
    mvn r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_0201a7c8:
    ldr r7, =data_020bf0b4
    mov r0, r7
    bl OS_TryLockMutex
    cmp r0, #0
    bne @L_0201a800
    ldr r0, =data_020bb120
    ldr r1, =data_020befc4
    ldr r2, [r0, #4]
    ldr r0, =data_020befe8
    ldr r3, [r2, #0x6c]
    mov r2, #1
    str r3, [r1, #0x1c]
    str r2, [r0, #0x1c]
    b @L_0201a84c
@L_0201a800:
    ldr r4, =data_020bb120
    ldr r6, =data_020befc4
    ldr r0, [r4, #4]
    ldr r1, [r6, #0x1c]
    ldr r0, [r0, #0x6c]
    cmp r1, r0
    ldreq r0, =data_020befe8
    ldreq r1, [r0, #0x1c]
    addeq r1, r1, #1
    streq r1, [r0, #0x1c]
    beq @L_0201a84c
    mov r0, r7
    bl OS_LockMutex
    ldr r1, [r4, #4]
    ldr r0, =data_020befe8
    ldr r2, [r1, #0x6c]
    mov r1, #1
    str r2, [r6, #0x1c]
    str r1, [r0, #0x1c]
@L_0201a84c:
    ldr r1, =data_020bf3ec
    sub r2, r5, #1
    ldr r4, [r1, r2, lsl #2]
    cmp r4, #1
    movne r0, #0
    strne r0, [r1, r2, lsl #2]
    ldr r0, =data_020befe8
    ldr r1, [r0, #0x1c]
    subs r1, r1, #1
    str r1, [r0, #0x1c]
    bne @L_0201a880
    ldr r0, =data_020bf0b4
    bl OS_UnlockMutex
@L_0201a880:
    cmp r4, #1
    beq @L_0201a894
    cmp r4, #0
    cmpeq r5, #1
    bne @L_0201a89c
@L_0201a894:
    mov r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_0201a89c:
    cmp r4, #0
    bne @L_0201a8ac
    mov r0, #0
    bl func_02017aa4
@L_0201a8ac:
    mov r0, r5
    blx r4
    mov r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

asm void strlen(void)
{
    mvn r2, #0
@L_0201a8d4:
    ldrb r1, [r0], #1
    add r2, r2, #1
    cmp r1, #0
    bne @L_0201a8d4
    mov r0, r2
    bx lr
}

asm void strcpy(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    and r4, r1, #3
    and r3, r0, #3
    mov r2, r0
    cmp r3, r4
    bne @L_0201a988
    cmp r4, #0
    beq @L_0201a944
    ldrb r3, [r1]
    strb r3, [r0]
    tst r3, #0xff
    ldmeqia sp!, {r3, r4, r5, pc}
    rsbs r4, r4, #3
    beq @L_0201a93c
@L_0201a924:
    ldrb r3, [r1, #1]!
    tst r3, #0xff
    strb r3, [r2, #1]!
    ldmeqia sp!, {r3, r4, r5, pc}
    subs r4, r4, #1
    bne @L_0201a924
@L_0201a93c:
    add r2, r2, #1
    add r1, r1, #1
@L_0201a944:
    ldr r5, [r1]
    ldr r3, =0xfefefeff
    mvn r4, r5
    add lr, r5, r3
    ldr r12, =0x80808080
    and r4, lr, r4
    tst r4, r12
    bne @L_0201a988
    sub r2, r2, #4
@L_0201a968:
    str r5, [r2, #4]!
    ldr r5, [r1, #4]!
    add r4, r5, r3
    mvn lr, r5
    and lr, r4, lr
    tst lr, r12
    beq @L_0201a968
    add r2, r2, #4
@L_0201a988:
    ldrb r3, [r1]
    strb r3, [r2]
    tst r3, #0xff
    ldmeqia sp!, {r3, r4, r5, pc}
@L_0201a998:
    ldrb r3, [r1, #1]!
    tst r3, #0xff
    strb r3, [r2, #1]!
    bne @L_0201a998
    ldmia sp!, {r3, r4, r5, pc}
}

asm void strncpy(void)
{
    stmdb sp!, {r3, lr}
    mov lr, r0
    cmp r2, #0
    ldmeqia sp!, {r3, pc}
@L_0201a9c4:
    ldrb r3, [r1], #1
    mov r12, lr
    strb r3, [lr], #1
    ldrb r3, [r12]
    cmp r3, #0
    bne @L_0201a9f8
    subs r2, r2, #1
    ldmeqia sp!, {r3, pc}
    mov r1, #0
@L_0201a9e8:
    strb r1, [lr], #1
    subs r2, r2, #1
    bne @L_0201a9e8
    ldmia sp!, {r3, pc}
@L_0201a9f8:
    subs r2, r2, #1
    bne @L_0201a9c4
    ldmia sp!, {r3, pc}
}

asm void func_0201aa04(void)
{
    mov r3, r0
@L_0201aa08:
    ldrb r2, [r3], #1
    cmp r2, #0
    bne @L_0201aa08
    sub r3, r3, #1
@L_0201aa18:
    ldrb r2, [r1], #1
    mov r12, r3
    strb r2, [r3], #1
    ldrb r2, [r12]
    cmp r2, #0
    bne @L_0201aa18
    bx lr
}
