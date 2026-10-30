#include "ov088/Unk_ov088_02174240.hpp"

extern "C" void func_ov088_02174240(void);
extern "C" void func_ov088_02174800(void);
extern "C" void func_ov088_02174830(void);
extern "C" void func_ov088_021748f8(void);
extern "C" void func_ov088_0217490c(void);
extern "C" void func_ov088_0217492c(void);
extern "C" void func_ov088_02174944(void);
extern "C" void func_ov088_0217495c(void);
extern "C" void func_ov088_02174980(void);
extern "C" void func_ov088_021749a4(void);
extern "C" void func_ov088_021749c8(void);
extern "C" void func_ov088_021749ec(void);
extern "C" void func_ov088_021749f8(void);
extern "C" void func_ov088_02174a04(u8 *arg0);
extern "C" void func_ov088_02174a34(void);
extern "C" void func_ov088_02174a48(void);
extern "C" void func_ov088_02174fe0(void);
extern "C" s32 func_ov088_02175144(u8 *arg0);
extern "C" s32 func_ov088_0217514c(u8 *arg0);
extern "C" void func_ov088_02175154(void);
extern "C" void func_ov088_0217528c(void);
extern "C" void func_ov088_02175368(void);
extern "C" void func_ov088_021754d8(void);
extern "C" void func_ov088_02175518(void);
extern "C" void func_ov088_02175590(void);
extern "C" void func_ov088_021755fc(void);
extern "C" void func_ov088_02175668(void);
extern "C" void func_ov088_021756d4(void);
extern "C" void func_ov088_021756e0(void);
extern "C" void func_ov088_021756ec(void);
extern "C" void func_ov088_02175720(void);
extern "C" void func_ov088_02175770(void);
extern "C" void func_ov088_021757d8(void);
extern "C" void func_ov088_02175858(void);
extern "C" void func_ov088_02175880(void);
extern "C" void func_ov088_02175894(void);
extern "C" void func_ov088_02175898(void);
extern "C" void func_ov088_021759c8(void);
extern "C" void func_ov088_02175bf4(void);

extern "C" char data_ov088_02175dd4[];
extern "C" char data_ov088_02177ed4[];
extern "C" char data_ov088_02179fd4[];
extern "C" char data_ov088_02180570[];
extern "C" char data_ov088_021806f0[];
extern "C" char data_ov088_02180a38[];
extern "C" char data_ov088_02180a60[];
extern "C" void FS_ReadFile(void);
extern "C" void FS_ReadFileAsync(void);
extern "C" void FS_SeekFile(void);
extern "C" void FS_WaitAsync(void);
extern "C" void MI_CpuFill8(void);
extern "C" void MIi_CpuClearFast(void);
extern "C" void MIi_CpuCopyFast(void);
extern "C" void _ZN11MoviePlayer12FreeCallbackEPv(void);
extern "C" void _ZN11MoviePlayer13AllocCallbackEm(void);
extern "C" void func_02000b64(void);
extern "C" void func_0200c974(void);
extern "C" void func_0200c980(void);
extern "C" void func_02175b00(void);
extern "C" void func_02175cfc(void);

