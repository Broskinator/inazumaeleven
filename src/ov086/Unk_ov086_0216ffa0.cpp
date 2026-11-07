#include "ov086/Unk_ov086_0216ffa0.hpp"
#include "game/vcall.hpp"

extern "C" s32 func_ov086_0216ffa0(u8 *arg0, s32 arg1);
extern "C" void func_ov086_02170010(void);
extern "C" s32 func_ov086_02170128(s32 arg0);
extern "C" s32 func_ov086_02170188(...);
extern "C" void func_ov086_021704d0(u8 *arg0);
extern "C" s32 func_ov086_021704f8(...);
extern "C" void func_ov086_02170520(void);
extern "C" s32 func_ov086_021705fc(...);
extern "C" void func_ov086_021709ac(void);
extern "C" s32 func_ov086_02170c58(...);
extern "C" s32 func_ov086_02170cfc(u8 *arg0);
extern "C" s32 func_ov086_02170dfc(u8 *arg0);
extern "C" void func_ov086_02170e98(void);
extern "C" s32 func_ov086_02170fa0(u8 *arg0);
extern "C" s32 func_ov086_02170ffc(u8 *arg0);
extern "C" s32 func_ov086_0217104c(s32 arg0);
extern "C" void func_ov086_02171060(void);

extern "C" char data_020c46b4[];
extern "C" char data_020c46bc[];
extern "C" char data_020c47b4[];
extern "C" char data_020c9660[];
extern "C" char data_020d3520[];
extern "C" char data_020e88a0[];
extern "C" char data_ov001_02130630[];
extern "C" char data_ov086_02171064[];
extern "C" char data_ov086_02171194[];
extern "C" char data_ov086_021711b0[];
extern "C" char data_ov086_021711bc[];
extern "C" char data_ov086_021711c8[];
extern "C" char data_ov086_021711d0[];
extern "C" char data_ov086_021711d8[];
extern "C" char data_ov086_021711e0[];
extern "C" char data_ov086_021711ec[];
extern "C" char data_ov086_021711f4[];
extern "C" char data_ov086_021711fc[];
extern "C" void DC_FlushRange(void);
extern "C" void G2S_GetBG0CharPtr(void);
extern "C" void G2S_GetBG1CharPtr(void);
extern "C" void G2S_GetBG2CharPtr(void);
extern "C" s32 MI_CpuFill8(...);
extern "C" void MIi_CpuClearFast(void);
extern "C" s32 _ZN17UnkClass_0203dc7c13func_0203e254Ev(...);
extern "C" s32 _ZN17UnkClass_0203dc7c13func_0203e2b0Ei(...);
extern "C" void _ZN17UnkClass_020621b413func_0206a964Ei(void);
extern "C" void _ZN17UnkClass_020621b413func_0207f7ccEv(void);
extern "C" s32 _ZN8GameHeap4FreeEPv(...);
extern "C" s32 _ZdlPv(...);
extern "C" void func_02003608(void);
extern "C" void func_020036e8(void);
extern "C" void func_020037c8(void);
extern "C" void func_02003b48(void);
extern "C" s32 func_ov001_02122c70(...);
extern "C" s32 func_ov001_02125f64(...);
extern "C" void func_ov001_0212602c(void);
extern "C" void func_ov001_021260f0(void);
extern "C" void func_ov001_02126128(void);
extern "C" void func_ov001_0212617c(void);
extern "C" void func_ov001_021261b4(void);
extern "C" s32 func_ov001_02126240(...);
extern "C" void func_ov001_021263a0(void);
extern "C" s32 func_ov015_02130b14(...);
extern "C" void func_ov015_02130c18(void);
extern "C" void func_ov015_02131cd4(void);
extern "C" void func_ov015_02131d4c(void);
extern "C" s32 func_ov015_02131da0(...);
extern "C" void func_ov015_02132240(void);
extern "C" void func_ov015_021322b0(void);
extern "C" void func_ov015_021322d8(void);
extern "C" void func_ov015_02132984(void);
extern "C" void func_ov015_02132b7c(void);
extern "C" void func_ov015_02133d50(void);
extern "C" s32 func_ov015_02133d84(...);
extern "C" void func_ov015_02134024(void);
extern "C" void func_ov015_02134118(void);
extern "C" s32 func_ov015_02134198(...);
extern "C" void func_ov015_02134208(void);
extern "C" void func_ov015_02134300(void);
extern "C" void func_ov015_0213447c(void);
extern "C" void func_ov015_02134504(void);
extern "C" void func_ov015_02134554(void);
extern "C" s32 func_ov015_0213b364(...);
extern "C" s32 func_ov015_0213b3fc(...);
extern "C" void func_ov015_0213b540(void);
extern "C" void func_ov015_0213b990(void);
extern "C" s32 func_ov015_0213ba04(...);
extern "C" s32 func_ov015_0213bf84(...);
extern "C" s32 func_ov015_0213bfcc(...);
extern "C" s32 func_ov015_0213c33c(...);
extern "C" void gGameState(void);

