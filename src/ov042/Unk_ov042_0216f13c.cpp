#include "ov042/Unk_ov042_0216f13c.hpp"

extern "C" void func_ov042_0216f13c(void);
extern "C" void func_ov042_0216f1f4(void);
extern "C" void func_ov042_0216f2d4(void);
extern "C" void func_ov042_0216f378(void);
extern "C" void func_ov042_0216f408(void);
extern "C" void func_ov042_0216f418(void);
extern "C" void func_ov042_0216f628(void);
extern "C" void func_ov042_0216f740(void);
extern "C" s32 func_ov042_0216f7c4(s32 arg0);
extern "C" void func_ov042_0216f7d8(void);

extern "C" char data_020c46c4[];
extern "C" char data_020c46d4[];
extern "C" char data_020c5e40[];
extern "C" char data_ov042_0216f908[];
extern "C" void _ZN12SoundManager9PlaySoundEi(void);
extern "C" s32 _ZdlPv(...);
extern "C" void func_0202273c(void);
extern "C" void func_020920c4(void);
extern "C" void func_02092270(void);
extern "C" void func_02093188(void);
extern "C" void func_02093368(void);
extern "C" void func_02093524(void);
extern "C" void func_0209386c(void);
extern "C" void func_02093928(void);
extern "C" void func_020939c8(void);
extern "C" void func_02097b3c(void);
extern "C" void func_ov015_0213178c(void);
extern "C" void func_ov015_02162140(void);
extern "C" void func_ov042_02166b90(void);
extern "C" void func_ov042_02166dc8(void);
extern "C" void func_ov042_02166f74(void);