extern "C" asm void func_ov088_02174240(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, r12, lr}
    ldr r8, [r0, #0xc]
    ldr r9, [r0, #0x10]
    ldr r10, [r0, #0x14]
    ldr r3, [r0, #0x18]
    mov r4, #0x100
    rsb r5, r9, r4, lsl #1
    sub r6, r4, r9, lsr #1
    sub r7, r8, r9
    mov r7, r7, lsl #1
    stmdb sp!, {r5, r6, r7, r8, r9, r10}
    ldr r1, [r0, #4]
    ldr r2, [r0, #8]
    ldr r0, [r0]
    add r3, r3, #0x100
    add lr, r2, r8
@L_02174280:
    str r10, [sp, #-4]!
    ldr r10, [sp, #0x14]
@L_02174288:
    ldrb r5, [r1], #0x80
    ldrb r6, [r1], #-0x7f
    ldrb r4, [r0], #1
    sub r5, r5, #0x80
    sub r6, r6, #0x80
    add r7, r3, r6
    sub r6, r5, r6
    add r6, r6, r3
    sub r5, r6, r5, lsl #1
    ldrb r8, [r7, r4]
    ldrb r11, [r6, r4]
    ldrb r12, [r5, r4]
    ldrb r4, [r0], #0xff
    add r8, r11, r8, lsl #5
    add r8, r8, r12, lsl #10
    orr r8, r8, #0x8000
    sub r4, r4, #4
    ldrb r9, [r7, r4]
    ldrb r11, [r6, r4]
    ldrb r12, [r5, r4]
    ldrb r4, [r0], #1
    add r8, r8, r9, lsl #21
    add r8, r8, r11, lsl #16
    add r8, r8, r12, lsl #26
    orr r8, r8, #0x80000000
    str r8, [r2], #4
    sub r4, r4, #4
    ldrb r8, [r7, r4]
    ldrb r11, [r6, r4]
    ldrb r12, [r5, r4]
    ldrb r4, [r0], #-0xff
    add r8, r11, r8, lsl #5
    add r8, r8, r12, lsl #10
    orr r8, r8, #0x8000
    ldrb r9, [r7, r4]
    ldrb r11, [r6, r4]
    ldrb r12, [r5, r4]
    add r8, r8, r9, lsl #21
    add r8, r8, r11, lsl #16
    add r8, r8, r12, lsl #26
    orr r8, r8, #0x80000000
    str r8, [lr], #4
    ldrb r5, [r1], #0x80
    ldrb r6, [r1], #-0x7f
    ldrb r4, [r0], #1
    sub r5, r5, #0x80
    sub r6, r6, #0x80
    add r7, r3, r6
    sub r6, r5, r6
    add r6, r6, r3
    sub r5, r6, r5, lsl #1
    ldrb r8, [r7, r4]
    ldrb r11, [r6, r4]
    ldrb r12, [r5, r4]
    ldrb r4, [r0], #0xff
    add r8, r11, r8, lsl #5
    add r8, r8, r12, lsl #10
    orr r8, r8, #0x8000
    sub r4, r4, #4
    ldrb r9, [r7, r4]
    ldrb r11, [r6, r4]
    ldrb r12, [r5, r4]
    ldrb r4, [r0], #1
    add r8, r8, r9, lsl #21
    add r8, r8, r11, lsl #16
    add r8, r8, r12, lsl #26
    orr r8, r8, #0x80000000
    str r8, [r2], #4
    sub r4, r4, #4
    ldrb r8, [r7, r4]
    ldrb r11, [r6, r4]
    ldrb r12, [r5, r4]
    ldrb r4, [r0], #-0xff
    add r8, r11, r8, lsl #5
    add r8, r8, r12, lsl #10
    orr r8, r8, #0x8000
    ldrb r9, [r7, r4]
    ldrb r11, [r6, r4]
    ldrb r12, [r5, r4]
    add r8, r8, r9, lsl #21
    add r8, r8, r11, lsl #16
    add r8, r8, r12, lsl #26
    orr r8, r8, #0x80000000
    str r8, [lr], #4
    ldrb r5, [r1], #0x80
    ldrb r6, [r1], #-0x7f
    ldrb r4, [r0], #1
    sub r5, r5, #0x80
    sub r6, r6, #0x80
    add r7, r3, r6
    sub r6, r5, r6
    add r6, r6, r3
    sub r5, r6, r5, lsl #1
    ldrb r8, [r7, r4]
    ldrb r11, [r6, r4]
    ldrb r12, [r5, r4]
    ldrb r4, [r0], #0xff
    add r8, r11, r8, lsl #5
    add r8, r8, r12, lsl #10
    orr r8, r8, #0x8000
    sub r4, r4, #4
    ldrb r9, [r7, r4]
    ldrb r11, [r6, r4]
    ldrb r12, [r5, r4]
    ldrb r4, [r0], #1
    add r8, r8, r9, lsl #21
    add r8, r8, r11, lsl #16
    add r8, r8, r12, lsl #26
    orr r8, r8, #0x80000000
    str r8, [r2], #4
    sub r4, r4, #4
    ldrb r8, [r7, r4]
    ldrb r11, [r6, r4]
    ldrb r12, [r5, r4]
    ldrb r4, [r0], #-0xff
    add r8, r11, r8, lsl #5
    add r8, r8, r12, lsl #10
    orr r8, r8, #0x8000
    ldrb r9, [r7, r4]
    ldrb r11, [r6, r4]
    ldrb r12, [r5, r4]
    add r8, r8, r9, lsl #21
    add r8, r8, r11, lsl #16
    add r8, r8, r12, lsl #26
    orr r8, r8, #0x80000000
    str r8, [lr], #4
    ldrb r5, [r1], #0x80
    ldrb r6, [r1], #-0x7f
    ldrb r4, [r0], #1
    sub r5, r5, #0x80
    sub r6, r6, #0x80
    add r7, r3, r6
    sub r6, r5, r6
    add r6, r6, r3
    sub r5, r6, r5, lsl #1
    ldrb r8, [r7, r4]
    ldrb r11, [r6, r4]
    ldrb r12, [r5, r4]
    ldrb r4, [r0], #0xff
    add r8, r11, r8, lsl #5
    add r8, r8, r12, lsl #10
    orr r8, r8, #0x8000
    sub r4, r4, #4
    ldrb r9, [r7, r4]
    ldrb r11, [r6, r4]
    ldrb r12, [r5, r4]
    ldrb r4, [r0], #1
    add r8, r8, r9, lsl #21
    add r8, r8, r11, lsl #16
    add r8, r8, r12, lsl #26
    orr r8, r8, #0x80000000
    str r8, [r2], #4
    sub r4, r4, #4
    ldrb r8, [r7, r4]
    ldrb r11, [r6, r4]
    ldrb r12, [r5, r4]
    ldrb r4, [r0], #-0xff
    add r8, r11, r8, lsl #5
    add r8, r8, r12, lsl #10
    orr r8, r8, #0x8000
    ldrb r9, [r7, r4]
    ldrb r11, [r6, r4]
    ldrb r12, [r5, r4]
    add r8, r8, r9, lsl #21
    add r8, r8, r11, lsl #16
    add r8, r8, r12, lsl #26
    orr r8, r8, #0x80000000
    str r8, [lr], #4
    ldrb r5, [r1], #0x80
    ldrb r6, [r1], #-0x7f
    ldrb r4, [r0], #1
    sub r5, r5, #0x80
    sub r6, r6, #0x80
    add r7, r3, r6
    sub r6, r5, r6
    add r6, r6, r3
    sub r5, r6, r5, lsl #1
    ldrb r8, [r7, r4]
    ldrb r11, [r6, r4]
    ldrb r12, [r5, r4]
    ldrb r4, [r0], #0xff
    add r8, r11, r8, lsl #5
    add r8, r8, r12, lsl #10
    orr r8, r8, #0x8000
    sub r4, r4, #4
    ldrb r9, [r7, r4]
    ldrb r11, [r6, r4]
    ldrb r12, [r5, r4]
    ldrb r4, [r0], #1
    add r8, r8, r9, lsl #21
    add r8, r8, r11, lsl #16
    add r8, r8, r12, lsl #26
    orr r8, r8, #0x80000000
    str r8, [r2], #4
    sub r4, r4, #4
    ldrb r8, [r7, r4]
    ldrb r11, [r6, r4]
    ldrb r12, [r5, r4]
    ldrb r4, [r0], #-0xff
    add r8, r11, r8, lsl #5
    add r8, r8, r12, lsl #10
    orr r8, r8, #0x8000
    ldrb r9, [r7, r4]
    ldrb r11, [r6, r4]
    ldrb r12, [r5, r4]
    add r8, r8, r9, lsl #21
    add r8, r8, r11, lsl #16
    add r8, r8, r12, lsl #26
    orr r8, r8, #0x80000000
    str r8, [lr], #4
    ldrb r5, [r1], #0x80
    ldrb r6, [r1], #-0x7f
    ldrb r4, [r0], #1
    sub r5, r5, #0x80
    sub r6, r6, #0x80
    add r7, r3, r6
    sub r6, r5, r6
    add r6, r6, r3
    sub r5, r6, r5, lsl #1
    ldrb r8, [r7, r4]
    ldrb r11, [r6, r4]
    ldrb r12, [r5, r4]
    ldrb r4, [r0], #0xff
    add r8, r11, r8, lsl #5
    add r8, r8, r12, lsl #10
    orr r8, r8, #0x8000
    sub r4, r4, #4
    ldrb r9, [r7, r4]
    ldrb r11, [r6, r4]
    ldrb r12, [r5, r4]
    ldrb r4, [r0], #1
    add r8, r8, r9, lsl #21
    add r8, r8, r11, lsl #16
    add r8, r8, r12, lsl #26
    orr r8, r8, #0x80000000
    str r8, [r2], #4
    sub r4, r4, #4
    ldrb r8, [r7, r4]
    ldrb r11, [r6, r4]
    ldrb r12, [r5, r4]
    ldrb r4, [r0], #-0xff
    add r8, r11, r8, lsl #5
    add r8, r8, r12, lsl #10
    orr r8, r8, #0x8000
    ldrb r9, [r7, r4]
    ldrb r11, [r6, r4]
    ldrb r12, [r5, r4]
    add r8, r8, r9, lsl #21
    add r8, r8, r11, lsl #16
    add r8, r8, r12, lsl #26
    orr r8, r8, #0x80000000
    str r8, [lr], #4
    ldrb r5, [r1], #0x80
    ldrb r6, [r1], #-0x7f
    ldrb r4, [r0], #1
    sub r5, r5, #0x80
    sub r6, r6, #0x80
    add r7, r3, r6
    sub r6, r5, r6
    add r6, r6, r3
    sub r5, r6, r5, lsl #1
    ldrb r8, [r7, r4]
    ldrb r11, [r6, r4]
    ldrb r12, [r5, r4]
    ldrb r4, [r0], #0xff
    add r8, r11, r8, lsl #5
    add r8, r8, r12, lsl #10
    orr r8, r8, #0x8000
    sub r4, r4, #4
    ldrb r9, [r7, r4]
    ldrb r11, [r6, r4]
    ldrb r12, [r5, r4]
    ldrb r4, [r0], #1
    add r8, r8, r9, lsl #21
    add r8, r8, r11, lsl #16
    add r8, r8, r12, lsl #26
    orr r8, r8, #0x80000000
    str r8, [r2], #4
    sub r4, r4, #4
    ldrb r8, [r7, r4]
    ldrb r11, [r6, r4]
    ldrb r12, [r5, r4]
    ldrb r4, [r0], #-0xff
    add r8, r11, r8, lsl #5
    add r8, r8, r12, lsl #10
    orr r8, r8, #0x8000
    ldrb r9, [r7, r4]
    ldrb r11, [r6, r4]
    ldrb r12, [r5, r4]
    add r8, r8, r9, lsl #21
    add r8, r8, r11, lsl #16
    add r8, r8, r12, lsl #26
    orr r8, r8, #0x80000000
    str r8, [lr], #4
    ldrb r5, [r1], #0x80
    ldrb r6, [r1], #-0x7f
    ldrb r4, [r0], #1
    sub r5, r5, #0x80
    sub r6, r6, #0x80
    add r7, r3, r6
    sub r6, r5, r6
    add r6, r6, r3
    sub r5, r6, r5, lsl #1
    ldrb r8, [r7, r4]
    ldrb r11, [r6, r4]
    ldrb r12, [r5, r4]
    ldrb r4, [r0], #0xff
    add r8, r11, r8, lsl #5
    add r8, r8, r12, lsl #10
    orr r8, r8, #0x8000
    sub r4, r4, #4
    ldrb r9, [r7, r4]
    ldrb r11, [r6, r4]
    ldrb r12, [r5, r4]
    ldrb r4, [r0], #1
    add r8, r8, r9, lsl #21
    add r8, r8, r11, lsl #16
    add r8, r8, r12, lsl #26
    orr r8, r8, #0x80000000
    str r8, [r2], #4
    sub r4, r4, #4
    ldrb r8, [r7, r4]
    ldrb r11, [r6, r4]
    ldrb r12, [r5, r4]
    ldrb r4, [r0], #-0xff
    add r8, r11, r8, lsl #5
    add r8, r8, r12, lsl #10
    orr r8, r8, #0x8000
    ldrb r9, [r7, r4]
    ldrb r11, [r6, r4]
    ldrb r12, [r5, r4]
    add r8, r8, r9, lsl #21
    add r8, r8, r11, lsl #16
    add r8, r8, r12, lsl #26
    orr r8, r8, #0x80000000
    str r8, [lr], #4
    subs r10, r10, #0x10
    bgt @L_02174288
    ldr r10, [sp], #4
    ldr r5, [sp]
    ldr r6, [sp, #4]
    ldr r7, [sp, #8]
    add r0, r0, r5
    add r1, r1, r6
    add r2, r2, r7
    add lr, lr, r7
    subs r10, r10, #2
    bgt @L_02174280
    add sp, sp, #0x18
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, r12, pc}
}

extern "C" asm void func_ov088_02174800(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r6, r0
    ldr r0, =0x2000c64
    mov r5, r1
    mov r4, r2
    bl func_02000b64
    mov r0, r6
    mov r1, r5
    mov r2, r4
    bl func_ov088_02174a48
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void func_ov088_02174830(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r5, r0
    mov r0, #0x14
    mov r6, r1
    bl func_ov088_021756d4
    movs r4, r0
    movne r1, #0
    strne r1, [r4, #4]
    ldrne r0, =data_ov088_02180a38
    strne r1, [r4, #8]
    strne r0, [r4]
    cmp r4, #0
    moveq r0, #0
    ldmeqia sp!, {r4, r5, r6, pc}
    mov r0, r4
    mov r1, r5
    bl func_ov088_021756ec
    cmp r0, #0
    bne @L_0217489c
    cmp r4, #0
    beq @L_02174894
    mov r0, r4
    ldr r1, [r0]
    ldr r1, [r1, #4]
    blx r1
@L_02174894:
    mov r0, #0
    ldmia sp!, {r4, r5, r6, pc}
@L_0217489c:
    mov r0, #0xd8
    bl func_ov088_021749ec
    movs r5, r0
    beq @L_021748b4
    bl func_ov088_02174a04
    mov r5, r0
@L_021748b4:
    mov r0, r5
    mov r1, r4
    mov r2, r6
    bl func_ov088_02174800
    cmp r0, #0
    bne @L_021748ec
    cmp r5, #0
    beq @L_021748e4
    mov r0, r5
    bl func_ov088_02174a34
    mov r0, r5
    bl func_ov088_021749f8
@L_021748e4:
    mov r0, #0
    ldmia sp!, {r4, r5, r6, pc}
@L_021748ec:
    mov r0, r5
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void func_ov088_021748f8(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    bl func_ov088_021756e0
    mov r0, r4
    ldmia sp!, {r4, pc}
}

extern "C" asm void func_ov088_0217490c(void)
{
    stmdb sp!, {r4, lr}
    movs r4, r0
    cmpne r4, #0
    ldmeqia sp!, {r4, pc}
    bl func_ov088_02174a34
    mov r0, r4
    bl func_ov088_021749f8
    ldmia sp!, {r4, pc}
}

extern "C" asm void func_ov088_0217492c(void)
{
    stmdb sp!, {r3, lr}
    cmp r0, #0
    moveq r0, #0
    ldmeqia sp!, {r3, pc}
    bl func_ov088_02175144
    ldmia sp!, {r3, pc}
}

extern "C" asm void func_ov088_02174944(void)
{
    stmdb sp!, {r3, lr}
    cmp r0, #0
    moveq r0, #0
    ldmeqia sp!, {r3, pc}
    bl func_ov088_0217514c
    ldmia sp!, {r3, pc}
}

extern "C" asm void func_ov088_0217495c(void)
{
    stmdb sp!, {r3, lr}
    cmp r0, #0
    moveq r0, #0
    ldmeqia sp!, {r3, pc}
    bl func_ov088_02175154
    cmp r0, #1
    moveq r0, #1
    movne r0, #0
    ldmia sp!, {r3, pc}
}

extern "C" asm void func_ov088_02174980(void)
{
    stmdb sp!, {r3, lr}
    cmp r0, #0
    moveq r0, #0
    ldmeqia sp!, {r3, pc}
    bl func_ov088_0217528c
    cmp r0, #1
    moveq r0, #1
    movne r0, #0
    ldmia sp!, {r3, pc}
}

extern "C" asm void func_ov088_021749a4(void)
{
    stmdb sp!, {r3, lr}
    cmp r0, #0
    moveq r0, #0
    ldmeqia sp!, {r3, pc}
    bl func_ov088_02175368
    cmp r0, #1
    moveq r0, #1
    movne r0, #0
    ldmia sp!, {r3, pc}
}

extern "C" asm void func_ov088_021749c8(void)
{
    stmdb sp!, {r3, lr}
    cmp r0, #0
    moveq r0, #0
    ldmeqia sp!, {r3, pc}
    bl func_ov088_021754d8
    cmp r0, #1
    moveq r0, #1
    movne r0, #0
    ldmia sp!, {r3, pc}
}

extern "C" void func_ov088_021749ec(void)
{
    _ZN11MoviePlayer13AllocCallbackEm();
}

extern "C" void func_ov088_021749f8(void)
{
    _ZN11MoviePlayer12FreeCallbackEPv();
}

extern "C" void func_ov088_02174a04(u8 *arg0)
{
    *(s32 *)(arg0) = 0;
    *(s32 *)(arg0 + 0x5C) = 0;
    *(s32 *)(arg0 + 0x60) = 0;
    *(s32 *)(arg0 + 0x68) = 0;
    *(s32 *)(arg0 + 0x6C) = 0;
    *(s32 *)(arg0 + 0x70) = 0;
    *(s32 *)(arg0 + 0x74) = 0;
    *(s32 *)(arg0 + 0x64) = 0;
    *(s32 *)(arg0 + 0x58) = 0;
    *(s32 *)(arg0 + 0x94) = 0;
}

extern "C" asm void func_ov088_02174a34(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    bl func_ov088_02174fe0
    mov r0, r4
    ldmia sp!, {r4, pc}
}

extern "C" asm void func_ov088_02174a48(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    sub sp, sp, #8
    mov r4, r0
    str r1, [r4]
    ldr r3, [r1, #8]
    mov r0, r1
    str r3, [r4, #0xd4]
    ldr r3, [r0]
    mov r9, r2
    ldr r3, [r3, #0xc]
    add r1, r4, #4
    mov r2, #0x30
    mov r5, #0
    blx r3
    cmp r0, #0
    addeq sp, sp, #8
    moveq r0, r5
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    ldrsb r0, [r4, #4]
    cmp r0, #0x4d
    ldreqsb r0, [r4, #5]
    cmpeq r0, #0x4f
    ldreqsb r0, [r4, #6]
    cmpeq r0, #0x44
    ldreqsb r0, [r4, #7]
    cmpeq r0, #0x53
    ldreqsb r2, [r4, #8]
    cmpeq r2, #0x4e
    bne @L_02174ad8
    ldrsb r1, [r4, #9]
    cmp r1, #0x32
    cmpne r1, #0x33
    bne @L_02174ad8
    ldrh r0, [r4, #0xa]
    cmp r0, #0xa
    beq @L_02174ae4
@L_02174ad8:
    add sp, sp, #8
    mov r0, #0
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_02174ae4:
    cmp r2, #0x4e
    cmpeq r1, #0x33
    bne @L_02174b8c
    add r6, sp, #0
    add r8, sp, #2
    mov r7, #2
@L_02174afc:
    ldr r0, [r4]
    mov r1, r8
    ldr r3, [r0]
    mov r2, r7
    ldr r3, [r3, #0xc]
    blx r3
    cmp r0, #0
    addeq sp, sp, #8
    moveq r0, #0
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    ldr r0, [r4]
    mov r1, r6
    ldr r3, [r0]
    mov r2, r7
    ldr r3, [r3, #0xc]
    blx r3
    cmp r0, #0
    addeq sp, sp, #8
    moveq r0, #0
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    ldr r0, [r4]
    ldrh r3, [sp]
    ldr r2, [r0]
    ldr r1, [r0, #8]
    ldr r2, [r2, #8]
    add r1, r1, r3, lsl #2
    blx r2
    cmp r0, #0
    addeq sp, sp, #8
    moveq r0, #0
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    ldrsb r0, [sp, #2]
    cmp r0, #0x48
    ldreqsb r0, [sp, #3]
    cmpeq r0, #0x45
    bne @L_02174afc
@L_02174b8c:
    ldrh r0, [r4, #0x1c]
    cmp r0, #0
    cmpne r0, #1
    cmpne r0, #2
    cmpne r0, #3
    cmpne r0, #4
    addne sp, sp, #8
    movne r0, #0
    ldmneia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    ldr r7, =0x454
    mov r0, r7
    bl _ZN11MoviePlayer13AllocCallbackEm
    mov r1, r0
    mov r6, #0
    mov r0, r6
    mov r2, r7
    str r1, [r4, #0x34]
    bl MIi_CpuClearFast
    bl func_ov088_02175518
    str r0, [r4, #0x38]
    bl func_ov088_02175590
    ldr r2, [r4, #0x34]
    ldr r1, =data_ov088_02177ed4
    str r0, [r2, #0x3c]
    ldr r0, [r4, #0x34]
    str r1, [r0, #0x40]
    bl func_ov088_02175668
    ldr r1, [r4, #0x34]
    add r0, r0, #0x40
    str r0, [r1, #0x44]
    ldr r1, [r4, #0x10]
    ldr r0, [r4, #0x14]
    str r1, [r4, #0x4c]
    str r0, [r4, #0x50]
    bl func_ov088_021755fc
    ldr r2, [r4, #0x10]
    ldr r1, [r4, #0x34]
    str r0, [r4, #0x54]
    str r2, [r1, #4]
    ldr r1, [r4, #0x14]
    ldr r0, [r4, #0x34]
    str r1, [r0, #8]
    ldr r0, [r4, #0x10]
    cmp r0, #0x100
    addhi sp, sp, #8
    movhi r0, r6
    ldmhiia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    cmp r9, #6
    addlo sp, sp, #8
    movlo r0, r6
    ldmloia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    mov r0, r9, lsl #2
    str r9, [r4, #0xa8]
    bl _ZN11MoviePlayer13AllocCallbackEm
    cmp r0, #0
    str r0, [r4, #0x5c]
    addeq sp, sp, #8
    moveq r0, r6
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    ldr r0, [r4, #0xa8]
    mov r0, r0, lsl #2
    bl _ZN11MoviePlayer13AllocCallbackEm
    cmp r0, #0
    str r0, [r4, #0x60]
    addeq sp, sp, #8
    moveq r0, r6
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    ldr r0, [r4, #0xa8]
    cmp r0, #0
    bls @L_02174d48
    mov r7, #0x80
@L_02174ca8:
    ldr r0, [r4, #0x14]
    mov r0, r0, lsl #8
    bl _ZN11MoviePlayer13AllocCallbackEm
    ldr r1, [r4, #0x5c]
    str r0, [r1, r6, lsl #2]
    ldr r0, [r4, #0x5c]
    ldr r0, [r0, r6, lsl #2]
    cmp r0, #0
    addeq sp, sp, #8
    moveq r0, #0
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    ldr r0, [r4, #0x14]
    mov r0, r0, lsr #1
    mov r0, r0, lsl #8
    bl _ZN11MoviePlayer13AllocCallbackEm
    ldr r1, [r4, #0x60]
    str r0, [r1, r6, lsl #2]
    ldr r0, [r4, #0x60]
    ldr r0, [r0, r6, lsl #2]
    cmp r0, #0
    addeq sp, sp, #8
    moveq r0, #0
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    ldr r0, [r4, #0x5c]
    ldr r2, [r4, #0x14]
    ldr r1, [r0, r6, lsl #2]
    mov r0, r5
    mov r2, r2, lsl #8
    bl MIi_CpuClearFast
    ldr r0, [r4, #0x60]
    ldr r1, [r4, #0x14]
    ldr r0, [r0, r6, lsl #2]
    mov r2, r1, lsr #1
    mov r1, r7
    mov r2, r2, lsl #8
    bl MI_CpuFill8
    ldr r0, [r4, #0xa8]
    add r6, r6, #1
    cmp r6, r0
    blo @L_02174ca8
@L_02174d48:
    mov r0, r0, lsl #2
    bl _ZN11MoviePlayer13AllocCallbackEm
    cmp r0, #0
    str r0, [r4, #0x64]
    addeq sp, sp, #8
    moveq r0, #0
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    str r5, [r4, #0x98]
    str r5, [r4, #0xac]
    mov r2, #1
@L_02174d70:
    ldr r1, [r4, #0xa8]
    add r0, r4, r2, lsl #2
    sub r1, r1, r2
    add r2, r2, #1
    str r1, [r0, #0xac]
    cmp r2, #6
    blt @L_02174d70
    mov r5, #0
    str r5, [r4, #0xc4]
    str r5, [r4, #0xa0]
    str r5, [r4, #0x9c]
@L_02174d9c:
    ldr r0, [r4, #0x24]
    add r0, r0, #0x400
    bl _ZN11MoviePlayer13AllocCallbackEm
    add r1, r4, r5, lsl #2
    cmp r0, #0
    str r0, [r1, #0x70]
    addeq sp, sp, #8
    moveq r0, #0
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    add r5, r5, #1
    cmp r5, #2
    blt @L_02174d9c
    ldrh r0, [r4, #0x1c]
    cmp r0, #0
    beq @L_02174e08
    ldrh r1, [r4, #0x1e]
    ldr r5, =0x14f8
    mul r0, r1, r5
    bl _ZN11MoviePlayer13AllocCallbackEm
    movs r1, r0
    addeq sp, sp, #8
    str r1, [r4, #0x58]
    mov r0, #0
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    ldrh r3, [r4, #0x1e]
    mul r2, r3, r5
    bl MIi_CpuClearFast
@L_02174e08:
    ldr r0, [r4]
    ldr r3, [r4, #0x2c]
    ldr r2, [r0]
    ldr r1, [r4, #0xd4]
    ldr r2, [r2, #8]
    add r1, r3, r1
    ldr r5, [r0, #8]
    blx r2
    ldr r0, [r4, #0x30]
    mov r0, r0, lsl #3
    bl _ZN11MoviePlayer13AllocCallbackEm
    mov r1, r0
    ldr r2, [r4, #0x30]
    ldr r0, [r4]
    str r1, [r4, #0x94]
    ldr r3, [r0]
    mov r2, r2, lsl #3
    ldr r3, [r3, #0xc]
    blx r3
    cmp r0, #0
    addeq sp, sp, #8
    moveq r0, #0
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    ldr r0, [r4]
    mov r1, r5
    ldr r2, [r0]
    ldr r2, [r2, #8]
    blx r2
    ldrh r0, [r4, #0x1c]
    cmp r0, #1
    bne @L_02174f2c
    ldr r0, [r4]
    ldr r3, [r4, #0x28]
    ldr r2, [r0]
    ldr r1, [r4, #0xd4]
    ldr r2, [r2, #8]
    add r1, r3, r1
    ldr r9, [r0, #8]
    blx r2
    ldrh r0, [r4, #0x1e]
    mov r8, #0
    cmp r0, #0
    ble @L_02174f14
    ldr r7, =0xc34
    ldr r5, =0x14f8
    mov r6, #2
@L_02174ec0:
    mul r10, r8, r5
    ldr r0, [r4]
    ldr r1, [r4, #0x58]
    ldr r3, [r0]
    add r1, r1, r10
    ldr r3, [r3, #0xc]
    mov r2, r7
    add r1, r1, #0x8c0
    blx r3
    cmp r0, #0
    addeq sp, sp, #8
    moveq r0, #0
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    ldr r0, [r4, #0x58]
    add r8, r8, #1
    add r0, r0, r10
    add r0, r0, #0x1000
    str r6, [r0, #0x4f4]
    ldrh r0, [r4, #0x1e]
    cmp r8, r0
    blt @L_02174ec0
@L_02174f14:
    ldr r0, [r4]
    mov r1, r9
    ldr r2, [r0]
    ldr r2, [r2, #8]
    blx r2
    b @L_02174f68
@L_02174f2c:
    cmp r0, #2
    bne @L_02174f68
    ldrh r0, [r4, #0x1e]
    mov r3, #0
    cmp r0, #0
    ble @L_02174f68
    ldr r0, =0x14f8
    mov r2, #2
@L_02174f4c:
    ldr r1, [r4, #0x58]
    mla r1, r3, r0, r1
    str r2, [r1, #0x1cc]
    ldrh r1, [r4, #0x1e]
    add r3, r3, #1
    cmp r3, r1
    blt @L_02174f4c
@L_02174f68:
    ldr r0, [r4]
    add r1, sp, #4
    ldr r3, [r0]
    mov r2, #4
    ldr r3, [r3, #0xc]
    blx r3
    ldr r1, [sp, #4]
    ldr r0, =0x3fff
    mov r5, r1, lsr #0xe
    str r5, [r4, #0x78]
    ldr r2, [sp, #4]
    mov r1, #0
    and r2, r2, r0
    str r2, [r4, #0x88]
    str r1, [r4, #0x80]
    ldr r0, [r4]
    ldr r1, [r4, #0x70]
    ldr r3, [r0]
    add r2, r5, #4
    ldr r3, [r3, #0xc]
    blx r3
    mov r0, #1
    str r0, [r4, #0x90]
    add sp, sp, #8
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
}

extern "C" asm void func_ov088_02174fe0(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r4, r0
    ldr r0, [r4]
    mov r5, #0
    cmp r0, #0
    beq @L_0217501c
    ldr r1, [r0]
    ldr r1, [r1, #0x18]
    blx r1
    ldr r0, [r4]
    cmp r0, #0
    beq @L_0217501c
    ldr r1, [r0]
    ldr r1, [r1, #4]
    blx r1
@L_0217501c:
    ldr r0, [r4, #0x34]
    bl _ZN11MoviePlayer12FreeCallbackEPv
    ldr r0, [r4, #0x5c]
    cmp r0, #0
    beq @L_02175064
    ldr r0, [r4, #0xa8]
    mov r6, #0
    cmp r0, #0
    bls @L_0217505c
@L_02175040:
    ldr r0, [r4, #0x5c]
    ldr r0, [r0, r6, lsl #2]
    bl _ZN11MoviePlayer12FreeCallbackEPv
    ldr r0, [r4, #0xa8]
    add r6, r6, #1
    cmp r6, r0
    blo @L_02175040
@L_0217505c:
    ldr r0, [r4, #0x5c]
    bl _ZN11MoviePlayer12FreeCallbackEPv
@L_02175064:
    ldr r0, [r4, #0x60]
    cmp r0, #0
    beq @L_021750a4
    ldr r0, [r4, #0xa8]
    mov r6, #0
    cmp r0, #0
    bls @L_0217509c
@L_02175080:
    ldr r0, [r4, #0x60]
    ldr r0, [r0, r6, lsl #2]
    bl _ZN11MoviePlayer12FreeCallbackEPv
    ldr r0, [r4, #0xa8]
    add r6, r6, #1
    cmp r6, r0
    blo @L_02175080
@L_0217509c:
    ldr r0, [r4, #0x60]
    bl _ZN11MoviePlayer12FreeCallbackEPv
@L_021750a4:
    ldr r0, [r4, #0x64]
    cmp r0, #0
    beq @L_021750b4
    bl _ZN11MoviePlayer12FreeCallbackEPv
@L_021750b4:
    ldr r0, [r4, #0x68]
    cmp r0, #0
    beq @L_021750c4
    bl _ZN11MoviePlayer12FreeCallbackEPv
@L_021750c4:
    ldr r0, [r4, #0x6c]
    cmp r0, #0
    beq @L_021750d4
    bl _ZN11MoviePlayer12FreeCallbackEPv
@L_021750d4:
    mov r6, #0
@L_021750d8:
    add r0, r4, r6, lsl #2
    ldr r0, [r0, #0x70]
    cmp r0, #0
    beq @L_021750ec
    bl _ZN11MoviePlayer12FreeCallbackEPv
@L_021750ec:
    add r0, r4, r6, lsl #2
    add r6, r6, #1
    str r5, [r0, #0x70]
    cmp r6, #2
    blt @L_021750d8
    ldr r0, [r4, #0x94]
    cmp r0, #0
    beq @L_02175110
    bl _ZN11MoviePlayer12FreeCallbackEPv
@L_02175110:
    ldr r0, [r4, #0x58]
    cmp r0, #0
    beq @L_02175120
    bl _ZN11MoviePlayer12FreeCallbackEPv
@L_02175120:
    str r5, [r4]
    str r5, [r4, #0x5c]
    str r5, [r4, #0x60]
    str r5, [r4, #0x68]
    str r5, [r4, #0x6c]
    str r5, [r4, #0x64]
    str r5, [r4, #0x58]
    str r5, [r4, #0x94]
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" s32 func_ov088_02175144(u8 *arg0)
{
    return *(s32 *)(arg0 + 0x18);
}

extern "C" s32 func_ov088_0217514c(u8 *arg0)
{
    return *(s32 *)(arg0 + 0xC);
}

extern "C" asm void func_ov088_02175154(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r5, r0
    ldr r1, [r5, #0x98]
    ldr r0, [r5, #0xc]
    cmp r1, r0
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, pc}
    ldr r4, [r5, #0x90]
    add r2, r1, #1
    add r0, r4, #1
    mov r1, r0, lsr #0x1f
    rsb r0, r1, r0, lsl #31
    add r1, r1, r0, ror #31
    ldr r0, [r5]
    str r2, [r5, #0x98]
    str r1, [r5, #0x90]
    ldr r1, [r0]
    ldr r1, [r1, #0x14]
    blx r1
    ldr r1, [r5, #0x90]
    ldr r0, =0x3fff
    add r3, r5, r1, lsl #2
    ldr r2, [r3, #0x80]
    ldr r1, [r3, #0x78]
    ldr r3, [r3, #0x70]
    add r1, r2, r1
    ldr r3, [r3, r1]
    add r1, r5, r4, lsl #2
    mov r2, r3, lsr #0xe
    str r2, [r1, #0x78]
    and r0, r3, r0
    str r0, [r1, #0x88]
    ldr r2, [r5, #0x90]
    ldr r0, [r5, #0x34]
    add r2, r5, r2, lsl #2
    ldr r3, [r2, #0x70]
    ldr r2, [r2, #0x80]
    add r2, r3, r2
    str r2, [r0]
    ldr r2, [r5, #0x98]
    ldr r0, [r5, #0xc]
    cmp r2, r0
    bhs @L_02175224
    ldr r0, [r5]
    ldr r2, [r1, #0x78]
    ldr r3, [r0]
    ldr r1, [r1, #0x70]
    ldr r3, [r3, #0x10]
    add r2, r2, #4
    blx r3
    add r1, r5, r4, lsl #2
    str r0, [r1, #0x80]
@L_02175224:
    mov r4, #0
@L_02175228:
    add r3, r5, r4, lsl #2
    ldr r2, [r5, #0x5c]
    ldr r1, [r3, #0xac]
    ldr r0, [r5, #0x34]
    ldr r1, [r2, r1, lsl #2]
    add r0, r0, r4, lsl #2
    str r1, [r0, #0xc]
    ldr r0, [r5, #0x34]
    ldr r2, [r5, #0x60]
    ldr r1, [r3, #0xac]
    add r0, r0, r4, lsl #2
    ldr r1, [r2, r1, lsl #2]
    add r4, r4, #1
    str r1, [r0, #0x24]
    cmp r4, #6
    blt @L_02175228
    ldr r0, [r5, #0x90]
    ldrh r2, [r5, #0x1e]
    add r0, r5, r0, lsl #2
    ldr r1, [r0, #0x88]
    mov r0, #1
    mul r1, r2, r1
    str r1, [r5, #0xc8]
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_ov088_0217528c(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r5, r0
    ldr r1, [r5, #0x9c]
    ldr r0, [r5, #0xa0]
    cmp r1, r0
    movhi r0, #0
    ldmhiia sp!, {r3, r4, r5, pc}
    ldr r0, [r5, #0x34]
    ldr r1, [r5, #0x38]
    ldr r0, [r0]
    ldrh r0, [r0]
    tst r0, #0x8000
    movne r0, #1
    strne r0, [r5, #0xa4]
    movne r4, #4
    moveq r4, #0
    ldr r0, [r5, #0x34]
    streq r4, [r5, #0xa4]
    blx r1
    ldr r2, [r5, #0x34]
    ldr r1, [r2]
    add r0, r1, r0
    str r0, [r2]
    ldrsb r0, [r5, #8]
    cmp r0, #0x4e
    ldreqsb r0, [r5, #9]
    cmpeq r0, #0x33
    ldreq r1, [r5, #0x34]
    ldreq r0, [r1]
    addeq r0, r0, r4
    streq r0, [r1]
    ldr r0, [r5, #0x34]
    ldr r1, [r5, #0x64]
    ldr r2, [r0, #0x3b4]
    ldr r0, [r5, #0xac]
    mov r4, #0
    str r2, [r1, r0, lsl #2]
    str r4, [r5, #0xcc]
    str r4, [r5, #0xd0]
    mov r0, r4
@L_0217532c:
    add r3, r5, r4, lsl #2
    ldr r1, [r3, #0xac]
    add r4, r4, #1
    add r2, r1, #1
    str r2, [r3, #0xac]
    ldr r1, [r5, #0xa8]
    cmp r1, r2
    streq r0, [r3, #0xac]
    cmp r4, #6
    blt @L_0217532c
    ldr r1, [r5, #0xa0]
    mov r0, #1
    add r1, r1, #1
    str r1, [r5, #0xa0]
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_ov088_02175368(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, lr}
    sub sp, sp, #0x24
    mov r8, r0
    ldr r4, [r8, #0x9c]
    ldr r0, [r8, #0xa0]
    mov r7, r1
    cmp r4, r0
    mov r4, #0
    mov r6, r2
    mov r5, r3
    addhs sp, sp, #0x24
    movhs r0, r4
    ldmhsia sp!, {r3, r4, r5, r6, r7, r8, pc}
    cmp r5, #0
    beq @L_02175478
    ldr r0, [r8, #0x68]
    cmp r0, #0
    bne @L_021753d0
    ldr r0, [r8, #0x14]
    mov r0, r0, lsl #8
    bl _ZN11MoviePlayer13AllocCallbackEm
    cmp r0, #0
    str r0, [r8, #0x68]
    addeq sp, sp, #0x24
    moveq r0, r4
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, pc}
@L_021753d0:
    ldr r0, [r8, #0x6c]
    cmp r0, #0
    bne @L_02175400
    ldr r0, [r8, #0x14]
    mov r0, r0, lsr #1
    mov r0, r0, lsl #8
    bl _ZN11MoviePlayer13AllocCallbackEm
    cmp r0, #0
    str r0, [r8, #0x6c]
    addeq sp, sp, #0x24
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, pc}
@L_02175400:
    ldr r1, [r8, #0x5c]
    ldr r0, [r8, #0xc4]
    ldr r1, [r1, r0, lsl #2]
    str r1, [sp]
    ldr r1, [r8, #0x60]
    ldr r1, [r1, r0, lsl #2]
    str r1, [sp, #4]
    ldr r1, [r8, #0x68]
    str r1, [sp, #8]
    ldr r1, [r8, #0x6c]
    str r1, [sp, #0xc]
    ldr r1, [r8, #0x10]
    str r1, [sp, #0x10]
    ldr r1, [r8, #0x14]
    str r1, [sp, #0x14]
    ldr r1, [r8, #0x64]
    ldr r0, [r1, r0, lsl #2]
    str r0, [sp, #0x18]
    bl func_ov088_02175668
    cmp r5, #2
    str r0, [sp, #0x1c]
    streq r4, [sp, #0x20]
    movne r0, #1
    strne r0, [sp, #0x20]
    add r0, sp, #0
    bl func_ov088_02175898
    ldr r1, [r8, #0x68]
    ldr r0, [r8, #0x6c]
    str r1, [r8, #0x3c]
    b @L_02175490
@L_02175478:
    ldr r1, [r8, #0x5c]
    ldr r2, [r8, #0xc4]
    ldr r0, [r8, #0x60]
    ldr r1, [r1, r2, lsl #2]
    str r1, [r8, #0x3c]
    ldr r0, [r0, r2, lsl #2]
@L_02175490:
    str r0, [r8, #0x40]
    mov r1, r6, lsl #1
    add r0, r8, #0x3c
    str r7, [r8, #0x44]
    str r1, [r8, #0x48]
    bl func_ov088_02174240
    ldr r1, [r8, #0x9c]
    ldr r0, [r8, #0xc4]
    add r2, r1, #1
    add r1, r0, #1
    ldr r0, [r8, #0xa8]
    str r1, [r8, #0xc4]
    cmp r1, r0
    str r2, [r8, #0x9c]
    streq r4, [r8, #0xc4]
    mov r0, #1
    add sp, sp, #0x24
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
}

extern "C" asm void func_ov088_021754d8(void)
{
    ldr r3, [r0, #0x9c]
    ldr r1, [r0, #0xa0]
    cmp r3, r1
    movhs r0, #0
    bxhs lr
    ldr r2, [r0, #0xc4]
    ldr r1, [r0, #0xa8]
    add r2, r2, #1
    add r3, r3, #1
    cmp r2, r1
    str r2, [r0, #0xc4]
    moveq r1, #0
    str r3, [r0, #0x9c]
    streq r1, [r0, #0xc4]
    mov r0, #1
    bx lr
}

extern "C" asm void func_ov088_02175518(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    ldr r4, =data_ov088_02180a60
    ldr r0, [r4, #8]
    cmp r0, #0
    bne @L_02175578
    ldr r0, [r4, #0x14]
    ldr r5, =0x659c
    cmp r0, r5
    blo @L_02175570
    ldr r1, [r4, #0x18]
    ldr r0, =data_ov088_02179fd4
    mov r2, r5
    str r1, [r4, #8]
    bl MIi_CpuCopyFast
    ldr r0, [r4, #0x18]
    add r0, r0, #0x19c
    add r0, r0, #0x6400
    str r0, [r4, #0x18]
    ldr r0, [r4, #0x14]
    sub r0, r0, r5
    str r0, [r4, #0x14]
    b @L_02175578
@L_02175570:
    ldr r0, =data_ov088_02179fd4
    ldmia sp!, {r3, r4, r5, pc}
@L_02175578:
    ldr r0, =data_ov088_02180a60
    ldr r0, [r0, #8]
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_ov088_02175590(void)
{
    stmdb sp!, {r4, lr}
    ldr r4, =data_ov088_02180a60
    ldr r0, [r4, #4]
    cmp r0, #0
    bne @L_021755e8
    ldr r0, [r4, #0xc]
    cmp r0, #0x2100
    blo @L_021755e0
    ldr r1, [r4, #0x10]
    ldr r0, =data_ov088_02175dd4
    str r1, [r4, #4]
    mov r2, #0x2100
    bl MIi_CpuCopyFast
    ldr r0, [r4, #0x10]
    add r0, r0, #0x2100
    str r0, [r4, #0x10]
    ldr r0, [r4, #0xc]
    sub r0, r0, #0x2100
    str r0, [r4, #0xc]
    b @L_021755e8
@L_021755e0:
    ldr r0, =data_ov088_02175dd4
    ldmia sp!, {r4, pc}
@L_021755e8:
    ldr r0, =data_ov088_02180a60
    ldr r0, [r0, #4]
    ldmia sp!, {r4, pc}
}

extern "C" asm void func_ov088_021755fc(void)
{
    stmdb sp!, {r4, lr}
    ldr r4, =data_ov088_02180a60
    ldr r0, [r4]
    cmp r0, #0
    bne @L_02175654
    ldr r0, [r4, #0xc]
    cmp r0, #0x300
    blo @L_0217564c
    ldr r1, [r4, #0x10]
    ldr r0, =data_ov088_021806f0
    str r1, [r4]
    mov r2, #0x300
    bl MIi_CpuCopyFast
    ldr r0, [r4, #0x10]
    add r0, r0, #0x300
    str r0, [r4, #0x10]
    ldr r0, [r4, #0xc]
    sub r0, r0, #0x300
    str r0, [r4, #0xc]
    b @L_02175654
@L_0217564c:
    ldr r0, =data_ov088_021806f0
    ldmia sp!, {r4, pc}
@L_02175654:
    ldr r0, =data_ov088_02180a60
    ldr r0, [r0]
    ldmia sp!, {r4, pc}
}

extern "C" asm void func_ov088_02175668(void)
{
    stmdb sp!, {r4, lr}
    ldr r4, =data_ov088_02180a60
    ldr r0, [r4, #0x1c]
    cmp r0, #0
    bne @L_021756c0
    ldr r0, [r4, #0xc]
    cmp r0, #0x180
    blo @L_021756b8
    ldr r1, [r4, #0x10]
    ldr r0, =data_ov088_02180570
    str r1, [r4, #0x1c]
    mov r2, #0x180
    bl MIi_CpuCopyFast
    ldr r0, [r4, #0x10]
    add r0, r0, #0x180
    str r0, [r4, #0x10]
    ldr r0, [r4, #0xc]
    sub r0, r0, #0x180
    str r0, [r4, #0xc]
    b @L_021756c0
@L_021756b8:
    ldr r0, =data_ov088_02180570
    ldmia sp!, {r4, pc}
@L_021756c0:
    ldr r0, =data_ov088_02180a60
    ldr r0, [r0, #0x1c]
    ldmia sp!, {r4, pc}
}

extern "C" void func_ov088_021756d4(void)
{
    _ZN11MoviePlayer13AllocCallbackEm();
}

extern "C" void func_ov088_021756e0(void)
{
    _ZN11MoviePlayer12FreeCallbackEPv();
}

extern "C" asm void func_ov088_021756ec(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    mov r0, r1
    str r1, [r4, #0xc]
    bl func_0200c974
    str r0, [r4, #4]
    ldr r0, [r4, #0xc]
    bl func_0200c980
    mov r1, #0
    str r0, [r4, #8]
    strb r1, [r4, #0x10]
    mov r0, #1
    ldmia sp!, {r4, pc}
}

extern "C" asm void func_ov088_02175720(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r6, r0
    ldrb r0, [r6, #0x10]
    mov r5, r1
    cmp r0, #1
    bne @L_02175748
    ldr r0, [r6, #0xc]
    bl FS_WaitAsync
    mov r0, #0
    strb r0, [r6, #0x10]
@L_02175748:
    mov r4, #0
    ldr r0, [r6, #0xc]
    mov r1, r5
    mov r2, r4
    bl FS_SeekFile
    cmp r0, #0
    moveq r0, r4
    strne r5, [r6, #8]
    movne r0, #1
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void func_ov088_02175770(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r7, r0
    ldrb r0, [r7, #0x10]
    mov r6, r1
    mov r5, r2
    cmp r0, #1
    bne @L_021757ac
    ldr r0, [r7, #0xc]
    bl FS_WaitAsync
    mov r4, #0
    ldr r0, [r7, #0xc]
    ldr r1, [r7, #8]
    mov r2, r4
    bl FS_SeekFile
    strb r4, [r7, #0x10]
@L_021757ac:
    ldr r0, [r7, #0xc]
    mov r1, r6
    mov r2, r5
    bl FS_ReadFile
    cmn r0, #1
    ldrne r1, [r7, #8]
    moveq r0, #0
    addne r1, r1, r5
    movne r0, #1
    strne r1, [r7, #8]
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm void func_ov088_021757d8(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    mov r7, r0
    mov r0, #0x200
    ldr r3, [r7, #8]
    rsb r0, r0, #0
    mov r6, r1
    and r1, r3, r0
    mov r5, r2
    sub r4, r3, r1
    add r9, r5, r4
    tst r9, r0, lsr #23
    andne r0, r9, r0
    addne r9, r0, #0x200
    mov r8, #0
    ldr r0, [r7, #0xc]
    mov r2, r8
    bl FS_SeekFile
    ldr r0, [r7, #0xc]
    mov r1, r6
    mov r2, r9
    bl FS_ReadFileAsync
    sub r1, r8, #1
    cmp r0, r1
    moveq r0, r8
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    ldr r0, [r7, #8]
    mov r1, #1
    add r2, r0, r5
    mov r0, r4
    str r2, [r7, #8]
    strb r1, [r7, #0x10]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

extern "C" asm void func_ov088_02175858(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    ldrb r0, [r4, #0x10]
    cmp r0, #1
    bne @L_02175874
    ldr r0, [r4, #0xc]
    bl FS_WaitAsync
@L_02175874:
    mov r0, #0
    strb r0, [r4, #0x10]
    ldmia sp!, {r4, pc}
}

extern "C" asm void func_ov088_02175880(void)
{
    stmdb sp!, {r3, lr}
    ldr r1, [r0]
    ldr r1, [r1, #0x14]
    blx r1
    ldmia sp!, {r3, pc}
}

extern "C" void func_ov088_02175894(void)
{
}

extern "C" asm void func_ov088_02175898(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #0x18
    mov r4, r0
    ldr r5, [r4, #0x18]
    add r6, pc, #0xc0
    ldrb r6, [r6, r5]
    add r7, pc, #0xdd
    ldrb r7, [r7, r5]
    orr r6, r6, r7, lsl #8
    str r6, [sp, #0x10]
    ldr r5, [r4]
    ldr r6, [r4, #8]
    ldr r7, [r4, #0x10]
    ldr r8, [r4, #0x14]
    ldr r9, [r4, #0x1c]
    str r5, [sp]
    str r6, [sp, #4]
    str r7, [sp, #8]
    str r8, [sp, #0xc]
    add r9, r9, #0x40
    str r9, [sp, #0x14]
    mov r0, sp
    bl func_ov088_021759c8
    ldr r0, [r4, #0x20]
    cmp r0, #1
    movne r0, sp
    blne func_02175b00
    ldr r5, [r4, #4]
    ldr r6, [r4, #0xc]
    ldr r7, [r4, #0x10]
    ldr r8, [r4, #0x14]
    str r5, [sp]
    str r6, [sp, #4]
    mov r7, r7, asr #1
    mov r8, r8, asr #1
    str r7, [sp, #8]
    str r8, [sp, #0xc]
    mov r0, sp
    bl func_ov088_02175bf4
    ldr r0, [r4, #0x20]
    cmp r0, #1
    movne r0, sp
    blne func_02175cfc
    ldr r5, [r4, #4]
    ldr r6, [r4, #0xc]
    add r5, r5, #0x80
    add r6, r6, #0x80
    str r5, [sp]
    str r6, [sp, #4]
    mov r0, sp
    bl func_ov088_02175bf4
    ldr r0, [r4, #0x20]
    cmp r0, #1
    movne r0, sp
    blne func_02175cfc
    add sp, sp, #0x18
    ldmia sp!, {r4, r5, r6, r7, r8, r9, pc}
    dcd 0x00000000
    dcd 0x05050403
    dcd 0x0a080706
    dcd 0x110f0d0b
    dcd 0x1d191613
    dcd 0x322c2621
    dcd 0x564b4239
    dcd 0x93807062
    dcd 0xfbdbc0a8
    dcd 0x000000ff
    dcd 0x02020101
    dcd 0x04040303
    dcd 0x06060505
    dcd 0x08080707
    dcd 0x0b0a0909
    dcd 0x0d0c0c0b
    dcd 0x0f0e0e0d
    dcd 0x1110100f
    dcd 0x00001211
}

extern "C" asm void func_ov088_021759c8(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, r12, lr}
    ldr lr, [r0, #0x10]
    ldr r12, [r0, #0x14]
    ldr r1, [r0, #4]
    ldr r11, [r0]
    ldr r3, [r0, #0xc]
    ldr r2, [r11], #4
    ldr r10, [r0, #8]
    str r3, [sp, #-4]!
    str r2, [r1], #4
    sub r10, r10, #8
@L_021759f4:
    str r10, [sp, #-4]!
    ldrb r2, [r11], #1
    ldrb r3, [r11], #1
    ldrb r4, [r11], #1
    ldrb r5, [r11], #1
    ldrb r6, [r11], #1
    ldrb r7, [r11], #1
    ldrb r8, [r11], #1
    and r9, lr, #0xff
    subs r10, r5, r6
    rsblt r10, r10, #0
    cmp r10, r9
    bge @L_02175a9c
    subs r10, r4, r5
    rsblt r10, r10, #0
    cmp r10, lr, lsr #8
    bge @L_02175a9c
    subs r10, r7, r6
    rsblt r10, r10, #0
    cmp r10, lr, lsr #8
    bge @L_02175a9c
    add r10, r5, r6
    add r10, r10, #1
    subs r9, r3, r5
    sub r5, r4, r7
    add r5, r5, #4
    mov r5, r5, asr #3
    rsblt r9, r9, #0
    cmp r9, lr, lsr #8
    addlt r4, r3, r10, asr #1
    addlt r4, r4, #1
    movlt r4, r4, asr #1
    subs r9, r8, r6
    rsblt r9, r9, #0
    cmp r9, lr, lsr #8
    addlt r7, r8, r10, asr #1
    addlt r7, r7, #1
    movlt r7, r7, asr #1
    rsb r6, r5, r10, asr #1
    ldrb r6, [r12, r6]
    add r5, r5, r10, asr #1
    ldrb r5, [r12, r5]
@L_02175a9c:
    ldrb r9, [r11], #1
    orr r2, r2, r3, lsl #8
    orr r2, r2, r4, lsl #16
    orr r2, r2, r5, lsl #24
    orr r6, r6, r7, lsl #8
    orr r6, r6, r8, lsl #16
    orr r6, r6, r9, lsl #24
    stmia r1!, {r2, r6}
    ldr r10, [sp], #4
    subs r10, r10, #8
    bne @L_021759f4
    ldr r3, [sp], #4
    ldr r2, [r11], #4
    ldr r10, [r0, #8]
    add r11, r11, #0x100
    str r2, [r1], #0x104
    sub r11, r11, r10
    sub r1, r1, r10
    subs r3, r3, #1
    ldrne r2, [r11], #4
    strne r3, [sp, #-4]!
    subne r10, r10, #8
    strne r2, [r1], #4
    bne @L_021759f4
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, r12, pc}
    dcd 0xe92d5ff0
    dcd 0xe5901008
    dcd 0xe590200c
    dcd 0xe5903010
    dcd 0xe5904014
    dcd 0xe5900004
    dcd 0xe1a05001
    dcd 0xe2800b02
    dcd 0xe2522008
    dcd 0xe5507100
    dcd 0xe5d08000
    dcd 0xe5506200
    dcd 0xe5d09100
    dcd 0xe203e0ff
    dcd 0xe057a008
    dcd 0xb26aa000
    dcd 0xe15a000e
    dcd 0xaa000021
    dcd 0xe056a007
    dcd 0xb26aa000
    dcd 0xe15a0423
    dcd 0xaa00001d
    dcd 0xe058a009
    dcd 0xb26aa000
    dcd 0xe15a0423
    dcd 0xaa000019
    dcd 0xe550c300
    dcd 0xe5d0e200
    dcd 0xe0466009
    dcd 0xe0879008
    dcd 0xe2866004
    dcd 0xe2899001
    dcd 0xe1a090c9
    dcd 0xe099a1c6
    dcd 0xe059b1c6
    dcd 0xe7d4a00a
    dcd 0xe7d4b00b
    dcd 0xe2899001
    dcd 0xe05c7007
    dcd 0xb2677000
    dcd 0xe1570423
    dcd 0xb08cc009
    dcd 0xb1a0c0cc
    dcd 0xb540c200
    dcd 0xe05e8008
    dcd 0xb2688000
    dcd 0xe1580423
    dcd 0xb08ee009
    dcd 0xb1a0e0ce
    dcd 0xb5c0e100
    dcd 0xe540a100
    dcd 0xe5c0b000
    dcd 0xe2800001
    dcd 0xe2555001
    dcd 0x1affffd1
    dcd 0xe2800b02
    dcd 0xe0400001
    dcd 0xe1a05001
    dcd 0xe2522008
    dcd 0x1affffcc
    dcd 0xe8bd9ff0
}

extern "C" asm void func_ov088_02175bf4(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, r12, lr}
    ldr lr, [r0, #0x10]
    ldr r12, [r0, #0x14]
    ldr r1, [r0, #4]
    ldr r11, [r0]
    ldr r3, [r0, #0xc]
    ldr r2, [r11], #4
    ldr r10, [r0, #8]
    str r3, [sp, #-4]!
    str r2, [r1], #4
    sub r10, r10, #8
@L_02175c20:
    str r10, [sp, #-4]!
    ldrb r2, [r11], #1
    ldrb r3, [r11], #1
    ldrb r4, [r11], #1
    ldrb r5, [r11], #1
    ldrb r6, [r11], #1
    ldrb r7, [r11], #1
    ldrb r8, [r11], #1
    and r9, lr, #0xff
    subs r10, r5, r6
    rsblt r10, r10, #0
    cmp r10, r9
    bge @L_02175c98
    subs r10, r4, r5
    rsblt r10, r10, #0
    cmp r10, lr, lsr #8
    bge @L_02175c98
    subs r10, r7, r6
    rsblt r10, r10, #0
    cmp r10, lr, lsr #8
    bge @L_02175c98
    add r10, r5, r6
    add r10, r10, #1
    sub r9, r4, r7
    add r9, r9, #4
    mov r9, r9, asr #3
    add r5, r9, r10, asr #1
    ldrb r5, [r12, r5]
    rsb r6, r9, r10, asr #1
    ldrb r6, [r12, r6]
@L_02175c98:
    ldrb r9, [r11], #1
    orr r2, r2, r3, lsl #8
    orr r2, r2, r4, lsl #16
    orr r2, r2, r5, lsl #24
    orr r6, r6, r7, lsl #8
    orr r6, r6, r8, lsl #16
    orr r6, r6, r9, lsl #24
    stmia r1!, {r2, r6}
    ldr r10, [sp], #4
    subs r10, r10, #8
    bne @L_02175c20
    ldr r3, [sp], #4
    ldr r2, [r11], #4
    ldr r10, [r0, #8]
    add r11, r11, #0x100
    str r2, [r1], #0x104
    sub r11, r11, r10
    sub r1, r1, r10
    subs r3, r3, #1
    ldrne r2, [r11], #4
    strne r3, [sp, #-4]!
    subne r10, r10, #8
    strne r2, [r1], #4
    bne @L_02175c20
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, r12, pc}
}
