#include "ov018/Unk_ov018_02165d60.hpp"

extern "C" void func_ov018_02165d60(u8 *arg0, s32 arg1);
extern "C" void func_ov018_02165d74(void);
extern "C" void func_ov018_02165d78(void);
extern "C" void func_ov018_02165d8c(void);
extern "C" void func_ov018_02165e14(void);
extern "C" void func_ov018_02165f10(void);
extern "C" void func_ov018_02165f94(void);
extern "C" void func_ov018_02165fb0(void);
extern "C" void func_ov018_02166004(void);
extern "C" void func_ov018_0216604c(void);
extern "C" void func_ov018_021660c4(void);
extern "C" void func_ov018_021661cc(void);
extern "C" void func_ov018_021663b8(void);
extern "C" void func_ov018_02166408(void);
extern "C" void func_ov018_0216641c(void);
extern "C" void func_ov018_02166490(void);
extern "C" void func_ov018_02166608(void);
extern "C" void func_ov018_0216666c(void);
extern "C" void func_ov018_021666c8(void);
extern "C" void func_ov018_021667b0(void);
extern "C" void func_ov018_02166824(void);
extern "C" void func_ov018_02166838(void);
extern "C" void func_ov018_02166904(u8 *arg0, s32 arg1);
extern "C" void func_ov018_02166918(void);
extern "C" void func_ov018_0216694c(void);
extern "C" void func_ov018_02166a58(void);
extern "C" void func_ov018_02166ac0(void);
extern "C" void func_ov018_02166b2c(void);
extern "C" void func_ov018_02166b8c(void);
extern "C" void func_ov018_02166ce4(u8 *arg0);
extern "C" void func_ov018_02166cf0(u8 *arg0);
extern "C" void func_ov018_02166d0c(u8 *arg0);
extern "C" char *func_ov018_02166d18(u8 *arg0);
extern "C" void func_ov018_02166d30(void);
extern "C" void func_ov018_02166eb0(void);
extern "C" void func_ov018_02166ef0(void);
extern "C" void func_ov018_02166fa8(void);
extern "C" void func_ov018_02166ff8(void);

extern "C" char data_020c46c4[];
extern "C" char data_020c4814[];
extern "C" char data_020c5e40[];
extern "C" char data_020d2520[];
extern "C" char data_020d2d20[];
extern "C" char data_020d3520[];
extern "C" char data_ov018_02167044[];
extern "C" char data_ov018_02167064[];
extern "C" char data_ov018_0216708c[];
extern "C" char data_ov018_02167160[];
extern "C" char data_ov018_021671cc[];
extern "C" char data_ov018_021671f0[];
extern "C" char data_ov018_02167200[];
extern "C" char data_ov069_02170720[];
extern "C" void DC_FlushRange(void);
extern "C" void G2S_GetBG0CharPtr(void);
extern "C" void G2S_GetBG1CharPtr(void);
extern "C" void G2S_GetBG2CharPtr(void);
extern "C" void MI_CpuFill8(void);
extern "C" void MIi_CpuClearFast(void);
extern "C" void _ZN12SoundManager9PlaySoundEi(void);
extern "C" void _ZN17UnkClass_0203dc7c13func_0203e0ccEi(void);
extern "C" void _ZN17UnkClass_0203dc7c13func_0203e18cEv(void);
extern "C" void _ZN17UnkClass_0203dc7c13func_0203e1f4Ev(void);
extern "C" void _ZdlPv(void);
extern "C" void func_02003608(void);
extern "C" void func_020036e8(void);
extern "C" void func_020037c8(void);
extern "C" void func_020412f0(void);
extern "C" void func_ov015_02132240(void);
extern "C" void func_ov015_021322b0(void);
extern "C" void func_ov015_021325a0(void);
extern "C" void func_ov015_0213264c(void);
extern "C" void func_ov015_021327c8(void);
extern "C" void func_ov015_02132a04(void);
extern "C" void func_ov015_02132b7c(void);
extern "C" void func_ov015_02133f94(void);
extern "C" void func_ov015_021340c0(void);
extern "C" void func_ov015_02134118(void);
extern "C" void func_ov015_02134198(void);
extern "C" void func_ov015_02134208(void);
extern "C" void func_ov015_02135440(void);
extern "C" void func_ov015_02161c78(void);
extern "C" void func_ov015_02161c90(void);
extern "C" void func_ov015_02161c98(void);
extern "C" void func_ov015_02161d00(void);
extern "C" void func_ov015_02161d24(void);
extern "C" void func_ov015_02161dd4(void);
extern "C" void func_ov015_02161f84(void);
extern "C" void func_ov015_02161fdc(void);
extern "C" void func_ov015_021621dc(void);
extern "C" void func_ov015_02162420(void);
extern "C" void func_ov015_02162494(void);
extern "C" void func_ov015_021624cc(void);
extern "C" void func_ov015_02162750(void);
extern "C" void func_ov015_02162944(void);
extern "C" void func_ov015_021629c8(void);
extern "C" void func_ov015_02162f70(void);
extern "C" void gGameState(void);

extern "C" void func_ov018_02165d60(u8 *arg0, s32 arg1)
{
    *(s32 *)(arg0 + 0x4) = arg1;
    *(s32 *)(arg0) = (s32)data_ov018_02167160;
}

extern "C" void func_ov018_02165d74(void)
{
}

extern "C" asm void func_ov018_02165d78(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    bl _ZdlPv
    mov r0, r4
    ldmia sp!, {r4, pc}
}

