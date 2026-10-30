#include "ov085/Unk_ov085_0216ffa0.hpp"

extern "C" void func_ov085_0216ffa0(u8 *arg0);
extern "C" void func_ov085_0216ffc0(void);
extern "C" void func_ov085_021700f8(void);
extern "C" s32 func_ov085_02170134(...);
extern "C" void func_ov085_0217015c(void);
extern "C" void func_ov085_02170344(void);
extern "C" void func_ov085_02170554(void);
extern "C" void func_ov085_02170654(void);
extern "C" void func_ov085_02170744(void);
extern "C" void func_ov085_021708f0(void);
extern "C" void func_ov085_021709c0(void);
extern "C" void func_ov085_02170ae4(void);
extern "C" void func_ov085_02170b4c(void);
extern "C" void func_ov085_02170bd4(void);
extern "C" void func_ov085_02170c18(s32 arg0);
extern "C" s32 func_ov085_02170c48(s32 arg0);
extern "C" void func_ov085_02170c5c(void);

extern "C" char data_020c9660[];
extern "C" char data_020e88a0[];
extern "C" char data_ov085_02170c60[];
extern "C" char data_ov085_02170e3c[];
extern "C" char data_ov085_02170e48[];
extern "C" char data_ov085_02170e54[];
extern "C" char data_ov085_02170e60[];
extern "C" char data_ov085_02170e6c[];
extern "C" void DC_FlushRange(void);
extern "C" void G2S_GetBG1CharPtr(void);
extern "C" void MI_CpuFill8(void);
extern "C" void MIi_CpuClearFast(void);
extern "C" void _ZN17UnkClass_020621b413func_0206a964Ei(void);
extern "C" s32 _ZdlPv(...);
extern "C" void func_02003608(void);
extern "C" void func_ov001_02125f64(void);
extern "C" void func_ov001_0212602c(void);
extern "C" void func_ov001_021260f0(void);
extern "C" void func_ov001_02126128(void);
extern "C" s32 func_ov001_02126240(...);
extern "C" void func_ov001_02126338(void);
extern "C" void func_ov001_021263b4(void);
extern "C" void func_ov001_02126458(void);
extern "C" void func_ov001_0212816c(void);
extern "C" void func_ov015_02132240(void);
extern "C" void func_ov015_02134118(void);
extern "C" s32 func_ov015_02134198(...);
extern "C" void func_ov015_02134208(void);
extern "C" void func_ov015_02134300(void);
extern "C" void func_ov015_0213b364(void);
extern "C" s32 func_ov015_0213b3fc(...);
extern "C" void func_ov015_0213b6ac(void);
extern "C" void func_ov015_0213b870(void);
extern "C" void func_ov015_0213bfcc(void);
extern "C" void func_ov015_0213c33c(void);

extern "C" void func_ov085_0216ffa0(u8 *arg0)
{
    func_ov001_02126240(*(s32 *)(arg0 + 0x28), (arg0 + 0x28), (s32)data_ov085_02170c60);
}

