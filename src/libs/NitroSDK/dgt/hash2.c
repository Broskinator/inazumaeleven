// (asm for now)

void DGT_SetOverlayTableMode(void);
void func_02016154(void);
void func_020161a8(void);
void func_0201623c(void);
void func_02016434(void);
void func_020164c8(void);

extern char data_020beeb0[];
void func_0201605c(void);
extern char data_020aafdc[];
void func_020169bc(void);
void MI_CpuCopy8(void);
extern char data_020a43d0[];
extern char data_020a43d1[];
void func_02016088(void);
extern char data_020a43dc[];

asm void DGT_SetOverlayTableMode(void)
{
    ldr r1, =data_020beeb0
    cmp r0, #0
    ldr r2, [r1]
    str r0, [r1]
    ldrne r1, =func_0201605c
    ldrne r0, =data_020aafdc
    ldreq r1, =func_020169bc
    ldreq r0, =data_020aafdc
    str r1, [r0]
    mov r0, r2
    bx lr
}

asm void func_02016154(void)
{
    stmdb sp!, {r4, lr}
    ldr lr, =0x67452301
    mov r4, #0
    ldr r12, =0xefcdab89
    ldr r3, =0x98badcfe
    ldr r2, =0x10325476
    ldr r1, =0xc3d2e1f0
    str r4, [r0, #0x58]
    str r4, [r0, #0x5c]
    str r4, [r0, #0x54]
    str lr, [r0]
    str r12, [r0, #4]
    str r3, [r0, #8]
    str r2, [r0, #0xc]
    str r1, [r0, #0x10]
    ldmia sp!, {r4, pc}
}

asm void func_020161a8(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    movs r7, r2
    mov r9, r0
    mov r8, r1
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    ldr r10, =data_020aafdc
    add r5, r9, #0x14
    mov r4, #0
@L_020161c8:
    ldr r1, [r9, #0x54]
    mov r0, r8
    rsb r6, r1, #0x40
    cmp r6, r7
    movhi r6, r7
    mov r2, r6
    add r1, r5, r1
    bl MI_CpuCopy8
    ldr r0, [r9, #0x54]
    add r8, r8, r6
    add r0, r0, r6
    str r0, [r9, #0x54]
    cmp r0, #0x40
    sub r7, r7, r6
    blo @L_0201622c
    ldr r1, [r10]
    mov r0, r9
    blx r1
    ldr r0, [r9, #0x58]
    str r4, [r9, #0x54]
    adds r0, r0, #1
    str r0, [r9, #0x58]
    ldreq r0, [r9, #0x5c]
    addeq r0, r0, #1
    streq r0, [r9, #0x5c]
@L_0201622c:
    cmp r7, #0
    bne @L_020161c8
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
}

asm void func_0201623c(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    sub sp, sp, #8
    mov r4, r0
    ldr r3, [r4, #0x54]
    ldr r2, [r4, #0x58]
    mov r3, r3, lsl #3
    add r7, r3, r2, lsl #9
    mov r5, r7, lsr #0x18
    mov r3, r7, lsr #8
    mov r6, r7, lsl #8
    mov r7, r7, lsl #0x18
    and r5, r5, #0xff
    and r3, r3, #0xff00
    and r6, r6, #0xff0000
    orr r3, r5, r3
    and r5, r7, #0xff000000
    orr r3, r6, r3
    orr r3, r5, r3
    str r3, [sp, #4]
    ldr r3, [r4, #0x5c]
    mov r2, r2, lsr #0x17
    add r6, r2, r3, lsl #9
    mov r3, r6, lsr #0x18
    mov r2, r6, lsr #8
    mov r5, r6, lsl #8
    mov r7, r6, lsl #0x18
    mov r6, r1
    and r3, r3, #0xff
    and r1, r2, #0xff00
    and r2, r5, #0xff0000
    orr r1, r3, r1
    and r3, r7, #0xff000000
    orr r1, r2, r1
    orr r2, r3, r1
    ldr r1, =data_020a43d0
    str r2, [sp]
    mov r2, #1
    bl func_020161a8
    ldr r0, [r4, #0x54]
    rsb r2, r0, #0x40
    cmp r2, #8
    bhs @L_020162f0
    ldr r1, =data_020a43d1
    mov r0, r4
    bl func_020161a8
@L_020162f0:
    ldr r1, [r4, #0x54]
    mov r0, r4
    rsb r2, r1, #0x38
    mov r1, #0
    bl func_02016088
    add r1, sp, #0
    mov r0, r4
    mov r2, #8
    bl func_020161a8
    ldmia r4, {r5, r12}
    mov r1, r5, lsr #0x18
    and r7, r1, #0xff
    mov r1, r6
    mov r6, r5, lsl #0x18
    and lr, r6, #0xff000000
    mov r6, r5, lsl #8
    mov r5, r5, lsr #8
    and r5, r5, #0xff00
    and r6, r6, #0xff0000
    orr r5, r7, r5
    orr r5, r6, r5
    orr r5, lr, r5
    mov r6, r12, lsr #0x18
    str r5, [r4]
    mov r5, r12, lsr #8
    ldr r3, [r4, #8]
    and r6, r6, #0xff
    and r5, r5, #0xff00
    orr r6, r6, r5
    mov r5, r3, lsr #0x18
    and lr, r5, #0xff
    mov r5, r12, lsl #0x18
    and r7, r5, #0xff000000
    mov r5, r12, lsl #8
    and r5, r5, #0xff0000
    orr r5, r5, r6
    orr r6, r7, r5
    mov r5, r3, lsr #8
    and r5, r5, #0xff00
    ldr r2, [r4, #0xc]
    str r6, [r4, #4]
    mov r6, r2, lsr #0x18
    orr lr, lr, r5
    mov r5, r2, lsr #8
    ldr r0, [r4, #0x10]
    and r6, r6, #0xff
    and r5, r5, #0xff00
    orr r12, r6, r5
    mov r5, r0, lsr #0x18
    and r6, r5, #0xff
    mov r5, r3, lsl #0x18
    mov r3, r3, lsl #8
    and r3, r3, #0xff0000
    and r5, r5, #0xff000000
    orr r3, r3, lr
    orr r3, r5, r3
    str r3, [r4, #8]
    mov r3, r2, lsl #8
    mov r2, r2, lsl #0x18
    and lr, r2, #0xff000000
    and r2, r3, #0xff0000
    orr r2, r2, r12
    orr r3, lr, r2
    mov r5, r0, lsr #8
    mov r12, r0, lsl #8
    and r2, r5, #0xff00
    mov lr, r0, lsl #0x18
    orr r0, r6, r2
    and r5, r12, #0xff0000
    and r2, lr, #0xff000000
    orr r0, r5, r0
    orr r5, r2, r0
    mov r0, r4
    mov r2, #0x14
    str r3, [r4, #0xc]
    str r5, [r4, #0x10]
    bl MI_CpuCopy8
    add sp, sp, #8
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

asm void func_02016434(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    sub sp, sp, #0x98
    ldr lr, =data_020a43dc
    add r12, sp, #8
    mov r8, r0
    mov r7, r1
    mov r6, r2
    mov r5, r3
    mov r4, r12
    ldmia lr!, {r0, r1, r2, r3}
    stmia r12!, {r0, r1, r2, r3}
    ldmia lr, {r0, r1, r2}
    stmia r12, {r0, r1, r2}
    add lr, sp, #0x38
    add r12, sp, #0x24
    str lr, [sp, #0x10]
    ldr lr, =func_02016154
    str r12, [sp, #0x14]
    ldr r12, =func_020161a8
    str lr, [sp, #0x18]
    ldr lr, =func_0201623c
    str r12, [sp, #0x1c]
    ldr r12, [sp, #0xb0]
    str lr, [sp, #0x20]
    str r12, [sp]
    mov r3, r5
    mov r0, r8
    mov r1, r7
    mov r2, r6
    str r4, [sp, #4]
    bl func_020164c8
    add sp, sp, #0x98
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

asm void func_020164c8(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #0xc0
    ldr r5, [sp, #0xe0]
    ldr r4, [sp, #0xe4]
    mov r8, r1
    movs r9, r0
    mov r7, r2
    cmpne r8, #0
    mov r6, r3
    cmpne r7, #0
    cmpne r6, #0
    cmpne r5, #0
    cmpne r4, #0
    addeq sp, sp, #0xc0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    ldr r0, [r4, #4]
    cmp r5, r0
    bls @L_02016548
    ldr r0, [r4, #8]
    ldr r1, [r4, #0x10]
    blx r1
    ldr r0, [r4, #8]
    ldr r3, [r4, #0x14]
    mov r1, r6
    mov r2, r5
    blx r3
    add r6, sp, #0x80
    ldr r0, [r4, #8]
    ldr r2, [r4, #0x18]
    mov r1, r6
    blx r2
    ldr r5, [r4]
@L_02016548:
    cmp r5, #0
    mov r0, #0
    bls @L_02016570
    add r1, sp, #0x40
@L_02016558:
    ldrb r2, [r6, r0]
    eor r2, r2, #0x36
    strb r2, [r1, r0]
    add r0, r0, #1
    cmp r0, r5
    blo @L_02016558
@L_02016570:
    ldr r1, [r4, #4]
    cmp r0, r1
    bhs @L_02016598
    mov r3, #0x36
    add r2, sp, #0x40
@L_02016584:
    strb r3, [r2, r0]
    ldr r1, [r4, #4]
    add r0, r0, #1
    cmp r0, r1
    blo @L_02016584
@L_02016598:
    ldr r0, [r4, #8]
    ldr r1, [r4, #0x10]
    blx r1
    ldr r0, [r4, #8]
    ldr r2, [r4, #4]
    ldr r3, [r4, #0x14]
    add r1, sp, #0x40
    blx r3
    ldr r0, [r4, #8]
    ldr r3, [r4, #0x14]
    mov r1, r8
    mov r2, r7
    blx r3
    ldr r0, [r4, #8]
    ldr r1, [r4, #0xc]
    ldr r2, [r4, #0x18]
    blx r2
    cmp r5, #0
    mov r3, #0
    bls @L_02016604
    add r0, sp, #0
@L_020165ec:
    ldrb r1, [r6, r3]
    eor r1, r1, #0x5c
    strb r1, [r0, r3]
    add r3, r3, #1
    cmp r3, r5
    blo @L_020165ec
@L_02016604:
    ldr r0, [r4, #4]
    cmp r3, r0
    bhs @L_0201662c
    mov r2, #0x5c
    add r1, sp, #0
@L_02016618:
    strb r2, [r1, r3]
    ldr r0, [r4, #4]
    add r3, r3, #1
    cmp r3, r0
    blo @L_02016618
@L_0201662c:
    ldr r0, [r4, #8]
    ldr r1, [r4, #0x10]
    blx r1
    ldr r0, [r4, #8]
    ldr r2, [r4, #4]
    ldr r3, [r4, #0x14]
    add r1, sp, #0
    blx r3
    ldr r0, [r4, #8]
    ldr r1, [r4, #0xc]
    ldr r2, [r4]
    ldr r3, [r4, #0x14]
    blx r3
    ldr r0, [r4, #8]
    ldr r2, [r4, #0x18]
    mov r1, r9
    blx r2
    add sp, sp, #0xc0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}