extern "C" s32 func_ov086_0216ffa0(u8 *arg0, s32 arg1)
{
    s32 r0;
    s32 r1;
    switch (arg1) {
        case 1:
            r1 = 1;
            *(s32 *)(arg0 + 0xC) = r1;
            r0 = 4;
            *(s32 *)(arg0 + 0x8) = r0;
            break;
        case 2:
            r1 = 2;
            *(s32 *)(arg0 + 0xC) = r1;
            r0 = 4;
            *(s32 *)(arg0 + 0x8) = r0;
            break;
        case 3:
            func_ov086_02170c58();
            *(s32 *)(arg0 + 0x18) = 4;
            *(s32 *)(arg0 + 0x1C) = 0;
            break;
        case 5:
        case 6:
            r0 = 0;
            *(s32 *)(arg0 + 0x8) = r0;
            break;
        case 0:
        case 4:
            break;
    }
    return 0;
}

extern "C" asm void func_ov086_02170010(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    sub sp, sp, #0x18
    mov r9, r0
    mov r6, #0
    mov r1, r6
    add r0, r9, #0x28
    mov r2, #0x18
    bl MI_CpuFill8
    ldr r1, [r9, #0x154]
    cmp r1, #0
    addeq sp, sp, #0x18
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    ldr r0, [r9, #0xc]
    mov r8, r6
    sub r5, r0, #1
    add r7, r1, #0x2a
    add r10, sp, #0
    mov r4, r6
@L_02170058:
    ldrb r1, [r7]
    cmp r1, #0
    beq @L_02170094
    mov r0, r5
    mov r2, r4
    bl func_ov015_02130c18
    cmp r0, #0
    beq @L_02170094
    ldrh r1, [r0, #0x42]
    add r0, r9, r6, lsl #2
    strh r1, [r0, #0x28]
    strh r8, [r0, #0x2a]
    ldrb r0, [r7, #6]
    str r0, [r10, r6, lsl #2]
    add r6, r6, #1
@L_02170094:
    add r8, r8, #1
    cmp r8, #6
    add r7, r7, #7
    blt @L_02170058
    sub r12, r6, #1
    cmp r12, #0
    mov r10, #0
    addle sp, sp, #0x18
    ldmleia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    add r8, sp, #0
@L_021700bc:
    add lr, r10, #1
    cmp lr, r6
    bge @L_02170114
    add r4, r9, r10, lsl #2
@L_021700cc:
    ldr r7, [r8, lr, lsl #2]
    ldr r5, [r8, r10, lsl #2]
    cmp r5, r7
    ble @L_02170108
    add r1, r9, lr, lsl #2
    ldrh r3, [r4, #0x28]
    ldrh r2, [r4, #0x2a]
    ldrh r0, [r1, #0x28]
    str r7, [r8, r10, lsl #2]
    str r5, [r8, lr, lsl #2]
    strh r0, [r4, #0x28]
    ldrh r0, [r1, #0x2a]
    strh r0, [r4, #0x2a]
    strh r3, [r1, #0x28]
    strh r2, [r1, #0x2a]
@L_02170108:
    add lr, lr, #1
    cmp lr, r6
    blt @L_021700cc
@L_02170114:
    add r10, r10, #1
    cmp r10, r12
    blt @L_021700bc
    add sp, sp, #0x18
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
}

extern "C" s32 func_ov086_02170128(s32 arg0)
{
    s32 r1;
    s32 r4;
    s32 r6;
    s32 r7;
    s32 r8;
    s32 v0;
    s32 v1;
    s32 t0;
    r7 = 0;
    r8 = arg0;
    do {
        r4 = 0xC;
        r6 = 0;
        arg0 = *(u16 *)(((u8 *)(r8 + (r7 << 2))) + 0x28);
        if (arg0 != 0) {
            v0 = func_ov015_02130b14(arg0, r6);
            arg0 = v0;
            if ((arg0 != 0 && (r1 = *(s32 *)(((u8 *)((r7 * r4) + r8)) + 0x10C), r1 != 0))) {
                t0 = *(s32 *)(((u8 *)&data_020c46bc));
                v1 = func_ov015_02131da0(arg0, r1, t0);
                arg0 = v1;
            }
        }
        r7 = (r7 + 1);
    } while (r7 < 6);
    return arg0;
}

extern "C" asm s32 func_ov086_02170188(...)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x1c
    mov r4, r0
    str r1, [r4, #0x14]
    cmp r1, #4
    mov r11, #0
    addls pc, pc, r1, lsl #2
    b @L_02170490
    b @L_02170490
    b @L_021701bc
    b @L_02170264
    b @L_021702f0
    b @L_021702f0
@L_021701bc:
    mov r5, r11
    mov r1, r5
    add r0, r4, #0x40
    mov r2, #0x150
    bl MI_CpuFill8
    ldr r0, [r4, #0xc]
    cmp r0, #0
    beq @L_02170490
    cmp r0, #1
    movne r5, #1
    ldr r0, =data_020e88a0
    mov r1, r5
    bl _ZN17UnkClass_020621b413func_0206a964Ei
    ldr r1, =gGameState
    mov r3, #0x60
    ldrb r1, [r1, #0x1a]
    cmp r1, #0
    ldreqh r1, [r0, #0x22]
    ldrneh r1, [r0, #0x3e]
    mul r0, r1, r3
    str r0, [sp, #0x18]
    str r11, [sp]
    ldr r2, [sp, #0x18]
    ldr r0, =data_ov086_02171194
    add r1, r4, #0x154
    bl func_ov015_02134024
    ldr r0, =data_ov086_021711b0
    add r1, r4, #0x40
    bl func_ov001_0212602c
    ldr r0, =data_ov086_021711bc
    add r1, r4, #0x184
    bl func_ov001_021260f0
    ldr r0, =data_ov086_021711c8
    add r1, r4, #0x160
    bl func_ov001_0212617c
    ldr r0, =data_ov086_021711d0
    add r1, r4, #0x16c
    bl func_ov001_0212617c
    ldr r0, =data_ov086_021711d8
    add r1, r4, #0x178
    bl func_ov001_0212617c
    b @L_02170490
@L_02170264:
    ldr r0, [r4, #0xc]
    cmp r0, #1
    beq @L_02170278
    cmp r0, #2
    bne @L_02170490
@L_02170278:
    ldr r0, [r4, #0xc]
    mov r1, #0
    cmp r0, #1
    ldr r0, =data_020e88a0
    movne r1, #1
    bl _ZN17UnkClass_020621b413func_0206a964Ei
    ldr r0, [r4, #0xc]
    cmp r0, #1
    bne @L_021702ac
    movs r0, #1
    movne r1, r0
    moveq r1, #2
    b @L_021702b8
@L_021702ac:
    movs r0, #1
    movne r1, #2
    moveq r1, r0
@L_021702b8:
    ldr r0, [r4, #0x184]
    add r2, sp, #0x14
    add r3, sp, #0x10
    bl func_ov015_02134300
    cmp r0, #0
    beq @L_02170490
    mov r0, #1
    str r0, [sp]
    ldr r2, [sp, #0x14]
    ldr r3, [sp, #0x10]
    ldr r0, =data_ov086_021711e0
    add r1, r4, #0x70
    bl func_ov001_02126128
    b @L_02170490
@L_021702f0:
    ldr r0, [r4, #0xc]
    cmp r0, #1
    beq @L_02170304
    cmp r0, #2
    bne @L_02170490
@L_02170304:
    ldr r0, [r4, #0xc]
    mov r1, #0
    cmp r0, #1
    ldr r0, =data_020e88a0
    movne r1, #1
    bl _ZN17UnkClass_020621b413func_0206a964Ei
    mov r9, r0
    mov r10, #0
    add r5, r4, #0x40
    add r6, sp, #0x18
    b @L_02170488
@L_02170330:
    add r0, r4, r10, lsl #2
    ldrh r0, [r0, #0x28]
    cmp r0, #0
    beq @L_02170484
    mov r1, r11
    bl func_ov015_02130b14
    movs r8, r0
    beq @L_02170484
    ldr r0, [r4, #0x14]
    cmp r0, #3
    bne @L_021703b0
    ldr r0, [r4, #0x160]
    cmp r0, #0
    beq @L_02170484
    add r0, sp, #0xc
    str r0, [sp]
    ldr r0, [r4, #0x160]
    mov r1, r8
    mov r2, r11
    mov r3, r6
    bl func_ov015_0213447c
    cmp r0, #0
    beq @L_02170484
    add r2, r10, #0xb
    mov r1, #0xc
    mov r0, #1
    str r0, [sp]
    mla r1, r2, r1, r5
    ldr r0, =data_ov086_021711ec
    ldr r2, [sp, #0x18]
    ldr r3, [sp, #0xc]
    b @L_02170480
@L_021703b0:
    mov r0, r9
    mov r1, r8
    bl func_ov015_02131d4c
    ldrh r1, [r9, #0x28]
    mov r7, r0
    mov r0, r8
    cmp r1, #0
    ldreqh r1, [r9, #0x26]
    bl func_ov015_02131cd4
    mov r2, r0
    ldr r0, [r4, #0x16c]
    cmp r0, #0
    beq @L_0217042c
    str r6, [sp]
    add r0, sp, #8
    str r0, [sp, #4]
    ldr r0, [r4, #0x16c]
    mov r1, r8
    mov r3, r7
    bl func_ov015_02134504
    cmp r0, #0
    beq @L_0217042c
    add r2, r10, #5
    mov r1, #0xc
    mla r1, r2, r1, r5
    mov r0, #1
    str r0, [sp]
    ldr r0, =data_ov086_021711f4
    ldr r2, [sp, #0x18]
    ldr r3, [sp, #8]
    bl func_ov001_021261b4
@L_0217042c:
    ldr r0, [r4, #0x178]
    cmp r0, #0
    beq @L_02170484
    ldrh r1, [r9, #0x28]
    add r0, sp, #8
    mov r2, r7
    cmp r1, #0
    ldreqh r1, [r9, #0x26]
    mov r3, r6
    str r0, [sp]
    ldr r0, [r4, #0x178]
    bl func_ov015_02134554
    cmp r0, #0
    beq @L_02170484
    add r2, r10, #0x11
    mov r1, #0xc
    mla r1, r2, r1, r5
    str r11, [sp]
    ldr r0, =data_ov086_021711fc
    ldr r2, [sp, #0x18]
    ldr r3, [sp, #8]
@L_02170480:
    bl func_ov001_021261b4
@L_02170484:
    add r10, r10, #1
@L_02170488:
    cmp r10, #6
    blt @L_02170330
@L_02170490:
    mov r0, #1
    str r0, [r4, #8]
    add sp, sp, #0x1c
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" void func_ov086_021704d0(u8 *arg0)
{
    if (*(s32 *)(arg0 + 0x40) == 0)
        return;
    func_ov001_02126240(*(s32 *)(arg0 + 0x40), (arg0 + 0x40), (s32)data_ov086_02171064);
}

extern "C" asm s32 func_ov086_021704f8(...)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r6, #0
    add r5, r0, #0x40
    mov r4, #0xc
@L_02170508:
    mla r0, r6, r4, r5
    bl func_ov015_02134208
    add r6, r6, #1
    cmp r6, #0x1c
    blt @L_02170508
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void func_ov086_02170520(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x1c
    mov r10, r0
    ldr r8, [r10, #0x70]
    mov r9, r1
    cmp r8, #0
    addeq sp, sp, #0x1c
    moveq r0, r9
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r7, #0
    mov r4, #0xf
    mov r11, #1
    mov r6, r7
@L_02170554:
    add r0, r10, r7, lsl #2
    ldrh r0, [r0, #0x28]
    cmp r0, #0
    beq @L_021705d8
    ldr r0, [r8, #0x14]
    ldr r2, [r8, #0x18]
    mov r1, r9
    add r0, r8, r0
    bl func_02003b48
    add r0, r10, r7, lsl #2
    ldrh r0, [r0, #0x28]
    mov r1, r6
    bl func_ov015_02130b14
    movs r5, r0
    beq @L_021705d8
    bl G2S_GetBG2CharPtr
    stmia sp, {r4, r11}
    add r0, r9, r0
    str r0, [sp, #8]
    mov r0, #0x30
    str r0, [sp, #0xc]
    mov r0, #0x10
    str r0, [sp, #0x10]
    str r6, [sp, #0x14]
    ldr r0, =data_020c46b4
    str r6, [sp, #0x18]
    ldr r0, [r0]
    add r3, r5, #0x20
    ldr r5, [r0]
    mov r1, r6
    ldr r5, [r5, #8]
    mov r2, #3
    blx r5
@L_021705d8:
    ldr r0, [r8, #0x18]
    add r7, r7, #1
    cmp r7, #6
    add r9, r9, r0
    blt @L_02170554
    mov r0, r9
    add sp, sp, #0x1c
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm s32 func_ov086_021705fc(...)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    mov r4, r0
    ldr r0, [r4, #0xc]
    mov r5, #0xc
    cmp r0, #0
    mov r6, #1
    mov r11, #0
    bne @L_021706dc
    ldr r6, =data_020d3520
    mov r5, #0x800
    mov r0, r11
    mov r1, r6
    mov r2, r5
    bl MIi_CpuClearFast
    mov r0, r6
    mov r1, r5
    bl DC_FlushRange
    bl G2S_GetBG0CharPtr
    mov r4, #0x20
    mov r1, r0
    mov r0, r11
    mov r2, r4
    bl MIi_CpuClearFast
    bl G2S_GetBG0CharPtr
    mov r1, r4
    bl DC_FlushRange
    mov r0, r6
    mov r1, r11
    mov r2, r5
    bl func_02003608
    bl G2S_GetBG1CharPtr
    mov r1, r0
    mov r0, r11
    mov r2, r4
    bl MIi_CpuClearFast
    bl G2S_GetBG1CharPtr
    mov r1, r4
    bl DC_FlushRange
    mov r0, r6
    mov r1, r11
    mov r2, r5
    bl func_020036e8
    bl G2S_GetBG2CharPtr
    mov r1, r0
    mov r0, r11
    mov r2, r4
    bl MIi_CpuClearFast
    bl G2S_GetBG2CharPtr
    mov r1, r4
    bl DC_FlushRange
    mov r0, r6
    mov r1, r11
    mov r2, r5
    bl func_020037c8
    mov r0, #1
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_021706dc:
    ldr r0, [r4, #0x20]
    cmp r0, #0
    beq @L_021706fc
    cmp r0, #1
    beq @L_02170880
    cmp r0, #2
    beq @L_0217096c
    b @L_02170990
@L_021706fc:
    ldr r7, =data_020c9660
    mov r1, r6
    mov r0, r7
    bl func_ov015_0213b3fc
    mov r0, r7
    mov r1, r6
    bl func_ov015_0213b364
    ldr r0, [r4, #0x4c]
    sub r1, r6, #2
    mov r2, #2
    bl func_ov001_021263a0
    mov r7, r11
    mov r10, r11
    mov r8, #5
    b @L_021707a0
@L_02170738:
    add r0, r4, r10, lsl #2
    ldrh r0, [r0, #0x28]
    cmp r0, #0
    mlane r1, r8, r5, r4
    ldrne r9, [r1, #0x40]
    cmpne r9, #0
    beq @L_02170798
    mov r1, #0
    bl func_ov015_02130b14
    cmp r0, #0
    beq @L_02170798
    add r1, r10, #0x11
    mla r0, r1, r5, r4
    ldr r0, [r0, #0x40]
    mov r1, r6
    add r2, r10, #4
    bl func_ov015_021322d8
    ldr r0, [r9, #0xc]
    ldr r1, [r9, #0x10]
    add r0, r9, r0
    add r2, r7, #1
    add r3, r10, #4
    bl func_ov015_02132984
    mov r7, r0
@L_02170798:
    add r10, r10, #1
    add r8, r8, #1
@L_021707a0:
    cmp r10, #6
    blt @L_02170738
    mov r7, #0
    mov r10, r7
    mov r8, #0xb
    mov r5, #0xa
    b @L_02170808
@L_021707bc:
    mov r0, #0xc
    mla r0, r8, r0, r4
    ldr r9, [r0, #0x40]
    cmp r9, #0
    beq @L_021707fc
    ldr r0, [r9, #0xc]
    ldr r1, [r9, #0x10]
    mov r3, r5
    add r0, r9, r0
    add r2, r7, #1
    bl func_ov015_02132984
    mov r7, r0
    mov r0, r9
    mov r1, r6
    mov r2, r5
    bl func_ov015_021322b0
@L_021707fc:
    add r10, r10, #1
    add r5, r5, #1
    add r8, r8, #1
@L_02170808:
    cmp r10, #6
    blt @L_021707bc
    ldr r0, [r4, #0x58]
    mov r1, r7
    mov r2, r6
    bl func_ov001_021263a0
    mov r1, r0
    ldr r0, [r4, #0x64]
    mov r2, #2
    bl func_ov001_021263a0
    ldr r1, [r4, #0x24]
    mov r7, r0
    cmp r1, #0
    beq @L_02170878
    mov r5, #3
    ldr r0, [r4, #0x70]
    mov r1, r6
    mov r2, r5
    bl func_ov015_021322b0
    ldr r0, [r4, #0x24]
    mov r1, #6
    mov r2, #0xc
    bl func_ov015_02133d50
    ldr r0, [r4, #0x24]
    mov r3, r5
    add r2, r7, #1
    mov r1, #0x90
    bl func_ov015_02132984
@L_02170878:
    bl func_ov015_02132240
    b @L_02170990
@L_02170880:
    ldr r1, [r4, #0x4c]
    mov r0, r11
    mov r2, r11
    bl func_ov015_02132b7c
    bl G2S_GetBG1CharPtr
    mov r7, #0x20
    mov r1, r0
    mov r0, r11
    mov r2, r7
    bl MIi_CpuClearFast
    bl G2S_GetBG1CharPtr
    mov r1, r7
    bl DC_FlushRange
    mov r8, r11
    b @L_021708dc
@L_021708bc:
    add r1, r8, #5
    mla r0, r1, r5, r4
    ldr r1, [r0, #0x40]
    mov r0, r6
    mov r2, r7
    bl func_ov015_02132b7c
    mov r7, r0
    add r8, r8, #1
@L_021708dc:
    cmp r8, #6
    blt @L_021708bc
    bl G2S_GetBG2CharPtr
    mov r7, #0x20
    mov r1, r0
    mov r2, r7
    mov r0, #0
    bl MIi_CpuClearFast
    bl G2S_GetBG2CharPtr
    mov r1, r7
    bl DC_FlushRange
    mov r8, #0xb
    mov r6, #2
    b @L_02170930
@L_02170914:
    mla r0, r8, r5, r4
    ldr r1, [r0, #0x40]
    mov r0, r6
    mov r2, r7
    bl func_ov015_02132b7c
    mov r7, r0
    add r8, r8, #1
@L_02170930:
    cmp r8, #0x10
    ble @L_02170914
    mov r5, #2
    ldr r1, [r4, #0x58]
    mov r0, r5
    mov r2, r7
    bl func_ov015_02132b7c
    mov r2, r0
    ldr r1, [r4, #0x64]
    mov r0, r5
    bl func_ov015_02132b7c
    mov r1, r0
    mov r0, r4
    bl func_ov086_02170520
    b @L_02170990
@L_0217096c:
    ldr r3, [r4, #0x4c]
    cmp r3, #0
    beq @L_0217098c
    ldr r0, [r3, #0xc]
    ldr r2, [r3, #0x10]
    mov r1, r11
    add r0, r3, r0
    bl func_02003608
@L_0217098c:
    mov r11, #1
@L_02170990:
    ldr r1, [r4, #0x20]
    mov r0, r11
    add r1, r1, #1
    str r1, [r4, #0x20]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_ov086_021709ac(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x30
    mov r6, r3
    mov r9, r0
    add r3, r6, #5
    mov r0, #0xc
    mla r0, r3, r0, r9
    ldr r11, [r0, #0x40]
    ldr r5, [sp, #0x58]
    ldr r4, [sp, #0x5c]
    ldr r10, [sp, #0x60]
    cmp r11, #0
    mov r8, r1
    mov r7, r2
    addeq sp, sp, #0x30
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    add r0, r9, r6, lsl #2
    ldrh r0, [r0, #0x28]
    mov r1, #0
    bl func_ov015_02130b14
    str r0, [sp, #0x14]
    cmp r0, #0
    addeq sp, sp, #0x30
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldrb r1, [r9, #0x10]
    add r0, r6, #4
    mov r0, r0, lsl #0x10
    cmp r1, #0
    mov r1, r0, lsr #0x10
    ldr r0, [r11, #0xc]
    movne r5, #0
    add r0, r11, r0
    strb r1, [sp, #0x28]
    mov r1, #8
    strh r1, [sp, #0x1c]
    strh r1, [sp, #0x1e]
    mov r1, #0
    str r0, [sp, #0x2c]
    strh r8, [sp, #0x18]
    strh r7, [sp, #0x1a]
    strh r1, [sp, #0x20]
    strh r1, [sp, #0x22]
    strh r1, [sp, #0x24]
    strh r1, [sp, #0x26]
    mov r0, r1
    mov r1, #1
    add r11, sp, #0x18
    stmia sp, {r0, r11}
    movne r4, r5
    str r5, [sp, #8]
    ldr r0, =data_020c9660
    movne r10, r5
    str r4, [sp, #0xc]
    mov r2, r1
    mov r3, r1
    str r10, [sp, #0x10]
    bl func_ov015_0213b540
    add r1, r6, #0xb
    mov r0, #0xc
    mla r0, r1, r0, r9
    ldr r2, [r0, #0x40]
    cmp r2, #0
    addeq sp, sp, #0x30
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r1, [r2, #0xc]
    add r0, r6, #0xa
    strb r0, [sp, #0x28]
    mov r0, #8
    add r1, r2, r1
    str r1, [sp, #0x2c]
    strh r0, [sp, #0x1c]
    strh r0, [sp, #0x1e]
    mov r0, #0
    mov r1, #1
    strh r8, [sp, #0x18]
    strh r7, [sp, #0x1a]
    strh r0, [sp, #0x20]
    strh r0, [sp, #0x22]
    strh r0, [sp, #0x24]
    strh r0, [sp, #0x26]
    stmia sp, {r0, r11}
    str r5, [sp, #8]
    str r4, [sp, #0xc]
    ldr r0, =data_020c9660
    str r10, [sp, #0x10]
    mov r2, #0
    mov r3, r1
    bl func_ov015_0213b540
    ldr r2, [r9, #0x24]
    cmp r2, #0
    beq @L_02170b88
    mov r0, #0xc
    mul r0, r6, r0
    add r0, r2, r0, lsl #1
    add r1, r8, #2
    strh r1, [sp, #0x18]
    mov r1, #6
    strh r1, [sp, #0x1c]
    mov r1, #3
    add r2, r7, #7
    mov r3, #2
    strb r1, [sp, #0x28]
    mov r1, #0
    strh r2, [sp, #0x1a]
    str r0, [sp, #0x2c]
    strh r3, [sp, #0x1e]
    strh r1, [sp, #0x20]
    strh r1, [sp, #0x22]
    strh r1, [sp, #0x24]
    strh r1, [sp, #0x26]
    mov r0, r1
    stmia sp, {r0, r11}
    str r5, [sp, #8]
    str r4, [sp, #0xc]
    ldr r0, =data_020c9660
    mov r1, #1
    mov r2, #0
    str r10, [sp, #0x10]
    bl func_ov015_0213b540
@L_02170b88:
    ldr r5, [r9, #0x64]
    cmp r5, #0
    addeq sp, sp, #0x30
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r4, #0
    ldr r0, =data_020e88a0
    ldr r1, [sp, #0x14]
    mov r3, r4
    mov r2, #0xf
    bl _ZN17UnkClass_020621b413func_0207f7ccEv
    cmp r0, #4
    addls pc, pc, r0, lsl #2
    b @L_02170be8
    b @L_02170be8
    b @L_02170bd0
    b @L_02170bd4
    b @L_02170bdc
    b @L_02170be4
@L_02170bd0:
    b @L_02170be8
@L_02170bd4:
    mov r4, #1
    b @L_02170be8
@L_02170bdc:
    mov r4, #2
    b @L_02170be8
@L_02170be4:
    mov r4, #3
@L_02170be8:
    ldr r0, [r5, #0xc]
    mov r2, #0
    add r0, r5, r0
    mov r3, #2
    add r1, r0, r4, lsl #3
    add r0, r7, #7
    strh r0, [sp, #0x1a]
    str r1, [sp, #0x2c]
    strh r8, [sp, #0x18]
    strh r3, [sp, #0x1c]
    strh r3, [sp, #0x1e]
    strh r2, [sp, #0x20]
    strh r2, [sp, #0x22]
    strh r2, [sp, #0x24]
    strh r2, [sp, #0x26]
    strb r3, [sp, #0x28]
    add r0, sp, #0x18
    str r2, [sp]
    stmib sp, {r0, r2}
    str r2, [sp, #0xc]
    ldr r0, =data_020c9660
    mov r1, #1
    str r2, [sp, #0x10]
    bl func_ov015_0213b540
    add sp, sp, #0x30
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm s32 func_ov086_02170c58(...)
{
    stmdb sp!, {r3, r4, r5, r6, lr}
    sub sp, sp, #0xc
    mov r6, r0
    ldr r0, [r6, #0x154]
    cmp r0, #0
    addeq sp, sp, #0xc
    ldmeqia sp!, {r3, r4, r5, r6, pc}
    mov r5, #0
    add r4, r0, #0x2a
@L_02170c7c:
    add r1, r6, r5, lsl #2
    ldrh r0, [r1, #0x28]
    cmp r0, #0
    beq @L_02170cc4
    ldrh r1, [r1, #0x2a]
    mov r0, r6
    mov r3, r5
    rsb r1, r1, r1, lsl #3
    add r2, r4, r1
    ldrb r1, [r2, #5]
    str r1, [sp]
    ldrsb r1, [r2, #3]
    str r1, [sp, #4]
    ldrsb r1, [r2, #4]
    str r1, [sp, #8]
    ldrb r1, [r2, #1]
    ldrb r2, [r2, #2]
    bl func_ov086_021709ac
@L_02170cc4:
    add r5, r5, #1
    cmp r5, #6
    blt @L_02170c7c
    ldrb r0, [r6, #0x10]
    cmp r0, #0
    addne sp, sp, #0xc
    ldmneia sp!, {r3, r4, r5, r6, pc}
    ldr r0, =data_020c9660
    mov r1, #1
    mov r2, #2
    bl func_ov015_0213b990
    add sp, sp, #0xc
    ldmia sp!, {r3, r4, r5, r6, pc}
}

extern "C" s32 func_ov086_02170cfc(u8 *arg0)
{
    u8 *r4;
    s32 v0;
    s32 v5;
    u8 *t0;
    r4 = arg0;
    arg0 = (u8 *)*(s32 *)(arg0 + 0xC);
    if ((s32)arg0 != 1) {
        if ((s32)arg0 != 2)
            return (s32)arg0;
    }
    arg0 = (u8 *)*(s32 *)(r4 + 0x18);
    if ((s32)arg0 != 0) {
        if ((s32)arg0 != 4) {
            if ((s32)arg0 == 5) {
                *(s32 *)(r4 + 0x18) = 0;
                *(s32 *)(r4 + 0x1C) = 0;
            }
        } else {
            v0 = func_ov015_0213bf84((s32)((u8 *)&data_020c9660), 1);
            if (v0 == 0) {
                t0 = *(u8 * *)(r4 + 0x4);
                ((s32 (*)(...))*(s32 *)(*(u8 * *)(*(u8 * *)(r4 + 0x4)) + 0x40))(t0, 4);
                func_ov015_0213ba04((s32)((u8 *)&data_020c9660), 1, 2);
                *(s32 *)(r4 + 0x18) = 5;
                *(s32 *)(r4 + 0x1C) = 0;
            }
        }
    } else {
        if (*(u8 *)(r4 + 0x10) != 0) {
            func_ov086_02170c58((s32)r4);
            *(u8 *)(r4 + 0x10) = 0;
        }
    }
    func_ov001_02125f64(0x1E, 0, 1, 0, *(s32 *)(r4 + 0x58), 3, 1);
    v5 = func_ov015_0213bfcc((s32)((u8 *)&data_020c9660), 1);
    return v5;
}

extern "C" s32 func_ov086_02170dfc(u8 *arg0)
{
    s32 v2;
    s32 v3;
    s32 v4;
    s32 v5;
    s32 v6;
    s32 t0;
    s32 t1;
    s8 t2;
    *(s32 *)(arg0 + 0x8) = 0;
    *(s32 *)(arg0 + 0xC) = 0;
    *(s32 *)(arg0 + 0x18) = 0;
    *(s32 *)(arg0 + 0x1C) = 0;
    *(u8 *)(arg0 + 0x10) = 0;
    *(s32 *)(arg0 + 0x24) = 0;
    func_ov015_0213b364((s32)data_020c9660, 1);
    MI_CpuFill8((s32)(arg0 + 0x40), 0, 0x150);
    v2 = func_ov001_02122c70();
    if (v2 == 0)
        return v2;
    t0 = *(s32 *)(arg0 + 0x4);
    v3 = _ZN17UnkClass_0203dc7c13func_0203e254Ev(t0);
    t1 = *(s32 *)(arg0 + 0x4);
    v4 = _ZN17UnkClass_0203dc7c13func_0203e2b0Ei(t1, v3);
    *(u8 *)(arg0 + 0x10) = v4;
    if ((v4 & 0xFF) != 0) {
        t2 = *(s8 *)(data_ov001_02130630);
        *(s32 *)(arg0 + 0xC) = t2;
    }
    v5 = func_ov015_02133d84(6, 0xC);
    *(s32 *)(arg0 + 0x24) = v5;
    v6 = func_ov086_02170188((s32)arg0, 1);
    return v6;
}

extern "C" asm void func_ov086_02170e98(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    ldr r1, [r4, #8]
    cmp r1, #1
    beq @L_02170ec0
    cmp r1, #3
    beq @L_02170f6c
    cmp r1, #4
    beq @L_02170f74
    ldmia sp!, {r4, pc}
@L_02170ec0:
    add r0, r4, #0x40
    mov r1, #0x1c
    bl func_ov015_02134118
    cmp r0, #0
    ldmeqia sp!, {r4, pc}
    ldr r0, [r4, #0x14]
    cmp r0, #4
    addls pc, pc, r0, lsl #2
    ldmia sp!, {r4, pc}
    ldmia sp!, {r4, pc}
    b @L_02170ef8
    b @L_02170f18
    b @L_02170f28
    b @L_02170f38
@L_02170ef8:
    mov r0, r4
    bl func_ov086_02170010
    mov r0, r4
    bl func_ov086_021704d0
    mov r0, r4
    mov r1, #2
    bl func_ov086_02170188
    ldmia sp!, {r4, pc}
@L_02170f18:
    mov r0, r4
    mov r1, #3
    bl func_ov086_02170188
    ldmia sp!, {r4, pc}
@L_02170f28:
    mov r0, r4
    mov r1, #4
    bl func_ov086_02170188
    ldmia sp!, {r4, pc}
@L_02170f38:
    mov r0, r4
    bl func_ov086_02170128
    add r0, r4, #0x160
    bl func_ov015_02134208
    add r0, r4, #0x16c
    bl func_ov015_02134208
    add r0, r4, #0x178
    bl func_ov015_02134208
    mov r1, #2
    mov r0, #0
    str r1, [r4, #8]
    str r0, [r4, #0x20]
    ldmia sp!, {r4, pc}
@L_02170f6c:
    bl func_ov086_02170cfc
    ldmia sp!, {r4, pc}
@L_02170f74:
    ldr r1, [r0]
    ldr r1, [r1, #0x58]
    blx r1
    cmp r0, #0
    ldmneia sp!, {r4, pc}
    mov r0, r4
    bl func_ov086_021704f8
    mov r0, r4
    mov r1, #1
    bl func_ov086_02170188
    ldmia sp!, {r4, pc}
}

extern "C" s32 func_ov086_02170fa0(u8 *arg0)
{
    s32 r1;
    s32 v0;
    s32 v2;
    r1 = *(s32 *)(arg0 + 0x8);
    switch (r1) {
        default:
            return (s32)arg0;
        case 2:
            v0 = func_ov086_021705fc((s32)arg0);
            if (v0 == 0)
                return v0;
            ((VCall *)arg0)->f19();
            *(s32 *)(arg0 + 0x8) = 3;
            return 3;
        case 3:
            v2 = func_ov015_0213c33c((u8 *)((u8 *)&data_020c9660), 1);
            return v2;
    }
}

extern "C" s32 func_ov086_02170ffc(u8 *arg0)
{
    func_ov015_02134198((arg0 + 0x40), 0x1C);
    func_ov086_021704f8((s32)arg0);
    s32 v2 = func_ov015_0213b3fc((s32)data_020c9660, 1);
    if (*(s32 *)(arg0 + 0x24) == 0)
        return v2;
    s32 t0 = *(s32 *)(arg0 + 0x24);
    _ZN8GameHeap4FreeEPv((s32)data_020c47b4, t0);
    *(s32 *)(arg0 + 0x24) = 0;
    return 0;
}

extern "C" s32 func_ov086_0217104c(s32 arg0)
{
    _ZdlPv(arg0);
    return arg0;
}

extern "C" void func_ov086_02171060(void)
{
}
