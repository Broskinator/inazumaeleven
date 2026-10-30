#include "ov003/Unk_ov003_02108ab0.hpp"

extern "C" void func_ov003_02108ab0(void);
extern "C" void func_ov003_02108b60(void);
extern "C" void func_ov003_02108c94(void);
extern "C" void func_ov003_02108e2c(void);
extern "C" void func_ov003_02109044(void);
extern "C" void func_ov003_021093c0(void);
extern "C" void func_ov003_021095b4(void);
extern "C" void func_ov003_0210982c(void);
extern "C" void func_ov003_021098ec(void);
extern "C" void func_ov003_02109de4(void);
extern "C" void func_ov003_0210a050(void);
extern "C" void func_ov003_0210a2f8(void);
extern "C" void func_ov003_0210a910(void);
extern "C" void func_ov003_0210aa1c(void);
extern "C" void func_ov003_0210ab30(void);
extern "C" void func_ov003_0210ac8c(void);
extern "C" s32 func_ov003_0210ae04(s32 arg0, u8 *arg1, u8 *arg2);
extern "C" s32 func_ov003_0210ae6c(s32 arg0, s32 arg1, s32 arg2);
extern "C" void func_ov003_0210aeb0(void);
extern "C" s32 func_ov003_0210b028(u8 *arg0, s32 arg1, s32 arg2);
extern "C" void func_ov003_0210b0a4(void);
extern "C" void func_ov003_0210b29c(void);

extern "C" char data_020c46a8[];
extern "C" char data_020c46c4[];
extern "C" char data_020c46d4[];
extern "C" char data_020c47a4[];
extern "C" char data_020c5320[];
extern "C" char data_020c5598[];
extern "C" char data_020c9660[];
extern "C" void MI_CpuCopy8(void);
extern "C" void MI_CpuFill8(void);
extern "C" void _ZN8TextFont10SetSpacingEii(void);
extern "C" void _ZN8TextFont12ResetSpacingEv(void);
extern "C" void func_020920c4(void);
extern "C" void func_02092270(void);
extern "C" void func_02093188(void);
extern "C" void func_02093368(void);
extern "C" void func_02093524(void);
extern "C" void func_020936b4(void);
extern "C" void func_02093734(void);
extern "C" void func_02097ca8(void);
extern "C" void func_020982a0(void);
extern "C" void func_0209bf7c(void);
extern "C" void func_0209bf8c(void);
extern "C" void func_0209bf9c(void);
extern "C" void func_0209d8b8(void);
extern "C" void func_ov003_02104008(void);
extern "C" void func_ov003_02104040(void);
extern "C" void func_ov003_02104094(void);
extern "C" void func_ov003_02104888(void);
extern "C" void func_ov003_02107654(void);
extern "C" void func_ov003_0210769c(void);
extern "C" void func_ov003_021081ac(void);
extern "C" void func_ov003_02108930(void);
extern "C" void func_ov015_0213328c(void);
extern "C" void func_ov015_02133c24(void);
extern "C" void func_ov015_0213b540(void);
extern "C" s32 func_ov015_0213b6ac(...);
extern "C" void func_ov015_0213b7f8(void);
extern "C" void func_ov015_0213b900(void);
extern "C" void func_ov015_0213b990(void);
extern "C" void func_ov015_0213ba04(void);
extern "C" void func_ov015_0213bd7c(void);
extern "C" void func_ov015_0213c4f0(void);
extern "C" void func_ov015_0213c530(void);
extern "C" void func_ov015_0213c730(void);
extern "C" void func_ov015_02162140(void);

