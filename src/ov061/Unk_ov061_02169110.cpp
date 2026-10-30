#include "ov061/Unk_ov061_02169110.hpp"

extern "C" void func_ov061_02169110(void);
extern "C" void func_ov061_0216912c(void);
extern "C" void func_ov061_021692d4(void);
extern "C" void func_ov061_0216933c(void);
extern "C" void func_ov061_021693e8(void);
extern "C" void func_ov061_0216961c(void);
extern "C" void func_ov061_02169668(s32 arg0);
extern "C" void func_ov061_02169694(void);
extern "C" s32 func_ov061_021696cc(...);
extern "C" void func_ov061_02169734(s32 arg0, s32 arg1);
extern "C" void func_ov061_02169780(void);
extern "C" void func_ov061_021699a8(void);
extern "C" void func_ov061_02169a60(void);
extern "C" void func_ov061_02169bc8(void);
extern "C" s32 func_ov061_02169c40(s32 arg0);
extern "C" s32 func_ov061_02169c54(u8 *arg0);
extern "C" void func_ov061_02169c5c(void);

extern "C" char data_020c4648[];
extern "C" char data_020c4678[];
extern "C" char data_020c46bc[];
extern "C" char data_020c4824[];
extern "C" char data_020c484c[];
extern "C" char data_020c9660[];
extern "C" char data_020e88a0[];
extern "C" char data_020f98a0[];
extern "C" char data_ov001_0213062c[];
extern "C" char data_ov001_02130678[];
extern "C" char data_ov061_02169c70[];
extern "C" char data_ov061_02169ca0[];
extern "C" char data_ov061_02169d40[];
extern "C" char data_ov061_0216a130[];
extern "C" char data_ov061_0216a13c[];
extern "C" char data_ov061_0216a144[];
extern "C" char data_ov061_0216a14c[];
extern "C" char data_ov061_0216a154[];
extern "C" char data_ov061_0216a15c[];
extern "C" char data_ov061_0216a164[];
extern "C" void MI_CpuFill8(void);
extern "C" void _ZN17UnkClass_020621b413func_0206a964Ei(void);
extern "C" s32 _ZN17UnkClass_020621b413func_0206ad94Ev(...);
extern "C" void _ZN17UnkClass_020621b413func_0206ceacEv(void);
extern "C" void _ZN17UnkClass_020621b413func_0206dedcEv(void);
extern "C" void _ZN17UnkClass_020621b413func_02078c70Ev(void);
extern "C" s32 _ZdlPv(...);
extern "C" void func_0208dc5c(void);
extern "C" void func_0208f2d0(void);
extern "C" void func_ov001_02125e98(void);
extern "C" void func_ov001_0212602c(void);
extern "C" void func_ov001_0212617c(void);
extern "C" void func_ov001_021261b4(void);
extern "C" void func_ov001_02126240(void);
extern "C" void func_ov015_02130b14(void);
extern "C" void func_ov015_02131cd4(void);
extern "C" void func_ov015_02131d4c(void);
extern "C" void func_ov015_02131da0(void);
extern "C" void func_ov015_02132224(void);
extern "C" void func_ov015_021322b0(void);
extern "C" void func_ov015_021322d8(void);
extern "C" void func_ov015_02133e50(void);
extern "C" void func_ov015_02133e8c(void);
extern "C" void func_ov015_02134118(void);
extern "C" void func_ov015_02134198(void);
extern "C" s32 func_ov015_02134208(...);
extern "C" void func_ov015_0213447c(void);
extern "C" void func_ov015_02134504(void);
extern "C" void func_ov015_02134554(void);
extern "C" void func_ov015_02136680(void);
extern "C" void func_ov015_02136734(void);
extern "C" void func_ov015_0213782c(void);
extern "C" void func_ov015_0213a688(void);
extern "C" void func_ov015_0213a690(void);
extern "C" void func_ov015_0213a8b8(void);
extern "C" void func_ov015_0213b364(void);
extern "C" void func_ov015_0213b3fc(void);
extern "C" s32 func_ov015_0213bfcc(...);
extern "C" void func_ov015_0213c33c(void);
extern "C" void func_ov061_02166514(void);
extern "C" void func_ov061_02167130(void);
extern "C" void func_ov061_0216719c(void);
extern "C" void func_ov061_021672b4(void);
extern "C" void func_ov061_021677f0(void);
extern "C" void func_ov061_02167b50(void);
extern "C" void func_ov061_02167b70(void);
extern "C" void func_ov061_0216899c(void);
extern "C" s32 func_ov061_02168c4c(...);
extern "C" void func_ov061_02168cf0(void);
extern "C" void func_ov087_0217fde0(void);
extern "C" void func_ov087_02181e68(void);
extern "C" void gGameState(void);

