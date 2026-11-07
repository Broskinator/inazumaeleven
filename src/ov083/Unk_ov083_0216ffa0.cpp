#include "ov083/Unk_ov083_0216ffa0.hpp"

extern "C" void func_ov083_0216ffa0(u8 *arg0);
extern "C" s32 func_ov083_0216ffc0(...);
extern "C" void func_ov083_021700ec(void);
extern "C" s32 func_ov083_021701ac(...);
extern "C" void func_ov083_021701e4(u8 *arg0, s32 arg1);
extern "C" s32 func_ov083_02170210(u8 *arg0, u8 *arg1);
extern "C" void func_ov083_0217023c(void);
extern "C" s32 func_ov083_02170634(...);
extern "C" s32 func_ov083_0217079c(...);
extern "C" s32 func_ov083_02170850(...);
extern "C" s32 func_ov083_0217094c(u8 *arg0);
extern "C" void func_ov083_02170aa4(void);
extern "C" s32 func_ov083_02170b4c(u8 *arg0);
extern "C" void func_ov083_02170bd4(u8 *arg0);
extern "C" void func_ov083_02170c50(s32 arg0);
extern "C" s32 func_ov083_02170c7c(s32 arg0);
extern "C" void func_ov083_02170c90(void);

extern "C" char data_020c46a8[];
extern "C" char data_020c4850[];
extern "C" char data_020d2520[];
extern "C" char data_020d2d20[];
extern "C" char data_020e88a0[];
extern "C" char data_ov083_02170c94[];
extern "C" char data_ov083_02170e8c[];
extern "C" char data_ov083_02170e9c[];
extern "C" char data_ov083_02170eb4[];
extern "C" s32 DC_FlushRange(...);
extern "C" void G2S_GetBG1CharPtr(void);
extern "C" s32 MI_CpuFill8(...);
extern "C" void MIi_CpuClearFast(void);
extern "C" void _ZN17UnkClass_020621b413func_020768fcEm(void);
extern "C" s32 _ZN17UnkClass_020621b413func_02077bd4Ev(...);
extern "C" s32 _ZN17UnkClass_020621b413func_02077ce4Ev(...);
extern "C" s32 _ZdlPv(...);
extern "C" void func_02003608(void);
extern "C" s32 func_020036e8(...);
extern "C" s32 func_020037c8(...);
extern "C" void func_02003b48(void);
extern "C" s32 func_0209d668(...);
extern "C" s32 func_ov001_02122cbc(...);
extern "C" void func_ov001_02122cf8(void);
extern "C" void func_ov001_0212602c(void);
extern "C" s32 func_ov001_02126240(...);
extern "C" void func_ov001_021263a0(void);
extern "C" void func_ov015_02132240(void);
extern "C" void func_ov015_021322d8(void);
extern "C" void func_ov015_02132984(void);
extern "C" void func_ov015_02132a38(void);
extern "C" void func_ov015_02132b7c(void);
extern "C" void func_ov015_02133010(void);
extern "C" void func_ov015_02133c24(void);
extern "C" void func_ov015_02133d50(void);
extern "C" void func_ov015_02133dc8(void);
extern "C" s32 func_ov015_02133e24(...);
extern "C" s32 func_ov015_02133e50(...);
extern "C" void func_ov015_02133e8c(void);
extern "C" void func_ov015_02133f94(void);
extern "C" void func_ov015_02134024(void);
extern "C" void func_ov015_02134118(void);
extern "C" s32 func_ov015_02134198(...);
extern "C" void func_ov015_02134208(void);
extern "C" void func_ov015_02134300(void);

extern "C" void func_ov083_0216ffa0(u8 *arg0)
{
    func_ov001_02126240(*(s32 *)(arg0 + 0x3C), (arg0 + 0x3C), (s32)data_ov083_02170c94);
}