extern "C" asm void func_ov003_02108ab0(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #0x20
    ldr r5, =data_020c9660
    mov r4, #0
    mov r7, #0x34
    mov r9, r0
    mov r8, r1
    mov r6, #1
    mov r0, r5
    mov r1, r4
    mov r2, r7
    mov r3, r4
    strb r6, [r9, #0x228]
    bl func_ov015_0213b7f8
    ldr r1, [r9, #0x584]
    cmp r1, #0
    addeq sp, sp, #0x20
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    mov r0, r8, asr #2
    str r7, [sp]
    add r0, r8, r0, lsr #29
    mov r0, r0, lsl #0x15
    str r4, [sp, #4]
    mov r2, #0xa
    str r2, [sp, #8]
    mov r0, r0, asr #0x18
    str r0, [sp, #0xc]
    mov r0, #0xc
    str r0, [sp, #0x10]
    mov r0, #3
    str r0, [sp, #0x14]
    mov r0, #5
    str r0, [sp, #0x18]
    ldr r2, [r1, #0xc]
    mov r0, r5
    add r5, r1, r2
    mov r1, r4
    mov r2, r6
    mov r3, r4
    str r5, [sp, #0x1c]
    bl func_ov015_0213b6ac
    add sp, sp, #0x20
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

extern "C" asm void func_ov003_02108b60(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #0x18
    mov r7, r0
    ldr r0, [r7, #0x6d0]
    mov r6, r1
    cmp r0, #0
    mov r5, #1
    bne @L_02108b98
    ldr r0, =data_020c46d4
    mov r1, r5
    ldr r0, [r0]
    mov r2, r5
    bl func_020920c4
    str r0, [r7, #0x6d0]
@L_02108b98:
    ldr r0, [r7, #0x78]
    ldr r4, [r7, #0x6d0]
    cmp r0, #0
    bne @L_02108c04
    ldr r8, =data_020c46d4
    mov r1, #5
    ldr r0, [r8]
    mov r2, r1
    bl func_020982a0
    mov r9, #0
    mov r0, r0, lsl #0x10
    mov r1, r0, asr #0x10
    str r1, [r7, #0x78]
    ldr r0, [r8]
    mov r2, r9
    mov r3, r9
    bl func_02097ca8
    mov r2, #1
    stmia sp, {r2, r9}
    str r9, [sp, #8]
    str r9, [sp, #0xc]
    str r2, [sp, #0x10]
    str r2, [sp, #0x14]
    ldr r1, [r7, #0x78]
    mov r0, r6
    mov r3, #9
    bl func_ov015_0213328c
@L_02108c04:
    mov r0, #0x3e
    ldr r6, =data_020c46d4
    str r0, [sp]
    mov r8, #0
    ldr r0, [r6]
    mov r1, r4
    mov r2, r5
    mov r3, r8
    bl func_02093524
    ldr r3, [r7, #0x78]
    ldr r0, [r6]
    mov r1, r4
    mov r2, r5
    and r3, r3, #0xff
    bl func_02093188
    mov r0, #0x30
    str r0, [sp]
    ldr r0, [r6]
    mov r1, r4
    mov r2, r5
    mov r3, #0x100
    bl func_020936b4
    str r8, [sp]
    mov r3, r8
    ldr r0, [r6]
    mov r1, r4
    mov r2, r5
    bl func_02093734
    ldr r0, [r6]
    mov r1, r4
    mov r2, r5
    mov r3, #0xd2
    bl func_02093368
    add sp, sp, #0x18
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

extern "C" asm void func_ov003_02108c94(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    sub sp, sp, #0x38
    mov r6, r0
    ldr r2, [r6, #0x5e4]
    cmp r2, #0
    beq @L_02108d18
    mov r5, #0x3b
    mov r4, #0
    str r5, [sp]
    str r4, [sp, #4]
    mov r0, #1
    str r0, [sp, #8]
    mov r0, #7
    str r0, [sp, #0xc]
    mov r0, #0x1e
    ldr r7, =data_020c9660
    str r0, [sp, #0x10]
    mov r0, #0xa
    str r0, [sp, #0x14]
    mov r0, #8
    str r0, [sp, #0x18]
    ldr r1, [r2, #0xc]
    mov r0, r7
    add r12, r2, r1
    mov r1, r4
    mov r2, r4
    mov r3, r4
    str r12, [sp, #0x1c]
    bl func_ov015_0213b6ac
    mov r0, r7
    mov r1, r4
    mov r2, r5
    bl func_ov015_0213ba04
@L_02108d18:
    ldr r1, [r6, #0x5d8]
    cmp r1, #0
    beq @L_02108da8
    ldr r0, [r1, #0xc]
    mov r7, #0
    add r12, r1, r0
    mov r3, #0xd
    mov r2, #6
    mov r1, #3
    mov r0, #8
    strh r2, [sp, #0x24]
    strh r1, [sp, #0x26]
    strb r0, [sp, #0x30]
    strh r3, [sp, #0x20]
    strh r3, [sp, #0x22]
    mov r4, #0x3c
    strh r7, [sp, #0x28]
    strh r7, [sp, #0x2a]
    strh r7, [sp, #0x2c]
    strh r7, [sp, #0x2e]
    str r12, [sp, #0x34]
    add r0, sp, #0x20
    str r7, [sp]
    stmib sp, {r0, r7}
    ldr r5, =data_020c9660
    str r7, [sp, #0xc]
    mov r0, r5
    mov r1, r7
    mov r2, r7
    mov r3, r4
    str r7, [sp, #0x10]
    bl func_ov015_0213b540
    mov r0, r5
    mov r1, r7
    mov r2, r4
    bl func_ov015_0213b990
@L_02108da8:
    mov r1, #3
    mov r7, #0x3c
    mov r5, #0
    str r1, [sp]
    ldr r0, =data_020c47a4
    mov r2, r7
    mov r3, r5
    mov r1, #0x3d
    bl func_ov015_0213c530
    strb r0, [r6, #0x47f]
    str r5, [sp]
    mov r4, #0x30
    str r4, [sp, #4]
    mov r4, #0x18
    ldr r0, =data_020c9660
    mov r1, r5
    mov r2, r7
    mov r3, r5
    str r4, [sp, #8]
    bl func_ov015_0213bd7c
    mov r0, r6
    bl func_ov003_02104094
    cmp r0, #0
    moveq r0, #0x130
    addne r0, r7, #0xf5
    bl func_0209d8b8
    mov r1, r0
    mov r0, r6
    bl func_ov003_02108b60
    add sp, sp, #0x38
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm void func_ov003_02108e2c(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x20
    movs r8, r2
    mov r10, r0
    mov r9, r1
    mov r5, #0
    mov r4, #7
    mov r6, #8
    moveq r1, #3
    moveq r7, #6
    moveq r0, #0x1a
    moveq r3, #0xa
    beq @L_02108e80
    mov r7, r6
    cmp r8, #1
    mov r4, r6
    mov r1, #1
    movne r7, #0x10
    mov r0, #0x1e
    mov r3, #8
    mov r5, #0x1e0
@L_02108e80:
    mov r2, #0xc
    mla r2, r4, r2, r10
    ldr r12, [r2, #0x50c]
    cmp r12, #0
    beq @L_02108ef0
    ldr r4, [r12, #0xc]
    mov r2, #1
    mov r11, r1, lsl #0x18
    mov r1, #0
    str r2, [sp]
    mov r7, r7, lsl #0x18
    str r1, [sp, #4]
    mov r11, r11, asr #0x18
    add r4, r12, r4
    str r11, [sp, #8]
    mov r7, r7, asr #0x18
    str r7, [sp, #0xc]
    and r0, r0, #0xff
    str r0, [sp, #0x10]
    and r0, r3, #0xff
    str r0, [sp, #0x14]
    and r6, r6, #0xff
    ldr r0, =data_020c9660
    mov r3, r1
    str r6, [sp, #0x18]
    add r4, r5, r4
    str r4, [sp, #0x1c]
    bl func_ov015_0213b6ac
@L_02108ef0:
    ldr r0, [r10, #0x480]
    add r6, r10, #0x480
    cmp r0, #0
    ldrne r0, [r6, #4]
    mov r5, #1
    cmpne r0, #0
    movne r0, r5
    moveq r0, #0
    cmp r0, #0
    beq @L_02109014
    ldrh r2, [r6, #0xe]
    mov r0, r10
    mov r1, r9
    mov r4, r2, lsl #3
    bl func_ov003_02104008
    cmp r0, #1
    subeq r0, r4, #0x14
    addeq r0, r0, r0, lsr #31
    moveq r0, r0, asr #1
    addeq r7, r0, #6
    movne r7, #4
    cmp r8, #0
    mov r0, #0x9a
    movne r7, #6
    bl func_0209d8b8
    cmp r9, r0
    ldr r4, =data_020c46a8
    mov r11, #4
    ldr r0, [r4]
    mov r1, r5
    mov r2, r11
    moveq r7, #5
    bl _ZN8TextFont10SetSpacingEii
    str r6, [sp]
    str r5, [sp, #4]
    mov r1, #0
    str r1, [sp, #8]
    mov r0, r10
    mov r2, r7
    mov r3, r9
    str r1, [sp, #0xc]
    bl func_ov003_02108930
    ldr r0, [r4]
    bl _ZN8TextFont12ResetSpacingEv
    cmp r8, #0
    mov r2, #6
    beq @L_02108fb8
    mov r2, #0x10
    cmp r8, #1
    subeq r2, r2, #8
@L_02108fb8:
    mov r0, #1
    mov r1, #0
    str r0, [sp]
    mov r0, r11, lsl #0x18
    mov r2, r2, lsl #0x18
    str r1, [sp, #4]
    mov r0, r0, asr #0x18
    str r0, [sp, #8]
    mov r0, r2, asr #0x18
    str r0, [sp, #0xc]
    ldrh r3, [r6, #0xc]
    ldr r0, =data_020c9660
    mov r2, r1
    and r3, r3, #0xff
    str r3, [sp, #0x10]
    ldrh r4, [r6, #0xe]
    mov r3, r1
    and r4, r4, #0xff
    str r4, [sp, #0x14]
    str r1, [sp, #0x18]
    ldr r4, [r6]
    str r4, [sp, #0x1c]
    bl func_ov015_0213b6ac
@L_02109014:
    mov r1, #0xa0
    cmp r8, #0
    moveq r1, #0x60
    beq @L_0210902c
    cmp r8, #1
    moveq r1, #0x60
@L_0210902c:
    mov r0, r10
    bl func_ov003_02108ab0
    add sp, sp, #0x20
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_ov003_02109044(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x3c
    mov r10, r0
    ldr r4, [r10, #0x56c]
    str r1, [sp, #0x20]
    cmp r4, #0
    beq @L_021090a4
    mov r2, #1
    mov r1, #0
    str r2, [sp]
    stmib sp, {r1, r2}
    mov r0, #0x10
    str r0, [sp, #0xc]
    mov r0, #0x1e
    str r0, [sp, #0x10]
    mov r0, #8
    str r0, [sp, #0x14]
    str r0, [sp, #0x18]
    ldr r3, [r4, #0xc]
    ldr r0, =data_020c9660
    add r4, r4, r3
    mov r3, r1
    str r4, [sp, #0x1c]
    bl func_ov015_0213b6ac
@L_021090a4:
    ldr r9, [r10, #0x5b4]
    cmp r9, #0
    beq @L_021092cc
    ldr r0, [r9, #0xc]
    mov r8, #0x14
    add r0, r9, r0
    add r0, r0, #0x24
    str r0, [sp, #0x38]
    mov r0, #7
    mov r7, #6
    mov r6, #3
    mov r5, #0x30
    mov r4, #0x18
    mov r11, #8
    strh r0, [sp, #0x24]
    mov r0, #0
    strh r8, [sp, #0x26]
    strh r7, [sp, #0x28]
    strh r6, [sp, #0x2a]
    strh r0, [sp, #0x2c]
    strh r0, [sp, #0x2e]
    strh r5, [sp, #0x30]
    strh r4, [sp, #0x32]
    strb r11, [sp, #0x34]
    str r0, [sp]
    add r1, sp, #0x24
    str r1, [sp, #4]
    mov r1, #0
    str r1, [sp, #8]
    str r1, [sp, #0xc]
    ldr r0, =data_020c9660
    mov r2, #1
    mov r3, #0xb
    str r1, [sp, #0x10]
    bl func_ov015_0213b540
    ldr r0, =data_020c9660
    mov r1, #0
    mov r2, #0xb
    bl func_ov015_0213b990
    ldr r2, [r9, #0xc]
    mov r1, #7
    strh r1, [sp, #0x24]
    add r1, r9, r2
    str r1, [sp, #0x38]
    mov r1, #0
    strh r8, [sp, #0x26]
    strh r7, [sp, #0x28]
    strh r6, [sp, #0x2a]
    strh r1, [sp, #0x2c]
    strh r1, [sp, #0x2e]
    strh r5, [sp, #0x30]
    strh r4, [sp, #0x32]
    strb r11, [sp, #0x34]
    str r1, [sp]
    add r1, sp, #0x24
    str r1, [sp, #4]
    mov r1, #0
    str r1, [sp, #8]
    str r1, [sp, #0xc]
    ldr r0, =data_020c9660
    mov r2, #1
    mov r3, #0xd
    str r1, [sp, #0x10]
    bl func_ov015_0213b540
    mov r0, #0
    str r0, [sp]
    mov r1, r0
    ldr r0, =data_020c47a4
    mov r2, #0xb
    mov r3, #0xd
    bl func_ov015_0213c530
    strb r0, [r10, #0x47b]
    ldr r0, [r9, #0xc]
    mov r1, #0
    add r0, r9, r0
    add r0, r0, #0x6c
    str r0, [sp, #0x38]
    mov r0, #0x13
    strh r0, [sp, #0x24]
    mov r0, #0
    strh r8, [sp, #0x26]
    strh r7, [sp, #0x28]
    strh r6, [sp, #0x2a]
    strh r0, [sp, #0x2c]
    strh r0, [sp, #0x2e]
    strh r5, [sp, #0x30]
    strh r4, [sp, #0x32]
    strb r11, [sp, #0x34]
    str r0, [sp]
    add r0, sp, #0x24
    str r0, [sp, #4]
    mov r0, #0
    str r0, [sp, #8]
    str r0, [sp, #0xc]
    str r0, [sp, #0x10]
    ldr r0, =data_020c9660
    mov r2, #1
    mov r3, #0xc
    bl func_ov015_0213b540
    ldr r0, =data_020c9660
    mov r1, #0
    mov r2, #0xc
    bl func_ov015_0213b990
    ldr r3, [r9, #0xc]
    mov r1, #0
    add r9, r9, r3
    mov r3, #0x13
    strh r3, [sp, #0x24]
    add r3, r9, #0x48
    str r3, [sp, #0x38]
    mov r3, r1
    strh r4, [sp, #0x32]
    strh r8, [sp, #0x26]
    strh r7, [sp, #0x28]
    strh r6, [sp, #0x2a]
    strh r5, [sp, #0x30]
    strb r11, [sp, #0x34]
    strh r3, [sp, #0x2c]
    strh r3, [sp, #0x2e]
    str r3, [sp]
    add r3, sp, #0x24
    str r3, [sp, #4]
    mov r3, r1
    str r3, [sp, #8]
    str r3, [sp, #0xc]
    ldr r0, =data_020c9660
    mov r4, #0xe
    str r3, [sp, #0x10]
    mov r2, #1
    mov r3, r4
    bl func_ov015_0213b540
    mov r1, #0
    ldr r0, =data_020c47a4
    mov r2, #0xc
    mov r3, r4
    str r1, [sp]
    bl func_ov015_0213c530
    strb r0, [r10, #0x47c]
@L_021092cc:
    ldr r0, [r10, #0x38]
    mov r4, #1
    add r0, r0, #3
    add r0, r10, r0
    ldrb r1, [r0, #0x478]
    ldr r0, =data_020c47a4
    mov r2, r4
    bl func_ov015_0213c730
    ldr r0, [r10, #0x480]
    add r5, r10, #0x480
    cmp r0, #0
    ldrne r0, [r5, #4]
    cmpne r0, #0
    moveq r4, #0
    cmp r4, #0
    addeq sp, sp, #0x3c
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r1, [sp, #0x20]
    mov r0, r10
    bl func_ov003_02104008
    ldr r6, =data_020c46a8
    mov r8, #1
    mov r7, #4
    ldr r0, [r6]
    mov r1, r8
    mov r2, r7
    bl _ZN8TextFont10SetSpacingEii
    mov r4, #0
    stmia sp, {r5, r8}
    str r4, [sp, #8]
    ldr r3, [sp, #0x20]
    mov r0, r10
    str r4, [sp, #0xc]
    mov r1, r4
    mov r2, r7
    bl func_ov003_02108930
    ldr r0, [r6]
    bl _ZN8TextFont12ResetSpacingEv
    str r8, [sp]
    stmib sp, {r4, r7}
    mov r0, #0x10
    str r0, [sp, #0xc]
    ldrh r2, [r5, #0xc]
    ldr r0, =data_020c9660
    mov r1, r4
    and r2, r2, #0xff
    str r2, [sp, #0x10]
    ldrh r6, [r5, #0xe]
    mov r2, r4
    mov r3, r4
    and r6, r6, #0xff
    str r6, [sp, #0x14]
    str r4, [sp, #0x18]
    ldr r4, [r5]
    str r4, [sp, #0x1c]
    bl func_ov015_0213b6ac
    add sp, sp, #0x3c
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_ov003_021093c0(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    sub sp, sp, #0x38
    mov r7, r0
    ldr r4, [r7, #0x56c]
    mov r6, r1
    cmp r4, #0
    beq @L_02109424
    mov r2, #1
    mov r1, #0
    str r2, [sp]
    stmib sp, {r1, r2}
    mov r0, #0x10
    str r0, [sp, #0xc]
    mov r0, #0x1e
    str r0, [sp, #0x10]
    mov r0, #8
    str r0, [sp, #0x14]
    str r0, [sp, #0x18]
    ldr r3, [r4, #0xc]
    ldr r0, =data_020c9660
    add r3, r4, r3
    add r4, r3, #0x3c0
    mov r3, r1
    str r4, [sp, #0x1c]
    bl func_ov015_0213b6ac
@L_02109424:
    ldr r1, [r7, #0x5cc]
    cmp r1, #0
    beq @L_021094dc
    ldr r0, [r1, #0xc]
    mov r4, #0
    add r12, r1, r0
    mov r3, #8
    mov r10, #0xc
    mov r9, #0x14
    mov r2, #3
    mov r1, #0x40
    mov r0, #0x18
    strh r2, [sp, #0x26]
    strh r1, [sp, #0x2c]
    strh r0, [sp, #0x2e]
    strh r10, [sp, #0x20]
    strh r9, [sp, #0x22]
    strh r3, [sp, #0x24]
    strh r4, [sp, #0x28]
    strh r4, [sp, #0x2a]
    strb r3, [sp, #0x30]
    str r12, [sp, #0x34]
    mov r5, #9
    add r0, sp, #0x20
    str r4, [sp]
    stmib sp, {r0, r4}
    ldr r8, =data_020c9660
    str r4, [sp, #0xc]
    mov r0, r8
    mov r1, r4
    mov r3, r5
    mov r2, #1
    str r4, [sp, #0x10]
    bl func_ov015_0213b540
    mov r0, r8
    mov r1, r4
    mov r2, r5
    bl func_ov015_0213b990
    mov r1, #0xa
    str r1, [sp]
    ldr r0, =data_020c47a4
    mov r1, r4
    mov r2, r5
    mov r3, r4
    bl func_ov015_0213c530
    strb r0, [r7, #0x47b]
@L_021094dc:
    ldr r0, [r7, #0x480]
    add r5, r7, #0x480
    cmp r0, #0
    ldrne r0, [r5, #4]
    cmpne r0, #0
    movne r0, #1
    moveq r0, #0
    cmp r0, #0
    addeq sp, sp, #0x38
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    mov r0, r7
    mov r1, r6
    bl func_ov003_02104008
    ldr r8, =data_020c46a8
    mov r10, #1
    mov r9, #4
    ldr r0, [r8]
    mov r1, r10
    mov r2, r9
    bl _ZN8TextFont10SetSpacingEii
    mov r4, #0
    stmia sp, {r5, r10}
    str r4, [sp, #8]
    mov r0, r7
    mov r3, r6
    str r4, [sp, #0xc]
    mov r1, r4
    mov r2, #6
    bl func_ov003_02108930
    ldr r0, [r8]
    bl _ZN8TextFont12ResetSpacingEv
    str r10, [sp]
    stmib sp, {r4, r9}
    mov r0, #0x10
    str r0, [sp, #0xc]
    ldrh r2, [r5, #0xc]
    ldr r0, =data_020c9660
    mov r1, r4
    and r2, r2, #0xff
    str r2, [sp, #0x10]
    ldrh r6, [r5, #0xe]
    mov r2, r4
    mov r3, r4
    and r6, r6, #0xff
    str r6, [sp, #0x14]
    str r4, [sp, #0x18]
    ldr r4, [r5]
    str r4, [sp, #0x1c]
    bl func_ov015_0213b6ac
    add sp, sp, #0x38
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
}

extern "C" asm void func_ov003_021095b4(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x38
    mov r10, r0
    ldr r9, [r10, #0x5f0]
    cmp r9, #0
    beq @L_02109804
    mov r8, #0
    mov r7, #0x10
    mov r6, #0x80
    mov r5, #9
    ldr r11, =data_020c9660
    strh r8, [sp, #0x20]
    strh r8, [sp, #0x22]
    strh r7, [sp, #0x24]
    strh r7, [sp, #0x26]
    strh r8, [sp, #0x28]
    strh r8, [sp, #0x2a]
    strh r6, [sp, #0x2c]
    strh r6, [sp, #0x2e]
    strb r5, [sp, #0x30]
    str r8, [sp, #0x34]
    add r4, sp, #0x20
    str r8, [sp]
    stmib sp, {r4, r8}
    str r8, [sp, #0xc]
    mov r0, r11
    mov r1, r8
    mov r2, #1
    mov r3, #0x35
    str r8, [sp, #0x10]
    bl func_ov015_0213b540
    str r8, [sp]
    stmib sp, {r4, r8}
    str r8, [sp, #0xc]
    str r8, [sp, #0x10]
    mov r0, r11
    mov r1, r8
    mov r2, #1
    mov r3, #0x37
    bl func_ov015_0213b540
    str r8, [sp]
    stmib sp, {r4, r8}
    str r8, [sp, #0xc]
    mov r0, r11
    mov r1, r8
    mov r2, #1
    mov r3, #0x39
    str r8, [sp, #0x10]
    bl func_ov015_0213b540
    ldr r0, =data_020c47a4
    mov r1, #0x35
    mov r2, #0x37
    mov r3, #0x39
    str r8, [sp]
    bl func_ov015_0213c530
    strb r0, [r10, #0x478]
    strb r5, [sp, #0x30]
    strh r7, [sp, #0x20]
    strh r8, [sp, #0x22]
    strh r7, [sp, #0x24]
    strh r7, [sp, #0x26]
    strh r8, [sp, #0x28]
    strh r8, [sp, #0x2a]
    strh r6, [sp, #0x2c]
    strh r6, [sp, #0x2e]
    str r8, [sp, #0x34]
    str r8, [sp]
    stmib sp, {r4, r8}
    str r8, [sp, #0xc]
    mov r6, #0x36
    str r8, [sp, #0x10]
    mov r0, r11
    mov r1, r8
    mov r2, #1
    mov r3, r6
    bl func_ov015_0213b540
    str r8, [sp]
    stmib sp, {r4, r8}
    mov r5, #0x38
    str r8, [sp, #0xc]
    mov r0, r11
    mov r1, r8
    mov r2, #1
    mov r3, r5
    str r8, [sp, #0x10]
    bl func_ov015_0213b540
    mov r0, r11
    mov r1, r8
    mov r2, r5
    bl func_ov015_0213b990
    str r8, [sp]
    stmib sp, {r4, r8}
    mov r4, #0x3a
    str r8, [sp, #0xc]
    mov r0, r11
    mov r2, #1
    mov r1, r8
    mov r3, r4
    str r8, [sp, #0x10]
    bl func_ov015_0213b540
    ldr r0, =data_020c47a4
    str r8, [sp]
    mov r1, r6
    mov r2, r5
    mov r3, r4
    bl func_ov015_0213c530
    strb r0, [r10, #0x479]
    ldr r1, [r9, #0xc]
    ldr r0, [r10, #0x38]
    mov r2, #1
    add r4, r9, r1
    cmp r0, #0
    mov r1, #0
    str r2, [sp]
    str r1, [sp, #4]
    str r1, [sp, #8]
    str r1, [sp, #0xc]
    mov r0, #0x10
    str r0, [sp, #0x10]
    str r0, [sp, #0x14]
    mov r0, #9
    str r0, [sp, #0x18]
    addeq r4, r4, #0x200
    ldr r0, =data_020c9660
    mov r3, r1
    str r4, [sp, #0x1c]
    bl func_ov015_0213b6ac
    ldr r1, [r9, #0xc]
    ldr r0, [r10, #0x38]
    add r1, r9, r1
    mov r2, #1
    add r4, r1, #0x400
    cmp r0, #1
    mov r1, #0
    str r2, [sp]
    str r1, [sp, #4]
    mov r0, #0x10
    str r0, [sp, #8]
    str r1, [sp, #0xc]
    str r0, [sp, #0x10]
    str r0, [sp, #0x14]
    mov r0, #9
    str r0, [sp, #0x18]
    addeq r4, r4, #0x200
    ldr r0, =data_020c9660
    mov r3, r1
    str r4, [sp, #0x1c]
    bl func_ov015_0213b6ac
@L_02109804:
    ldr r1, [r10, #0x38]
    ldr r0, =data_020c47a4
    add r1, r10, r1
    ldrb r1, [r1, #0x478]
    mov r2, #1
    bl func_ov015_0213c730
    add sp, sp, #0x38
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_ov003_0210982c(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #0x20
    mov r4, r0
    ldr r0, =data_020c5320
    bl func_0209bf8c
    ldr r6, [r4, #0x5f0]
    cmp r6, #0
    addeq sp, sp, #0x20
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    ldr r0, [r6, #0xc]
    mov r5, #1
    mov r4, #0
    str r5, [sp]
    str r4, [sp, #4]
    str r4, [sp, #8]
    str r4, [sp, #0xc]
    mov r9, #0x10
    str r9, [sp, #0x10]
    ldr r7, =data_020c9660
    add r12, r6, r0
    str r9, [sp, #0x14]
    mov r8, #9
    str r8, [sp, #0x18]
    mov r0, r7
    mov r1, r4
    mov r2, r5
    mov r3, r4
    str r12, [sp, #0x1c]
    bl func_ov015_0213b6ac
    ldr r1, [r6, #0xc]
    mov r0, r7
    str r5, [sp]
    stmib sp, {r4, r9}
    str r4, [sp, #0xc]
    str r9, [sp, #0x10]
    str r9, [sp, #0x14]
    add r6, r6, r1
    mov r1, r4
    mov r3, r4
    mov r2, r5
    str r8, [sp, #0x18]
    add r4, r6, #0x400
    str r4, [sp, #0x1c]
    bl func_ov015_0213b6ac
    add sp, sp, #0x20
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

extern "C" asm void func_ov003_021098ec(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x6c
    ldr r4, =data_020c5320
    mov r10, r0
    mov r9, #0
    mov r0, r4
    mov r5, r9
    bl func_0209bf9c
    str r0, [sp, #0x2c]
    mov r0, r4
    str r5, [sp, #0x28]
    bl func_0209bf8c
    mov r7, r0
    mov r0, r10
    mov r1, r5
    bl func_ov003_02104888
    ldr r2, [r10, #0x4e4]
    add r1, r10, #0xe4
    cmp r2, #0
    add r6, r1, #0x400
    ldrne r1, [r6, #4]
    mov r2, r5
    cmpne r1, #0
    movne r2, #1
    cmp r2, #0
    mov r4, #1
    beq @L_021099f8
    cmp r0, #0
    mov r8, r4
    blt @L_021099f8
    add r1, r10, #0x42
    add r2, r1, #0x200
    mov r1, #0x70
    mla r3, r0, r1, r2
    mov r1, #0x52
    str r1, [sp]
    ldr r0, =data_020c46a8
    add r1, sp, #0x4c
    ldr r0, [r0]
    mov r2, #0x20
    bl func_ov015_02133c24
    stmia sp, {r6, r9}
    mov r1, #2
    str r8, [sp, #8]
    mov r3, r0
    str r9, [sp, #0xc]
    mov r0, r10
    mov r2, r1
    bl func_ov003_02108930
    ldrh r2, [r6, #0xe]
    ldrh r1, [r6, #0xc]
    ldr r3, [r6]
    mov r0, #3
    stmia sp, {r8, r9}
    str r0, [sp, #8]
    and r1, r1, #0xff
    str r8, [sp, #0xc]
    str r1, [sp, #0x10]
    and r2, r2, #0xff
    str r2, [sp, #0x14]
    str r9, [sp, #0x18]
    str r3, [sp, #0x1c]
    ldr r0, =data_020c9660
    mov r1, r9
    mov r2, r9
    mov r3, r9
    bl func_ov015_0213b6ac
@L_021099f8:
    mov r0, r10
    mov r1, r4
    bl func_ov003_02104888
    ldr r2, [r10, #0x4f8]
    add r1, r10, #0xf8
    cmp r2, #0
    add r6, r1, #0x400
    ldrne r1, [r6, #4]
    mov r2, #0
    cmpne r1, #0
    movne r2, r4
    cmp r2, #0
    mov r4, #0
    beq @L_02109ad4
    cmp r0, #0
    mov r8, #1
    blt @L_02109ad4
    add r1, r10, #0x42
    add r2, r1, #0x200
    mov r1, #0x70
    mla r3, r0, r1, r2
    mov r1, #0x52
    str r1, [sp]
    ldr r0, =data_020c46a8
    add r1, sp, #0x4c
    ldr r0, [r0]
    mov r2, #0x20
    bl func_ov015_02133c24
    str r6, [sp]
    stmib sp, {r4, r8}
    mov r1, #2
    mov r3, r0
    str r4, [sp, #0xc]
    mov r0, r10
    mov r2, r1
    bl func_ov003_02108930
    ldrh r2, [r6, #0xe]
    ldrh r1, [r6, #0xc]
    ldr r3, [r6]
    mov r0, #0x13
    str r8, [sp]
    str r4, [sp, #4]
    str r0, [sp, #8]
    and r1, r1, #0xff
    str r8, [sp, #0xc]
    str r1, [sp, #0x10]
    and r2, r2, #0xff
    str r2, [sp, #0x14]
    str r4, [sp, #0x18]
    str r3, [sp, #0x1c]
    ldr r0, =data_020c9660
    mov r1, r4
    mov r2, r4
    mov r3, r4
    bl func_ov015_0213b6ac
@L_02109ad4:
    ldr r0, [r10, #0xc]
    cmp r0, #0x16
    mov r0, #0
    str r0, [sp, #0x24]
    bne @L_02109b1c
    ldr r1, [sp, #0x24]
    b @L_02109b14
@L_02109af0:
    ldr r0, [r10, #0x38]
    add r0, r10, r0, lsl #2
    add r0, r0, r1
    ldrsb r0, [r0, #0x47]
    cmp r7, r0
    moveq r0, #1
    streq r0, [sp, #0x24]
    beq @L_02109b1c
    add r1, r1, #1
@L_02109b14:
    cmp r1, #4
    blt @L_02109af0
@L_02109b1c:
    mov r0, #0
    b @L_02109dc0
@L_02109b24:
    ldr r0, [sp, #0x20]
    mov r8, #0
    add r11, r10, r0, lsl #2
    add r0, r10, #0x480
    str r0, [sp, #0x30]
    add r0, r10, #0x42
    add r0, r0, #0x200
    str r0, [sp, #0x34]
    ldr r0, [sp, #0x20]
    mov r0, r0, lsl #0x1c
    mov r0, r0, asr #0x18
    str r0, [sp, #0x38]
    ldr r0, [sp, #0x20]
    mov r0, r0, lsl #7
    add r1, r0, #8
    str r0, [sp, #0x40]
    mov r0, r1, asr #2
    add r0, r1, r0, lsr #29
    mov r0, r0, lsl #0x15
    mov r0, r0, asr #0x18
    str r0, [sp, #0x44]
    ldr r0, [sp, #0x20]
    add r0, r0, #0xb
    and r0, r0, #0xff
    str r0, [sp, #0x48]
    ldr r0, [sp, #0x20]
    add r1, r0, #0x14
    mov r0, #0xc
    mla r0, r1, r0, r10
    str r0, [sp, #0x3c]
    b @L_02109db0
@L_02109ba0:
    add r0, r11, r8
    ldrsb r9, [r0, #0x47]
    ldr r0, [r10, #0xc]
    cmp r0, #0x15
    beq @L_02109bc4
    cmp r0, #0x16
    ldreq r0, [sp, #0x24]
    cmpeq r0, #0
    bne @L_02109bf0
@L_02109bc4:
    ldr r1, [r10, #0x38]
    ldr r0, [sp, #0x20]
    cmp r1, r0
    bne @L_02109bf0
    cmp r9, #0
    bge @L_02109bf0
    ldr r0, [sp, #0x28]
    cmp r0, #0
    moveq r0, #1
    moveq r9, r7
    streq r0, [sp, #0x28]
@L_02109bf0:
    cmp r9, #0
    blt @L_02109dac
    ldr r1, [sp, #0x2c]
    mov r0, #1
    tst r1, r0, lsl r9
    beq @L_02109dac
    add r1, r5, #1
    mov r0, #0x14
    mul r2, r1, r0
    ldr r0, [sp, #0x30]
    mov r1, r4
    add r6, r0, r2
    ldr r0, [r0, r2]
    cmp r0, #0
    ldrne r0, [r6, #4]
    cmpne r0, #0
    movne r1, #1
    cmp r1, #0
    beq @L_02109cec
    ldr r0, =data_020c46a8
    mov r1, #1
    ldr r0, [r0]
    mov r2, #4
    bl _ZN8TextFont10SetSpacingEii
    ldr r3, [sp, #0x34]
    mov r12, #0x70
    str r6, [sp]
    str r4, [sp, #4]
    mla r3, r9, r12, r3
    str r4, [sp, #8]
    mov r0, #1
    str r0, [sp, #0xc]
    mov r0, r10
    mov r1, #4
    mov r2, r4
    bl func_ov003_02108930
    mov r0, #0x18
    mul r0, r8, r0
    ldrh r2, [r6, #0xe]
    ldrh r1, [r6, #0xc]
    ldr r3, [r6]
    mov r6, #1
    str r6, [sp]
    ldr r6, [sp, #0x38]
    str r4, [sp, #4]
    add r0, r0, #0x20
    str r6, [sp, #8]
    mov r6, r0, asr #2
    add r0, r0, r6, lsr #29
    mov r0, r0, lsl #0x15
    mov r0, r0, asr #0x18
    str r0, [sp, #0xc]
    and r1, r1, #0xff
    str r1, [sp, #0x10]
    and r2, r2, #0xff
    str r2, [sp, #0x14]
    str r4, [sp, #0x18]
    str r3, [sp, #0x1c]
    ldr r0, =data_020c9660
    mov r1, r4
    mov r2, r4
    mov r3, r4
    bl func_ov015_0213b6ac
@L_02109cec:
    add r0, r11, r8
    ldrsb r1, [r0, #0x4f]
    cmp r1, #0
    blt @L_02109d7c
    ldr r0, [sp, #0x3c]
    ldr r6, [r0, #0x50c]
    cmp r6, #0
    beq @L_02109d7c
    mov r0, #0x18
    mul r2, r8, r0
    ldr r3, [r6, #0xc]
    mov r0, #0x54
    add r3, r6, r3
    mla r0, r1, r0, r3
    mov r1, #1
    stmia sp, {r1, r4}
    ldr r1, [sp, #0x44]
    add r2, r2, #0x18
    str r1, [sp, #8]
    mov r1, r2, asr #2
    add r1, r2, r1, lsr #29
    mov r1, r1, lsl #0x15
    mov r1, r1, asr #0x18
    str r1, [sp, #0xc]
    mov r1, #0xe
    str r1, [sp, #0x10]
    mov r1, #3
    str r1, [sp, #0x14]
    ldr r1, [sp, #0x48]
    mov r2, #1
    str r1, [sp, #0x18]
    str r0, [sp, #0x1c]
    ldr r0, =data_020c9660
    mov r1, r4
    mov r3, r4
    bl func_ov015_0213b6ac
@L_02109d7c:
    cmp r9, r7
    bne @L_02109da8
    mov r2, #0x18
    mul r2, r8, r2
    ldr r1, [sp, #0x40]
    mov r0, r10
    add r2, r2, #0x13
    bl func_ov003_02107654
    mov r0, r10
    mov r1, #1
    bl func_ov003_0210769c
@L_02109da8:
    add r5, r5, #1
@L_02109dac:
    add r8, r8, #1
@L_02109db0:
    cmp r8, #4
    blt @L_02109ba0
    ldr r0, [sp, #0x20]
    add r0, r0, #1
@L_02109dc0:
    str r0, [sp, #0x20]
    ldr r0, [sp, #0x20]
    cmp r0, #2
    blt @L_02109b24
    add sp, sp, #0x6c
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_ov003_02109de4(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    sub sp, sp, #0x38
    mov r4, r0
    ldr r6, [r4, #0x5a8]
    mov r7, #1
    cmp r6, #0
    mov r8, #0
    beq @L_02109e54
    ldr r5, [r6, #0xc]
    mov r2, r7
    mov r1, r8
    str r2, [sp]
    str r1, [sp, #4]
    mov r0, #3
    str r0, [sp, #8]
    mov r0, #5
    str r0, [sp, #0xc]
    mov r0, #0x1a
    str r0, [sp, #0x10]
    mov r0, #0xd
    str r0, [sp, #0x14]
    mov r9, #6
    ldr r0, =data_020c9660
    mov r3, r1
    str r9, [sp, #0x18]
    add r5, r6, r5
    str r5, [sp, #0x1c]
    bl func_ov015_0213b6ac
@L_02109e54:
    ldr r1, [r4, #0x59c]
    cmp r1, #0
    beq @L_02109f08
    ldr r0, [r1, #0xc]
    mov r3, #6
    add r12, r1, r0
    mov r10, #0xd
    mov r9, #0xe
    mov r2, #3
    mov r1, #0x30
    mov r0, #0x18
    strh r2, [sp, #0x26]
    strh r1, [sp, #0x2c]
    strh r0, [sp, #0x2e]
    strh r10, [sp, #0x20]
    strh r9, [sp, #0x22]
    strh r3, [sp, #0x24]
    strh r8, [sp, #0x28]
    strh r8, [sp, #0x2a]
    strb r3, [sp, #0x30]
    str r12, [sp, #0x34]
    mov r5, #0x11
    add r0, sp, #0x20
    str r8, [sp]
    stmib sp, {r0, r8}
    ldr r6, =data_020c9660
    str r8, [sp, #0xc]
    mov r0, r6
    mov r1, r8
    mov r3, r5
    mov r2, #1
    str r8, [sp, #0x10]
    bl func_ov015_0213b540
    mov r0, r6
    mov r1, r8
    mov r2, r5
    bl func_ov015_0213b990
    mov r0, #0xa
    str r0, [sp]
    ldr r0, =data_020c47a4
    mov r2, r5
    mov r1, r8
    mov r3, r8
    bl func_ov015_0213c530
    strb r0, [r4, #0x47b]
@L_02109f08:
    ldr r0, [r4, #0x480]
    add r9, r4, #0x480
    cmp r0, #0
    ldrne r0, [r9, #4]
    mov r1, #0
    cmpne r0, #0
    movne r1, #1
    cmp r1, #0
    addeq sp, sp, #0x38
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    ldr r0, =data_020c5320
    ldr r0, [r0, #0x5c]
    cmp r0, #1
    mov r0, #0
    moveq r0, #1
    cmp r0, #0
    beq @L_02109f54
    ldr r0, =0x121
    b @L_02109f6c
@L_02109f54:
    ldrb r0, [r4, #0x229]
    cmp r0, #0
    beq @L_02109f68
    ldr r0, =0x111
    b @L_02109f6c
@L_02109f68:
    mov r0, #5
@L_02109f6c:
    bl func_0209d8b8
    mov r10, r0
    ldr r0, =data_020c5320
    strb r8, [r4, #0x229]
    bl func_0209bf7c
    cmp r0, #0xc
    bne @L_02109f94
    ldr r0, =0x211
    bl func_0209d8b8
    mov r10, r0
@L_02109f94:
    ldr r5, =data_020c46a8
    mov r6, #4
    ldr r0, [r5]
    mov r1, r7
    mov r2, r6
    bl _ZN8TextFont10SetSpacingEii
    str r9, [sp]
    stmib sp, {r7, r8}
    str r8, [sp, #0xc]
    ldrh r2, [r9, #0xe]
    mov r0, r4
    mov r1, r8
    mov r2, r2, lsl #3
    sub r2, r2, #0x14
    add r2, r2, r2, lsr #31
    mov r3, r10
    mov r2, r2, asr #1
    bl func_ov003_02108930
    ldr r0, [r5]
    bl _ZN8TextFont12ResetSpacingEv
    ldrh r2, [r9, #0xe]
    ldrh r1, [r9, #0xc]
    ldr r3, [r9]
    mov r0, #5
    stmia sp, {r7, r8}
    str r6, [sp, #8]
    str r0, [sp, #0xc]
    and r1, r1, #0xff
    str r1, [sp, #0x10]
    and r2, r2, #0xff
    str r2, [sp, #0x14]
    str r8, [sp, #0x18]
    str r3, [sp, #0x1c]
    ldr r0, =data_020c9660
    mov r1, r8
    mov r2, r8
    mov r3, r8
    bl func_ov015_0213b6ac
    add sp, sp, #0x38
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
}

extern "C" asm void func_ov003_0210a050(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x2c
    ldr r5, =data_020c5320
    mov r10, r0
    mov r4, #0
    mov r0, r5
    mov r8, r4
    bl func_0209bf9c
    str r0, [sp, #0x24]
    mov r0, r5
    bl func_0209bf8c
    str r0, [sp, #0x20]
    add r0, r10, #0x42
    add r0, r0, #0x200
    mov r5, #1
    mov r9, r8
    add r11, r10, #0x480
    str r0, [sp, #0x28]
    mov r6, r5
    b @L_0210a288
@L_0210a0a0:
    ldr r0, [sp, #0x20]
    cmp r0, r9
    beq @L_0210a284
    ldr r0, [sp, #0x24]
    tst r0, r6, lsl r9
    beq @L_0210a284
    ldr r3, [r10, #0x554]
    cmp r3, #0
    beq @L_0210a134
    mov r0, #0x28
    mul r1, r8, r0
    ldr r2, [r3, #0xc]
    add r0, r3, r2
    add r2, r1, #8
    str r6, [sp]
    mov r1, #0
    str r1, [sp, #4]
    mov r1, #3
    str r1, [sp, #8]
    mov r1, r2, asr #2
    add r1, r2, r1, lsr #29
    mov r1, r1, lsl #0x15
    mov r1, r1, asr #0x18
    str r1, [sp, #0xc]
    mov r1, #0x1a
    str r1, [sp, #0x10]
    mov r1, #5
    str r1, [sp, #0x14]
    mov r1, #7
    str r1, [sp, #0x18]
    add r0, r0, #0x104
    str r0, [sp, #0x1c]
    mov r1, #0
    ldr r0, =data_020c9660
    mov r2, r6
    mov r3, r1
    bl func_ov015_0213b6ac
@L_0210a134:
    add r1, r8, #1
    mov r0, #0x14
    mul r0, r1, r0
    add r7, r11, r0
    ldr r0, [r11, r0]
    mov r1, #0
    cmp r0, #0
    ldrne r0, [r7, #4]
    cmpne r0, #0
    movne r1, #1
    cmp r1, #0
    beq @L_0210a20c
    ldr r0, =data_020c46a8
    mov r1, r5
    ldr r0, [r0]
    mov r2, #4
    bl _ZN8TextFont10SetSpacingEii
    ldr r3, [sp, #0x28]
    mov r12, #0x70
    str r7, [sp]
    str r4, [sp, #4]
    str r4, [sp, #8]
    mla r3, r9, r12, r3
    mov r0, r10
    mov r1, r4
    mov r2, r5
    str r5, [sp, #0xc]
    bl func_ov003_02108930
    mov r0, #0x28
    ldrh r1, [r7, #0xe]
    ldr r2, [r7]
    ldrh r7, [r7, #0xc]
    mul r3, r8, r0
    str r5, [sp]
    and r0, r7, #0xff
    add r7, r3, #0x10
    str r4, [sp, #4]
    mov r3, #0xb
    str r3, [sp, #8]
    mov r3, r7, asr #2
    add r3, r7, r3, lsr #29
    mov r3, r3, lsl #0x15
    mov r3, r3, asr #0x18
    str r3, [sp, #0xc]
    str r0, [sp, #0x10]
    and r1, r1, #0xff
    str r1, [sp, #0x14]
    str r4, [sp, #0x18]
    str r2, [sp, #0x1c]
    ldr r0, =data_020c9660
    mov r1, r4
    mov r2, r4
    mov r3, r4
    bl func_ov015_0213b6ac
@L_0210a20c:
    mov r0, #0x70
    mla r1, r9, r0, r10
    ldrb r0, [r1, #0x253]
    mov r2, #0x28
    cmp r0, #0x3c
    bhs @L_0210a25c
    mul r2, r8, r2
    mov r0, #0
    str r0, [sp]
    str r0, [sp, #4]
    add r7, r2, #0x20
    mov r2, r7, asr #2
    ldrb r3, [r1, #0x253]
    add r2, r7, r2, lsr #29
    mov r2, r2, lsl #0xd
    mov r0, r10
    mov r1, #0x1a
    mov r2, r2, asr #0x10
    bl func_ov003_0210aeb0
    b @L_0210a280
@L_0210a25c:
    mul r2, r8, r2
    add r3, r2, #0x20
    mov r2, r3, asr #2
    add r2, r3, r2, lsr #29
    mov r2, r2, lsl #0xd
    mov r0, r10
    mov r1, #0x17
    mov r2, r2, asr #0x10
    bl func_ov003_0210b028
@L_0210a280:
    add r8, r8, #1
@L_0210a284:
    add r9, r9, #1
@L_0210a288:
    cmp r9, #4
    blt @L_0210a0a0
    ldr r0, =data_020c5320
    ldr r0, [r0, #0x5c]
    cmp r0, #1
    moveq r0, #1
    movne r0, #0
    cmp r0, #0
    beq @L_0210a2c8
    ldr r0, =0x12f
    bl func_0209d8b8
    mov r1, r0
    mov r0, r10
    bl func_ov003_02109044
    add sp, sp, #0x2c
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_0210a2c8:
    mov r0, #0x9a
    bl func_0209d8b8
    mov r1, r0
    mov r0, r10
    mov r2, #2
    bl func_ov003_02108e2c
    add sp, sp, #0x2c
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_ov003_0210a2f8(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x20
    ldr r7, =data_020c5320
    mov r10, r0
    mov r0, r7
    mov r6, #4
    mov r9, #2
    mov r5, #1
    mov r4, #0
    bl func_0209bf9c
    mov r0, r7
    bl func_0209bf8c
    ldr r0, [r7, #0x5c]
    ldr r7, [r10, #0x578]
    cmp r0, #1
    moveq r4, r5
    cmp r4, #0
    beq @L_0210a390
    cmp r7, #0
    beq @L_0210a424
    ldr r4, [r7, #0xc]
    mov r2, #1
    mov r1, #0
    str r2, [sp]
    str r1, [sp, #4]
    mov r0, #3
    str r0, [sp, #8]
    str r9, [sp, #0xc]
    mov r0, #0x1a
    str r0, [sp, #0x10]
    mov r0, #0x12
    str r0, [sp, #0x14]
    str r6, [sp, #0x18]
    add r4, r7, r4
    ldr r0, =data_020c9660
    mov r3, r1
    str r4, [sp, #0x1c]
    b @L_0210a420
@L_0210a390:
    cmp r7, #0
    beq @L_0210a424
    ldr r1, [r7, #0xc]
    mov r0, #0
    str r5, [sp]
    str r0, [sp, #4]
    mov r4, #3
    str r4, [sp, #8]
    mov r0, #0xb
    str r0, [sp, #0xc]
    mov r11, #0x1a
    add r8, r7, r1
    mov r1, #0
    str r11, [sp, #0x10]
    mov r0, #9
    str r0, [sp, #0x14]
    str r6, [sp, #0x18]
    ldr r0, =data_020c9660
    mov r2, r5
    mov r3, r1
    str r8, [sp, #0x1c]
    bl func_ov015_0213b6ac
    str r5, [sp]
    mov r1, #0
    stmib sp, {r1, r4}
    str r9, [sp, #0xc]
    str r11, [sp, #0x10]
    mov r1, #9
    str r1, [sp, #0x14]
    mov r1, #0
    add r7, r8, #0x1d4
    str r6, [sp, #0x18]
    ldr r0, =data_020c9660
    mov r2, r5
    mov r3, r1
    str r7, [sp, #0x1c]
@L_0210a420:
    bl func_ov015_0213b6ac
@L_0210a424:
    ldr r7, [r10, #0x674]
    ldr r4, =data_020c5320
    cmp r7, #0
    mov r6, #4
    mov r11, #2
    mov r5, #1
    beq @L_0210a4fc
    ldr r0, [r4, #0x5c]
    ldr r1, [r7, #0xc]
    cmp r0, #1
    moveq r0, r5
    movne r0, #0
    mov r9, #1
    cmp r0, #0
    str r9, [sp]
    mov r0, #0
    add r8, r7, r1
    mov r1, #0
    str r0, [sp, #4]
    mov r0, #0x10
    str r0, [sp, #8]
    str r11, [sp, #0xc]
    str r6, [sp, #0x10]
    str r11, [sp, #0x14]
    addeq r8, r8, #0x10
    str r6, [sp, #0x18]
    ldr r0, =data_020c9660
    str r8, [sp, #0x1c]
    mov r2, r1
    mov r3, r1
    bl func_ov015_0213b6ac
    ldr r1, [r7, #0xc]
    ldr r0, [r4, #0x5c]
    add r8, r7, r1
    cmp r0, #1
    mov r1, #0
    str r5, [sp]
    movne r9, #0
    cmp r9, #0
    str r1, [sp, #4]
    mov r2, #0x10
    str r2, [sp, #8]
    mov r2, #0xb
    str r2, [sp, #0xc]
    mov r0, #4
    str r0, [sp, #0x10]
    str r11, [sp, #0x14]
    str r0, [sp, #0x18]
    addne r8, r8, #0x10
    ldr r0, =data_020c9660
    mov r2, r1
    mov r3, r1
    str r8, [sp, #0x1c]
    bl func_ov015_0213b6ac
@L_0210a4fc:
    ldr r1, [r10, #0x494]
    add r0, r10, #0x94
    cmp r1, #0
    add r7, r0, #0x400
    ldrne r0, [r7, #4]
    mov r1, #0
    cmpne r0, #0
    movne r1, #1
    cmp r1, #0
    beq @L_0210a598
    str r7, [sp]
    mov r0, #0
    stmib sp, {r0, r5}
    add r2, r10, #0x42
    add r3, r2, #0x200
    mov r0, r10
    mov r1, #0
    str r5, [sp, #0xc]
    mov r2, #2
    bl func_ov003_02108930
    ldrh r0, [r7, #0xc]
    ldrh r1, [r7, #0xe]
    ldr r2, [r7]
    and r3, r0, #0xff
    and r7, r1, #0xff
    mov r1, #0xb
    str r5, [sp]
    mov r0, #0
    stmib sp, {r0, r1}
    str r6, [sp, #0xc]
    str r3, [sp, #0x10]
    str r7, [sp, #0x14]
    str r0, [sp, #0x18]
    mov r1, #0
    str r2, [sp, #0x1c]
    ldr r0, =data_020c9660
    mov r2, r1
    mov r3, r1
    bl func_ov015_0213b6ac
@L_0210a598:
    ldr r1, [r10, #0x4a8]
    add r0, r10, #0xa8
    cmp r1, #0
    add r7, r0, #0x400
    ldrne r0, [r7, #4]
    mov r1, #0
    cmpne r0, #0
    movne r1, #1
    cmp r1, #0
    beq @L_0210a63c
    str r7, [sp]
    mov r0, #0
    stmib sp, {r0, r5}
    add r2, r10, #0xb2
    add r3, r2, #0x200
    mov r0, r10
    mov r1, #0
    str r5, [sp, #0xc]
    mov r2, #2
    bl func_ov003_02108930
    ldrh r0, [r7, #0xc]
    ldrh r1, [r7, #0xe]
    ldr r2, [r7]
    and r3, r0, #0xff
    and r7, r1, #0xff
    mov r1, #0xb
    str r5, [sp]
    mov r0, #0
    stmib sp, {r0, r1}
    mov r0, #0xd
    str r0, [sp, #0xc]
    str r3, [sp, #0x10]
    mov r1, #0
    str r7, [sp, #0x14]
    mov r0, #0
    str r0, [sp, #0x18]
    str r2, [sp, #0x1c]
    ldr r0, =data_020c9660
    mov r2, r1
    mov r3, r1
    bl func_ov015_0213b6ac
@L_0210a63c:
    ldr r9, [r10, #0x698]
    cmp r9, #0
    beq @L_0210a684
    ldr r8, [r9, #0xc]
    mov r1, #0
    str r5, [sp]
    stmib sp, {r1, r6}
    str r6, [sp, #0xc]
    str r6, [sp, #0x10]
    str r6, [sp, #0x14]
    mov r7, #0xd
    str r7, [sp, #0x18]
    add r7, r9, r8
    ldr r0, =data_020c9660
    mov r2, r1
    mov r3, r1
    str r7, [sp, #0x1c]
    bl func_ov015_0213b6ac
@L_0210a684:
    ldr r8, [r10, #0x6a4]
    cmp r8, #0
    beq @L_0210a6d0
    ldr r7, [r8, #0xc]
    mov r1, #0
    str r5, [sp]
    stmib sp, {r1, r6}
    mov r0, #0xd
    str r0, [sp, #0xc]
    str r6, [sp, #0x10]
    str r6, [sp, #0x14]
    mov r6, #0xe
    str r6, [sp, #0x18]
    add r6, r8, r7
    ldr r0, =data_020c9660
    mov r2, r1
    mov r3, r1
    str r6, [sp, #0x1c]
    bl func_ov015_0213b6ac
@L_0210a6d0:
    ldrb r0, [r10, #0x253]
    mov r2, #6
    cmp r0, #0x3c
    blo @L_0210a724
    ldr r0, [r4, #0x5c]
    mov r1, #0xe
    cmp r0, #1
    moveq r0, #1
    movne r0, #0
    cmp r0, #0
    beq @L_0210a710
    str r5, [sp]
    mov r0, r10
    mov r3, #0
    str r5, [sp, #4]
    b @L_0210a738
@L_0210a710:
    mov r3, #1
    str r3, [sp]
    mov r0, r10
    str r3, [sp, #4]
    b @L_0210a738
@L_0210a724:
    mov r0, #0
    stmia sp, {r0, r5}
    ldrb r3, [r10, #0x253]
    mov r0, r10
    mov r1, #0x19
@L_0210a738:
    bl func_ov003_0210aeb0
    ldrb r0, [r10, #0x2c3]
    mov r2, #0xf
    cmp r0, #0x3c
    blo @L_0210a790
    ldr r0, [r4, #0x5c]
    mov r1, #0xe
    cmp r0, #1
    moveq r0, #1
    movne r0, #0
    cmp r0, #0
    beq @L_0210a77c
    mov r3, #1
    str r3, [sp]
    mov r0, r10
    str r3, [sp, #4]
    b @L_0210a7a4
@L_0210a77c:
    str r5, [sp]
    mov r0, r10
    mov r3, #0
    str r5, [sp, #4]
    b @L_0210a7a4
@L_0210a790:
    mov r0, #0
    stmia sp, {r0, r5}
    ldrb r3, [r10, #0x2c3]
    mov r0, r10
    mov r1, #0x19
@L_0210a7a4:
    bl func_ov003_0210aeb0
    ldr r1, [r10, #0x4e4]
    add r0, r10, #0xe4
    cmp r1, #0
    add r7, r0, #0x400
    ldrne r0, [r7, #4]
    mov r1, #0
    cmpne r0, #0
    movne r1, #1
    cmp r1, #0
    beq @L_0210a84c
    str r7, [sp]
    mov r0, #0
    str r0, [sp, #4]
    str r0, [sp, #8]
    mov r0, r10
    mov r1, #0
    str r5, [sp, #0xc]
    add r3, r10, #0x254
    mov r2, #2
    bl func_ov003_02108930
    ldrh r3, [r7, #0xe]
    ldrh r2, [r7, #0xc]
    ldr r4, [r7]
    mov r1, #9
    str r5, [sp]
    mov r0, #0
    stmib sp, {r0, r1}
    mov r0, #8
    str r0, [sp, #0xc]
    and r0, r2, #0xff
    str r0, [sp, #0x10]
    and r0, r3, #0xff
    mov r1, #0
    str r0, [sp, #0x14]
    mov r0, #0
    str r0, [sp, #0x18]
    ldr r0, =data_020c9660
    mov r2, r1
    mov r3, r1
    str r4, [sp, #0x1c]
    bl func_ov015_0213b6ac
@L_0210a84c:
    ldr r1, [r10, #0x4f8]
    add r0, r10, #0xf8
    cmp r1, #0
    add r7, r0, #0x400
    ldrne r0, [r7, #4]
    mov r1, #0
    cmpne r0, #0
    movne r1, #1
    cmp r1, #0
    beq @L_0210a8f0
    str r7, [sp]
    mov r0, #0
    str r0, [sp, #4]
    str r0, [sp, #8]
    mov r0, r10
    mov r1, #0
    str r5, [sp, #0xc]
    add r3, r10, #0x2c4
    mov r2, #2
    bl func_ov003_02108930
    ldrh r3, [r7, #0xe]
    ldrh r2, [r7, #0xc]
    ldr r4, [r7]
    mov r1, #9
    str r5, [sp]
    mov r0, #0
    stmib sp, {r0, r1}
    mov r0, #0x11
    str r0, [sp, #0xc]
    and r0, r2, #0xff
    str r0, [sp, #0x10]
    and r0, r3, #0xff
    mov r1, #0
    str r0, [sp, #0x14]
    mov r0, #0
    str r0, [sp, #0x18]
    ldr r0, =data_020c9660
    mov r2, r1
    mov r3, r1
    str r4, [sp, #0x1c]
    bl func_ov015_0213b6ac
@L_0210a8f0:
    mov r1, #0
    mov r0, r10
    mov r2, r1
    bl func_ov003_021081ac
    add sp, sp, #0x20
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_ov003_0210a910(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #0x20
    mov r7, r2
    add r3, r7, #1
    mov r2, #0x14
    mul r2, r3, r2
    mov r9, r0
    add r3, r9, #0x480
    ldr r0, [r3, r2]
    add r6, r3, r2
    cmp r0, #0
    ldrne r0, [r6, #4]
    mov r8, r1
    cmpne r0, #0
    movne r0, #1
    moveq r0, #0
    cmp r0, #0
    addeq sp, sp, #0x20
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    ldr r0, =data_020c46a8
    mov r5, #1
    ldr r0, [r0]
    mov r1, r5
    mov r2, #4
    bl _ZN8TextFont10SetSpacingEii
    mov r4, #0
    str r6, [sp]
    str r4, [sp, #4]
    str r4, [sp, #8]
    add r1, r9, #0x9e
    mov r0, #0x19
    mla r3, r8, r0, r1
    mov r0, r9
    mov r1, r4
    mov r2, r5
    str r5, [sp, #0xc]
    bl func_ov003_02108930
    mov r0, #0x28
    mul r0, r7, r0
    add r1, r0, #0x10
    mov r0, r1, asr #2
    str r5, [sp]
    add r0, r1, r0, lsr #29
    mov r0, r0, lsl #0x15
    str r4, [sp, #4]
    mov r1, #0xa
    str r1, [sp, #8]
    mov r0, r0, asr #0x18
    str r0, [sp, #0xc]
    ldrh r2, [r6, #0xc]
    ldr r0, =data_020c9660
    mov r1, r4
    and r2, r2, #0xff
    str r2, [sp, #0x10]
    ldrh r5, [r6, #0xe]
    mov r2, r4
    mov r3, r4
    and r5, r5, #0xff
    str r5, [sp, #0x14]
    str r4, [sp, #0x18]
    ldr r4, [r6]
    str r4, [sp, #0x1c]
    bl func_ov015_0213b6ac
    add sp, sp, #0x20
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

extern "C" asm void func_ov003_0210aa1c(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #0x20
    mov r9, r0
    ldrb r0, [r9, #0x5d]
    add r7, r1, #1
    add r2, r9, #0x480
    cmp r0, #0
    moveq r0, #0x38
    muleq r0, r1, r0
    addeq r8, r0, #0x10
    mov r0, #0x14
    mul r1, r7, r0
    ldr r0, [r2, r1]
    movne r8, #0x50
    add r6, r2, r1
    cmp r0, #0
    ldrne r0, [r6, #4]
    cmpne r0, #0
    movne r0, #1
    moveq r0, #0
    cmp r0, #0
    addeq sp, sp, #0x20
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    ldr r0, =data_020c46a8
    mov r5, #1
    ldr r0, [r0]
    mov r1, r5
    mov r2, #4
    bl _ZN8TextFont10SetSpacingEii
    add r0, r9, #0x42
    mov r4, #0
    str r6, [sp]
    str r4, [sp, #4]
    str r4, [sp, #8]
    add r1, r0, #0x200
    mov r0, #0x70
    mla r3, r7, r0, r1
    mov r0, r9
    mov r1, r4
    mov r2, r5
    str r5, [sp, #0xc]
    bl func_ov003_02108930
    mov r0, r8, asr #2
    str r5, [sp]
    add r0, r8, r0, lsr #29
    mov r0, r0, lsl #0x15
    str r4, [sp, #4]
    mov r1, #0xb
    str r1, [sp, #8]
    mov r0, r0, asr #0x18
    str r0, [sp, #0xc]
    ldrh r2, [r6, #0xc]
    ldr r0, =data_020c9660
    mov r1, r4
    and r2, r2, #0xff
    str r2, [sp, #0x10]
    ldrh r5, [r6, #0xe]
    mov r2, r4
    mov r3, r4
    and r5, r5, #0xff
    str r5, [sp, #0x14]
    str r4, [sp, #0x18]
    ldr r4, [r6]
    str r4, [sp, #0x1c]
    bl func_ov015_0213b6ac
    add sp, sp, #0x20
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

extern "C" asm void func_ov003_0210ab30(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    mov r7, #0
    mov r4, r0
    mov r6, r7
    mov r9, r7
    add r8, r4, #0x98
    mov r5, r7
    b @L_0210ac74
@L_0210ab50:
    ldrlo r0, =data_020c5598
    ldrlo r0, [r0, r9, lsl #2]
    movhs r0, #0
    cmp r0, #0
    bne @L_0210ab78
    ldrb r0, [r8, #0x18]
    cmp r0, #0
    movne r6, #1
@L_0210ab70:
    strb r5, [r8, #0x18]
    b @L_0210ac6c
@L_0210ab78:
    ldrb r1, [r8, #0x18]
    mov r12, #0
    cmp r1, #0
    mov r1, #1
    moveq r6, #1
    strb r1, [r8, #0x18]
    b @L_0210abb0
@L_0210ab94:
    add r2, r0, r12
    ldrb r3, [r2, #4]
    ldrb r2, [r8, r12]
    cmp r3, r2
    strneb r3, [r8, r12]
    movne r6, r1
    add r12, r12, #1
@L_0210abb0:
    cmp r12, #6
    blt @L_0210ab94
    ldrb r1, [r0, #0x4a]
    cmp r1, #0
    beq @L_0210ac54
    adds r0, r0, #0x50
    beq @L_0210ac14
    ldrb r2, [r4, #0x5d]
    ldrb r1, [r0, #0x23]
    cmp r2, #0
    bne @L_0210ac08
    cmp r1, #1
    bne @L_0210abec
    cmp r2, #0
    bne @L_0210ac14
@L_0210abec:
    ldrb r1, [r0, #0x23]
    cmp r1, #4
    bne @L_0210ac04
    ldrb r1, [r4, #0x5d]
    cmp r1, #0
    beq @L_0210ac14
@L_0210ac04:
    b @L_0210ab70
@L_0210ac08:
    cmp r1, #2
    strneb r5, [r8, #0x18]
    bne @L_0210ac6c
@L_0210ac14:
    mov r12, #0
    b @L_0210ac38
@L_0210ac1c:
    add r3, r8, r12
    add r1, r0, r12
    ldrsb r2, [r3, #6]
    ldrsb r1, [r1, #0x10]
    add r12, r12, #1
    cmp r2, r1
    strneb r1, [r3, #6]
@L_0210ac38:
    cmp r12, #0x11
    blt @L_0210ac1c
    ldrb r1, [r8, #0x17]
    ldrb r0, [r0, #0x22]
    cmp r1, r0
    strneb r0, [r8, #0x17]
    b @L_0210ac68
@L_0210ac54:
    mov r1, r5
    add r0, r8, #6
    mov r2, #0x11
    bl MI_CpuFill8
    strb r5, [r8, #0x17]
@L_0210ac68:
    add r7, r7, #1
@L_0210ac6c:
    add r9, r9, #1
    add r8, r8, #0x19
@L_0210ac74:
    cmp r9, #0x10
    blt @L_0210ab50
    mov r0, r6
    str r7, [r4, #0x90]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

extern "C" asm void func_ov003_0210ac8c(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    mov r8, #0
    mov r5, r0
    mov r4, r8
    add r9, r5, #0x400
    mov r6, r8
@L_0210aca4:
    add r0, r5, r4, lsl #2
    mvn r1, #0
    str r1, [r0, #0x3f0]
    ldrb r0, [r9, #0x18]
    add r7, r5, #0x98
    mov r10, #0
    cmp r0, #0
    beq @L_0210ad10
@L_0210acc4:
    ldrb r0, [r7, #0x18]
    cmp r0, #0
    beq @L_0210acf0
    mov r0, r5
    mov r1, r9
    mov r2, r7
    bl func_ov003_0210ae04
    cmp r0, #0
    addne r0, r5, r4, lsl #2
    strne r10, [r0, #0x3f0]
    bne @L_0210ad00
@L_0210acf0:
    add r10, r10, #1
    cmp r10, #0x10
    add r7, r7, #0x19
    blt @L_0210acc4
@L_0210ad00:
    cmp r10, #0x10
    strgeb r6, [r9, #0x18]
    movge r8, #1
    b @L_0210ad54
@L_0210ad10:
    ldrb r0, [r7, #0x18]
    cmp r0, #0
    beq @L_0210ad44
    mov r0, r5
    mov r1, r9
    mov r2, r7
    bl func_ov003_0210ae04
    cmp r0, #0
    addne r0, r5, r4, lsl #2
    strne r10, [r0, #0x3f0]
    movne r8, #1
    strneb r8, [r9, #0x18]
    bne @L_0210ad54
@L_0210ad44:
    add r10, r10, #1
    cmp r10, #0x10
    add r7, r7, #0x19
    blt @L_0210ad10
@L_0210ad54:
    add r4, r4, #1
    cmp r4, #4
    add r9, r9, #0x19
    mov r7, #0
    blt @L_0210aca4
    add r10, r5, #0x400
    mov r9, r7
    mov r6, #1
    mov r4, #0x19
@L_0210ad78:
    ldrb r0, [r10, #0x18]
    cmp r0, #0
    bne @L_0210adec
    mov r3, r7
    add r0, r5, #0x98
@L_0210ad8c:
    ldrb r1, [r0, #0x18]
    cmp r1, #0
    beq @L_0210addc
    mov r2, r7
@L_0210ad9c:
    add r1, r5, r2, lsl #2
    ldr r1, [r1, #0x3f0]
    cmp r3, r1
    beq @L_0210adb8
    add r2, r2, #1
    cmp r2, #4
    blt @L_0210ad9c
@L_0210adb8:
    cmp r2, #4
    blt @L_0210addc
    add r12, r5, r9, lsl #2
    mov r1, r10
    mov r2, r4
    mov r8, r6
    str r3, [r12, #0x3f0]
    bl MI_CpuCopy8
    b @L_0210adec
@L_0210addc:
    add r3, r3, #1
    cmp r3, #0x10
    add r0, r0, #0x19
    blt @L_0210ad8c
@L_0210adec:
    add r9, r9, #1
    cmp r9, #4
    add r10, r10, #0x19
    blt @L_0210ad78
    mov r0, r8
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
}

extern "C" s32 func_ov003_0210ae04(s32 arg0, u8 *arg1, u8 *arg2)
{
    s32 r12;
    r12 = 0;
    do {
        if (*(u8 *)(arg1 + r12) != *(u8 *)(arg2 + r12)) {
            return 0;
        } else {
            r12 = (r12 + 1);
        }
    } while (r12 < 6);
    r12 = 0;
    do {
        if (*(s8 *)(((u8 *)(arg1 + r12)) + 0x6) != *(s8 *)(((u8 *)(arg2 + r12)) + 0x6)) {
            return 0;
        } else {
            r12 = (r12 + 1);
        }
    } while (r12 < 0x11);
    if (*(u8 *)(arg1 + 0x17) == *(u8 *)(arg2 + 0x17)) {
        arg0 = 1;
    } else {
        arg0 = 0;
    }
    return arg0;
}

extern "C" s32 func_ov003_0210ae6c(s32 arg0, s32 arg1, s32 arg2)
{
    s32 r4;
    s32 r12;
    s32 lr;
    r4 = arg1;
    r12 = 0;
    lr = 3;
    do {
        r4 = (r4 + arg2);
        if (r4 < 0) {
            r4 = lr;
        } else {
            if (r4 > 3) {
                r4 = r12;
            }
        }
        if (*(s32 *)(((u8 *)(arg0 + (r4 << 2))) + 0x3F0) >= 0)
            break;
    } while (arg1 != r4);
    return r4;
}

extern "C" asm void func_ov003_0210aeb0(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x20
    ldrb r4, [sp, #0x48]
    mov r10, r1
    mov r9, r3
    cmp r4, #0
    beq @L_0210af54
    ldr r1, [r0, #0x680]
    cmp r1, #0
    addeq sp, sp, #0x20
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r0, [r1, #0xc]
    mov r3, #1
    add r4, r1, r0
    mov r0, r10, lsl #0x18
    mov r0, r0, asr #0x18
    sub r0, r0, #3
    mov r0, r0, lsl #0x18
    mov r1, #0
    str r3, [sp]
    mov r2, r2, lsl #0x18
    str r1, [sp, #4]
    mov r0, r0, asr #0x18
    str r0, [sp, #8]
    mov r0, r2, asr #0x18
    str r0, [sp, #0xc]
    mov r0, #0xf
    str r0, [sp, #0x10]
    mov r0, #2
    str r0, [sp, #0x14]
    mov r0, #4
    str r0, [sp, #0x18]
    cmp r9, #0
    addne r4, r4, #0x3c
    ldr r0, =data_020c9660
    mov r2, r1
    mov r3, r1
    str r4, [sp, #0x1c]
    bl func_ov015_0213b6ac
    add sp, sp, #0x20
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_0210af54:
    ldrb r1, [sp, #0x4c]
    cmp r1, #0
    ldrne r1, [r0, #0x668]
    ldreq r1, [r0, #0x65c]
    cmp r1, #0
    addeq sp, sp, #0x20
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r0, [r1, #0xc]
    cmp r9, #0x63
    add r8, r1, r0
    movgt r9, #0x63
    mov r0, r2, lsl #0x18
    cmp r9, #0
    ldr r4, =0x66666667
    movlt r9, #0
    mov r5, r0, asr #0x18
    mov r7, #1
    mov r6, #0
    mov r11, #2
@L_0210afa0:
    smull r1, r2, r4, r9
    mov r0, r9, lsr #0x1f
    add r2, r0, r2, asr #2
    mov r0, #0xa
    smull r1, r2, r0, r2
    str r7, [sp]
    mov r0, r10, lsl #0x18
    sub r2, r9, r1
    add r1, r8, r2, lsl #2
    str r6, [sp, #4]
    mov r0, r0, asr #0x18
    str r0, [sp, #8]
    str r5, [sp, #0xc]
    str r7, [sp, #0x10]
    str r11, [sp, #0x14]
    mov r0, #7
    str r0, [sp, #0x18]
    str r1, [sp, #0x1c]
    ldr r0, =data_020c9660
    mov r1, r6
    mov r2, r6
    mov r3, r6
    bl func_ov015_0213b6ac
    mov r1, r9
    smull r0, r9, r4, r1
    mov r0, r1, lsr #0x1f
    add r9, r0, r9, asr #2
    sub r10, r10, #1
    cmp r9, #0
    bgt @L_0210afa0
    add sp, sp, #0x20
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" s32 func_ov003_0210b028(u8 *arg0, s32 arg1, s32 arg2)
{
    s32 v0;
    if ((s32)*(u8 * *)(arg0 + 0x620) == 0)
        return (s32)arg0;
    v0 = func_ov015_0213b6ac((s32)data_020c9660, 0, 0, 0, 1, 0, ((s8)arg1), ((s8)arg2), 4, 2, 4, (*(u8 * *)(arg0 + 0x620) + *(s32 *)(*(u8 * *)(arg0 + 0x620) + 0xC)));
    return v0;
}

extern "C" asm void func_ov003_0210b0a4(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x2c
    mov r10, r0
    mov r0, #0xc
    mla r0, r3, r0, r10
    ldr r7, [r0, #0x50c]
    mov r9, r1
    mov r8, r2
    cmp r7, #0
    beq @L_0210b248
    ldr r1, [r7, #0xc]
    ldr r0, [sp, #0x5c]
    add r1, r7, r1
    add r0, r0, r0, lsl #6
    add r2, r1, r0, lsl #2
    mov r0, #0xd0
    mov r6, #3
    mov r5, #0x1a
    mov r4, #5
    mov r1, #0x28
    mov r11, #7
    strh r0, [sp, #0x20]
    mov r0, #0
    strh r1, [sp, #0x22]
    str r2, [sp, #0x28]
    strh r6, [sp, #0x14]
    strh r9, [sp, #0x16]
    strh r5, [sp, #0x18]
    strh r4, [sp, #0x1a]
    strh r0, [sp, #0x1c]
    strh r0, [sp, #0x1e]
    strb r11, [sp, #0x24]
    str r0, [sp]
    add r0, sp, #0x14
    str r0, [sp, #4]
    mov r0, #0
    str r0, [sp, #8]
    str r0, [sp, #0xc]
    mov r1, #0
    ldr r3, [sp, #0x50]
    ldr r0, =data_020c9660
    str r1, [sp, #0x10]
    mov r2, #1
    bl func_ov015_0213b540
    ldr r1, [r7, #0xc]
    ldr r0, [sp, #0x64]
    add r1, r7, r1
    add r0, r0, r0, lsl #6
    add r0, r1, r0, lsl #2
    str r0, [sp, #0x28]
    mov r0, #0
    strh r6, [sp, #0x14]
    strh r9, [sp, #0x16]
    strh r5, [sp, #0x18]
    strh r4, [sp, #0x1a]
    strh r0, [sp, #0x1c]
    strh r0, [sp, #0x1e]
    strh r0, [sp, #0x20]
    strh r0, [sp, #0x22]
    strb r11, [sp, #0x24]
    str r0, [sp]
    add r0, sp, #0x14
    str r0, [sp, #4]
    mov r0, #0
    str r0, [sp, #8]
    str r0, [sp, #0xc]
    str r0, [sp, #0x10]
    ldr r0, =data_020c9660
    ldr r3, [sp, #0x58]
    mov r1, #0
    mov r2, #1
    bl func_ov015_0213b540
    ldr r1, [r7, #0xc]
    ldr r0, [sp, #0x60]
    strh r4, [sp, #0x1a]
    ldr r4, [sp, #0x54]
    add r1, r7, r1
    add r0, r0, r0, lsl #6
    add r0, r1, r0, lsl #2
    str r0, [sp, #0x28]
    mov r0, #0
    strh r6, [sp, #0x14]
    strh r5, [sp, #0x18]
    strb r11, [sp, #0x24]
    strh r9, [sp, #0x16]
    strh r0, [sp, #0x1c]
    strh r0, [sp, #0x1e]
    strh r0, [sp, #0x20]
    strh r0, [sp, #0x22]
    str r0, [sp]
    add r0, sp, #0x14
    str r0, [sp, #4]
    mov r0, #0
    str r0, [sp, #8]
    str r0, [sp, #0xc]
    str r0, [sp, #0x10]
    ldr r0, =data_020c9660
    mov r2, #1
    mov r1, #0
    mov r3, r4
    bl func_ov015_0213b540
    ldr r0, =data_020c9660
    mov r1, #0
    mov r2, r4
    bl func_ov015_0213b990
@L_0210b248:
    add r0, r9, #3
    cmp r8, #0x3c
    mov r1, r0, lsl #0x10
    bge @L_0210b280
    mov r4, #0
    str r4, [sp]
    mov r2, r1, asr #0x10
    mov r0, r10
    mov r3, r8
    mov r1, #0x1a
    str r4, [sp, #4]
    bl func_ov003_0210aeb0
    add sp, sp, #0x2c
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_0210b280:
    mov r2, r1, asr #0x10
    mov r0, r10
    mov r1, #0x17
    bl func_ov003_0210b028
    add sp, sp, #0x2c
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_ov003_0210b29c(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x18
    mov r7, #0
    mov r4, r0
    ldr r0, [pc, #0xa10]
    mov r1, r7
    mov r2, r7
    mov r5, #2
    mov r6, #1
    bl func_ov015_0213b900
    ldr r0, [pc, #0x9fc]
    bl func_ov015_0213c4f0
    ldr r0, [pc, #0x9f8]
    mov r1, #3
    ldr r0, [r0]
    bl func_ov015_02162140
    ldr r1, [r4, #0x6d0]
    cmp r1, #0
    beq @L_0210b2f8
    ldr r0, [pc, #0x9e0]
    ldr r0, [r0]
    bl func_02092270
    str r7, [r4, #0x6d0]
@L_0210b2f8:
    ldr r0, [r4, #0xc]
    cmp r0, #0x18
    addls pc, pc, r0, lsl #2
    b @L_0210bcbc
    dcd 0xea00026b
    dcd 0xea000016
    dcd 0xea000235
    dcd 0xea000268
    dcd 0xea000013
    dcd 0xea0000e4
    dcd 0xea0000e3
    dcd 0xea0000e2
    dcd 0xea000104
    dcd 0xea000262
    dcd 0xea00022d
    dcd 0xea00019b
    dcd 0xea00019a
    dcd 0xea00021d
    dcd 0xea00021c
    dcd 0xea000228
    dcd 0xea00022b
    dcd 0xea000231
    dcd 0xea000244
    dcd 0xea000243
    dcd 0xea000257
    dcd 0xea000096
    dcd 0xea0000a6
    dcd 0xea0000b1
    dcd 0xea0000ca
    dcd 0xe5d4005d
    dcd 0xe3500000
    dcd 0x05942530
    dcd 0x1594262c
    dcd 0xe3520000
    dcd 0x0a000030
    dcd 0xe5d4005d
    dcd 0xe592100c
    dcd 0xe3a09015
    dcd 0xe0825001
    dcd 0xe3500000
    dcd 0x03a01010
    dcd 0x13a01020
    dcd 0xe1a00141
    dcd 0xe0811ea0
    dcd 0xe3a06013
    dcd 0xe1a00004
    dcd 0xe1a02005
    dcd 0xe1a03006
    dcd 0xe58d9000
    dcd 0xe3a08014
    dcd 0xe1a011c1
    dcd 0xe58d8004
    dcd 0xebfff4ac
    dcd 0xe59f08f4
    dcd 0xe1a01006
    dcd 0xe1a02009
    dcd 0xe1a03008
    dcd 0xe58d7000
    dcd 0xeb00c452
    dcd 0xe5d4105d
    dcd 0xe3a06016
    dcd 0xe5c40478
    dcd 0xe3510000
    dcd 0x03a01048
    dcd 0x13a01068
    dcd 0xe1a00141
    dcd 0xe0811ea0
    dcd 0xe3a09018
    dcd 0xe1a00004
    dcd 0xe1a03006
    dcd 0xe58d9000
    dcd 0xe3a08017
    dcd 0xe1a011c1
    dcd 0xe2852e2d
    dcd 0xe58d8004
    dcd 0xebfff495
    dcd 0xe3a05000
    dcd 0xe59f0894
    dcd 0xe1a01006
    dcd 0xe1a02009
    dcd 0xe1a03008
    dcd 0xe58d5000
    dcd 0xeb00c43a
    dcd 0xe5c40479
    dcd 0xe5d4005d
    dcd 0xe3500000
    dcd 0x1a000026
    dcd 0xe5941614
    dcd 0xe3510000
    dcd 0x0a000023
    dcd 0xe591000c
    dcd 0xe3a0901b
    dcd 0xe0815000
    dcd 0xe3a06019
    dcd 0xe1a00004
    dcd 0xe1a02005
    dcd 0xe1a03006
    dcd 0xe58d9000
    dcd 0xe3a0801a
    dcd 0xe3a01010
    dcd 0xe58d8004
    dcd 0xebfff4d1
    dcd 0xe59f0830
    dcd 0xe1a01006
    dcd 0xe1a02009
    dcd 0xe1a03008
    dcd 0xe58d7000
    dcd 0xeb00c421
    dcd 0xe5c4047a
    dcd 0xe3a0801e
    dcd 0xe3a0601c
    dcd 0xe2852f51
    dcd 0xe58d8000
    dcd 0xe3a0501d
    dcd 0xe1a00004
    dcd 0xe3a01014
    dcd 0xe1a03006
    dcd 0xe58d5004
    dcd 0xebfff4c0
    dcd 0xe59f07ec
    dcd 0xe1a01006
    dcd 0xe1a02008
    dcd 0xe1a03005
    dcd 0xe58d7000
    dcd 0xeb00c410
    dcd 0xe5c4047b
    dcd 0xe5941038
    dcd 0xe59f07cc
    dcd 0xe0841001
    dcd 0xe5d11478
    dcd 0xe3a02001
    dcd 0xeb00c489
    dcd 0xe1a00004
    dcd 0xebfff411
    dcd 0xe594000c
    dcd 0xe3500004
    dcd 0x1a000008
    dcd 0xe59f07a0
    dcd 0xe3a01000
    dcd 0xeb00c22b
    dcd 0xe1a00004
    dcd 0xebfff5d8
    dcd 0xe3a01006
    dcd 0xe59f0798
    dcd 0xe241200e
    dcd 0xebfbdca1
    dcd 0xe5941038
    dcd 0xe3e00000
    dcd 0xe3510003
    dcd 0x908ff101
    dcd 0xea000010
    dcd 0xea000002
    dcd 0xea000006
    dcd 0xea00000a
    dcd 0xea00000b
    dcd 0xe5d4105d
    dcd 0xe2800f4d
    dcd 0xe3510000
    dcd 0x059f0760
    dcd 0xea000007
    dcd 0xe5d4105d
    dcd 0xe3510000
    dcd 0x13a00f4d
    dcd 0x02800f49
    dcd 0xea000002
    dcd 0xe3a00f49
    dcd 0xea000000
    dcd 0xe2600f49
    dcd 0xe3500000
    dcd 0xb28dd018
    dcd 0xb8bd8ff8
    dcd 0xebfe48c3
    dcd 0xe1a01000
    dcd 0xe1a00004
    dcd 0xebffe2a2
    dcd 0xe28dd018
    dcd 0xe8bd8ff8
    dcd 0xe1a00004
    dcd 0xebfff7fb
    dcd 0xe59f5710
    dcd 0xe1a00005
    dcd 0xebfe48b9
    dcd 0xe1a01000
    dcd 0xe1a00004
    dcd 0xebfff778
    dcd 0xe1a00004
    dcd 0xebfff8c1
    dcd 0xe2850001
    dcd 0xebfe48b2
    dcd 0xe1a01000
    dcd 0xe1a00004
    dcd 0xebffe291
    dcd 0xe28dd018
    dcd 0xe8bd8ff8
    dcd 0xe1a00004
    dcd 0xebfff888
    dcd 0xe1a00004
    dcd 0xebfff8b6
    dcd 0xe3a0009a
    dcd 0xebfe48a7
    dcd 0xe1a01000
    dcd 0xe1a00004
    dcd 0xe3a02002
    dcd 0xebfff600
    dcd 0xe28dd018
    dcd 0xe8bd8ff8
    dcd 0xe1a00004
    dcd 0xebfff87c
    dcd 0xe1a00004
    dcd 0xebfff8aa
    dcd 0xe59f0698
    dcd 0xe590005c
    dcd 0xe3500001
    dcd 0x03a00001
    dcd 0x13a00000
    dcd 0xe3500000
    dcd 0x0a000006
    dcd 0xe59f0680
    dcd 0xebfe4894
    dcd 0xe1a01000
    dcd 0xe1a00004
    dcd 0xebfff674
    dcd 0xe28dd018
    dcd 0xe8bd8ff8
    dcd 0xe3a0009a
    dcd 0xebfe488d
    dcd 0xe1a01000
    dcd 0xe1a00004
    dcd 0xe3a02002
    dcd 0xebfff5e6
    dcd 0xe28dd018
    dcd 0xe8bd8ff8
    dcd 0xe59f0648
    dcd 0xebfe4885
    dcd 0xe1a01000
    dcd 0xe1a00004
    dcd 0xebfff665
    dcd 0xe28dd018
    dcd 0xe8bd8ff8
    dcd 0xe5d4005d
    dcd 0xe3500000
    dcd 0x1a00000f
    dcd 0xe59f5624
    dcd 0xe1a00005
    dcd 0xebfe487a
    dcd 0xe1a01000
    dcd 0xe1a00004
    dcd 0xe3a02000
    dcd 0xebfff5d3
    dcd 0xe1a00004
    dcd 0xebfff39c
    dcd 0xe2450004
    dcd 0xebfe4872
    dcd 0xe1a01000
    dcd 0xe1a00004
    dcd 0xebffe251
    dcd 0xe28dd018
    dcd 0xe8bd8ff8
    dcd 0xe59f55e8
    dcd 0xe1a00005
    dcd 0xebfe486a
    dcd 0xe1a01000
    dcd 0xe1a00004
    dcd 0xe3a02000
    dcd 0xebfff5c3
    dcd 0xe1a00004
    dcd 0xebfff38c
    dcd 0xe2450002
    dcd 0xebfe4862
    dcd 0xe1a01000
    dcd 0xe1a00004
    dcd 0xebffe241
    dcd 0xe28dd018
    dcd 0xe8bd8ff8
    dcd 0xe5d4005d
    dcd 0xe3500000
    dcd 0x0a000021
    dcd 0xe3a0902b
    dcd 0xe58d9000
    dcd 0xe3a0802e
    dcd 0xe58d8004
    dcd 0xe3a05031
    dcd 0xe58d5008
    dcd 0xe58d600c
    dcd 0xe3a00005
    dcd 0xe58d0010
    dcd 0xe3a00004
    dcd 0xe58d0014
    dcd 0xe5d422c3
    dcd 0xe1a00004
    dcd 0xe3a01009
    dcd 0xe3a03006
    dcd 0xebfffe45
    dcd 0xe59f0534
    dcd 0xe1a01009
    dcd 0xe1a02008
    dcd 0xe1a03005
    dcd 0xe58d7000
    dcd 0xeb00c362
    dcd 0xe5c40478
    dcd 0xe1a00004
    dcd 0xe1a01007
    dcd 0xebfffc99
    dcd 0xe1a00004
    dcd 0xe1a01007
    dcd 0xe1a02007
    dcd 0xebfff279
    dcd 0xe59f04fc
    dcd 0xe1a02006
    dcd 0xe5d41478
    dcd 0xea000062
    dcd 0xe59f0504
    dcd 0xebfe41ef
    dcd 0xe1a08000
    dcd 0xe3a09001
    dcd 0xe3a0a000
    dcd 0xea00004d
@L_0210b7ec:
    add r0, r10, #1
    tst r8, r6, lsl r0
    add r0, r4, r10
    beq @L_0210b8d8
    ldrb r0, [r0, #0x44]
    mov r3, #2
    mov r11, #3
    cmp r0, #0
    add r0, r4, r10
    ldrb r0, [r0, #0x44]
    movne r3, #4
    add r2, r10, #0x2b
    cmp r0, #0
    add r0, r4, r10
    ldrb r0, [r0, #0x44]
    movne r11, #5
    mov r12, #0
    cmp r0, #0
    mov r0, #0x38
    mul r0, r10, r0
    add r1, r0, #8
    mov r0, r1, asr #2
    add r1, r1, r0, lsr #29
    str r2, [sp]
    add r0, r10, #1
    mov r2, #0x70
    mla r2, r0, r2, r4
    add r0, r10, #0x2e
    str r0, [sp, #4]
    add r0, r10, #0x31
    str r0, [sp, #8]
    movne r12, #1
    str r12, [sp, #0xc]
    str r11, [sp, #0x10]
    str r3, [sp, #0x14]
    ldrb r2, [r2, #0x253]
    mov r0, r4
    mov r1, r1, asr #3
    mov r3, #6
    bl func_ov003_0210b0a4
    ldr r0, [pc, #0x434]
    add r1, r10, #0x2b
    add r2, r10, #0x2e
    add r3, r10, #0x31
    str r7, [sp]
    bl func_ov015_0213c530
    add r1, r4, r10
    strb r0, [r1, #0x478]
    mov r0, r4
    mov r1, r10
    bl func_ov003_0210aa1c
    add r0, r4, r10
    ldrb r0, [r0, #0x44]
    cmp r0, #0
    beq @L_0210b920
    ldr r0, [r4, #0x58]
    cmp r0, #0
    moveq r9, r7
    b @L_0210b920
@L_0210b8d8:
    strb r6, [r0, #0x44]
    ldr r0, [r4, #0x38]
    cmp r0, r10
    bne @L_0210b920
    str r0, [r4, #0x3c]
@L_0210b8ec:
    ldr r0, [r4, #0x38]
    ldr r1, [r4, #0x3c]
    subs r0, r0, #1
    str r0, [r4, #0x38]
    strmi r5, [r4, #0x38]
    ldr r0, [r4, #0x38]
    cmp r1, r0
    beq @L_0210b918
    add r0, r0, #1
    tst r8, r6, lsl r0
    beq @L_0210b8ec
@L_0210b918:
    ldr r0, [r4, #0x38]
    str r0, [r4, #0x3c]
@L_0210b920:
    add r10, r10, #1
    cmp r10, #3
    blt @L_0210b7ec
    mov r3, #1
    cmp r9, #0
    movne r3, #0
    mov r0, r4
    mov r1, r6
    mov r2, r9
    strb r3, [r4, #0x5c]
    bl func_ov003_021081ac
    ldr r1, [r4, #0x38]
    ldr r0, [pc, #0x370]
    add r1, r4, r1
    ldrb r1, [r1, #0x478]
    mov r2, r6
    bl func_ov015_0213c730
    ldrb r0, [r4, #0x5d]
    cmp r0, #0
    bne @L_0210b98c
    mov r0, #0x128
    bl func_0209d8b8
    mov r1, r0
    mov r0, r4
    bl func_ov003_02104040
    add sp, sp, #0x18
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_0210b98c:
    ldr r0, [pc, #0x360]
    bl func_0209d8b8
    mov r1, r0
    mov r0, r4
    bl func_ov003_02104040
    add sp, sp, #0x18
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    dcd 0xe5940090
    dcd 0xe3500000
    dcd 0xe5d4005d
    dcd 0x1a000020
    dcd 0xe3500000
    dcd 0x1a00000f
    dcd 0xe59f5330
    dcd 0xe1a00005
    dcd 0xebfe47ba
    dcd 0xe1a01000
    dcd 0xe1a00004
    dcd 0xe3a02000
    dcd 0xebfff513
    dcd 0xe1a00004
    dcd 0xebfff2dc
    dcd 0xe2450006
    dcd 0xebfe47b2
    dcd 0xe1a01000
    dcd 0xe1a00004
    dcd 0xebffe191
    dcd 0xe28dd018
    dcd 0xe8bd8ff8
    dcd 0xe59f02f4
    dcd 0xebfe47ab
    dcd 0xe1a01000
    dcd 0xe1a00004
    dcd 0xe3a02000
    dcd 0xebfff504
    dcd 0xe1a00004
    dcd 0xebfff2cd
    dcd 0xe3a00f4d
    dcd 0xebfe47a3
    dcd 0xe1a01000
    dcd 0xe1a00004
    dcd 0xebffe182
    dcd 0xe28dd018
    dcd 0xe8bd8ff8
    dcd 0xe3500000
    dcd 0x1a000001
    dcd 0xe59f02b4
    dcd 0xea000000
    dcd 0xe3a00f4e
    dcd 0xebfe4798
    dcd 0xe1a01000
    dcd 0xe1a00004
    dcd 0xebffe177
    dcd 0xe5940090
    dcd 0xe3500004
    dcd 0xc3a00004
    dcd 0xc5840090
    dcd 0xe5940038
    dcd 0xe3500000
    dcd 0xb5847038
    dcd 0xba000002
    dcd 0xe3500004
    dcd 0xc3a00004
    dcd 0xc5840038
    dcd 0xe5941038
    dcd 0xe0840101
    dcd 0xe59003f0
    dcd 0xe3500000
    dcd 0xaa000003
    dcd 0xe1a00004
    dcd 0xe3a02001
    dcd 0xebfffcef
    dcd 0xe5840038
    dcd 0xe594003c
    dcd 0xe5941038
    dcd 0xe3a08001
    dcd 0xe1500001
    dcd 0x13a0003c
    dcd 0x15840058
    dcd 0xe5940548
    dcd 0x1584103c
    dcd 0xe3500000
    dcd 0x13500000
    dcd 0x0a00002d
    dcd 0xe3a09000
    dcd 0xe3a0b019
    dcd 0xea000022
@L_0210bae8:
    add r0, r4, r9, lsl #2
    ldr r10, [r0, #0x3f0]
    cmp r10, #0
    blt @L_0210bb64
    mov r0, r4
    mov r1, r10
    mov r2, r9
    bl func_ov003_0210a910
    add r1, r9, #0x1f
    str r1, [sp]
    add r1, r9, #0x23
    str r1, [sp, #4]
    add r1, r9, #0x27
    str r1, [sp, #8]
    str r7, [sp, #0xc]
    str r5, [sp, #0x10]
    mla r0, r10, r11, r4
    str r6, [sp, #0x14]
    ldrb r2, [r0, #0xaf]
    mov r0, r4
    mov r1, r8
    mov r3, #5
    bl func_ov003_0210b0a4
    ldr r0, [pc, #0x17c]
    add r1, r9, #0x1f
    add r2, r9, #0x23
    add r3, r9, #0x27
    str r7, [sp]
    bl func_ov015_0213c530
    add r1, r4, r9
    strb r0, [r1, #0x478]
@L_0210bb64:
    add r0, r8, #5
    mov r0, r0, lsl #0x10
    mov r8, r0, asr #0x10
    add r9, r9, #1
    cmp r9, #4
    blt @L_0210bae8
    ldr r1, [r4, #0x38]
    ldr r0, [pc, #0x140]
    add r1, r4, r1
    ldrb r1, [r1, #0x478]
    mov r2, #1
    bl func_ov015_0213c730
    ldr r0, [r4, #0x58]
    mov r2, #1
    cmp r0, #0
    movle r2, #0
    mov r0, r4
    mov r1, #0
    bl func_ov003_021081ac
    add sp, sp, #0x18
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    dcd 0xe3a0009a
    dcd 0xebfe473d
    dcd 0xe1a01000
    dcd 0xe1a00004
    dcd 0xe1a02006
    dcd 0xebfff496
    dcd 0xe2660f4b
    dcd 0xebfe4737
    dcd 0xe1a01000
    dcd 0xe1a00004
    dcd 0xebffe116
    dcd 0xe28dd018
    dcd 0xe8bd8ff8
    dcd 0xe1a00004
    dcd 0xebfff87b
    dcd 0xe28dd018
    dcd 0xe8bd8ff8
    dcd 0xe5940034
    dcd 0xe3500004
    dcd 0x128dd018
    dcd 0x18bd8ff8
    dcd 0xe1a00004
    dcd 0xe3a01011
    dcd 0xebffe34a
    dcd 0xe5d4005d
    dcd 0xe3500000
    dcd 0xe1a00004
    dcd 0x1a000007
    dcd 0xebfff908
    dcd 0xe3a00f4b
    dcd 0xebfe4720
    dcd 0xe1a01000
    dcd 0xe1a00004
    dcd 0xebffe0ff
    dcd 0xe28dd018
    dcd 0xe8bd8ff8
    dcd 0xebfff9aa
    dcd 0xe59f00b0
    dcd 0xebfe4718
    dcd 0xe1a01000
    dcd 0xe1a00004
    dcd 0xebffe0f7
    dcd 0xe28dd018
    dcd 0xe8bd8ff8
    dcd 0xe3a0009a
    dcd 0xebfe4711
    dcd 0xe1a01000
    dcd 0xe1a00004
    dcd 0xe1a02006
    dcd 0xebfff46a
    dcd 0xe5d4005d
    dcd 0xe3500000
    dcd 0x1a000006
    dcd 0xe3a00f4b
    dcd 0xebfe4708
    dcd 0xe1a01000
    dcd 0xe1a00004
    dcd 0xebffe0e7
    dcd 0xe28dd018
    dcd 0xe8bd8ff8
    dcd 0xe2860f4e
    dcd 0xebfe4701
    dcd 0xe1a01000
    dcd 0xe1a00004
    dcd 0xebffe0e0
@L_0210bcbc:
    add sp, sp, #0x18
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    dcd data_020c9660
    dcd data_020c47a4
    dcd data_020c46c4
    dcd data_020c46d4
    dcd 0x04000050
    dcd 0x00000122
    dcd 0x0000012d
    dcd data_020c5320
    dcd 0x0000010b
    dcd 0x00000132
    dcd 0x00000126
    dcd 0x00000135
    dcd 0x00000136
    dcd 0x00000129
    dcd 0x00000137
    dcd 0x0000012a
    dcd 0x00000139
}