extern "C" asm void func_ov042_0216f13c(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    ldr r5, =data_020c46d4
    mov r4, r0
    ldr r0, [r5]
    ldr r1, [r4, #0xed8]
    mov r2, #1
    mov r3, #2
    mov r6, #0
    bl func_02093928
    ldr r1, [r4, #0xec0]
    cmp r1, #0
    beq @L_0216f178
    ldr r0, [r5]
    bl func_02092270
    str r6, [r4, #0xec0]
@L_0216f178:
    mov r7, #0
    ldr r5, =data_020c46d4
    b @L_0216f1a8
@L_0216f184:
    add r0, r4, r7, lsl #2
    ldr r1, [r0, #0xec4]
    cmp r1, #0
    beq @L_0216f1a4
    ldr r0, [r5]
    bl func_02097b3c
    add r0, r4, r7, lsl #2
    str r6, [r0, #0xec4]
@L_0216f1a4:
    add r7, r7, #1
@L_0216f1a8:
    cmp r7, #5
    blt @L_0216f184
    ldr r1, [r4, #0x540]
    cmp r1, #0
    beq @L_0216f1cc
    ldr r0, =data_020c46d4
    ldr r0, [r0]
    bl func_02092270
    str r6, [r4, #0x540]
@L_0216f1cc:
    ldr r0, =data_020c46c4
    mov r1, #5
    ldr r0, [r0]
    bl func_ov015_02162140
    mov r0, r4
    mov r1, #0
    bl func_ov042_0216f408
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm void func_ov042_0216f1f4(void)
{
    stmdb sp!, {r3, r4, r5, r6, lr}
    sub sp, sp, #0x14
    ldr r1, =data_ov042_0216f908
    mov r5, r0
    add r4, sp, #4
    ldmia r1, {r0, r1, r2, r3}
    stmia r4, {r0, r1, r2, r3}
    ldr r0, [r5, #0xed8]
    cmp r0, #0
    bne @L_0216f234
    ldr r0, =data_020c46d4
    mov r1, #1
    ldr r0, [r0]
    mov r2, r1
    bl func_020920c4
    str r0, [r5, #0xed8]
@L_0216f234:
    ldr r6, =data_020c46d4
    ldr r3, [r5, #0x490]
    mov r4, #1
    ldr r0, [r6]
    ldr r1, [r5, #0xed8]
    mov r2, r4
    and r3, r3, #0xff
    bl func_02093188
    mov r0, #0
    str r0, [sp]
    ldr r0, [r6]
    ldr r1, [r5, #0xed8]
    ldr r3, [sp, #4]
    mov r2, r4
    bl func_020939c8
    ldr r0, [r6]
    ldr r1, [r5, #0xed8]
    mov r2, r4
    mov r3, #0xc8
    bl func_02093368
    ldr r0, [r5, #0xf14]
    mov r2, r4
    mov r0, r0, lsl #0x10
    mov r0, r0, asr #0x10
    str r0, [sp]
    ldr r0, [r6]
    ldr r1, [r5, #0xed8]
    ldr r3, [r5, #0xf10]
    mov r3, r3, lsl #0x10
    mov r3, r3, asr #0x10
    bl func_02093524
    ldr r0, [r6]
    ldr r1, [r5, #0xed8]
    mov r2, r4
    mov r3, #2
    bl func_02093928
    add sp, sp, #0x14
    ldmia sp!, {r3, r4, r5, r6, pc}
}

extern "C" asm void func_ov042_0216f2d4(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r5, r1
    mov r6, r0
    mov r1, #1
    mov r0, #0
    str r1, [r6, #0xee8]
    mov r4, r3
    str r5, [r6, #0xeec]
    add r1, r6, r5, lsl #2
    str r0, [r6, #0xf00]
    ldr r12, [sp, #0x18]
    ldr r0, [r1, #0xedc]
    ldr r3, [sp, #0x1c]
    mla r0, r12, r0, r4
    str r0, [r6, #0xef4]
    ldr r0, [r1, #0xedc]
    ldr r1, [sp, #0x20]
    add r0, r3, r0
    mov r7, r2
    bl func_0202273c
    add r0, r6, r5, lsl #2
    str r1, [r0, #0xedc]
    ldr r0, [r6, #0xeec]
    str r7, [r6, #0xef0]
    add r0, r6, r0, lsl #2
    ldr r2, [sp, #0x18]
    ldr r0, [r0, #0xedc]
    mov r1, #0xc
    mla r3, r2, r0, r4
    ldr r0, [r6, #0xef4]
    str r1, [r6, #0xefc]
    cmp r0, r3
    subgt r0, r1, #0xd
    mulgt r0, r1, r0
    strgt r0, [r6, #0xefc]
    ldr r0, =data_020c5e40
    mov r1, #8
    str r3, [r6, #0xef8]
    bl _ZN12SoundManager9PlaySoundEi
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm void func_ov042_0216f378(void)
{
    stmdb sp!, {r3, lr}
    ldr r3, [r0, #0xefc]
    ldr r2, [r0, #0xf00]
    ldr r12, [r0, #0xef4]
    add r1, r2, #1
    mla r12, r3, r2, r12
    str r1, [r0, #0xf00]
    cmp r3, #0
    ldr r2, [r0, #0xef8]
    bge @L_0216f3b8
    cmp r12, r2
    movlt r1, #0
    movlt r12, r2
    strlt r1, [r0, #0xee8]
    strlt r1, [r0, #0xf00]
    b @L_0216f3cc
@L_0216f3b8:
    cmp r12, r2
    movgt r1, #0
    movgt r12, r2
    strgt r1, [r0, #0xee8]
    strgt r1, [r0, #0xf00]
@L_0216f3cc:
    mov r1, r12, lsl #0x10
    mov r1, r1, asr #0x10
    str r1, [sp]
    ldr r3, [r0, #0xeec]
    ldr r2, [r0, #0xef0]
    ldr r1, =data_020c46d4
    add r3, r0, r3, lsl #2
    mov r2, r2, lsl #0x10
    ldr r0, [r1]
    ldr r1, [r3, #0xed8]
    mov r3, r2, asr #0x10
    mov r2, #1
    bl func_02093524
    ldmia sp!, {r3, pc}
}

extern "C" asm void func_ov042_0216f408(void)
{
    add r0, r0, r1, lsl #2
    mov r1, #0
    str r1, [r0, #0xedc]
    bx lr
}

extern "C" asm void func_ov042_0216f418(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    mov r7, r0
    ldr r4, [r7, #0x540]
    mov r9, #1
    mov r5, #5
    mov r6, #0x80
    bl func_ov015_0213178c
    cmp r0, #0
    ldr r0, [r7, #0xee4]
    subne r6, r6, #0x10
    add r0, r0, #1
    str r0, [r7, #0xee4]
    cmp r0, #2
    bgt @L_0216f49c
    ldr r8, =data_020c46d4
    mov r1, r4
    ldr r0, [r8]
    mov r2, r5
    mov r3, #2
    bl func_02093928
    ldr r0, [r7, #0xedc]
    mov r3, r6, lsl #0x10
    mov r0, r0, lsl #4
    add r0, r0, #0x50
    mov r0, r0, lsl #0x10
    mov r0, r0, asr #0x10
    str r0, [sp]
    ldr r0, [r8]
    mov r1, r4
    mov r2, r5
    mov r3, r3, asr #0x10
    bl func_02093524
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
@L_0216f49c:
    cmp r0, #4
    bgt @L_0216f4f4
    ldr r8, =data_020c46d4
    str r9, [sp]
    ldr r0, [r8]
    mov r1, r4
    mov r2, r5
    mov r3, #2
    bl func_0209386c
    ldr r0, [r7, #0xedc]
    mov r3, r6, lsl #0x10
    mov r0, r0, lsl #4
    add r0, r0, #0x50
    mov r0, r0, lsl #0x10
    mov r0, r0, asr #0x10
    str r0, [sp]
    ldr r0, [r8]
    mov r1, r4
    mov r2, r5
    mov r3, r3, asr #0x10
    bl func_02093524
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
@L_0216f4f4:
    cmp r0, #6
    bgt @L_0216f548
    ldr r8, =data_020c46d4
    mov r1, r4
    ldr r0, [r8]
    mov r2, r5
    mov r3, #2
    bl func_02093928
    ldr r0, [r7, #0xedc]
    mov r3, r6, lsl #0x10
    mov r0, r0, lsl #4
    add r0, r0, #0x50
    mov r0, r0, lsl #0x10
    mov r0, r0, asr #0x10
    str r0, [sp]
    ldr r0, [r8]
    mov r1, r4
    mov r2, r5
    mov r3, r3, asr #0x10
    bl func_02093524
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
@L_0216f548:
    cmp r0, #7
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    ldr r0, [r7, #0xedc]
    mov r4, #0
    str r4, [r7, #0xee0]
    str r4, [r7, #0xee4]
    str r4, [r7, #0xf04]
    cmp r0, #4
    addls pc, pc, r0, lsl #2
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    b @L_0216f584
    b @L_0216f594
    b @L_0216f5b8
    b @L_0216f5dc
    b @L_0216f600
@L_0216f584:
    mov r0, r7
    mov r1, #1
    bl func_ov042_02166dc8
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
@L_0216f594:
    ldr r0, [r7, #0xf18]
    cmp r0, #0
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    mov r0, r7
    bl func_ov042_02166f74
    mov r0, r7
    mov r1, r4
    bl func_ov042_02166dc8
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
@L_0216f5b8:
    ldr r0, [r7, #4]
    cmp r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    mov r1, #0x5d
    mov r0, r7
    mov r2, r1
    mov r3, #1
    bl func_ov042_02166b90
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
@L_0216f5dc:
    ldr r0, [r7, #8]
    cmp r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    mov r1, #0x5c
    mov r0, r7
    mov r2, r1
    mov r3, #1
    bl func_ov042_02166b90
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
@L_0216f600:
    ldr r0, [r7, #0xc]
    cmp r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    mov r1, #0x5b
    mov r0, r7
    mov r2, r1
    mov r3, #1
    bl func_ov042_02166b90
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

extern "C" asm void func_ov042_0216f628(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, lr}
    sub sp, sp, #0xc
    ldr r3, [r0, #0x28]
    mov r8, r2
    cmp r3, #4
    addne sp, sp, #0xc
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
    ldr r2, [r0, #0xf14]
    ldr r9, [r0, #0xedc]
    ldr r4, [r0, #0xf10]
    add r3, r2, r9, lsl #4
    mov r2, r4, lsl #0x10
    mov r3, r3, lsl #0x10
    sub r1, r1, #0x3d
    cmp r8, #0
    mov r6, r2, asr #0x10
    mov r7, r3, asr #0x10
    ldr r4, [r0, #0x540]
    mov r5, #5
    cmpne r9, r1
    beq @L_0216f6c4
    cmp r9, r1
    ldrgt r3, [r0, #0xf0c]
    sub r7, r1, r9
    subgt r2, r9, r1
    subgt r3, r3, #1
    mulgt r7, r3, r2
    ldr r3, [r0, #0xf14]
    mov r2, #0x10
    stmia sp, {r2, r7}
    ldr r2, [r0, #0xf0c]
    add r1, r3, r1, lsl #4
    str r2, [sp, #8]
    mov r7, r1, lsl #0x10
    ldr r3, [r0, #0xf14]
    mov r2, r6
    mov r1, #0
    mov r7, r7, asr #0x10
    bl func_ov042_0216f2d4
@L_0216f6c4:
    ldr r9, =data_020c46d4
    mov r0, #1
    str r0, [sp]
    mov r10, #2
    ldr r0, [r9]
    mov r1, r4
    mov r2, r5
    mov r3, r10
    bl func_0209386c
    str r7, [sp]
    ldr r0, [r9]
    mov r1, r4
    mov r2, r5
    mov r3, r6
    bl func_02093524
    ldr r0, [r9]
    mov r1, r4
    mov r2, r5
    mov r3, #0xd0
    bl func_02093368
    cmp r8, #0
    addne sp, sp, #0xc
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
    ldr r0, [r9]
    mov r1, r4
    mov r2, r5
    mov r3, r10
    bl func_02093928
    add sp, sp, #0xc
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
}

extern "C" asm void func_ov042_0216f740(void)
{
    stmdb sp!, {r3, r4, lr}
    sub sp, sp, #4
    ldr r2, [r0, #0x28]
    cmp r2, #4
    addne sp, sp, #4
    ldmneia sp!, {r3, r4, pc}
    sub r12, r1, #0x3d
    ldr r1, [r0, #0xf14]
    mov r2, r12, lsl #0x14
    mov r1, r1, lsl #0x10
    mov r2, r2, asr #0x10
    add r1, r2, r1, asr #16
    mov r1, r1, lsl #0x10
    ldr r2, [r0, #0xf10]
    mov r4, #1
    mov r3, r2, lsl #0x10
    str r12, [r0, #0xedc]
    mov r1, r1, asr #0x10
    str r1, [sp]
    ldr r2, =data_020c46d4
    ldr r1, [r0, #0xed8]
    ldr r0, [r2]
    mov r2, r4
    mov r3, r3, asr #0x10
    bl func_02093524
    ldr r0, =data_020c46c4
    ldr r0, [r0]
    add r0, r0, #0xf00
    strh r4, [r0, #0x38]
    add sp, sp, #4
    ldmia sp!, {r3, r4, pc}
}

extern "C" s32 func_ov042_0216f7c4(s32 arg0)
{
    _ZdlPv(arg0);
    return arg0;
}

extern "C" void func_ov042_0216f7d8(void)
{
}