extern "C" asm s32 func_ov083_0216ffc0(...)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0xc
    mov r10, r0
    str r1, [r10, #0xc]
    cmp r1, #1
    beq @L_0216ffec
    cmp r1, #2
    beq @L_02170030
    cmp r1, #3
    beq @L_02170038
    b @L_021700c0
@L_0216ffec:
    mov r5, #0
    mov r4, #0x800
    ldr r1, =data_020d2d20
    mov r0, r5
    mov r2, r4
    bl MIi_CpuClearFast
    ldr r1, =data_020d2520
    mov r0, r5
    mov r2, r4
    bl MIi_CpuClearFast
    ldr r0, =data_ov083_02170e8c
    add r1, r10, #0x3c
    bl func_ov001_0212602c
    ldr r0, =data_ov083_02170e9c
    add r1, r10, #0xe4
    bl func_ov015_02133f94
    b @L_021700c0
@L_02170030:
    bl func_ov083_0216ffa0
    b @L_021700c0
@L_02170038:
    mov r9, #0
    add r5, r10, #0x3c
    mov r6, #1
    add r7, sp, #8
    add r11, sp, #4
    ldr r8, =data_020e88a0
    mov r4, #0xc
    b @L_021700b8
@L_02170058:
    ldr r0, [r10, #0x38]
    add r0, r0, r9, lsl #1
    ldrh r1, [r0, #0x42]
    cmp r1, #0
    beq @L_021700c0
    mov r0, r8
    bl _ZN17UnkClass_020621b413func_020768fcEm
    cmp r0, #0
    beq @L_021700b4
    ldrh r1, [r0, #0x26]
    ldr r0, [r10, #0xe4]
    mov r2, r7
    mov r3, r11
    bl func_ov015_02134300
    cmp r0, #0
    beq @L_021700b4
    add r0, r9, #0xb
    mla r1, r0, r4, r5
    str r6, [sp]
    ldr r2, [sp, #8]
    ldr r3, [sp, #4]
    ldr r0, =data_ov083_02170eb4
    bl func_ov015_02134024
@L_021700b4:
    add r9, r9, #1
@L_021700b8:
    cmp r9, #3
    blt @L_02170058
@L_021700c0:
    mov r0, r10
    mov r1, #1
    bl func_ov083_021701e4
    add sp, sp, #0xc
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_ov083_021700ec(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    mov r6, r0
    ldr r1, [r6, #0xc]
    cmp r1, #1
    beq @L_02170114
    cmp r1, #2
    beq @L_02170120
    cmp r1, #3
    beq @L_02170138
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_02170114:
    mov r1, #2
    bl func_ov083_0216ffc0
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_02170120:
    ldr r1, [r6, #0x38]
    cmp r1, #0
    ldmeqia sp!, {r4, r5, r6, r7, r8, pc}
    mov r1, #3
    bl func_ov083_0216ffc0
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_02170138:
    ldr r4, [r6, #0x14]
    cmp r4, #0
    beq @L_0217019c
    mov r5, #0
    mov r8, #2
    mov r7, #0xc
@L_02170150:
    ldr r0, [r6, #0x38]
    add r0, r0, r5, lsl #1
    ldrh r0, [r0, #0x42]
    cmp r0, #0
    beq @L_0217019c
    mla r0, r5, r7, r6
    ldr r12, [r0, #0xc0]
    cmp r12, #0
    beq @L_0217018c
    ldr r0, [r12, #4]
    mov r1, r8
    mov r2, r8
    mov r3, r4
    add r0, r12, r0
    bl func_ov015_02133010
@L_0217018c:
    add r5, r5, #1
    cmp r5, #3
    add r4, r4, #0x80
    blt @L_02170150
@L_0217019c:
    mov r0, r6
    mov r1, #2
    bl func_ov083_021701e4
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

extern "C" asm s32 func_ov083_021701ac(...)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r7, r0
    mov r6, #0
    add r5, r7, #0x3c
    mov r4, #0xc
@L_021701c0:
    mla r0, r6, r4, r5
    bl func_ov015_02134208
    add r6, r6, #1
    cmp r6, #0xf
    blt @L_021701c0
    add r0, r7, #0x10
    mov r1, #2
    bl func_ov015_02133e8c
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" void func_ov083_021701e4(u8 *arg0, s32 arg1)
{
    s32 t0;
    s32 t1;
    if (*(s32 *)(arg0 + 0x8) == arg1)
        return;
    t0 = *(s32 *)(arg0 + 0x8);
    *(s32 *)(arg0 + 0x8) = arg1;
    if (arg1 != 5)
        return;
    t1 = *(s32 *)(*(u8 * *)(arg0) + 0x4C);
    ((s32 (*)(...))*(s32 *)(*(u8 * *)(arg0) + 0x4C))((s32)arg0, t1, t0);
    return;
}

extern "C" s32 func_ov083_02170210(u8 *arg0, u8 *arg1)
{
    if ((s32)arg1 == 0) {
        return -1;
    } else {
        *(s32 *)(arg0 + 0x38) = (s32)arg1;
        if (*(s32 *)(arg1) != 0x45) {
            *(s32 *)(arg0 + 0x38) = 0;
            arg0 = (u8 *)(0 - 1);
        } else {
            arg0 = (u8 *)0;
        }
        return (s32)arg0;
    }
}

extern "C" asm void func_ov083_0217023c(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x9c
    mov r10, r0
    ldr r0, [r10, #0x48]
    mov r2, #1
    mvn r1, #0
    mov r4, r2
    mov r11, #2
    bl func_ov001_021263a0
    bl G2S_GetBG1CharPtr
    mov r5, #0x20
    mov r6, #0
    mov r1, r0
    mov r0, r6
    mov r2, r5
    bl MIi_CpuClearFast
    bl G2S_GetBG1CharPtr
    mov r1, r5
    bl DC_FlushRange
    bl func_ov001_02122cf8
    cmp r0, #0
    mov r2, #4
    beq @L_021702a0
    ldr r0, [r10, #0x90]
    b @L_021702a4
@L_021702a0:
    ldr r0, [r10, #0x9c]
@L_021702a4:
    mov r1, r6
    bl func_ov001_021263a0
    mov r6, r0
    ldr r0, [r10, #0xa8]
    mov r1, r6
    mov r2, #2
    bl func_ov001_021263a0
    mov r1, r0
    ldr r0, [r10, #0xb4]
    mov r2, #3
    bl func_ov001_021263a0
    ldr r0, =data_020c4850
    mov r5, #6
    ldr r1, [r0]
    ldr r0, [r10, #0x54]
    ldr r1, [r1, #0x18]
    mov r2, r5
    mov r1, r1, lsr #5
    sub r1, r1, #1
    bl func_ov001_021263a0
    mov r1, r0
    ldr r0, [r10, #0x60]
    mov r2, r5
    bl func_ov001_021263a0
    mov r1, r0
    ldr r0, [r10, #0x6c]
    mov r2, r5
    bl func_ov001_021263a0
    mov r1, r0
    ldr r0, [r10, #0x78]
    mov r2, r5
    bl func_ov001_021263a0
    mov r1, r0
    ldr r0, [r10, #0x84]
    mov r2, r5
    bl func_ov001_021263a0
    mov r6, r0
    ldr r0, [r10, #0x10]
    mov r1, #0
    cmp r0, #0
    ldrne r0, [r10, #0x14]
    cmpne r0, #0
    movne r1, #1
    cmp r1, #0
    beq @L_02170404
    ldr r8, [r10, #0x10]
    mov r7, #7
    mov r9, #0
    mov r5, #8
    b @L_021703a0
@L_0217036c:
    mov r0, r8
    mov r1, r11
    mov r2, r11
    bl func_ov015_02133d50
    mov r0, r8
    mov r1, r5
    add r2, r6, #1
    mov r3, r7
    bl func_ov015_02132984
    mov r6, r0
    add r8, r8, #8
    add r9, r9, #1
    add r7, r7, #1
@L_021703a0:
    cmp r9, #3
    blt @L_0217036c
    mov r7, #7
    mov r5, #0
    mov r8, #0xc
    b @L_021703fc
@L_021703b8:
    ldr r0, [r10, #0x38]
    add r0, r0, r5, lsl #1
    ldrh r0, [r0, #0x42]
    cmp r0, #0
    beq @L_02170404
    add r1, r5, #0xb
    mla r0, r1, r8, r10
    ldr r3, [r0, #0x3c]
    cmp r3, #0
    beq @L_021703f4
    ldr r0, [r3, #0xc]
    mov r1, r4
    mov r2, r7
    add r0, r3, r0
    bl func_ov015_021322d8
@L_021703f4:
    add r5, r5, #1
    add r7, r7, #1
@L_021703fc:
    cmp r5, #3
    blt @L_021703b8
@L_02170404:
    ldr r0, [r10, #0x24]
    mov r5, #0
    cmp r0, #0
    ldrne r0, [r10, #0x28]
    mov r1, r5
    cmpne r0, #0
    movne r1, #1
    cmp r1, #0
    beq @L_02170528
    ldrh r1, [r10, #0x30]
    ldrh r2, [r10, #0x32]
    ldr r0, [r10, #0x24]
    bl func_ov015_02133d50
    ldrh r2, [r10, #0x30]
    ldrh r1, [r10, #0x32]
    mov r9, #0
    ldr r0, [r10, #0x24]
    mul r1, r2, r1
    mov r3, r9
    mov r1, r1, lsl #1
    add r2, r6, #1
    bl func_ov015_02132984
    add r0, r10, #0x24
    bl func_ov015_02133dc8
    mov r7, #0x76
    add r11, sp, #0x1c
    mov r6, #3
    ldr r8, =data_020e88a0
    ldr r4, =data_020c46a8
    b @L_02170508
@L_0217047c:
    ldr r0, [r10, #0x38]
    add r0, r0, r9, lsl #1
    ldrh r1, [r0, #0x42]
    cmp r1, #0
    beq @L_02170510
    mov r0, r8
    bl _ZN17UnkClass_020621b413func_020768fcEm
    movs r3, r0
    beq @L_02170504
    str r7, [sp]
    ldr r0, [r4]
    mov r1, r11
    mov r2, #0x80
    bl func_ov015_02133c24
    str r6, [sp]
    str r5, [sp, #4]
    ldr r1, [r10, #0x28]
    mov r3, r0
    str r1, [sp, #8]
    ldrh r2, [r10, #0x30]
    mov r0, r9, lsl #4
    mov r1, r5
    mov r2, r2, lsl #3
    str r2, [sp, #0xc]
    add r2, r0, #2
    ldrh r0, [r10, #0x32]
    mov r0, r0, lsl #3
    str r0, [sp, #0x10]
    str r5, [sp, #0x14]
    str r5, [sp, #0x18]
    ldr r0, [r4]
    ldr r12, [r0]
    ldr r12, [r12, #8]
    blx r12
@L_02170504:
    add r9, r9, #1
@L_02170508:
    cmp r9, #3
    blt @L_0217047c
@L_02170510:
    ldrh r2, [r10, #0x30]
    ldrh r1, [r10, #0x32]
    ldr r0, [r10, #0x28]
    mul r1, r2, r1
    mov r1, r1, lsl #5
    bl DC_FlushRange
@L_02170528:
    bl func_ov001_02122cf8
    cmp r0, #0
    beq @L_02170544
    ldr r1, [r10, #0x90]
    cmp r1, #0
    beq @L_02170578
    b @L_02170550
@L_02170544:
    ldr r1, [r10, #0x9c]
    cmp r1, #0
    beq @L_02170578
@L_02170550:
    ldr r0, [r1, #0xc]
    ldr r4, =data_020d2d20
    add r0, r1, r0
    str r0, [sp]
    mov r0, #7
    mov r1, #0
    mov r2, #0x12
    mov r3, #4
    str r4, [sp, #4]
    bl func_ov015_02132a38
@L_02170578:
    ldr r1, [r10, #0xa8]
    cmp r1, #0
    beq @L_021705ac
    ldr r0, [r1, #0xc]
    ldr r4, =data_020d2d20
    add r0, r1, r0
    str r0, [sp]
    mov r0, #2
    mov r1, #5
    mov r2, #0x1c
    mov r3, #7
    str r4, [sp, #4]
    bl func_ov015_02132a38
@L_021705ac:
    ldr r2, [r10, #0xb4]
    cmp r2, #0
    beq @L_021705e0
    ldr r0, [r2, #0xc]
    mov r1, #0xc
    add r0, r2, r0
    ldr r4, =data_020d2d20
    str r0, [sp]
    mov r3, r1
    mov r0, #2
    mov r2, #0x1c
    str r4, [sp, #4]
    bl func_ov015_02132a38
@L_021705e0:
    ldr r2, [r10, #0x84]
    cmp r2, #0
    beq @L_02170614
    ldr r0, [r2, #0xc]
    mov r1, #9
    add r0, r2, r0
    ldr r4, =data_020d2520
    str r0, [sp]
    mov r2, r1
    mov r0, #0xb
    mov r3, #2
    str r4, [sp, #4]
    bl func_ov015_02132a38
@L_02170614:
    mov r0, #1
    add sp, sp, #0x9c
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm s32 func_ov083_02170634(...)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r5, r0
    ldr r6, [r5, #0x48]
    cmp r6, #0
    beq @L_02170670
    mov r4, #0
    mov r0, r4
    mov r1, r6
    mov r2, r4
    bl func_ov015_02132b7c
    ldr r0, [r6, #0xc]
    ldr r2, [r6, #0x10]
    mov r1, r4
    add r0, r6, r0
    bl func_02003608
@L_02170670:
    bl func_ov001_02122cf8
    cmp r0, #0
    mov r0, #1
    mov r2, #0x20
    beq @L_0217068c
    ldr r1, [r5, #0x90]
    b @L_02170690
@L_0217068c:
    ldr r1, [r5, #0x9c]
@L_02170690:
    bl func_ov015_02132b7c
    mov r4, #1
    mov r2, r0
    ldr r1, [r5, #0xa8]
    mov r0, r4
    bl func_ov015_02132b7c
    mov r2, r0
    ldr r1, [r5, #0xb4]
    mov r0, r4
    bl func_ov015_02132b7c
    ldr r0, =data_020c4850
    mov r1, #0
    ldr r7, [r0]
    ldr r0, [r7, #0x14]
    ldr r2, [r7, #0x18]
    add r0, r7, r0
    bl func_02003b48
    mov r6, #2
    ldr r1, [r5, #0x54]
    ldr r2, [r7, #0x18]
    mov r0, r6
    bl func_ov015_02132b7c
    mov r2, r0
    ldr r1, [r5, #0x60]
    mov r0, r6
    bl func_ov015_02132b7c
    mov r2, r0
    ldr r1, [r5, #0x6c]
    mov r0, r6
    bl func_ov015_02132b7c
    mov r2, r0
    ldr r1, [r5, #0x78]
    mov r0, r6
    bl func_ov015_02132b7c
    mov r2, r0
    ldr r1, [r5, #0x84]
    mov r0, r6
    bl func_ov015_02132b7c
    mov r6, r0
    ldr r0, [r5, #0x10]
    cmp r0, #0
    ldrne r0, [r5, #0x14]
    cmpne r0, #0
    moveq r4, #0
    cmp r4, #0
    beq @L_0217075c
    ldr r0, [r5, #0x14]
    mov r1, r6
    mov r2, #0x180
    bl func_02003b48
    add r6, r6, #0x180
@L_0217075c:
    ldr r0, [r5, #0x24]
    cmp r0, #0
    ldrne r0, [r5, #0x28]
    cmpne r0, #0
    movne r0, #1
    moveq r0, #0
    cmp r0, #0
    beq @L_0217078c
    ldr r0, [r5, #0x28]
    mov r1, r6
    mov r2, #0xb40
    bl func_02003b48
@L_0217078c:
    bl func_ov015_02132240
    mov r0, #1
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm s32 func_ov083_0217079c(...)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #8
    ldr r5, [sp, #0x34]
    mov r4, #0xc
    mla r0, r5, r4, r0
    ldr r4, [r0, #0x3c]
    mov r10, r1
    cmp r4, #0
    mov r9, r2
    mov r8, r3
    addeq sp, sp, #8
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r1, [r4, #0xc]
    ldr r0, [sp, #0x30]
    add r7, r4, r1
    cmp r8, r0
    ldr r6, =data_020d2520
    ldr r5, =0x66666667
    movgt r8, r0
    mov r11, #1
    mov r4, #0xa
@L_021707f0:
    smull r1, r2, r5, r8
    mov r0, r8, lsr #0x1f
    add r2, r0, r2, asr #2
    smull r0, r1, r4, r2
    sub r2, r8, r0
    add r0, r7, r2, lsl #2
    str r0, [sp]
    mov r0, r10
    mov r1, r9
    mov r2, r11
    mov r3, #2
    str r6, [sp, #4]
    bl func_ov015_02132a38
    mov r1, r8
    smull r0, r8, r5, r1
    mov r0, r1, lsr #0x1f
    add r8, r0, r8, asr #2
    cmp r8, #0
    sub r10, r10, #1
    bgt @L_021707f0
    add sp, sp, #8
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm s32 func_ov083_02170850(...)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #8
    mov r10, r0
    mov r9, #0
    ldr r7, [r10, #0x10]
    ldr r8, [r10, #0x24]
    mov r6, #0x11
    mov r11, r9
    ldr r5, =data_020d2520
    mov r4, #0xc
    b @L_02170930
@L_0217087c:
    ldr r0, [r10, #0x38]
    add r0, r0, r9, lsl #1
    ldrh r0, [r0, #0x42]
    cmp r0, #0
    addeq sp, sp, #8
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r0, [r10, #0x10]
    mov r1, r11
    cmp r0, #0
    ldrne r0, [r10, #0x14]
    cmpne r0, #0
    movne r1, #1
    cmp r1, #0
    beq @L_021708e8
    add r1, r9, #0xb
    mla r0, r1, r4, r10
    ldr r0, [r0, #0x3c]
    cmp r0, #0
    beq @L_021708e4
    mov r2, #2
    str r7, [sp]
    mov r0, #9
    mov r1, r6
    mov r3, r2
    str r5, [sp, #4]
    bl func_ov015_02132a38
@L_021708e4:
    add r7, r7, #8
@L_021708e8:
    ldr r0, [r10, #0x24]
    mov r1, #0
    cmp r0, #0
    ldrne r0, [r10, #0x28]
    cmpne r0, #0
    movne r1, #1
    cmp r1, #0
    beq @L_02170928
    str r8, [sp]
    mov r0, #0xd
    mov r1, r6
    mov r2, #0xf
    mov r3, #2
    str r5, [sp, #4]
    bl func_ov015_02132a38
    add r8, r8, #0x3c
@L_02170928:
    add r6, r6, #2
    add r9, r9, #1
@L_02170930:
    ldr r0, [r10, #0x38]
    ldrh r0, [r0, #0x40]
    cmp r9, r0
    blt @L_0217087c
    add sp, sp, #8
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" s32 func_ov083_0217094c(u8 *arg0)
{
    s32 r5;
    s32 v5;
    s32 v6;
    s32 v7;
    s32 v10;
    s32 t0;
    s32 t1;
    s32 t2;
    s32 t3;
    s32 t4;
    s32 t5;
    s32 t6;
    t0 = *(s32 *)(*(u8 * *)(arg0 + 0x38) + 0x10);
    func_ov083_0217079c((s32)arg0, 0x1B, 5, t0, 0xF423F, 2);
    t1 = *(s32 *)(*(u8 * *)(arg0 + 0x38) + 0xC);
    func_ov083_0217079c((s32)arg0, 0x10, 7, t1, (0x3EC - 5), 2);
    t2 = *(s32 *)(*(u8 * *)(arg0 + 0x38) + 0x14);
    func_ov083_0217079c((s32)arg0, 0x13, 7, t2, 0x63, 2);
    t3 = *(s32 *)(*(u8 * *)(arg0 + 0x38) + 0x18);
    func_ov083_0217079c((s32)arg0, 0x1B, 7, t3, 0xF423F, 2);
    t4 = *(s32 *)(*(u8 * *)(arg0 + 0x38) + 0x1C);
    func_ov083_0217079c((s32)arg0, 0x1B, 9, t4, 0x98967F, 5);
    r5 = 0xC0;
    v5 = func_0209d668();
    if (((v5 == 0 || (v6 = func_0209d668(), v6 == 1)) || (v7 = func_0209d668(), v7 == 3))) {
        r5 = 0xC8;
    }
    t5 = *(s32 *)(*(u8 * *)(arg0 + 0x38) + 0x20);
    func_ov083_0217079c((s32)arg0, (r5 / 8), 0xC, t5, 0xF423F, 3);
    t6 = *(s32 *)(*(u8 * *)(arg0 + 0x38) + 0x24);
    func_ov083_0217079c((s32)arg0, (r5 / 8), 0xE, t6, 0xF423F, 4);
    v10 = func_ov083_02170850((s32)arg0);
    return v10;
}

extern "C" asm void func_ov083_02170aa4(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    ldr r1, [r4, #8]
    cmp r1, #5
    addls pc, pc, r1, lsl #2
    ldmia sp!, {r4, pc}
    ldmia sp!, {r4, pc}
    b @L_02170ad4
    b @L_02170af4
    ldmia sp!, {r4, pc}
    b @L_02170b10
    b @L_02170b44
@L_02170ad4:
    add r0, r4, #0x3c
    mov r1, #0xf
    bl func_ov015_02134118
    cmp r0, #0
    ldmeqia sp!, {r4, pc}
    mov r0, r4
    bl func_ov083_021700ec
    ldmia sp!, {r4, pc}
@L_02170af4:
    bl func_ov083_0217023c
    cmp r0, #0
    ldmeqia sp!, {r4, pc}
    mov r0, r4
    mov r1, #3
    bl func_ov083_021701e4
    ldmia sp!, {r4, pc}
@L_02170b10:
    bl func_ov083_0217094c
    ldr r0, [r4, #4]
    mov r1, #1
    ldr r2, [r0]
    ldr r2, [r2, #0x40]
    blx r2
    ldr r0, [r4, #0x38]
    cmp r0, #0
    ldmeqia sp!, {r4, pc}
    mov r0, r4
    mov r1, #5
    bl func_ov083_021701e4
    ldmia sp!, {r4, pc}
@L_02170b44:
    bl func_ov083_0217094c
    ldmia sp!, {r4, pc}
}

extern "C" s32 func_ov083_02170b4c(u8 *arg0)
{
    s32 r1;
    s32 v1;
    s32 v5;
    r1 = *(s32 *)(arg0 + 0x8);
    switch (r1) {
        default:
            return (s32)arg0;
        case 3:
            func_ov083_02170634((s32)arg0);
            v1 = ((s32 (*)(...))func_ov083_021701e4)(arg0, 4);
            return v1;
        case 5:
            DC_FlushRange((u8 *)((u8 *)&data_020d2d20), 0x800);
            func_020036e8((u8 *)((u8 *)&data_020d2d20), 0, 0x800);
            DC_FlushRange((u8 *)((u8 *)&data_020d2520), 0x800);
            v5 = func_020037c8((u8 *)((u8 *)&data_020d2520), 0, 0x800);
            return v5;
    }
}

extern "C" void func_ov083_02170bd4(u8 *arg0)
{
    *(s32 *)(arg0 + 0x8) = 0;
    *(s32 *)(arg0 + 0x38) = 0;
    MI_CpuFill8((arg0 + 0x3C), 0, 0xB4);
    func_ov015_02133e24((arg0 + 0x10), 2);
    _ZN17UnkClass_020621b413func_02077bd4Ev((s32)data_020e88a0);
    s32 v3 = func_ov001_02122cbc();
    if (v3 == 0)
        return;
    func_ov015_02133e50((arg0 + 0x10), 2, 6);
    func_ov015_02133e50((arg0 + 0x24), 0xF, 6);
    func_ov083_0216ffc0((s32)arg0, 1);
}

extern "C" void func_ov083_02170c50(s32 arg0)
{
    func_ov015_02134198((arg0 + 0x3C), 0xF);
    func_ov083_021701ac(arg0);
    _ZN17UnkClass_020621b413func_02077ce4Ev((s32)data_020e88a0);
}

extern "C" s32 func_ov083_02170c7c(s32 arg0)
{
    _ZdlPv(arg0);
    return arg0;
}

extern "C" void func_ov083_02170c90(void)
{
}