extern "C" asm void func_ov018_02165d8c(void)
{
    stmdb sp!, {r3, r4, r5, r6, lr}
    sub sp, sp, #4
    ldr r3, =data_020c46c4
    mov r5, r0
    ldr r0, [r3]
    mov r4, r1
    mov r6, r2
    bl func_ov015_02162944
    ldr r0, [r5, #0x24]
    strh r6, [r5, #0xa]
    cmp r0, #0
    ldrneh r0, [r5, #0xa]
    strh r4, [r5, #8]
    add r2, sp, #0
    orrne r0, r0, #0x4000
    strneh r0, [r5, #0xa]
    ldr r0, [r5, #0x2c]
    mov r1, r4
    cmp r0, #0
    ldrneh r0, [r5, #8]
    orrne r0, r0, #0x4000
    strneh r0, [r5, #8]
    ldr r5, =data_020c46c4
    ldr r0, [r5]
    bl func_ov015_021621dc
    cmp r0, #0
    addeq sp, sp, #4
    ldmeqia sp!, {r3, r4, r5, r6, pc}
    ldr r0, [r5]
    ldr r1, [sp]
    bl func_ov015_021624cc
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, pc}
}

extern "C" asm void func_ov018_02165e14(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    ldr r6, =data_020c46c4
    mov r5, r0
    ldr r0, [r6]
    mov r2, #0
    mov r4, r1
    bl func_ov015_02162750
    cmp r0, #2
    bne @L_02165e48
    ldr r0, [r6]
    bl func_ov015_021629c8
    ldr r1, =data_ov018_02167200
    str r0, [r1, #4]
@L_02165e48:
    mov r0, #0
    str r0, [r5, #0x28]
    str r0, [r5, #0x2c]
    ldrh r0, [r4, #4]
    cmp r0, #1
    bne @L_02165ec8
    ldrh r0, [r4]
    strh r0, [r5, #0xc]
    ldrh r0, [r4, #2]
    strh r0, [r5, #0xe]
    ldrh r0, [r4, #4]
    strh r0, [r5, #0x10]
    ldrh r0, [r4, #6]
    strh r0, [r5, #0x12]
    ldrh r0, [r4, #6]
    cmp r0, #0
    ldreq r0, [r5, #0x24]
    cmpeq r0, #0
    bne @L_02165ebc
    ldrh r4, [r5, #0xc]
    ldrh r3, [r5, #0xe]
    ldrh r2, [r5, #0x10]
    ldrh r1, [r5, #0x12]
    mov r0, #1
    strh r4, [r5, #0x14]
    strh r3, [r5, #0x16]
    strh r2, [r5, #0x18]
    strh r1, [r5, #0x1a]
    str r0, [r5, #0x28]
@L_02165ebc:
    mov r0, #1
    str r0, [r5, #0x24]
    ldmia sp!, {r4, r5, r6, pc}
@L_02165ec8:
    ldr r0, [r5, #0x24]
    cmp r0, #0
    beq @L_02165efc
    ldrh r4, [r5, #0xc]
    ldrh r3, [r5, #0xe]
    ldrh r2, [r5, #0x10]
    ldrh r1, [r5, #0x12]
    mov r0, #1
    strh r4, [r5, #0x1c]
    strh r3, [r5, #0x1e]
    strh r2, [r5, #0x20]
    strh r1, [r5, #0x22]
    str r0, [r5, #0x2c]
@L_02165efc:
    mov r0, #0
    str r0, [r5, #0x24]
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void func_ov018_02165f10(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r5, r0
    mov r4, #0
    mov r1, r4
    add r0, r5, #0xf4
    mov r2, #0x30
    bl MI_CpuFill8
    ldr r0, =data_020c46c4
    str r4, [r5, #0x124]
    ldr r0, [r0]
    bl func_ov015_02161f84
    mov r0, #3
    ldr r2, =gGameState
    str r4, [r5, #0x134]
    str r4, [r5, #0x12c]
    strb r0, [r5, #0x138]
    strb r0, [r5, #0x130]
    ldrb r0, [r2, #0x9b6]
    mov r1, r0, lsr #0x1f
    rsb r0, r1, r0, lsl #31
    add r1, r1, r0, ror #31
    strb r1, [r5, #0x54]
    ldrb r0, [r2, #0x9b7]
    and r2, r1, #0xff
    mov r1, r0, lsr #0x1f
    rsb r0, r1, r0, lsl #31
    add r0, r1, r0, ror #31
    strb r0, [r5, #0x55]
    str r2, [r5, #0x4c]
    str r4, [r5, #0x30]
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_ov018_02165f94(void)
{
    mov r1, r0
    ldr r0, =data_ov018_021671cc
    ldr r12, =func_ov015_02133f94
    add r1, r1, #0xe8
    bx r12
}

extern "C" asm void func_ov018_02165fb0(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    ldr r6, [r0, #0xe8]
    cmp r6, #0
    ldrne r1, =data_ov018_02167044
    ldrne r7, =data_ov018_02167064
    ldrne r1, [r1, #0x20]
    cmpne r1, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    add r5, r0, #0xf4
    mov r4, #0xc
@L_02165fd8:
    ldr r2, [r7, #4]
    mov r0, r1
    mla r1, r2, r4, r5
    mov r2, r6
    bl func_ov015_021340c0
    ldr r1, [r7, #8]!
    cmp r1, #0
    bne @L_02165fd8
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm void func_ov018_02166004(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r2, #0xc
    mul r5, r1, r2
    mov r6, r0
    add r4, r6, #0xe8
    add r0, r4, r5
    mov r1, #1
    bl func_ov015_02134198
    add r0, r4, r5
    bl func_ov015_02134208
    mov r1, #0
    str r1, [r4, r5]
    add r0, r6, r5
    str r1, [r0, #0xec]
    strb r1, [r0, #0xf0]
    strb r1, [r0, #0xf1]
    strb r1, [r0, #0xf2]
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void func_ov018_0216604c(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r12, #0xc
    mla r0, r1, r12, r0
    ldr r4, [r0, #0xf4]
    ldr r5, [sp, #0x1c]
    mov r7, r2
    cmp r4, #0
    mov r6, r3
    moveq r0, r7
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    mov r0, r4
    mov r2, r6
    add r1, r7, #1
    bl func_ov015_02132a04
    mov r7, r0
    cmp r5, #0
    beq @L_021660a4
    ldr r0, [sp, #0x18]
    ldr r2, [r5]
    mov r1, r4
    bl func_ov015_02132b7c
    str r0, [r5]
@L_021660a4:
    cmp r6, #0
    blt @L_021660bc
    mov r0, r4
    mov r2, r6
    mov r1, #1
    bl func_ov015_021322b0
@L_021660bc:
    mov r0, r7
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm void func_ov018_021660c4(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #0xc
    mov r9, r0
    bl G2S_GetBG2CharPtr
    mov r7, #0x20
    mov r8, #0
    mov r1, r0
    mov r0, r8
    mov r2, r7
    bl MIi_CpuClearFast
    bl G2S_GetBG2CharPtr
    mov r1, r7
    bl DC_FlushRange
    mov r6, #2
    str r7, [sp, #8]
    mov r4, #3
    str r6, [sp]
    add r5, sp, #8
    mov r0, r9
    mov r1, r4
    mov r2, r8
    mov r3, r6
    str r5, [sp, #4]
    bl func_ov018_0216604c
    mov r3, r4
    mov r4, #1
    str r6, [sp]
    mov r2, r0
    mov r0, r9
    mov r1, r4
    str r5, [sp, #4]
    bl func_ov018_0216604c
    bl G2S_GetBG1CharPtr
    mov r1, r0
    mov r0, r8
    mov r2, r7
    bl MIi_CpuClearFast
    bl G2S_GetBG1CharPtr
    mov r1, r7
    bl DC_FlushRange
    str r7, [sp, #8]
    mov r0, r9
    mov r1, r6
    mov r3, r6
    mov r2, r8
    stmia sp, {r4, r5}
    bl func_ov018_0216604c
    bl G2S_GetBG0CharPtr
    mov r1, r0
    mov r0, r8
    mov r2, r7
    bl MIi_CpuClearFast
    bl G2S_GetBG0CharPtr
    mov r1, r7
    bl DC_FlushRange
    str r7, [sp, #8]
    str r8, [sp]
    mov r0, r9
    mov r3, r4
    mov r1, r8
    mov r2, r8
    str r5, [sp, #4]
    bl func_ov018_0216604c
    bl func_ov015_02132240
    add sp, sp, #0xc
    ldmia sp!, {r4, r5, r6, r7, r8, r9, pc}
}

extern "C" asm void func_ov018_021661cc(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x20
    ldr r1, =data_020c46c4
    mov r10, r0
    ldr r0, [r1]
    mov r1, #0xc8
    bl func_ov015_02162420
    mov r9, #0
    mov r11, #0x38
    mov r8, r9
    mov r7, #0x100
    mov r6, #0x20
    mov r5, #0x190
    mov r4, r11
    b @L_02166280
@L_02166208:
    add r0, r9, r9, lsr #31
    mov r0, r0, asr #1
    mul r1, r0, r11
    str r9, [sp]
    str r9, [sp, #4]
    str r8, [sp, #8]
    add r0, r1, #0x40
    str r8, [sp, #0xc]
    str r0, [sp, #0x10]
    str r7, [sp, #0x14]
    str r6, [sp, #0x18]
    mov r0, r10
    mov r2, #2
    mov r3, r9
    add r1, r9, #1
    str r5, [sp, #0x1c]
    bl func_ov018_02166b8c
    mov r2, r9, lsr #0x1f
    rsb r1, r2, r9, lsl #31
    add r1, r2, r1, ror #31
    add r2, r9, r9, lsr #31
    mov r2, r2, asr #1
    mul r3, r2, r4
    mov r1, r1, lsl #7
    add r2, r3, #0x40
    add r1, r1, #8
    mov r3, #0x70
    str r6, [sp]
    bl func_ov015_02161c78
    add r9, r9, #1
@L_02166280:
    cmp r9, #3
    ble @L_02166208
    mov r8, #1
    str r8, [sp]
    mov r3, #0
    ldr r9, =data_ov018_02167044
    stmib sp, {r3, r8}
    ldr r0, [r9]
    mov r6, #5
    str r0, [sp, #0xc]
    ldr r1, [r9, #4]
    mov r0, r10
    str r1, [sp, #0x10]
    ldr r2, [r9, #0x10]
    mov r1, r6
    str r2, [sp, #0x14]
    ldr r4, [r9, #0x14]
    mov r2, r8
    str r4, [sp, #0x18]
    mov r7, #0x190
    str r7, [sp, #0x1c]
    bl func_ov018_02166b8c
    mov r0, #3
    mov r5, #2
    stmia sp, {r0, r5}
    str r5, [sp, #8]
    ldr r0, [r9, #0x18]
    mov r4, #7
    str r0, [sp, #0xc]
    ldr r1, [r9, #0x1c]
    mov r0, r10
    str r1, [sp, #0x10]
    ldr r2, [r9, #8]
    mov r1, r4
    str r2, [sp, #0x14]
    ldr r3, [r9, #0xc]
    mov r2, r8
    str r3, [sp, #0x18]
    str r7, [sp, #0x1c]
    mov r3, r5
    bl func_ov018_02166b8c
    str r6, [sp]
    mov r3, #4
    stmib sp, {r3, r8}
    ldr r1, [r9]
    mov r6, #6
    str r1, [sp, #0xc]
    ldr r1, [r9, #4]
    mov r0, r10
    str r1, [sp, #0x10]
    ldr r2, [r9, #0x10]
    mov r1, r6
    str r2, [sp, #0x14]
    ldr r11, [r9, #0x14]
    mov r2, r8
    str r11, [sp, #0x18]
    str r7, [sp, #0x1c]
    bl func_ov018_02166b8c
    stmia sp, {r4, r6}
    str r5, [sp, #8]
    ldr r4, [r9, #0x18]
    mov r0, r10
    str r4, [sp, #0xc]
    ldr r4, [r9, #0x1c]
    mov r2, r8
    str r4, [sp, #0x10]
    ldr r4, [r9, #8]
    mov r3, r6
    str r4, [sp, #0x14]
    ldr r4, [r9, #0xc]
    mov r1, #8
    str r4, [sp, #0x18]
    str r7, [sp, #0x1c]
    bl func_ov018_02166b8c
    add sp, sp, #0x20
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_ov018_021663b8(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    mov r0, #0
    b @L_021663cc
@L_021663c8:
    add r0, r0, #1
@L_021663cc:
    cmp r0, #1
    blt @L_021663c8
    mov r0, #0
    b @L_021663e0
@L_021663dc:
    add r0, r0, #1
@L_021663e0:
    cmp r0, #4
    blt @L_021663dc
    ldr r0, =data_020c46c4
    ldr r0, [r0]
    bl func_ov015_02161fdc
    mov r0, r4
    mov r1, #0
    bl func_ov018_02166004
    ldmia sp!, {r4, pc}
}

extern "C" asm void func_ov018_02166408(void)
{
    ldrb r1, [r0, #0x55]
    ldr r0, =gGameState
    strb r1, [r0, #0x9b7]
    bx lr
}

extern "C" asm void func_ov018_0216641c(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r4, r0
    mov r7, #1
    mov r6, #0x12c
    ldr r5, =data_020c46c4
    b @L_02166454
@L_02166434:
    ldr r0, [r5]
    mov r1, r7
    bl func_ov015_02161dd4
    mov r1, r6
    bl func_ov015_02161c98
    add r0, r7, #1
    mov r0, r0, lsl #0x10
    mov r7, r0, lsr #0x10
@L_02166454:
    cmp r7, #4
    bls @L_02166434
    ldrb r1, [r4, #0x54]
    mov r0, r4
    add r1, r1, #1
    bl func_ov018_02166904
    mov r2, #0xf0
    ldr r1, =data_ov018_021671f0
    ldr r0, =data_ov069_02170720
    strh r2, [r4, #0x56]
    str r1, [r0]
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm void func_ov018_02166490(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r5, r0
    ldr r1, [r5, #0x30]
    mov r6, #1
    cmp r1, #6
    mov r4, #0
    addls pc, pc, r1, lsl #2
    ldmia sp!, {r4, r5, r6, pc}
    b @L_021664cc
    b @L_021664f0
    b @L_02166530
    b @L_02166558
    b @L_02166584
    b @L_02166598
    b @L_021665bc
@L_021664cc:
    ldr r0, [r5, #4]
    bl _ZN17UnkClass_0203dc7c13func_0203e1f4Ev
    cmp r0, #0x6a
    ldmneia sp!, {r4, r5, r6, pc}
    ldr r0, [r5, #4]
    bl _ZN17UnkClass_0203dc7c13func_0203e18cEv
    cmp r0, #0x6a
    streq r6, [r5, #0x30]
    ldmia sp!, {r4, r5, r6, pc}
@L_021664f0:
    ldr r0, [r5, #4]
    bl _ZN17UnkClass_0203dc7c13func_0203e1f4Ev
    cmp r0, #0x6a
    ldmneia sp!, {r4, r5, r6, pc}
    ldr r0, [r5, #4]
    bl _ZN17UnkClass_0203dc7c13func_0203e18cEv
    cmp r0, #0x6a
    ldmneia sp!, {r4, r5, r6, pc}
    mov r0, r5
    mov r1, #6
    bl func_ov018_0216666c
    mov r0, r5
    bl func_ov018_02165f94
    mov r0, #2
    str r0, [r5, #0x30]
    ldmia sp!, {r4, r5, r6, pc}
@L_02166530:
    add r0, r5, #0xe8
    mov r1, r6
    bl func_ov015_02134118
    cmp r0, #0
    ldmeqia sp!, {r4, r5, r6, pc}
    mov r0, r5
    bl func_ov018_02165fb0
    mov r0, #3
    str r0, [r5, #0x30]
    ldmia sp!, {r4, r5, r6, pc}
@L_02166558:
    bl func_ov018_021660c4
    mov r0, r5
    bl func_ov018_021661cc
    mov r0, r5
    bl func_ov018_0216641c
    mov r0, r6
    mov r1, #8
    bl func_ov015_021325a0
    mov r0, #4
    str r0, [r5, #0x30]
    ldmia sp!, {r4, r5, r6, pc}
@L_02166584:
    ldr r1, [r5, #0x4c]
    bl func_ov018_021666c8
    mov r0, r5
    bl func_ov018_021667b0
    ldmia sp!, {r4, r5, r6, pc}
@L_02166598:
    mov r0, r6
    bl func_ov015_021327c8
    cmp r0, #0
    ldmneia sp!, {r4, r5, r6, pc}
    mov r0, r5
    bl func_ov018_021663b8
    mov r0, #6
    str r0, [r5, #0x30]
    ldmia sp!, {r4, r5, r6, pc}
@L_021665bc:
    ldr r1, =data_ov069_02170720
    ldr r1, [r1, #8]
    cmp r1, #0
    ldmeqia sp!, {r4, r5, r6, pc}
    ldrb r3, [r5, #0x54]
    ldr r2, =gGameState
    mov r1, #4
    strb r3, [r2, #0x9b6]
    bl func_ov018_0216666c
    ldr r5, [r5, #4]
    mov r1, r4
    mov r0, r5
    bl _ZN17UnkClass_0203dc7c13func_0203e0ccEi
    mov r0, r5
    mov r1, r6
    bl _ZN17UnkClass_0203dc7c13func_0203e0ccEi
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void func_ov018_02166608(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r6, r0
    ldr r0, [r6, #0x30]
    cmp r0, #4
    cmpne r0, #5
    ldmneia sp!, {r4, r5, r6, pc}
    mov r5, #0
    mov r4, #0x600
    ldr r1, =data_020d2d20
    mov r0, r5
    mov r2, r4
    bl MIi_CpuClearFast
    ldr r1, =data_020d3520
    mov r0, r5
    mov r2, r4
    bl MIi_CpuClearFast
    mov r0, r6
    bl func_ov018_02166eb0
    mov r0, r6
    bl func_ov018_02166d30
    mov r0, r6
    bl func_ov018_02166ff8
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void func_ov018_0216666c(void)
{
    stmdb sp!, {r4, lr}
    ldr r0, [r0, #4]
    mov r4, r1
    ldr r2, [r0]
    mov r1, #1
    ldr r2, [r2, #0x28]
    blx r2
    mov r0, r4
    bl func_ov015_02135440
    cmp r4, #4
    beq @L_021666b0
    cmp r4, #6
    ldreq r1, =0x4000304
    ldreqh r0, [r1]
    orreq r0, r0, #0x8000
    streqh r0, [r1]
    ldmia sp!, {r4, pc}
@L_021666b0:
    ldr r1, =0x4000304
    ldrh r0, [r1]
    bic r0, r0, #0x8000
    strh r0, [r1]
    ldmia sp!, {r4, pc}
}

extern "C" asm void func_ov018_021666c8(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    sub sp, sp, #0x10
    ldr r2, =data_020c4814
    mov r5, r0
    ldrh r0, [r2]
    ldrh r3, [r5, #8]
    ldrh r2, [r5, #0x56]
    orr r0, r3, r0
    tst r0, r2
    addeq sp, sp, #0x10
    ldmeqia sp!, {r3, r4, r5, pc}
    add r3, sp, #0
    mov r2, #0
    str r2, [r3]
    str r2, [r3, #4]
    str r2, [r3, #8]
    str r2, [r3, #0xc]
    cmp r1, #4
    addls pc, pc, r1, lsl #2
    b @L_02166768
    b @L_02166768
    b @L_0216672c
    b @L_02166738
    b @L_02166744
    b @L_02166750
@L_0216672c:
    mov r2, #3
    mov r1, #2
    b @L_02166758
@L_02166738:
    mov r2, #4
    mov r1, #1
    b @L_02166758
@L_02166744:
    mov r2, #1
    mov r1, #4
    b @L_02166758
@L_02166750:
    mov r2, #2
    mov r1, #3
@L_02166758:
    str r2, [sp]
    str r2, [sp, #4]
    str r1, [sp, #8]
    str r1, [sp, #0xc]
@L_02166768:
    tst r0, #0x40
    ldrne r4, [sp]
    tst r0, #0x80
    ldrne r4, [sp, #4]
    tst r0, #0x20
    ldrne r4, [sp, #8]
    tst r0, #0x10
    ldrne r4, [sp, #0xc]
    ldr r0, =data_020c5e40
    mov r1, #3
    bl _ZN12SoundManager9PlaySoundEi
    mov r0, r5
    mov r1, r4
    bl func_ov018_02166904
    add sp, sp, #0x10
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_ov018_021667b0(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    mvn r1, #0
    ldr r0, =data_020c46c4
    str r1, [r4, #0x50]
    ldr r0, [r0]
    mov r1, #1
    bl func_ov015_02162494
    ldr r0, =data_ov018_02167200
    ldr r0, [r0, #4]
    cmp r0, #0
    bge @L_021667e8
    mov r0, r4
    bl func_ov018_02166824
@L_021667e8:
    mov r0, r4
    bl func_ov018_02166ac0
    mov r0, r4
    bl func_ov018_02166b2c
    mov r0, r4
    bl func_ov018_02166838
    ldr r0, =data_ov018_02167200
    mvn r1, #0
    str r1, [r0, #4]
    mov r0, #0
    strh r0, [r4, #8]
    strh r0, [r4, #0xa]
    ldmia sp!, {r4, pc}
}

extern "C" asm void func_ov018_02166824(void)
{
    ldr r0, =data_ov018_02167200
    ldr r0, [r0]
    cmp r0, #1
    bx lr
}

extern "C" asm void func_ov018_02166838(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r4, r0
    ldrh r2, [r4, #8]
    ldr r1, =data_ov018_02167200
    cmp r2, #1
    ldr r5, [r1, #4]
    bne @L_02166858
    bl func_ov018_02166a58
@L_02166858:
    cmp r5, #1
    blt @L_02166880
    cmp r5, #4
    bgt @L_02166880
    mov r0, r4
    mov r1, r5
    bl func_ov018_02166904
    mov r0, r4
    mov r1, r5
    bl func_ov018_02166918
@L_02166880:
    cmp r5, #8
    addls pc, pc, r5, lsl #2
    ldmia sp!, {r3, r4, r5, pc}
    ldmia sp!, {r3, r4, r5, pc}
    ldmia sp!, {r3, r4, r5, pc}
    ldmia sp!, {r3, r4, r5, pc}
    ldmia sp!, {r3, r4, r5, pc}
    ldmia sp!, {r3, r4, r5, pc}
    b @L_021668b0
    b @L_021668b0
    b @L_021668c8
    b @L_021668c8
@L_021668b0:
    ldr r1, [r4, #0x4c]
    mov r0, r4
    bl func_ov018_02166918
    mov r0, r4
    bl func_ov018_02166a58
    ldmia sp!, {r3, r4, r5, pc}
@L_021668c8:
    ldr r0, =data_020c5e40
    mov r1, #4
    bl _ZN12SoundManager9PlaySoundEi
    mov r5, #1
    mov r0, r5
    mov r1, #8
    bl func_ov015_0213264c
    ldr r0, =data_ov069_02170720
    mov r1, #5
    str r5, [r0, #4]
    str r1, [r4, #0x30]
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" void func_ov018_02166904(u8 *arg0, s32 arg1)
{
    *(s32 *)(arg0 + 0x4C) = arg1;
    *(s32 *)(data_ov018_02167200) = arg1;
}

extern "C" asm void func_ov018_02166918(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    cmp r1, #1
    ldmltia sp!, {r4, pc}
    cmp r1, #4
    ldmgtia sp!, {r4, pc}
    ldr r0, =data_020c5e40
    mov r1, #1
    bl _ZN12SoundManager9PlaySoundEi
    mov r0, r4
    bl func_ov018_02166a58
    ldmia sp!, {r4, pc}
}

extern "C" asm void func_ov018_0216694c(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x14
    mov r9, #0
    mov r10, r0
    mov r11, r9
    mov r6, #1
    mov r5, #2
    ldr r4, =data_020c46c4
    b @L_02166a44
@L_02166970:
    cmp r9, #0
    bne @L_02166998
    ldrb r1, [r10, #0x54]
    add r0, r1, #1
    mov r0, r0, lsl #0x10
    cmp r1, #0
    mov r7, r0, lsr #0x10
    moveq r0, r6
    movne r0, r11
    b @L_021669b4
@L_02166998:
    ldrb r1, [r10, #0x55]
    add r0, r1, #3
    mov r0, r0, lsl #0x10
    cmp r1, #0
    mov r7, r0, lsr #0x10
    moveq r0, #3
    movne r0, #2
@L_021669b4:
    and r8, r0, #0xff
    ldr r0, [r4]
    mov r1, r7
    bl func_ov015_02161dd4
    ldrh r1, [r0, #0x32]
    cmp r1, #0xc8
    addlo sp, sp, #0x14
    ldmloia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    add r2, r10, r7, lsl #4
    ldr r7, [r2, #0x60]
    mov r1, #1
    mov r3, r7, asr #2
    add r3, r7, r3, lsr #29
    mov r3, r3, asr #3
    str r3, [sp]
    ldr r7, [r2, #0x64]
    mov r3, r7, asr #2
    add r3, r7, r3, lsr #29
    mov r3, r3, asr #3
    stmib sp, {r3, r5}
    ldrb r3, [r0, #0xe]
    add r0, r0, r3, lsl #2
    ldrb r3, [r0, #0x3a]
    mov r0, r10
    str r3, [sp, #0xc]
    str r8, [sp, #0x10]
    ldr r3, [r2, #0x58]
    ldr r7, [r2, #0x5c]
    mov r2, r3, asr #2
    add r2, r3, r2, lsr #29
    mov r3, r7, asr #2
    add r3, r7, r3, lsr #29
    mov r2, r2, asr #3
    mov r3, r3, asr #3
    bl func_ov018_02166fa8
    add r9, r9, #1
@L_02166a44:
    cmp r9, #2
    blt @L_02166970
    add sp, sp, #0x14
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_ov018_02166a58(void)
{
    stmdb sp!, {r3, lr}
    ldr r1, [r0, #0x4c]
    cmp r1, #4
    addls pc, pc, r1, lsl #2
    ldmia sp!, {r3, pc}
    ldmia sp!, {r3, pc}
    b @L_02166a80
    b @L_02166a94
    b @L_02166aa8
    b @L_02166ab4
@L_02166a80:
    mov r1, #0
    strb r1, [r0, #0x54]
    mov r0, #2
    bl func_020412f0
    ldmia sp!, {r3, pc}
@L_02166a94:
    mov r1, #1
    strb r1, [r0, #0x54]
    mov r0, #7
    bl func_020412f0
    ldmia sp!, {r3, pc}
@L_02166aa8:
    mov r1, #0
    strb r1, [r0, #0x55]
    ldmia sp!, {r3, pc}
@L_02166ab4:
    mov r1, #1
    strb r1, [r0, #0x55]
    ldmia sp!, {r3, pc}
}

extern "C" asm void func_ov018_02166ac0(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r4, r0
    mov r7, #5
    mov r6, #0
    ldr r5, =data_020c46c4
    b @L_02166af8
@L_02166ad8:
    ldr r0, [r5]
    mov r1, r7
    bl func_ov015_02161dd4
    mov r1, r6
    bl func_ov015_02161c98
    add r0, r7, #1
    mov r0, r0, lsl #0x10
    mov r7, r0, lsr #0x10
@L_02166af8:
    cmp r7, #6
    bls @L_02166ad8
    mov r1, #1
    ldr r0, =data_020c46c4
    str r1, [r4, #0x128]
    ldr r0, [r0]
    mov r1, #6
    mov r4, #0x12c
    bl func_ov015_02161dd4
    mov r1, r4
    bl func_ov015_02161c98
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm void func_ov018_02166b2c(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r6, #7
    mov r5, #0
    ldr r4, =data_020c46c4
    b @L_02166b60
@L_02166b40:
    ldr r0, [r4]
    mov r1, r6
    bl func_ov015_02161dd4
    mov r1, r5
    bl func_ov015_02161c98
    add r0, r6, #1
    mov r0, r0, lsl #0x10
    mov r6, r0, lsr #0x10
@L_02166b60:
    cmp r6, #8
    bls @L_02166b40
    ldr r0, =data_020c46c4
    mov r1, #8
    ldr r0, [r0]
    mov r4, #0x12c
    bl func_ov015_02161dd4
    mov r1, r4
    bl func_ov015_02161c98
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void func_ov018_02166b8c(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #0x10
    ldr r4, [sp, #0x40]
    ldr r5, [sp, #0x44]
    str r4, [sp]
    ldr r4, [sp, #0x48]
    str r5, [sp, #4]
    mov r8, r1
    mov r6, r3
    mov r5, #1
    ldr r3, [sp, #0x4c]
    str r4, [sp, #8]
    ldr r1, =data_020c46c4
    str r3, [sp, #0xc]
    mov r9, r0
    mov r4, r8, lsl #0x10
    mov r7, r2
    ldr r0, [r1]
    ldr r3, [sp, #0x3c]
    mov r1, r5
    mov r2, r4, lsr #0x10
    bl func_ov015_02162f70
    ldr r1, [sp, #0x38]
    mov r4, r0
    mov r1, r1, lsl #0x10
    mov r1, r1, lsr #0x10
    bl func_ov015_02161c90
    mov r2, r6
    add r0, r4, #0x3a
    mov r1, r7
    mov r6, #0
    mov r3, r6
    bl func_ov015_02161d24
    add r0, r4, #0x3e
    mov r1, r7
    ldr r2, [sp, #0x30]
    mov r3, r6
    bl func_ov015_02161d24
    mov r1, r7
    add r0, r4, #0x42
    ldr r2, [sp, #0x34]
    mov r3, r6
    bl func_ov015_02161d24
    add r0, r4, #0x3a
    mov r1, r5
    mov r2, r5
    mov r3, r6
    bl func_ov015_02161d00
    add r0, r4, #0x3e
    mov r1, r5
    mov r2, r5
    mov r3, r6
    bl func_ov015_02161d00
    mov r3, r6
    add r0, r4, #0x42
    mov r1, r5
    mov r2, r5
    bl func_ov015_02161d00
    ldr r1, =func_ov018_02166cf0
    ldr r0, =func_ov018_02166ce4
    str r1, [r4, #0x1c]
    str r0, [r4, #0x20]
    ldr r1, =func_ov018_02166d0c
    ldr r0, =func_ov018_02166d18
    str r1, [r4, #0x24]
    str r0, [r4, #0x28]
    mov r0, r4
    mov r1, #0x12c
    bl func_ov015_02161c98
    add r3, r9, r8, lsl #4
    mov r0, r4
    ldr r2, [sp, #0x3c]
    ldr r1, [sp, #0x40]
    str r2, [r3, #0x58]
    str r1, [r3, #0x5c]
    ldr r2, [sp, #0x44]
    ldr r1, [sp, #0x48]
    str r2, [r3, #0x60]
    str r1, [r3, #0x64]
    add sp, sp, #0x10
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

extern "C" void func_ov018_02166ce4(u8 *arg0)
{
    *(u8 *)(arg0 + 0xE) = 0;
}

extern "C" void func_ov018_02166cf0(u8 *arg0)
{
    *(s32 *)(data_ov018_02167200) = *(u16 *)(arg0 + 0x8);
    *(u8 *)(arg0 + 0xE) = 1;
}

extern "C" void func_ov018_02166d0c(u8 *arg0)
{
    *(u8 *)(arg0 + 0xE) = 2;
}

extern "C" char *func_ov018_02166d18(u8 *arg0)
{
    *(s32 *)(data_ov018_02167200 + 0x4) = *(u16 *)(arg0 + 0x8);
    *(s32 *)(data_ov018_02167200) = *(u16 *)(arg0 + 0x8);
    return data_ov018_02167200;
}

extern "C" asm void func_ov018_02166d30(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, lr}
    sub sp, sp, #0x24
    mov r10, r0
    bl func_ov018_0216694c
    mov r0, r10
    bl func_ov018_02166ac0
    mov r0, r10
    bl func_ov018_02166b2c
    ldr r0, =data_ov018_0216708c
    add r8, sp, #0x14
    ldmia r0, {r0, r1, r2, r3}
    stmia r8, {r0, r1, r2, r3}
    mov r9, #5
    mvn r7, #0
    mov r6, #3
    ldr r4, =data_ov018_02167200
    ldr r5, =data_020c46c4
    b @L_02166e28
@L_02166d78:
    ldr r0, [r5]
    mov r1, r9
    bl func_ov015_02161dd4
    ldrh r1, [r0, #0x32]
    cmp r1, #0
    beq @L_02166e1c
    ldrb r2, [r0, #0xe]
    ldr r1, [r4]
    sub r12, r9, #5
    add r2, r0, r2, lsl #2
    ldrb r2, [r2, #0x3b]
    cmp r9, r1
    add r1, r10, r9, lsl #4
    ldreqb r2, [r0, #0x3f]
    streq r7, [r4]
    ldr lr, [r1, #0x60]
    mov r3, lr, asr #2
    add r3, lr, r3, lsr #29
    mov r3, r3, asr #3
    str r3, [sp]
    ldr lr, [r1, #0x64]
    mov r3, lr, asr #2
    add r3, lr, r3, lsr #29
    mov r3, r3, asr #3
    stmib sp, {r3, r6}
    ldrb r3, [r0, #0xe]
    add r0, r0, r3, lsl #2
    ldrb r3, [r0, #0x3a]
    mov r0, r10
    str r3, [sp, #0xc]
    str r2, [sp, #0x10]
    ldr r3, [r1, #0x58]
    ldr r2, [r1, #0x5c]
    mov lr, r3, asr #2
    mov r1, r2, asr #2
    add r3, r3, lr, lsr #29
    add lr, r2, r1, lsr #29
    mov r2, r3, asr #3
    ldr r1, [r8, r12, lsl #2]
    mov r3, lr, asr #3
    bl func_ov018_02166fa8
@L_02166e1c:
    add r0, r9, #1
    mov r0, r0, lsl #0x10
    mov r9, r0, lsr #0x10
@L_02166e28:
    cmp r9, #9
    blo @L_02166d78
    ldr r0, [r10, #0x4c]
    mov r1, #2
    cmp r0, #2
    cmpne r0, #4
    mov r0, #0x10
    str r0, [sp]
    mov r0, #4
    str r0, [sp, #4]
    str r1, [sp, #8]
    mov r0, #3
    str r0, [sp, #0xc]
    mov r0, #0
    str r0, [sp, #0x10]
    ldr r3, [r10, #0x4c]
    mov r2, #0
    add r3, r10, r3, lsl #4
    ldr r5, [r3, #0x5c]
    ldr r6, [r3, #0x58]
    mov r4, r5, asr #2
    mov r3, r6, asr #2
    moveq r2, #0x10
    add r3, r6, r3, lsr #29
    add r4, r5, r4, lsr #29
    add r2, r2, r3, asr #3
    mov r0, r10
    mov r3, r4, asr #3
    bl func_ov018_02166fa8
    add sp, sp, #0x24
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
}

extern "C" asm void func_ov018_02166eb0(void)
{
    stmdb sp!, {lr}
    sub sp, sp, #0x14
    mov r1, #0x20
    str r1, [sp]
    mov r2, #0x18
    mov r1, #0
    str r2, [sp, #4]
    mov r2, #1
    str r2, [sp, #8]
    str r1, [sp, #0xc]
    mov r2, r1
    mov r3, r1
    str r1, [sp, #0x10]
    bl func_ov018_02166fa8
    add sp, sp, #0x14
    ldmia sp!, {pc}
}

extern "C" asm void func_ov018_02166ef0(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    ldr r0, [sp, #0x20]
    ldr r12, [sp, #0x24]
    ldr lr, =data_020d2520
    mul r4, r0, r12
    ldr r5, [sp, #0x30]
    ldrh r7, [sp, #0x28]
    mul r6, r5, r4
    ldr r4, [sp, #0x2c]
    mov r5, r7, lsl #0xc
    strh r5, [sp, #0x28]
    add r4, r4, r6, lsl #1
    add r1, lr, r1, lsl #11
    ldrh r6, [sp, #0x28]
    ldr r5, =0xfff
    b @L_02166f94
@L_02166f30:
    cmp r3, #0
    addlt r4, r4, r0, lsl #1
    blt @L_02166f8c
    cmp r3, #0x18
    ldmgeia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    add r7, r2, r3, lsl #5
    mov r8, r2
    mov lr, r0
    add r9, r1, r7, lsl #1
    b @L_02166f84
@L_02166f58:
    cmp r8, #0
    blt @L_02166f74
    cmp r8, #0x20
    ldrlth r7, [r4]
    andlt r7, r7, r5
    orrlt r7, r7, r6
    strlth r7, [r9]
@L_02166f74:
    sub lr, lr, #1
    add r8, r8, #1
    add r4, r4, #2
    add r9, r9, #2
@L_02166f84:
    cmp lr, #0
    bgt @L_02166f58
@L_02166f8c:
    sub r12, r12, #1
    add r3, r3, #1
@L_02166f94:
    cmp r12, #0
    bgt @L_02166f30
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

extern "C" asm void func_ov018_02166fa8(void)
{
    stmdb sp!, {r3, r4, lr}
    sub sp, sp, #0x14
    ldr lr, [sp, #0x2c]
    mov r12, #0xc
    mla r4, lr, r12, r0
    ldr r4, [r4, #0xf4]
    ldr lr, [sp, #0x20]
    ldr r12, [sp, #0x24]
    str lr, [sp]
    ldrh lr, [sp, #0x28]
    str r12, [sp, #4]
    ldr r12, [sp, #0x30]
    str lr, [sp, #8]
    ldr lr, [r4, #0xc]
    add lr, r4, lr
    str lr, [sp, #0xc]
    str r12, [sp, #0x10]
    bl func_ov018_02166ef0
    add sp, sp, #0x14
    ldmia sp!, {r3, r4, pc}
}

extern "C" asm void func_ov018_02166ff8(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r5, #0
    mov r4, #0x600
    ldr r0, =data_020d3520
    mov r1, r5
    mov r2, r4
    bl func_020037c8
    ldr r0, =data_020d2d20
    mov r1, r5
    mov r2, r4
    bl func_020036e8
    ldr r0, =data_020d2520
    mov r1, r5
    mov r2, r4
    bl func_02003608
    ldmia sp!, {r3, r4, r5, pc}
}