extern "C" asm void func_ov061_02169110(void)
{
    mov r3, #0xc
    mla r0, r1, r3, r0
    ldr r0, [r0, #0x464]
    ldr r12, =func_ov015_021322b0
    mov r1, #0
    bx r12
}

extern "C" asm void func_ov061_0216912c(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r5, r0
    cmp r1, #0
    beq @L_0216921c
    ldr r0, =data_020e88a0
    bl _ZN17UnkClass_020621b413func_0206ceacEv
    cmp r0, #4
    addls pc, pc, r0, lsl #2
    b @L_02169164
    b @L_02169164
    b @L_02169164
    b @L_02169170
    b @L_0216917c
    b @L_02169188
@L_02169164:
    mov r0, r5
    mov r1, #0x10
    b @L_02169190
@L_02169170:
    mov r0, r5
    mov r1, #0x11
    b @L_02169190
@L_0216917c:
    mov r0, r5
    mov r1, #0x12
    b @L_02169190
@L_02169188:
    mov r0, r5
    mov r1, #0x13
@L_02169190:
    mov r2, #2
    bl func_ov061_02169110
    mov r0, r5
    mov r1, #0xe
    mov r2, #3
    bl func_ov061_02169110
    mov r0, r5
    mov r1, #0xf
    mov r2, #4
    bl func_ov061_02169110
    mov r4, #0
    mov r7, r4
    mov r6, #0xc
    b @L_0216920c
@L_021691c8:
    add r0, r5, r4, lsl #1
    ldrh r0, [r0, #0x38]
    mov r1, r7
    bl func_ov015_02130b14
    cmp r0, #0
    beq @L_02169208
    mov r0, r5
    add r1, r4, #0x1b
    add r2, r4, #9
    bl func_ov061_02169110
    add r1, r4, #0x1f
    mla r0, r1, r6, r5
    ldr r0, [r0, #0x464]
    mov r1, r7
    add r2, r4, #5
    bl func_ov015_021322d8
@L_02169208:
    add r4, r4, #1
@L_0216920c:
    ldr r0, [r5, #0x28]
    cmp r4, r0
    blt @L_021691c8
    b @L_021692c0
@L_0216921c:
    mov r4, #0
    ldr r7, =data_ov061_02169c70
    mvn r6, #0
    b @L_02169248
@L_0216922c:
    mov r1, r4, lsl #1
    add r0, r7, r4, lsl #1
    ldrsb r1, [r7, r1]
    ldrsb r2, [r0, #1]
    mov r0, r5
    bl func_ov061_02169110
    add r4, r4, #1
@L_02169248:
    add r0, r7, r4, lsl #1
    ldrsb r0, [r0, #1]
    cmp r0, r6
    bne @L_0216922c
    ldr r0, =gGameState
    ldrb r0, [r0, #0x1a]
    cmp r0, #0
    beq @L_021692c0
    mov r6, #4
    mov r4, #3
    mov r0, r5
    mov r1, r6
    mov r2, r4
    bl func_ov061_02169110
    mov r0, r5
    mov r2, r4
    mov r1, #5
    bl func_ov061_02169110
    mov r0, r5
    mov r1, #2
    mov r2, #8
    bl func_ov061_02169110
    mov r0, r5
    mov r2, r6
    mov r1, #6
    bl func_ov061_02169110
    mov r0, r5
    mov r2, r6
    mov r1, #7
    bl func_ov061_02169110
@L_021692c0:
    bl func_ov015_02132224
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm void func_ov061_021692d4(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    mov r5, r0
    ldr r0, [r5, #0x28]
    mov r4, #0
    cmp r0, #0
    ldmleia sp!, {r4, r5, r6, r7, r8, pc}
    ldr r7, =data_020c46bc
    mov r8, r4
    mov r6, #0xc
@L_021692f8:
    add r0, r5, r4, lsl #1
    ldrh r0, [r0, #0x38]
    mov r1, r8
    bl func_ov015_02130b14
    cmp r0, #0
    mlane r1, r4, r6, r5
    ldrne r1, [r1, #0x5d8]
    cmpne r1, #0
    beq @L_02169324
    ldr r2, [r7]
    bl func_ov015_02131da0
@L_02169324:
    ldr r0, [r5, #0x28]
    add r4, r4, #1
    cmp r4, r0
    blt @L_021692f8
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

extern "C" asm void func_ov061_0216933c(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    sub sp, sp, #0x28
    add r6, sp, #8
    mov r10, r0
    mov r8, #0
    ldr r0, =data_020e88a0
    mov r2, r6
    str r8, [sp]
    mov r4, #0x80
    mov r1, #1
    mov r3, #0x10
    str r4, [sp, #4]
    bl _ZN17UnkClass_020621b413func_02078c70Ev
    mov r7, r0
    mov r9, r8
    mov r4, #1
    mov r5, r8
    b @L_021693c8
@L_02169384:
    mov r0, r9, lsl #1
    ldrh r0, [r6, r0]
    mov r1, r5
    bl func_ov015_02130b14
    cmp r0, #0
    beq @L_021693c4
    ldrh r0, [r0, #0xf0]
    tst r0, #8
    movne r0, r4
    moveq r0, r5
    cmp r0, #0
    movne r0, r9, lsl #1
    ldrneh r1, [r6, r0]
    addne r0, r10, r8, lsl #1
    addne r8, r8, #1
    strneh r1, [r0, #0x38]
@L_021693c4:
    add r9, r9, #1
@L_021693c8:
    cmp r9, r7
    bge @L_021693d8
    cmp r8, #4
    blt @L_02169384
@L_021693d8:
    str r8, [r10, #0x28]
    add sp, sp, #0x28
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
}

extern "C" asm void func_ov061_021693e8(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x10
    mov r10, r0
    str r1, [r10, #0xc]
    cmp r1, #1
    beq @L_0216940c
    cmp r1, #2
    beq @L_02169470
    b @L_021695e8
@L_0216940c:
    add r0, r10, #0x64
    add r0, r0, #0x400
    mov r1, #0
    mov r2, #0x1a4
    bl MI_CpuFill8
    add r1, r10, #0x64
    ldr r0, =data_ov061_0216a130
    add r1, r1, #0x400
    bl func_ov001_0212602c
    mov r0, r10
    bl func_ov061_02167b70
    cmp r0, #0
    beq @L_021695e8
    add r1, r10, #0x154
    ldr r0, =data_ov061_0216a13c
    add r1, r1, #0x400
    bl func_ov001_0212617c
    ldr r0, =data_ov061_0216a144
    add r1, r10, #0x560
    bl func_ov001_0212617c
    add r1, r10, #0x16c
    ldr r0, =data_ov061_0216a14c
    add r1, r1, #0x400
    bl func_ov001_0212617c
    b @L_021695e8
@L_02169470:
    bl func_ov061_02167b70
    cmp r0, #0
    beq @L_021695e8
    ldr r0, =data_020e88a0
    mov r1, #1
    bl _ZN17UnkClass_020621b413func_0206a964Ei
    mov r7, r0
    mov r0, r10
    bl func_ov061_0216933c
    ldr r0, [r10, #0x28]
    mov r8, #0
    cmp r0, #0
    ble @L_021695e8
    add r0, r10, #0x64
    add r4, r0, #0x400
    add r11, sp, #8
@L_021694b0:
    add r0, r10, r8, lsl #1
    ldrh r0, [r0, #0x38]
    mov r1, #0
    bl func_ov015_02130b14
    movs r6, r0
    beq @L_021695d8
    ldr r0, [r10, #0x554]
    cmp r0, #0
    beq @L_02169514
    mov r1, r6
    mov r2, #0
    add r3, sp, #0xc
    str r11, [sp]
    bl func_ov015_0213447c
    cmp r0, #0
    beq @L_02169514
    add r2, r8, #0x1b
    mov r1, #0xc
    mla r1, r2, r1, r4
    mov r0, #1
    str r0, [sp]
    ldr r0, =data_ov061_0216a154
    ldr r2, [sp, #0xc]
    ldr r3, [sp, #8]
    bl func_ov001_021261b4
@L_02169514:
    mov r0, r7
    mov r1, r6
    bl func_ov015_02131d4c
    ldrh r1, [r7, #0x28]
    mov r5, r0
    mov r0, r6
    cmp r1, #0
    ldreqh r1, [r7, #0x26]
    bl func_ov015_02131cd4
    mov r9, r0
    ldr r0, [r10, #0x560]
    cmp r0, #0
    beq @L_0216958c
    add r2, sp, #0xc
    stmia sp, {r2, r11}
    mov r1, r6
    mov r2, r9
    mov r3, r5
    bl func_ov015_02134504
    cmp r0, #0
    beq @L_0216958c
    add r2, r8, #0x17
    mov r1, #0xc
    mla r1, r2, r1, r4
    mov r0, #1
    str r0, [sp]
    ldr r0, =data_ov061_0216a15c
    ldr r2, [sp, #0xc]
    ldr r3, [sp, #8]
    bl func_ov001_021261b4
@L_0216958c:
    ldr r0, [r10, #0x56c]
    cmp r0, #0
    beq @L_021695d8
    mov r1, r9
    mov r2, r5
    add r3, sp, #0xc
    str r11, [sp]
    bl func_ov015_02134554
    cmp r0, #0
    beq @L_021695d8
    add r2, r8, #0x1f
    mov r1, #0xc
    mla r1, r2, r1, r4
    mov r0, #0
    str r0, [sp]
    ldr r0, =data_ov061_0216a164
    ldr r2, [sp, #0xc]
    ldr r3, [sp, #8]
    bl func_ov001_021261b4
@L_021695d8:
    add r8, r8, #1
    ldr r0, [r10, #0x28]
    cmp r8, r0
    blt @L_021694b0
@L_021695e8:
    mov r0, r10
    mov r1, #1
    bl func_ov061_021672b4
    add sp, sp, #0x10
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_ov061_0216961c(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    ldr r0, =data_020e88a0
    bl _ZN17UnkClass_020621b413func_0206dedcEv
    cmp r0, #0
    add r1, r4, #0x64
    ldr r0, [r4, #0x464]
    beq @L_0216964c
    ldr r2, =data_ov061_02169d40
    add r1, r1, #0x400
    bl func_ov001_02126240
    ldmia sp!, {r4, pc}
@L_0216964c:
    ldr r2, =data_ov061_02169ca0
    add r1, r1, #0x400
    bl func_ov001_02126240
    ldmia sp!, {r4, pc}
}

extern "C" void func_ov061_02169668(s32 arg0)
{
    s32 r4;
    s32 r5;
    s32 r6;
    r6 = 0;
    do {
        func_ov015_02134208(((r6 * 0xC) + ((arg0 + 0x64) + 0x400)));
        r4 = 0xC;
        r5 = ((arg0 + 0x64) + 0x400);
        r6 = (r6 + 1);
    } while (r6 < 0x23);
    return;
}

extern "C" asm void func_ov061_02169694(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    add r0, r4, #0x64
    add r0, r0, #0x4f0
    bl func_ov015_02134208
    add r0, r4, #0x64
    add r0, r0, #0x400
    add r0, r0, #0xfc
    bl func_ov015_02134208
    add r0, r4, #0x64
    add r0, r0, #0x400
    add r0, r0, #0x108
    bl func_ov015_02134208
    ldmia sp!, {r4, pc}
}

extern "C" asm s32 func_ov061_021696cc(...)
{
    stmdb sp!, {r4, lr}
    mov r4, r1
    ldr r1, [r0, #0x14]
    cmp r1, #0
    blt @L_021696f0
    ldr r0, =data_020c4648
    ldr r0, [r0]
    bl func_ov015_0213a688
    b @L_021696fc
@L_021696f0:
    ldr r0, =data_020c4648
    ldr r0, [r0]
    bl func_ov015_0213a690
@L_021696fc:
    ldr r0, =data_020c4648
    mov r1, r4
    ldr r0, [r0]
    mov r2, #0
    bl func_ov015_0213782c
    ldr r0, =data_020c4678
    ldr r1, =data_020c484c
    ldr r0, [r0]
    ldr r1, [r1]
    bl func_0208dc5c
    ldmia sp!, {r4, pc}
}

extern "C" void func_ov061_02169734(s32 arg0, s32 arg1)
{
    _ZN17UnkClass_020621b413func_0206ad94Ev((s32)data_020e88a0, 1, 0);
    func_ov061_02168c4c(arg0);
    func_ov015_0213bfcc((s32)data_020c9660, 0);
    func_ov061_021696cc(arg0, arg1);
}

extern "C" asm void func_ov061_02169780(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r5, r0
    ldr r2, [r5, #8]
    mov r4, r1
    cmp r2, #0xf
    addls pc, pc, r2, lsl #2
    b @L_02169978
    b @L_02169978
    b @L_021697dc
    b @L_02169978
    b @L_02169874
    b @L_0216996c
    b @L_0216996c
    b @L_0216996c
    b @L_02169894
    b @L_021698d4
    b @L_0216996c
    b @L_02169904
    b @L_02169928
    b @L_0216996c
    b @L_0216996c
    b @L_0216996c
    b @L_0216996c
@L_021697dc:
    ldr r0, =data_020c4648
    ldr r0, [r0]
    bl func_ov015_0213a8b8
    cmp r0, #0
    beq @L_02169978
    add r0, r5, #0x64
    add r0, r0, #0x400
    mov r1, #0x23
    bl func_ov015_02134118
    cmp r0, #0
    beq @L_02169978
    ldr r0, [r5, #0xc]
    cmp r0, #1
    beq @L_02169820
    cmp r0, #2
    beq @L_02169850
    b @L_02169978
@L_02169820:
    mov r0, r5
    bl func_ov061_0216961c
    mov r0, r5
    bl func_ov061_02167b70
    cmp r0, #0
    mov r0, r5
    mov r1, #2
    bne @L_02169848
@L_02169840:
    bl func_ov061_021672b4
    b @L_02169978
@L_02169848:
    bl func_ov061_021693e8
    b @L_02169978
@L_02169850:
    mov r0, r5
    bl func_ov061_02166514
    mov r0, r5
    bl func_ov061_021692d4
    mov r0, r5
    bl func_ov061_02169694
    mov r0, r5
    mov r1, #2
    b @L_02169840
@L_02169874:
    ldr r0, =data_020c4648
    ldr r0, [r0]
    bl func_ov015_0213a8b8
    cmp r0, #0
    beq @L_02169978
    mov r0, r5
    mov r1, #9
    b @L_02169840
@L_02169894:
    ldr r2, [r5, #0x50]
    cmp r2, #0
    ble @L_021698c8
    ldr r1, [r5, #0x4c]
    sub r3, r2, #1
    sub r2, r1, #4
    str r3, [r5, #0x50]
    str r2, [r5, #0x4c]
    ldr r3, [r0]
    ldr r1, [r5, #0x48]
    ldr r3, [r3, #0x8c]
    blx r3
    b @L_021698d0
@L_021698c8:
    mov r1, #8
    bl func_ov061_021672b4
@L_021698d0:
    b @L_0216996c
@L_021698d4:
    ldr r1, [r0]
    ldr r1, [r1, #0x58]
    blx r1
    cmp r0, #0
    bne @L_02169900
    ldr r3, [r5, #0x54]
    ldr r2, =data_ov001_0213062c
    mov r0, r5
    mov r1, #9
    str r3, [r2]
    bl func_ov061_021672b4
@L_02169900:
    b @L_0216996c
@L_02169904:
    ldr r1, [r0]
    ldr r1, [r1, #0x58]
    blx r1
    cmp r0, #0
    bne @L_02169924
    mov r0, r5
    mov r1, #0xc
    bl func_ov061_021672b4
@L_02169924:
    b @L_0216996c
@L_02169928:
    bl func_ov001_02125e98
    cmp r0, #0
    beq @L_0216994c
    mov r2, #1
    mov r0, r5
    mov r1, #9
    strb r2, [r5, #0x20]
    bl func_ov061_021672b4
    b @L_0216996c
@L_0216994c:
    mov r0, r5
    bl func_ov061_0216899c
    cmp r0, #0
    beq @L_0216996c
    ldrb r0, [r5, #0x22]
    cmp r0, #0
    moveq r0, #1
    streqb r0, [r5, #0x20]
@L_0216996c:
    mov r0, r5
    mov r1, r4
    bl func_ov061_02169734
@L_02169978:
    ldr r0, [r5, #8]
    cmp r0, #9
    ldmneia sp!, {r3, r4, r5, pc}
    ldr r0, =gGameState
    ldrb r0, [r0, #0x1a]
    cmp r0, #0
    ldmeqia sp!, {r3, r4, r5, pc}
    bl func_ov001_02125e98
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_ov061_021699a8(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    ldr r1, [r4, #8]
    cmp r1, #0xf
    addls pc, pc, r1, lsl #2
    ldmia sp!, {r4, pc}
    ldmia sp!, {r4, pc}
    ldmia sp!, {r4, pc}
    b @L_02169a00
    ldmia sp!, {r4, pc}
    b @L_02169a10
    b @L_02169a10
    b @L_02169a2c
    b @L_02169a1c
    b @L_02169a1c
    b @L_02169a1c
    b @L_02169a1c
    b @L_02169a1c
    b @L_02169a10
    b @L_02169a10
    b @L_02169a10
    b @L_02169a1c
@L_02169a00:
    bl func_ov061_02168cf0
    mov r0, r4
    bl func_ov061_021677f0
    ldmia sp!, {r4, pc}
@L_02169a10:
    ldr r1, [r0]
    ldr r1, [r1, #0x3c]
    blx r1
@L_02169a1c:
    ldr r0, =data_020c9660
    mov r1, #0
    bl func_ov015_0213c33c
    ldmia sp!, {r4, pc}
@L_02169a2c:
    ldr r1, [r4, #0x24]
    cmp r1, #1
    bne @L_02169a40
    bl func_ov061_02167130
    b @L_02169a4c
@L_02169a40:
    cmp r1, #5
    bne @L_02169a4c
    bl func_ov061_0216719c
@L_02169a4c:
    ldr r0, =data_020c9660
    mov r1, #0
    bl func_ov015_0213c33c
    ldmia sp!, {r4, pc}
}

extern "C" asm void func_ov061_02169a60(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    mov r4, #0
    mov r5, r0
    sub r1, r4, #1
    ldr r3, =data_ov001_02130678
    add r0, r5, #0x14
    str r4, [r5, #8]
    strb r4, [r5, #0x10]
    str r1, [r5, #0x18]
    str r1, [r5, #0x1c]
    str r1, [r5, #0x14]
    strb r4, [r5, #0x21]
    strb r4, [r5, #0x40b]
    strb r4, [r5, #0x40a]
    strb r4, [r5, #0x409]
    strb r4, [r5, #0x408]
    strb r4, [r5, #0x40c]
    mov r6, #0x80000000
    str r6, [r3]
    str r6, [r3, #4]
    str r6, [r3, #8]
    mov r1, r4
    add r0, r0, #0x400
    mov r2, #0x50
    str r6, [r3, #0xc]
    bl MI_CpuFill8
    mov r1, r4
    add r0, r5, #0x24
    mov r2, #0x24
    bl MI_CpuFill8
    add r0, r5, #0x14
    add r9, r0, #0x400
    mov r8, #8
    mov r7, #2
    mov r6, #0x14
    b @L_02169b04
@L_02169af0:
    mla r0, r4, r6, r9
    mov r1, r8
    mov r2, r7
    bl func_ov015_02133e50
    add r4, r4, #1
@L_02169b04:
    cmp r4, #4
    blt @L_02169af0
    mov r7, #0
    ldr r0, =data_020c9660
    mov r1, r7
    bl func_ov015_0213b364
    mov r6, #1
    mov r0, r5
    mov r1, r6
    bl func_ov061_021693e8
    ldr r4, =data_020c4648
    ldr r1, =0x1869
    ldr r0, [r4]
    bl func_ov015_02136734
    ldr r1, [r4]
    ldr r0, =data_020f98a0
    str r6, [r1, #0x184]
    str r7, [r1, #0x1a8]
    ldrb r0, [r0, #0x89f]
    cmp r0, #0
    bne @L_02169b74
    mov r0, r5
    bl func_ov061_02167b50
    cmp r0, #0
    beq @L_02169b74
    ldr r0, =data_020e88a0
    mov r1, r6
    b @L_02169b7c
@L_02169b74:
    ldr r0, =data_020e88a0
    mov r1, #0
@L_02169b7c:
    bl func_ov087_0217fde0
    ldr r1, =data_020f98a0
    mov r2, #0
    strb r2, [r1, #0x89f]
    strb r2, [r1, #0x905]
    strb r2, [r1, #0x906]
    strb r2, [r1, #0x907]
    ldr r0, =data_020c4824
    strb r2, [r1, #0x908]
    ldr r0, [r0]
    bl func_0208f2d0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

extern "C" asm void func_ov061_02169bc8(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    ldr r1, =data_020c4648
    mov r5, r0
    ldr r0, [r1]
    bl func_ov015_02136680
    mov r4, #0
    ldr r0, =data_020c9660
    mov r1, r4
    bl func_ov015_0213b3fc
    ldr r0, =data_020e88a0
    bl func_ov087_02181e68
    mov r0, r5
    ldr r1, [r0]
    ldr r1, [r1, #0x6c]
    blx r1
    add r0, r5, #0x64
    add r0, r0, #0x400
    mov r1, #0x23
    str r4, [r5, #8]
    bl func_ov015_02134198
    mov r0, r5
    bl func_ov061_02169668
    add r0, r5, #0x14
    add r0, r0, #0x400
    mov r1, #4
    bl func_ov015_02133e8c
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" s32 func_ov061_02169c40(s32 arg0)
{
    _ZdlPv(arg0);
    return arg0;
}

extern "C" s32 func_ov061_02169c54(u8 *arg0)
{
    return *(s32 *)(arg0 + 0x8);
}

extern "C" void func_ov061_02169c5c(void)
{
}
