// (asm for now)

void MIi_UncompressBackward(void);
void do_autoload(void);
void AutoloadCallback(void);
void func_02000a78(void);
void func_02000b64(void);
void BuildInfo(void);
void main(void);

extern char data_027e0000[];
void _ZN4Main13func_0204058cEv(void);

asm void MIi_UncompressBackward(void)
{
    cmp r0, #0
    beq @L_020009f8
    stmdb sp!, {r4, r5, r6, r7}
    ldmdb r0, {r1, r2}
    add r2, r0, r2
    sub r3, r0, r1, lsr #24
    bic r1, r1, #0xff000000
    sub r1, r0, r1
    mov r4, r2
@L_02000974:
    cmp r3, r1
    ble @L_020009d4
    ldrb r5, [r3, #-1]!
    mov r6, #8
@L_02000984:
    subs r6, r6, #1
    blt @L_02000974
    tst r5, #0x80
    bne @L_020009a0
    ldrb r0, [r3, #-1]!
    strb r0, [r2, #-1]!
    b @L_020009c8
@L_020009a0:
    ldrb r12, [r3, #-1]!
    ldrb r7, [r3, #-1]!
    orr r7, r7, r12, lsl #8
    bic r7, r7, #0xf000
    add r7, r7, #2
    add r12, r12, #0x20
@L_020009b8:
    ldrb r0, [r2, r7]
    strb r0, [r2, #-1]!
    subs r12, r12, #0x10
    bge @L_020009b8
@L_020009c8:
    cmp r3, r1
    mov r5, r5, lsl #1
    bgt @L_02000984
@L_020009d4:
    mov r0, #0
    bic r3, r1, #0x1f
@L_020009dc:
    mcr p15, 0, r0, c7, c10, 4
    mcr p15, 0, r3, c7, c5, 1
    mcr p15, 0, r3, c7, c14, 1
    add r3, r3, #0x20
    cmp r3, r4
    blt @L_020009dc
    ldmia sp!, {r4, r5, r6, r7}
@L_020009f8:
    bx lr
}

asm void do_autoload(void)
{
    ldr r0, =0x2000b88
    ldr r1, [r0]
    ldr r2, [r0, #4]
    ldr r3, [r0, #8]
@L_02000a0c:
    cmp r1, r2
    beq @L_02000a6c
    ldr r5, [r1], #4
    ldr r7, [r1], #4
    add r6, r5, r7
    mov r4, r5
@L_02000a24:
    cmp r4, r6
    ldrmi r7, [r3], #4
    strmi r7, [r4], #4
    bmi @L_02000a24
    ldr r7, [r1], #4
    add r6, r4, r7
    mov r7, #0
@L_02000a40:
    cmp r4, r6
    strlo r7, [r4], #4
    blo @L_02000a40
    bic r4, r5, #0x1f
@L_02000a50:
    mcr p15, 0, r7, c7, c10, 4
    mcr p15, 0, r4, c7, c5, 1
    mcr p15, 0, r4, c7, c14, 1
    add r4, r4, #0x20
    cmp r4, r6
    blt @L_02000a50
    b @L_02000a0c
@L_02000a6c:
    b AutoloadCallback
}

asm void AutoloadCallback(void)
{
    bx lr
}

asm void func_02000a78(void)
{
    mrc p15, 0, r0, c1, c0, 0
    ldr r1, [pc, #0xac]
    bic r0, r0, r1
    mcr p15, 0, r0, c1, c0, 0
    mov r0, #0
    mcr p15, 0, r0, c7, c5, 0
    mcr p15, 0, r0, c7, c6, 0
    mcr p15, 0, r0, c7, c10, 4
    ldr r0, [pc, #0x94]
    mcr p15, 0, r0, c6, c0, 0
    ldr r0, [pc, #0x90]
    mcr p15, 0, r0, c6, c1, 0
    ldr r0, [pc, #0x8c]
    mcr p15, 0, r0, c6, c2, 0
    ldr r0, [pc, #0x88]
    mcr p15, 0, r0, c6, c3, 0
    ldr r0, [pc, #0x84]
    orr r0, r0, #0x1a
    orr r0, r0, #1
    mcr p15, 0, r0, c6, c4, 0
    ldr r0, [pc, #0x78]
    mcr p15, 0, r0, c6, c5, 0
    ldr r0, [pc, #0x74]
    mcr p15, 0, r0, c6, c6, 0
    ldr r0, [pc, #0x70]
    mcr p15, 0, r0, c6, c7, 0
    mov r0, #0x20
    mcr p15, 0, r0, c9, c1, 1
    ldr r0, [pc, #0x54]
    orr r0, r0, #0xa
    mcr p15, 0, r0, c9, c1, 0
    mov r0, #0x4a
    mcr p15, 0, r0, c2, c0, 1
    mov r0, #0x4a
    mcr p15, 0, r0, c2, c0, 0
    mov r0, #0xa
    mcr p15, 0, r0, c3, c0, 0
    ldr r0, [pc, #0x40]
    mcr p15, 0, r0, c5, c0, 3
    ldr r0, [pc, #0x3c]
    mcr p15, 0, r0, c5, c0, 2
    mrc p15, 0, r0, c1, c0, 0
    ldr r1, [pc, #0x34]
    orr r0, r0, r1
    mcr p15, 0, r0, c1, c0, 0
    bx lr
    dcd 0x000f9005
    dcd 0x04000033
    dcd 0x02000031
    dcd 0x027ff017
    dcd 0x08000035
    dcd data_027e0000
    dcd 0x0100002f
    dcd 0xffff001d
    dcd 0x02fff017
    dcd 0x05101011
    dcd 0x15111111
    dcd 0x0005707d
    dcd 0xe12fff1e
}

asm void func_02000b64(void)
{
    bx lr
    dcd 0x00000000
    dcd 0x00000000
    dcd 0x00000000
    dcd 0x00000000
    dcd 0x00000900
    dcd 0x00000001
    dcd 0xdec08133
    dcd 0x3381c0de
}

asm void BuildInfo(void)
{

    dcd 0x020c24c0
    dcd 0x020c24d8
    dcd 0x020bb040
    dcd 0x020bb040
    dcd 0x020fc7e0
    dcd 0x00000000
    dcd 0x05047532
    dcd 0xdec00621
    dcd 0x2106c0de
    dcd 0x4b44535b
    dcd 0x4e494e2b
    dcd 0x444e4554
    dcd 0x41423a4f
    dcd 0x50554b43
    dcd 0x0000005d
    dcd 0x4b44535b
    dcd 0x4942552b
    dcd 0x54495551
    dcd 0x3a53554f
    dcd 0x5d535043
    dcd 0x00000000
    dcd 0x4b44535b
    dcd 0x4e494e2b
    dcd 0x444e4554
    dcd 0x57443a4f
    dcd 0x4c442d43
    dcd 0x2e332e35
    dcd 0x30303033
    dcd 0x30322e33
    dcd 0x35303031
    dcd 0x322e3331
    dcd 0x5f353133
    dcd 0x444c5754
    dcd 0x442d4357
    dcd 0x5f355f4c
    dcd 0x41505f33
    dcd 0x33484354
    dcd 0x0000005d
    dcd 0x4b44535b
    dcd 0x4e494e2b
    dcd 0x444e4554
    dcd 0x69573a4f
    dcd 0x2e336946
    dcd 0x30332e33
    dcd 0x2e313030
    dcd 0x39303032
    dcd 0x39323031
    dcd 0x31353631
    dcd 0x0000005d
    dcd 0x4b44535b
    dcd 0x4942552b
    dcd 0x54495551
    dcd 0x3a53554f
    dcd 0x5d4c5353
    dcd 0x00000000
    dcd 0x4b44535b
    dcd 0x626f4d2b
    dcd 0x696c6369
    dcd 0x49202c70
    dcd 0x3a2e636e
    dcd 0x69626f4d
    dcd 0x70696c63
    dcd 0x4b445320
    dcd 0x2e315620
    dcd 0x5d322e32
    dcd 0x00000000
}

asm void main(void)
{
    ldr r12, =_ZN4Main13func_0204058cEv
    bx r12
}
