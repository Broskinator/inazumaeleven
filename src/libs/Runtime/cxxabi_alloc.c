// (asm for now)

void DestroyArrayRange(void);
void func_02025658(void);
void __cxa_vec_new(void);
void __cxa_vec_ctor(void);
void __cxa_vec_dtor(void);
void func_0202581c(void);
void __cxa_vec_cleanup(void);
void func_020258ac(void);
void __cxa_vec_delete(void);
void func_020258f4(void);

void _ZSt9terminatev(void);
void func_02025224(void);
void _Znam(void);
void func_02025b58(void);
void func_020255e4(void);

asm void DestroyArrayRange(void)
{
    stmdb sp!, {r4, r5, r6, r7, r11, lr}
    sub sp, sp, #0x18
    mov r11, sp
    mov r7, r0
    mov r6, r1
    mov r5, r2
    mov r4, r3
    str sp, [r11, #0x14]
    cmp r6, r7
    addls sp, r11, #0x18
    ldmlsia sp!, {r4, r5, r6, r7, r11, pc}
@L_0202563c:
    sub r6, r6, r5
    mov r0, r6
    blx r4
    cmp r6, r7
    bhi @L_0202563c
    add sp, r11, #0x18
    ldmia sp!, {r4, r5, r6, r7, r11, pc}
}

asm void func_02025658(void)
{
    bl _ZSt9terminatev
    add r0, r11, #0
    bl func_02025224
    add sp, r11, #0x18
    ldmia sp!, {r4, r5, r6, r7, r11, pc}
}

asm void __cxa_vec_new(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r11, lr}
    sub sp, sp, #0x18
    mov r11, sp
    mov r8, r0
    mov r7, r1
    mov r6, r2
    mla r0, r8, r7, r6
    mov r5, r3
    bl _Znam
    movs r9, r0
    addeq sp, r11, #0x18
    moveq r0, #0
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r11, pc}
    cmp r6, #0
    beq @L_020256b8
    add r0, r9, r6
    str r8, [r0, #-4]
    cmp r6, #8
    strhs r7, [r0, #-8]
@L_020256b8:
    cmp r5, #0
    beq @L_02025718
    str sp, [r11, #0x14]
    cmp r8, #0
    add r4, r9, r6
    beq @L_02025718
@L_020256d0:
    mov r0, r4
    blx r5
    add r4, r4, r7
    subs r8, r8, #1
    bne @L_020256d0
    b @L_02025718
    dcd 0xe59b3038
    dcd 0xe3530000
    dcd 0x0a000003
    dcd 0xe1a01004
    dcd 0xe1a02007
    dcd 0xe0890006
    dcd 0xebffffc2
    dcd 0xe1a00009
    dcd 0xebffffb5
    dcd 0xeb000111
    dcd 0xe28b0000
    dcd 0xebfffec2
@L_02025718:
    add r0, r9, r6
    add sp, r11, #0x18
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r11, pc}
}

asm void __cxa_vec_ctor(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r11, lr}
    sub sp, sp, #0x18
    mov r11, sp
    movs r4, r3
    mov r7, r0
    mov r6, r1
    mov r5, r2
    addeq sp, r11, #0x18
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r11, pc}
    ldr r0, [r11, #0x38]
    cmp r0, #0
    beq @L_020257ac
    mov r8, r7
    str sp, [r11, #0x14]
    cmp r6, #0
    addeq sp, r11, #0x18
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r11, pc}
@L_02025768:
    mov r0, r8
    blx r4
    add r8, r8, r5
    subs r6, r6, #1
    bne @L_02025768
    add sp, r11, #0x18
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r11, pc}
    dcd 0xe59b3038
    dcd 0xe1a00007
    dcd 0xe1a01008
    dcd 0xe1a02005
    dcd 0xebffff9d
    dcd 0xeb0000ee
    dcd 0xe28b0000
    dcd 0xebfffe9f
    dcd 0xe28bd018
    dcd 0xe8bd89f8
@L_020257ac:
    cmp r6, #0
    addeq sp, r11, #0x18
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r11, pc}
@L_020257b8:
    mov r0, r7
    blx r4
    add r7, r7, r5
    subs r6, r6, #1
    bne @L_020257b8
    add sp, r11, #0x18
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r11, pc}
}

asm void __cxa_vec_dtor(void)
{
    stmdb sp!, {r4, r5, r6, r7, r11, lr}
    sub sp, sp, #0x30
    mov r11, sp
    mov r7, r1
    movs r5, r3
    mov r6, r2
    mlane r4, r7, r6, r0
    strne sp, [r11, #0x2c]
    cmpne r7, #0
    addeq sp, r11, #0x30
    ldmeqia sp!, {r4, r5, r6, r7, r11, pc}
@L_02025800:
    sub r4, r4, r6
    mov r0, r4
    blx r5
    subs r7, r7, #1
    bne @L_02025800
    add sp, r11, #0x30
    ldmia sp!, {r4, r5, r6, r7, r11, pc}
}

asm void func_0202581c(void)
{
    str sp, [r11, #0x14]
    subs r7, r7, #1
    beq @L_02025850
@L_02025828:
    sub r4, r4, r6
    mov r0, r4
    blx r5
    subs r7, r7, #1
    bne @L_02025828
    b @L_02025850
    dcd 0xebfffeac
    dcd 0xe28b0000
    dcd 0xebfffe75
    dcd 0xe59bd014
@L_02025850:
    bl func_02025b58
    add r0, r11, #0x18
    bl func_02025224
    add sp, r11, #0x30
    ldmia sp!, {r4, r5, r6, r7, r11, pc}
}

asm void __cxa_vec_cleanup(void)
{
    stmdb sp!, {r4, r5, r6, r7, r11, lr}
    sub sp, sp, #0x18
    mov r11, sp
    mov r7, r1
    movs r5, r3
    mov r6, r2
    mlane r4, r7, r6, r0
    strne sp, [r11, #0x14]
    cmpne r7, #0
    addeq sp, r11, #0x18
    ldmeqia sp!, {r4, r5, r6, r7, r11, pc}
@L_02025890:
    sub r4, r4, r6
    mov r0, r4
    blx r5
    subs r7, r7, #1
    bne @L_02025890
    add sp, r11, #0x18
    ldmia sp!, {r4, r5, r6, r7, r11, pc}
}

asm void func_020258ac(void)
{
    bl _ZSt9terminatev
    add r0, r11, #0
    bl func_02025224
    add sp, r11, #0x18
    ldmia sp!, {r4, r5, r6, r7, r11, pc}
}

asm void __cxa_vec_delete(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    movs r5, r0
    mov r4, r2
    mov r12, r1
    ldmeqia sp!, {r3, r4, r5, pc}
    cmp r3, #0
    beq @L_020258e8
    ldr r1, [r5, #-4]
    mov r2, r12
    bl __cxa_vec_dtor
@L_020258e8:
    sub r0, r5, r4
    bl func_020255e4
    ldmia sp!, {r3, r4, r5, pc}
}

asm void func_020258f4(void)
{
    bx lr
}