extern "C" asm void func_ov085_0216ffc0(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0xc
    mov r10, r0
    str r1, [r10, #0xc]
    cmp r1, #1
    beq @L_0216ffe4
    cmp r1, #2
    beq @L_0217000c
    b @L_021700d0
@L_0216ffe4:
    ldr r0, =data_ov085_02170e3c
    add r1, r10, #0x28
    bl func_ov001_0212602c
    ldr r0, =data_ov085_02170e48
    add r1, r10, #0x64
    bl func_ov001_021260f0
    ldr r0, =data_ov085_02170e54
    add r1, r10, #0x40
    bl func_ov001_021260f0
    b @L_021700d0
@L_0217000c:
    mov r5, #1
    mov r9, #0
    add r4, r10, #0x28
    mov r11, r5
    add r7, sp, #8
    add r6, sp, #4
@L_02170024:
    ldr r0, =data_020e88a0
    mov r1, r9
    bl _ZN17UnkClass_020621b413func_0206a964Ei
    mov r0, r9
    bl func_ov001_02126458
    mov r8, r0
    ldr r0, [r10, #0x64]
    mov r1, r8
    mov r2, r7
    mov r3, r6
    bl func_ov015_02134300
    cmp r0, #0
    beq @L_02170078
    add r2, r9, #6
    mov r0, #0xc
    mla r1, r2, r0, r4
    str r5, [sp]
    ldr r0, =data_ov085_02170e60
    ldr r2, [sp, #8]
    ldr r3, [sp, #4]
    bl func_ov001_02126128
@L_02170078:
    mov r0, r9
    bl func_ov001_021263b4
    cmp r0, #0
    addne r8, r9, #0xc9
    ldr r0, [r10, #0x40]
    mov r1, r8
    mov r2, r7
    mov r3, r6
    bl func_ov015_02134300
    cmp r0, #0
    beq @L_021700c4
    add r2, r9, #3
    mov r0, #0xc
    mla r1, r2, r0, r4
    str r11, [sp]
    ldr r2, [sp, #8]
    ldr r0, =data_ov085_02170e6c
    ldr r3, [sp, #4]
    bl func_ov001_02126128
@L_021700c4:
    add r9, r9, #1
    cmp r9, #2
    blt @L_02170024
@L_021700d0:
    mov r0, #1
    str r0, [r10, #8]
    add sp, sp, #0xc
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_ov085_021700f8(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    ldr r1, [r4, #0xc]
    cmp r1, #1
    beq @L_02170118
    cmp r1, #2
    beq @L_02170124
    ldmia sp!, {r4, pc}
@L_02170118:
    mov r1, #2
    bl func_ov085_0216ffc0
    ldmia sp!, {r4, pc}
@L_02170124:
    bl func_ov085_0216ffa0
    mov r0, #2
    str r0, [r4, #8]
    ldmia sp!, {r4, pc}
}

extern "C" asm s32 func_ov085_02170134(...)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r6, #0
    add r5, r0, #0x28
    mov r4, #0xc
@L_02170144:
    mla r0, r6, r4, r5
    bl func_ov015_02134208
    add r6, r6, #1
    cmp r6, #0x10
    blt @L_02170144
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void func_ov085_0217015c(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    sub sp, sp, #8
    ldr r6, =data_020c9660
    mov r5, #1
    mov r4, r0
    mov r0, r6
    mov r1, r5
    bl func_ov015_0213b3fc
    mov r0, r6
    mov r1, r5
    bl func_ov015_0213b364
    mov r5, #0
    str r5, [sp, #4]
    ldr r6, [r4, #0x88]
    cmp r6, #0
    beq @L_021701cc
    add r1, sp, #4
    str r1, [sp]
    mov r0, r6
    mov r3, r5
    sub r1, r5, #1
    mov r2, #2
    bl func_ov001_02126338
    ldr r0, [r6, #0xc]
    ldr r2, [r6, #0x10]
    mov r1, r5
    add r0, r6, r0
    bl func_02003608
@L_021701cc:
    mov r8, #0x20
    str r8, [sp, #4]
    bl G2S_GetBG1CharPtr
    mov r6, #0
    mov r1, r0
    mov r0, r6
    mov r2, r8
    bl MIi_CpuClearFast
    bl G2S_GetBG1CharPtr
    mov r1, r8
    bl DC_FlushRange
    mov r5, #1
    add r7, sp, #4
    str r7, [sp]
    ldr r0, [r4, #0xc4]
    mov r1, r6
    mov r2, r5
    mov r3, r5
    bl func_ov001_02126338
    str r7, [sp]
    mov r1, r0
    ldr r0, [r4, #0xdc]
    mov r2, r5
    mov r3, r5
    bl func_ov001_02126338
    str r8, [sp, #4]
    bl G2S_GetBG1CharPtr
    mov r1, r0
    mov r0, r6
    mov r2, r8
    bl MIi_CpuClearFast
    bl G2S_GetBG1CharPtr
    mov r1, r8
    bl DC_FlushRange
    str r7, [sp]
    mov r1, r6
    mov r6, #2
    ldr r0, [r4, #0xa0]
    mov r2, #3
    mov r3, r6
    bl func_ov001_02126338
    str r7, [sp]
    mov r1, r0
    ldr r0, [r4, #0xac]
    mov r2, r5
    mov r3, r6
    bl func_ov001_02126338
    str r7, [sp]
    mov r1, r0
    ldr r0, [r4, #0x94]
    mov r2, r5
    mov r3, r6
    bl func_ov001_02126338
    str r7, [sp]
    mov r1, r0
    ldr r0, [r4, #0xb8]
    mov r2, r5
    mov r3, r6
    bl func_ov001_02126338
    str r7, [sp]
    mov r1, r0
    ldr r0, [r4, #0x70]
    mov r2, #4
    mov r3, r6
    bl func_ov001_02126338
    str r7, [sp]
    mov r1, r0
    ldr r0, [r4, #0x7c]
    mov r2, #5
    mov r3, r6
    bl func_ov001_02126338
    mov r5, #6
    str r7, [sp]
    mov r1, r0
    ldr r0, [r4, #0x4c]
    mov r2, r5
    mov r3, r6
    bl func_ov001_02126338
    str r7, [sp]
    mov r1, r0
    ldr r0, [r4, #0x58]
    mov r2, r5
    mov r3, r6
    bl func_ov001_02126338
    str r7, [sp]
    mov r1, r0
    ldr r0, [r4, #0x34]
    mov r3, r6
    mov r2, #7
    bl func_ov001_02126338
    bl func_ov015_02132240
    add sp, sp, #8
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

extern "C" asm void func_ov085_02170344(void)
{
    stmdb sp!, {r4, lr}
    sub sp, sp, #0x20
    mov r4, r0
    ldr r3, [r4, #0xdc]
    cmp r3, #0
    beq @L_021703a4
    mov r1, #1
    str r1, [sp]
    str r1, [sp, #4]
    mov r0, #5
    str r0, [sp, #8]
    str r1, [sp, #0xc]
    mov r0, #0x16
    str r0, [sp, #0x10]
    mov r0, #6
    str r0, [sp, #0x14]
    str r1, [sp, #0x18]
    ldr r2, [r3, #0xc]
    ldr r0, =data_020c9660
    add r12, r3, r2
    mov r2, r1
    mov r3, #0
    str r12, [sp, #0x1c]
    bl func_ov015_0213b6ac
@L_021703a4:
    ldr r12, [r4, #0xc4]
    cmp r12, #0
    beq @L_021703f8
    mov r1, #1
    str r1, [sp]
    str r1, [sp, #4]
    mov r3, #0
    str r3, [sp, #8]
    mov r0, #8
    str r0, [sp, #0xc]
    mov r0, #0x20
    str r0, [sp, #0x10]
    mov r0, #0xe
    str r0, [sp, #0x14]
    str r1, [sp, #0x18]
    ldr r2, [r12, #0xc]
    ldr r0, =data_020c9660
    add r12, r12, r2
    mov r2, r1
    str r12, [sp, #0x1c]
    bl func_ov015_0213b6ac
@L_021703f8:
    ldr r3, [r4, #0x4c]
    cmp r3, #0
    beq @L_0217044c
    mov r1, #1
    str r1, [sp]
    str r1, [sp, #4]
    mov r0, #7
    str r0, [sp, #8]
    str r1, [sp, #0xc]
    mov r2, #6
    str r2, [sp, #0x10]
    mov r0, #2
    str r0, [sp, #0x14]
    str r2, [sp, #0x18]
    ldr r0, [r3, #0xc]
    mov r2, #0
    add r12, r3, r0
    ldr r0, =data_020c9660
    mov r3, r2
    str r12, [sp, #0x1c]
    bl func_ov015_0213b6ac
@L_0217044c:
    ldr r3, [r4, #0x58]
    cmp r3, #0
    beq @L_021704a0
    mov r1, #1
    str r1, [sp]
    str r1, [sp, #4]
    mov r0, #0x13
    str r0, [sp, #8]
    str r1, [sp, #0xc]
    mov r2, #6
    str r2, [sp, #0x10]
    mov r0, #2
    str r0, [sp, #0x14]
    str r2, [sp, #0x18]
    ldr r0, [r3, #0xc]
    mov r2, #0
    add r12, r3, r0
    ldr r0, =data_020c9660
    mov r3, r2
    str r12, [sp, #0x1c]
    bl func_ov015_0213b6ac
@L_021704a0:
    ldr r3, [r4, #0x70]
    cmp r3, #0
    beq @L_021704f4
    mov r1, #1
    str r1, [sp]
    str r1, [sp, #4]
    str r1, [sp, #8]
    mov r0, #0xb
    str r0, [sp, #0xc]
    mov r0, #5
    str r0, [sp, #0x10]
    str r0, [sp, #0x14]
    mov r0, #4
    str r0, [sp, #0x18]
    ldr r0, [r3, #0xc]
    mov r2, #0
    add r12, r3, r0
    ldr r0, =data_020c9660
    mov r3, r2
    str r12, [sp, #0x1c]
    bl func_ov015_0213b6ac
@L_021704f4:
    ldr r3, [r4, #0x7c]
    cmp r3, #0
    addeq sp, sp, #0x20
    ldmeqia sp!, {r4, pc}
    mov r1, #1
    str r1, [sp]
    str r1, [sp, #4]
    str r1, [sp, #8]
    mov r0, #0x10
    str r0, [sp, #0xc]
    mov r0, #5
    str r0, [sp, #0x10]
    str r0, [sp, #0x14]
    str r0, [sp, #0x18]
    ldr r0, [r3, #0xc]
    mov r2, #0
    add r4, r3, r0
    ldr r0, =data_020c9660
    mov r3, r2
    str r4, [sp, #0x1c]
    bl func_ov015_0213b6ac
    add sp, sp, #0x20
    ldmia sp!, {r4, pc}
}

extern "C" asm void func_ov085_02170554(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x20
    ldr r4, [r0, #0xac]
    mov r10, r1
    cmp r4, #0
    mov r9, r3
    addeq sp, sp, #0x20
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r0, [r4, #0xc]
    cmp r9, #0x64
    add r8, r4, r0
    blt @L_021705a4
    mov r4, r9
    ldr r3, =0x51eb851f
    mov r0, r4, lsr #0x1f
    smull r1, r9, r3, r4
    add r9, r0, r9, asr #5
    mov r3, #0x64
    smull r0, r1, r3, r9
    sub r9, r4, r0
@L_021705a4:
    mov r0, r2, lsl #0x18
    ldr r4, =0x66666667
    add r10, r10, #3
    mov r5, r0, asr #0x18
    mov r7, #1
    mov r6, #2
    mov r11, #3
@L_021705c0:
    str r7, [sp]
    mov r0, r10, lsl #0x18
    str r6, [sp, #4]
    mov r0, r0, asr #0x18
    str r0, [sp, #8]
    str r5, [sp, #0xc]
    str r11, [sp, #0x10]
    mov r0, #4
    str r0, [sp, #0x14]
    smull r0, r2, r4, r9
    mov r1, r9, lsr #0x1f
    add r2, r1, r2, asr #2
    mov r0, #0xa
    smull r1, r2, r0, r2
    sub r2, r9, r1
    mov r0, #0xc
    mul r0, r2, r0
    mov r2, #0
    str r7, [sp, #0x18]
    add r0, r8, r0, lsl #1
    str r0, [sp, #0x1c]
    ldr r0, =data_020c9660
    mov r1, r7
    mov r3, r2
    bl func_ov015_0213b6ac
    mov r1, r9
    smull r0, r9, r4, r1
    mov r0, r1, lsr #0x1f
    add r9, r0, r9, asr #2
    cmp r9, #0
    sub r10, r10, #3
    bgt @L_021705c0
    add sp, sp, #0x20
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_ov085_02170654(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x20
    ldr r4, [r0, #0xb8]
    mov r10, r1
    cmp r4, #0
    mov r9, r3
    addeq sp, sp, #0x20
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r0, [r4, #0xc]
    cmp r9, #0x64
    add r8, r4, r0
    blt @L_021706a4
    mov r4, r9
    ldr r3, =0x51eb851f
    mov r0, r4, lsr #0x1f
    smull r1, r9, r3, r4
    add r9, r0, r9, asr #5
    mov r3, #0x64
    smull r0, r1, r3, r9
    sub r9, r4, r0
@L_021706a4:
    mov r0, r2, lsl #0x18
    ldr r4, =0x66666667
    add r10, r10, #1
    mov r5, r0, asr #0x18
    mov r7, #1
    mov r6, #2
    mov r11, #0xa
@L_021706c0:
    smull r1, r2, r4, r9
    mov r0, r9, lsr #0x1f
    add r2, r0, r2, asr #2
    smull r1, r0, r11, r2
    str r7, [sp]
    mov r0, r10, lsl #0x18
    sub r2, r9, r1
    add r1, r8, r2, lsl #2
    mov r2, #0
    mov r0, r0, asr #0x18
    str r6, [sp, #4]
    str r0, [sp, #8]
    str r5, [sp, #0xc]
    str r7, [sp, #0x10]
    str r6, [sp, #0x14]
    str r7, [sp, #0x18]
    str r1, [sp, #0x1c]
    ldr r0, =data_020c9660
    mov r1, r7
    mov r3, r2
    bl func_ov015_0213b6ac
    mov r1, r9
    smull r0, r9, r4, r1
    mov r0, r1, lsr #0x1f
    add r9, r0, r9, asr #2
    cmp r9, #0
    sub r10, r10, #1
    bgt @L_021706c0
    add sp, sp, #0x20
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_ov085_02170744(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x30
    mov r10, r0
    ldr r1, [r10, #0xa0]
    cmp r1, #0
    addeq sp, sp, #0x30
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r0, [r1, #0xc]
    mov r5, #0
    add r8, r1, r0
    mov r0, #7
    str r5, [sp, #0x20]
    str r0, [sp, #0x24]
    b @L_021708cc
@L_0217077c:
    ldr r0, [sp, #0x20]
    mov r6, #0xc
    add r11, r10, r0
    ldr r0, [sp, #0x24]
    mov r9, #0
    sub r0, r0, #1
    mov r1, r0, lsl #0x18
    ldr r0, [sp, #0x24]
    mov r4, #1
    mov r2, r0, lsl #0x18
    mov r0, r1, asr #0x18
    str r0, [sp, #0x28]
    mov r0, r2, asr #0x18
    str r0, [sp, #0x2c]
@L_021707b4:
    add r0, r9, r9, lsl #2
    add r0, r11, r0
    ldrb r0, [r0, #0x1c]
    cmp r0, #1
    beq @L_02170844
    cmp r0, #2
    beq @L_0217084c
    mov r5, r4
    ldr r2, [r10, #0x94]
    cmp r2, #0
    beq @L_02170850
    mov r0, #0x19
    mul r0, r9, r0
    ldr r1, [r2, #0xc]
    add r1, r2, r1
    add r7, r1, r0, lsl #1
    str r4, [sp]
    mov r0, #2
    str r0, [sp, #4]
    ldr r0, [sp, #0x28]
    mov r2, #0
    str r0, [sp, #8]
    sub r0, r6, #1
    mov r0, r0, lsl #0x18
    mov r0, r0, asr #0x18
    str r0, [sp, #0xc]
    mov r0, #5
    str r0, [sp, #0x10]
    str r0, [sp, #0x14]
    str r4, [sp, #0x18]
    ldr r0, =data_020c9660
    mov r1, r4
    mov r3, r2
    str r7, [sp, #0x1c]
    bl func_ov015_0213b6ac
    b @L_02170850
@L_02170844:
    mov r7, r8
    b @L_02170850
@L_0217084c:
    add r7, r8, #0x12
@L_02170850:
    cmp r5, #0
    bne @L_021708b4
    mov r0, #1
    str r0, [sp]
    mov r0, #2
    str r0, [sp, #4]
    ldr r0, [sp, #0x2c]
    mov r2, #0
    str r0, [sp, #8]
    mov r0, r6, lsl #0x18
    mov r0, r0, asr #0x18
    str r0, [sp, #0xc]
    mov r0, #3
    str r0, [sp, #0x10]
    str r0, [sp, #0x14]
    str r0, [sp, #0x18]
    ldr r0, =data_020c9660
    mov r1, #1
    mov r3, r2
    str r7, [sp, #0x1c]
    bl func_ov015_0213b6ac
    add r9, r9, #1
    add r6, r6, #5
    cmp r9, #2
    blt @L_021707b4
@L_021708b4:
    ldr r0, [sp, #0x24]
    add r0, r0, #5
    str r0, [sp, #0x24]
    ldr r0, [sp, #0x20]
    add r0, r0, #1
    str r0, [sp, #0x20]
@L_021708cc:
    ldr r0, [sp, #0x20]
    cmp r0, #5
    addge sp, sp, #0x30
    ldmgeia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    cmp r5, #0
    beq @L_0217077c
    add sp, sp, #0x30
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_ov085_021708f0(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, lr}
    sub sp, sp, #0xc
    mov r8, r0
    mov r6, #1
    ldr r0, =data_020c9660
    mov r1, r6
    mov r2, #2
    mov r3, #0
    bl func_ov015_0213b870
    mov r4, #3
    ldr r3, [r8, #0x10]
    mov r0, r8
    mov r2, r4
    mov r1, #7
    bl func_ov085_02170554
    ldr r3, [r8, #0x14]
    mov r0, r8
    mov r2, r4
    mov r1, #0x13
    bl func_ov085_02170554
    ldr r0, [r8, #0x18]
    mov r5, #8
    cmp r0, #5
    subge r6, r0, #4
    mov r7, #0
    mov r4, #9
@L_02170958:
    mov r0, r8
    mov r1, r5
    mov r2, r4
    mov r3, r6
    bl func_ov085_02170654
    add r7, r7, #1
    cmp r7, #5
    add r6, r6, #1
    add r5, r5, #5
    blt @L_02170958
    mov r0, r8
    bl func_ov085_02170744
    ldr r0, [r8, #0x34]
    mov r1, #0
    str r0, [sp]
    mov r0, #2
    mov r3, r1
    str r0, [sp, #4]
    mov r12, #7
    mov r0, #0x1e
    mov r2, #1
    str r12, [sp, #8]
    bl func_ov001_02125f64
    add sp, sp, #0xc
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
}

extern "C" asm void func_ov085_021709c0(void)
{
    stmdb sp!, {r4, lr}
    sub sp, sp, #0x18
    mov r4, r0
    ldr r0, =data_020e88a0
    add r1, sp, #0
    bl func_ov001_0212816c
    ldr r0, [sp, #8]
    cmp r0, #5
    ldrge r2, [sp]
    ldrge r1, [sp, #4]
    cmpge r2, r1
    bne @L_021709fc
    ldr r1, [sp, #0x10]
    cmp r1, #0
    addne r0, r0, #1
@L_021709fc:
    ldr r2, [sp]
    str r2, [r4, #0x10]
    ldr r1, [sp, #4]
    cmp r2, #0x63
    str r1, [r4, #0x14]
    movgt r1, #0x63
    strgt r1, [r4, #0x10]
    ldr r1, [r4, #0x14]
    cmp r1, #0x63
    movgt r1, #0x63
    strgt r1, [r4, #0x14]
    ldr r1, [r4, #0x18]
    cmp r1, r0
    strne r0, [r4, #0x18]
    cmpne r0, #5
    ble @L_02170a6c
    mov r3, #1
@L_02170a40:
    add r2, r4, r3
    ldrb r1, [r2, #0x1c]
    add r3, r3, #1
    cmp r3, #5
    strb r1, [r2, #0x1b]
    ldrb r1, [r2, #0x21]
    strb r1, [r2, #0x20]
    blt @L_02170a40
    mov r1, #0
    strb r1, [r4, #0x20]
    strb r1, [r4, #0x25]
@L_02170a6c:
    ldr r1, [r4, #0x18]
    cmp r1, #5
    blt @L_02170aa8
    ldr r1, [sp, #8]
    cmp r0, r1
    ldreq r0, [sp, #0xc]
    streqb r0, [r4, #0x20]
    ldreq r0, [sp, #0x10]
    streqb r0, [r4, #0x25]
    ldrne r0, [sp, #0xc]
    strneb r0, [r4, #0x1f]
    ldrne r0, [sp, #0x10]
    add sp, sp, #0x18
    strneb r0, [r4, #0x24]
    ldmia sp!, {r4, pc}
@L_02170aa8:
    cmp r1, #0
    addle sp, sp, #0x18
    ldmleia sp!, {r4, pc}
    sub r0, r1, #1
    ldr r1, [sp, #0xc]
    add r0, r4, r0
    strb r1, [r0, #0x1c]
    ldr r0, [r4, #0x18]
    ldr r1, [sp, #0x10]
    sub r0, r0, #1
    add r0, r4, r0
    strb r1, [r0, #0x21]
    add sp, sp, #0x18
    ldmia sp!, {r4, pc}
}

extern "C" asm void func_ov085_02170ae4(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r6, r0
    mov r5, #0
    mov r1, r5
    add r0, r6, #0x28
    mov r2, #0xc0
    str r5, [r6, #8]
    bl MI_CpuFill8
    mov r1, r5
    add r0, r6, #0x10
    mov r2, #8
    bl MI_CpuFill8
    mov r1, r5
    add r0, r6, #0x1c
    mov r2, #0xa
    bl MI_CpuFill8
    mov r4, #1
    ldr r0, =data_020c9660
    mov r1, r4
    str r5, [r6, #0x18]
    bl func_ov015_0213b364
    mov r0, r6
    mov r1, r4
    bl func_ov085_0216ffc0
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void func_ov085_02170b4c(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    ldr r1, [r4, #8]
    cmp r1, #1
    beq @L_02170b74
    cmp r1, #3
    beq @L_02170b94
    cmp r1, #4
    beq @L_02170bb0
    ldmia sp!, {r4, pc}
@L_02170b74:
    add r0, r4, #0x28
    mov r1, #0x10
    bl func_ov015_02134118
    cmp r0, #0
    ldmeqia sp!, {r4, pc}
    mov r0, r4
    bl func_ov085_021700f8
    ldmia sp!, {r4, pc}
@L_02170b94:
    mov r1, #4
    str r1, [r4, #8]
    bl func_ov085_02170344
    mov r0, r4
    ldr r1, [r0]
    ldr r1, [r1, #0x4c]
    blx r1
@L_02170bb0:
    mov r0, r4
    bl func_ov085_021709c0
    mov r0, r4
    bl func_ov085_021708f0
    ldr r0, =data_020c9660
    mov r1, #1
    bl func_ov015_0213bfcc
    ldmia sp!, {r4, pc}
}

extern "C" asm void func_ov085_02170bd4(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    ldr r1, [r4, #8]
    cmp r1, #2
    beq @L_02170bf4
    cmp r1, #4
    beq @L_02170c04
    ldmia sp!, {r4, pc}
@L_02170bf4:
    bl func_ov085_0217015c
    mov r0, #3
    str r0, [r4, #8]
    ldmia sp!, {r4, pc}
@L_02170c04:
    ldr r0, =data_020c9660
    mov r1, #1
    bl func_ov015_0213c33c
    ldmia sp!, {r4, pc}
}

extern "C" void func_ov085_02170c18(s32 arg0)
{
    func_ov015_02134198((arg0 + 0x28), 0x10);
    func_ov085_02170134(arg0);
    func_ov015_0213b3fc((s32)data_020c9660, 1);
}

extern "C" s32 func_ov085_02170c48(s32 arg0)
{
    _ZdlPv(arg0);
    return arg0;
}

extern "C" void func_ov085_02170c5c(void)
{
}
