#include "ov090/Unk_ov090_02174240.hpp"

extern "C" void func_ov090_02174d24(void);
extern "C" void func_ov090_02174d60(void);

extern "C" void DSProt_BSS(void);

asm void Free_2174240::__sinit_ov090_02174748()
{
    orr r0, pc, #0
    adds r0, r0, #4
    bne @L_02174d60
    andseq r5, r7, #224, #10
    andseq r6, r7, #68, #28
    andseq r5, r7, #28, #12
    andseq r6, r7, #68, #28
    andseq r5, r7, #88, #12
    andseq r6, r7, #68, #28
    andseq r5, r7, #148, #12
    andseq r6, r7, #68, #28
    andseq r5, r7, #208, #12
    andseq r6, r7, #68, #28
    andseq r5, r7, #12, #14
    andseq r6, r7, #68, #28
    andeq r0, r0, r0
    andeq r0, r0, r0
    andseq r6, r7, #216, #26
}

asm void Free_2174240::__sinit_ov090_02174cf0()
{
    orr r0, pc, #0
    adds r0, r0, #4
    bne @L_02174d60
    andseq r5, r7, #0, #24
    andseq r6, r7, #68, #28
    andseq r5, r7, #60, #24
    andseq r6, r7, #68, #28
    andseq r5, r7, #120, #24
    andseq r6, r7, #68, #28
    andseq r5, r7, #180, #24
    andseq r6, r7, #68, #28
    andeq r0, r0, r0
    andeq r0, r0, r0
}

extern "C" asm void func_ov090_02174d24(void)
{
    mov r0, r0, lsr #0x18
    and r1, r0, #0xff
    and r0, r1, #0xe
    cmp r0, #0xa
    bne @L_02174d58
    and r0, r1, #0xf0
    cmp r0, #0xf0
    moveq r0, #1
    bxeq lr
    tst r1, #1
    movne r0, #2
    moveq r0, #3
    bx lr
@L_02174d58:
    mov r0, #0
    bx lr
}

extern "C" asm void func_ov090_02174d60(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    mov r7, r0
    sub r1, r7, #0xc
    mov r0, #0
    str r0, [r1, #8]
    str r0, [r1, #4]
    str r0, [r7, #-0xc]
@L_02174d7c:
    ldr r1, [r7, #4]
    ldr r0, =DSProt_BSS
    ldr r2, [r7]
    sub r0, r1, r0
    sub r0, r0, #0x1000
    sub r4, r2, #0x1000
    mov r0, r0, lsr #2
    add r5, r4, r0, lsl #2
    ldr r6, =0xf0b9a2ea
    ldr r8, =0xfffffbfe
    b @L_02174e1c
@L_02174da8:
    ldr r0, [r4]
    bl func_ov090_02174d24
    cmp r0, #1
    beq @L_02174dc8
    cmp r0, #2
    beq @L_02174df4
    cmp r0, #3
    bne @L_02174e00
@L_02174dc8:
    ldr r0, [r4]
    bic r1, r0, #0xff000000
    add r1, r1, r8
    and r0, r0, #0xff000000
    bic r1, r1, #0xff000000
    eor r0, r0, #0x1000000
    orr r1, r0, r1
    eor r0, r6, r1, lsr #24
    str r1, [r4]
    bic r6, r0, #0xff000000
    b @L_02174e18
@L_02174df4:
    ldr r0, [r4]
    eor r0, r0, #0x1000000
    str r0, [r4]
@L_02174e00:
    ldr r0, [r4]
    eor r1, r0, r6
    eor r0, r6, r1
    eor r0, r0, r1, lsr #8
    str r1, [r4]
    bic r6, r0, #0xff000000
@L_02174e18:
    add r4, r4, #4
@L_02174e1c:
    cmp r4, r5
    blo @L_02174da8
    mov r12, #0
    mov r1, #0
@L_02174e2c:
    mov r0, #0
@L_02174e30:
    orr r2, r1, r0
    mcr p15, #0, r12, c7, c10, #4
    mcr p15, #0, r2, c7, c14, #2
    add r0, r0, #0x20
    cmp r0, #0x400
    blt @L_02174e30
    add r1, r1, #0x40000000
    cmp r1, #0
    bne @L_02174e2c
    mov r0, #0
    mcr p15, #0, r0, c7, c5, #0
    mcr p15, #0, r12, c7, c10, #4
    ldr r0, =0x0
    str r0, [r7, #4]
    str r0, [r7]
    add r7, r7, #8
    ldr r0, [r7]
    cmp r0, #0
    bne @L_02174d7c
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

asm void Free_2174240::__sinit_ov090_02175078()
{
    orr r0, pc, #0
    adds r0, r0, #4
    bne @L_02174d60
    andseq r5, r7, #80, #30
    andseq r6, r7, #240, #28
    andseq r5, r7, #144, #28
    andseq r6, r7, #220, #28
    andseq r6, r7, #0x28
    andseq r6, r7, #112, #28
    andeq r0, r0, r0
    andeq r0, r0, r0
}

asm void Free_2174240::__sinit_ov090_021758d4()
{
    orr r0, pc, #0
    adds r0, r0, #4
    bne @L_02174d60
    andseq r6, r7, #204, #14
    andseq r6, r7, #68, #28
    andseq r6, r7, #8, #16
    andseq r6, r7, #68, #28
    andseq r6, r7, #4, #4
    andseq r6, r7, #68, #28
    andseq r6, r7, #64, #4
    andseq r6, r7, #68, #28
    andseq r6, r7, #16, #6
    andseq r6, r7, #68, #28
    andseq r6, r7, #92, #16
    andseq r6, r7, #68, #28
    andseq r6, r7, #152, #16
    andseq r6, r7, #68, #28
    andeq r0, r0, r0
    andeq r0, r0, r0
}

asm void Free_2174240::__sinit_ov090_02175d8c()
{
    orr r0, pc, #0
    adds r0, r0, #4
    bne @L_02174d60
    andseq r6, r7, #32, #18
    andseq r6, r7, #164, #28
    andseq r6, r7, #4, #20
    andseq r6, r7, #80, #28
    andseq r6, r7, #60, #20
    andseq r6, r7, #56, #30
    andseq r6, r7, #84, #22
    andseq r6, r7, #164, #30
    andseq r6, r7, #220, #24
    andseq r6, r7, #120, #28
    andseq r6, r7, #52, #26
    andseq r6, r7, #120, #28
    andseq r6, r7, #172, #18
    andseq r6, r7, #120, #28
    andeq r0, r0, r0
    andeq r0, r0, r0
}
