// (asm for now)

extern char data_020ab72c[];
extern char data_020ab760[];
extern char data_020ab76c[];
void func_02025b10(void);
extern char data_020bf414[];
void func_02017c4c(void);
void func_02024de8(void);
void func_02017c64(void);
extern char data_020ab730[];

asm void _ZSt17__throw_bad_allocv(void)
{
    stmdb sp!, {r3, lr}
    ldr r0, =data_020ab72c
    ldrb r0, [r0]
    cmp r0, #0
    ldmeqia sp!, {r3, pc}
    ldr r3, =data_020ab760
    ldr r0, =data_020ab76c
    ldr r2, =func_0202553c
    add r1, sp, #0
    str r3, [sp]
    bl func_02025b10
    ldmia sp!, {r3, pc}
}

asm void func_0202553c(void)
{
    bx lr
}

asm void _Znwm(void)
{
    stmdb sp!, {r3, r4, r5, r6, r11, lr}
    sub sp, sp, #0x18
    mov r11, sp
    movs r6, r0
    ldr r4, =data_020bf414
    moveq r6, #4
@L_02025558:
    mov r0, r6
    bl func_02017c4c
    movs r5, r0
    bne @L_02025580
    ldr r0, [r4]
    cmp r0, #0
    beq @L_0202557c
    blx r0
    b @L_02025558
@L_0202557c:
    bl _ZSt17__throw_bad_allocv
@L_02025580:
    add sp, r11, #0x18
    mov r0, r5
    ldmia sp!, {r3, r4, r5, r6, r11, pc}
    add r0, r11, #0
    bl func_02024de8
@L_02025594:
    b @L_02025594
    add sp, r11, #0x18
    ldmia sp!, {r3, r4, r5, r6, r11, pc}
}

asm void _ZdlPv(void)
{
    stmdb sp!, {r3, lr}
    cmp r0, #0
    ldmeqia sp!, {r3, pc}
    bl func_02017c64
    ldmia sp!, {r3, pc}
}

asm void _Znam(void)
{
    stmdb sp!, {r11, lr}
    sub sp, sp, #0x18
    mov r11, sp
    bl _Znwm
    add sp, r11, #0x18
    ldmia sp!, {r11, pc}
}

asm void func_020255d0(void)
{
    add r0, r11, #0
    bl func_02024de8
@L_020255d8:
    b @L_020255d8
}

asm void func_020255dc(void)
{
    add sp, r11, #0x18
    ldmia sp!, {r11, pc}
}

asm void func_020255e4(void)
{
    ldr r12, =_ZdlPv
    bx r12
}

asm void func_020255f0(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    bl _ZdlPv
    mov r0, r4
    ldmia sp!, {r4, pc}
}

asm void func_02025604(void)
{
    ldr r0, =data_020ab730
    bx lr
}
