// (asm for now)

void __kernel_sin(void);

void _dfix(void);
void _dmul(void);
void _dadd(void);
void _dsub(void);

asm void __kernel_sin(void)
{
    stmdb sp!, {r0, r1, r2, r3}
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0xc
    ldr r0, [sp, #0x34]
    mov r10, r2
    bic r0, r0, #0x80000000
    mov r9, r3
    cmp r0, #0x3e400000
    bge @L_02020398
    ldr r0, [sp, #0x30]
    ldr r1, [sp, #0x34]
    bl _dfix
    cmp r0, #0
    ldreq r0, [sp, #0x30]
    ldreq r1, [sp, #0x34]
    addeq sp, sp, #0xc
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    addeq sp, sp, #0x10
    bxeq lr
@L_02020398:
    ldr r0, [sp, #0x30]
    ldr r1, [sp, #0x34]
    mov r2, r0
    mov r3, r1
    bl _dmul
    ldr r2, [sp, #0x30]
    ldr r3, [sp, #0x34]
    mov r5, r0
    mov r6, r1
    bl _dmul
    mov r4, r0
    mov r7, r1
    ldr r0, =0x5acfd57c
    ldr r1, =0x3de5d93a
    mov r2, r5
    mov r3, r6
    bl _dmul
    mov r2, r0
    mov r3, r1
    ldr r0, =0x8a2b9ceb
    ldr r1, =0xbe5ae5e6
    bl _dadd
    mov r2, r0
    mov r3, r1
    mov r0, r5
    mov r1, r6
    bl _dmul
    mov r2, r0
    mov r3, r1
    ldr r0, =0x57b1fe7d
    ldr r1, =0x3ec71de3
    bl _dadd
    mov r2, r0
    mov r3, r1
    mov r0, r5
    mov r1, r6
    bl _dmul
    mov r2, r0
    mov r3, r1
    ldr r0, =0x19c161d5
    ldr r1, =0xbf2a01a0
    bl _dadd
    mov r2, r0
    mov r3, r1
    mov r0, r5
    mov r1, r6
    bl _dmul
    mov r2, r0
    mov r3, r1
    ldr r0, =0x1110f8a6
    ldr r1, =0x3f811111
    bl _dadd
    mov r11, r0
    mov r8, r1
    ldr r0, [sp, #0x40]
    cmp r0, #0
    bne @L_020204dc
    mov r0, r5
    mov r1, r6
    mov r2, r11
    mov r3, r8
    bl _dmul
    mov r2, r0
    mov r3, r1
    ldr r0, =0x55555549
    ldr r1, =0xbfc55555
    bl _dadd
    mov r2, r0
    mov r3, r1
    mov r0, r4
    mov r1, r7
    bl _dmul
    mov r2, r0
    mov r3, r1
    ldr r0, [sp, #0x30]
    ldr r1, [sp, #0x34]
    bl _dadd
    add sp, sp, #0xc
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    add sp, sp, #0x10
    bx lr
@L_020204dc:
    ldr r1, =0x3fe00000
    mov r2, r10
    mov r3, r9
    mov r0, #0
    bl _dmul
    str r0, [sp, #8]
    str r1, [sp, #4]
    mov r2, r11
    mov r3, r8
    mov r0, r4
    mov r1, r7
    bl _dmul
    mov r2, r0
    mov r3, r1
    ldr r0, [sp, #8]
    ldr r1, [sp, #4]
    bl _dsub
    mov r2, r0
    mov r3, r1
    mov r0, r5
    mov r1, r6
    bl _dmul
    mov r2, r10
    mov r3, r9
    bl _dsub
    mov r2, r4
    mov r4, r0
    mov r5, r1
    ldr r0, =0x55555549
    ldr r1, =0xbfc55555
    mov r3, r7
    bl _dmul
    mov r2, r0
    mov r3, r1
    mov r0, r4
    mov r1, r5
    bl _dsub
    mov r2, r0
    mov r3, r1
    ldr r0, [sp, #0x30]
    ldr r1, [sp, #0x34]
    bl _dsub
    add sp, sp, #0xc
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    add sp, sp, #0x10
    bx lr
}
