#include "game/UnkClass_020621b4.hpp"
extern "C" char data_020af210[];
extern "C" void func_ov015_02143664(void);
extern "C" char data_020c47b4[];
extern "C" char data_020c4824[];
extern "C" char data_020c4de0[];
extern "C" char data_020c4ee0[];
extern "C" char data_020c4eec[];
extern "C" char data_020c4ef4[];
extern "C" char data_020c6cac[];
extern "C" char data_020c6cad[];
extern "C" char data_020c6cae[];
extern "C" char data_020c6caf[];
extern "C" char data_020c6cb0[];
extern "C" void _ZN11FileManager4LoadEPKcPPvP8GameHeapiiiih(void);
extern "C" void _ZN9EntryPool3GetEi(void);
extern "C" void func_01fff13c(void);
extern "C" void func_02001d80(void);
extern "C" void func_0202273c(void);
extern "C" void func_02070760(void);
extern "C" void func_020739cc(void);
extern "C" void func_02074a18(void);
extern "C" void func_02078f14(void);
extern "C" void func_02078fa4(void);
extern "C" void func_0207903c(void);
extern "C" void func_02079d2c(void);
extern "C" void func_0207a854(void);
extern "C" void func_02080abc(void);
extern "C" void func_02080b00(void);
extern "C" void func_02080b1c(void);
extern "C" void func_02080b38(void);
extern "C" void func_02080b90(void);
extern "C" void func_02080cd0(void);
extern "C" void func_02081438(void);
extern "C" void func_02081568(void);
extern "C" void func_020823a0(void);
extern "C" void func_02083e34(void);
extern "C" void func_020841c8(void);
extern "C" void func_02084870(void);
extern "C" void func_0208e9b8(void);
extern "C" void func_0208e9d4(void);
extern "C" void func_0208f310(void);
extern "C" void func_0208f6ac(void);
extern "C" void func_ov015_021309f8(void);
extern "C" void func_ov015_02130b14(void);
extern "C" void func_ov015_02131970(void);
extern "C" void func_ov015_021319b0(void);
extern "C" void func_ov015_02142824(void);
extern "C" void func_ov015_021436c0(void);
extern "C" void gEntryPool(void);
extern "C" void gGameState(void);

extern "C" void _ZN17UnkClass_020621b413func_020654ccEP11MatchPlayeriiP10MatchPointS3_i(void);     // (for the asm functions)
extern "C" void _ZN17UnkClass_020621b413func_0206707cEii(void);     // (for the asm functions)
extern "C" void _ZN17UnkClass_020621b413func_0206a964Ei(void);     // (for the asm functions)
extern "C" void _ZN17UnkClass_020621b413func_0206ace8Ev(void);     // (for the asm functions)
extern "C" void _ZN17UnkClass_020621b413func_0206b2c8Ev(void);     // (for the asm functions)
extern "C" void _ZN17UnkClass_020621b413func_0206b4a8Ei(void);     // (for the asm functions)
extern "C" void _ZN17UnkClass_020621b413func_0206b4ccEi(void);     // (for the asm functions)
extern "C" void _ZN17UnkClass_020621b413func_0206bf2cEP11MatchPlayer(void);     // (for the asm functions)
extern "C" void _ZN17UnkClass_020621b413func_0206bfa0Eh(void);     // (for the asm functions)
extern "C" void _ZN17UnkClass_020621b413func_0206bfb4Ei(void);     // (for the asm functions)
extern "C" void _ZN17UnkClass_020621b413func_0206bff4Ei(void);     // (for the asm functions)
extern "C" void _ZN17UnkClass_020621b413func_0206dedcEv(void);     // (for the asm functions)
extern "C" void _ZN17UnkClass_020621b413func_0206f4acEv(void);     // (for the asm functions)
extern "C" void _ZN17UnkClass_020621b413func_0206f500Ev(void);     // (for the asm functions)
extern "C" void _ZN17UnkClass_020621b413func_0206f8c8Ev(void);     // (for the asm functions)
extern "C" void _ZN17UnkClass_020621b413func_0206fed0Ev(void);     // (for the asm functions)
void UnkClass_020621b4::func_0206f028(s32 value)
{
    unk_118fc = value;
}

void UnkClass_020621b4::func_0206f034()
{
    unk_118fc = (unk_118fc + 1) & 0x7FFFFFFF;
}

u32 UnkClass_020621b4::func_0206f04c()
{
    return unk_118fc;
}

u8 UnkClass_020621b4::func_0206f058()
{
    return unk_118f4;
}

void UnkClass_020621b4::func_0206f064()
{
    if (++unk_bb3 == 1) {
        unk_bb2 = 1;
        unk_bb3 = 0;
    }
}

void UnkClass_020621b4::func_0206f08c()
{
    unk_bb2 = 0;
    unk_bb3 = 0;
}

asm void UnkClass_020621b4::func_0206f09c()
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    movs r7, r1
    mov r6, r0
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    ldrsb r4, [r7, #0xc1]
    mov r0, r7
    bl func_ov015_021319b0
    mov r1, r0
    mov r0, r6
    bl _ZN17UnkClass_020621b413func_0206a964Ei
    cmp r0, #0
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    ldrsb r5, [r0, #0x36]
    mov r0, r6
    mov r1, r7
    bl func_02078f14
    mov r6, r0
    mov r0, r7
    bl func_ov015_02131970
    mov r1, #0xb
    mul lr, r0, r1
    add r7, lr, #0xb
    cmp lr, r7
    mov r12, #0
    bge @L_0206f134
    ldr r2, =data_020c6cac
    mov r0, #0x88
@L_0206f110:
    mul r3, lr, r0
    ldrb r1, [r2, r3]
    cmp r6, r1
    ldreq r0, =data_020c6cad
    ldreqsb r12, [r0, r3]
    beq @L_0206f134
    add lr, lr, #1
    cmp lr, r7
    blt @L_0206f110
@L_0206f134:
    add r0, r4, r5
    add r0, r12, r0
    mov r0, r0, lsl #0x10
    mov r4, r0, asr #0x10
    cmp r4, #0x64
    mov r0, #0x64
    movgt r4, #0x64
    bl func_ov015_021309f8
    mov r0, r0, lsl #0x18
    mov r1, r0, asr #0x18
    mov r0, r4, lsl #0x18
    cmp r1, r0, asr #24
    movlt r0, #1
    movge r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

asm void UnkClass_020621b4::func_0206f178()
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    movs r7, r1
    mov r6, r0
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    bl func_02078fa4
    cmp r0, #0
    beq @L_0206f1b0
    mov r0, r6
    mov r1, r7
    bl func_0207903c
    cmp r0, #0
    movne r0, #1
    ldmneia sp!, {r3, r4, r5, r6, r7, pc}
@L_0206f1b0:
    ldrsb r4, [r7, #0xc2]
    mov r0, r7
    bl func_ov015_021319b0
    mov r1, r0
    mov r0, r6
    bl _ZN17UnkClass_020621b413func_0206a964Ei
    cmp r0, #0
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    ldrsb r5, [r0, #0x37]
    mov r0, r6
    mov r1, r7
    bl func_02078f14
    mov r6, r0
    mov r0, r7
    bl func_ov015_02131970
    mov r1, #0xb
    mul lr, r0, r1
    add r7, lr, #0xb
    cmp lr, r7
    mov r12, #0
    bge @L_0206f234
    ldr r2, =data_020c6cac
    mov r0, #0x88
@L_0206f210:
    mul r3, lr, r0
    ldrb r1, [r2, r3]
    cmp r6, r1
    ldreq r0, =data_020c6cae
    ldreqsb r12, [r0, r3]
    beq @L_0206f234
    add lr, lr, #1
    cmp lr, r7
    blt @L_0206f210
@L_0206f234:
    add r0, r4, r5
    add r0, r12, r0
    mov r0, r0, lsl #0x10
    mov r4, r0, asr #0x10
    cmp r4, #0x64
    mov r0, #0x64
    movgt r4, #0x64
    bl func_ov015_021309f8
    mov r0, r0, lsl #0x18
    mov r1, r0, asr #0x18
    mov r0, r4, lsl #0x18
    cmp r1, r0, asr #24
    movlt r0, #1
    movge r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

asm void UnkClass_020621b4::func_0206f278()
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    movs r7, r1
    mov r6, r0
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    ldrsb r4, [r7, #0xc3]
    mov r0, r7
    bl func_ov015_021319b0
    mov r1, r0
    mov r0, r6
    bl _ZN17UnkClass_020621b413func_0206a964Ei
    cmp r0, #0
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    ldrsb r5, [r0, #0x38]
    mov r0, r6
    mov r1, r7
    bl func_02078f14
    mov r6, r0
    mov r0, r7
    bl func_ov015_02131970
    mov r1, #0xb
    mul lr, r0, r1
    add r7, lr, #0xb
    cmp lr, r7
    mov r12, #0
    bge @L_0206f310
    ldr r2, =data_020c6cac
    mov r0, #0x88
@L_0206f2ec:
    mul r3, lr, r0
    ldrb r1, [r2, r3]
    cmp r6, r1
    ldreq r0, =data_020c6caf
    ldreqsb r12, [r0, r3]
    beq @L_0206f310
    add lr, lr, #1
    cmp lr, r7
    blt @L_0206f2ec
@L_0206f310:
    add r0, r4, r5
    add r0, r12, r0
    mov r0, r0, lsl #0x10
    mov r4, r0, asr #0x10
    cmp r4, #0x64
    mov r0, #0x64
    movgt r4, #0x64
    bl func_ov015_021309f8
    mov r0, r0, lsl #0x18
    mov r1, r0, asr #0x18
    mov r0, r4, lsl #0x18
    cmp r1, r0, asr #24
    movlt r0, #1
    movge r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

asm void UnkClass_020621b4::func_0206f354()
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    movs r7, r1
    mov r6, r0
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    ldrsb r4, [r7, #0xc4]
    mov r0, r7
    bl func_ov015_021319b0
    mov r1, r0
    mov r0, r6
    bl _ZN17UnkClass_020621b413func_0206a964Ei
    cmp r0, #0
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    ldrsb r5, [r0, #0x39]
    mov r0, r6
    mov r1, r7
    bl func_02078f14
    mov r6, r0
    mov r0, r7
    bl func_ov015_02131970
    mov r1, #0xb
    mul lr, r0, r1
    add r7, lr, #0xb
    cmp lr, r7
    mov r12, #0
    bge @L_0206f3ec
    ldr r2, =data_020c6cac
    mov r0, #0x88
@L_0206f3c8:
    mul r3, lr, r0
    ldrb r1, [r2, r3]
    cmp r6, r1
    ldreq r0, =data_020c6cb0
    ldreqsb r12, [r0, r3]
    beq @L_0206f3ec
    add lr, lr, #1
    cmp lr, r7
    blt @L_0206f3c8
@L_0206f3ec:
    add r0, r4, r5
    add r0, r12, r0
    mov r0, r0, lsl #0x10
    mov r4, r0, asr #0x10
    cmp r4, #0x64
    mov r0, #0x64
    movgt r4, #0x64
    bl func_ov015_021309f8
    mov r0, r0, lsl #0x18
    mov r1, r0, asr #0x18
    mov r0, r4, lsl #0x18
    cmp r1, r0, asr #24
    movlt r0, #1
    movge r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

asm void UnkClass_020621b4::func_0206f430()
{
    stmdb sp!, {r4, r5, r6, lr}
    sub sp, sp, #0x50
    mov r6, r0
    ldr r0, [r6, #0xbdc]
    cmp r0, #0
    ldrne r0, [r6, #0xbec]
    cmpne r0, #0
    addeq sp, sp, #0x50
    ldmeqia sp!, {r4, r5, r6, pc}
    mov r5, #0
    add r4, sp, #0
@L_0206f45c:
    mov r0, r5
    bl func_ov015_02130ae8
    cmp r0, #0
    beq @L_0206f498
    ldrh r1, [r0, #0x64]
    mov r0, r6
    mov r2, r4
    bl func_0207a854
    cmp r0, #0
    beq @L_0206f498
    mov r1, r5, lsl #0x10
    mov r0, r6
    mov r2, r4
    mov r1, r1, lsr #0x10
    bl _ZN17UnkClass_020621b413func_0206f4acEv
@L_0206f498:
    add r5, r5, #1
    cmp r5, #0x84
    blt @L_0206f45c
    add sp, sp, #0x50
    ldmia sp!, {r4, r5, r6, pc}
}

asm void UnkClass_020621b4::func_0206f4ac()
{
    stmdb sp!, {r4, lr}
    mov r0, r1
    mov r4, r2
    bl func_ov015_02130ae8
    cmp r0, #0
    cmpne r4, #0
    ldmeqia sp!, {r4, pc}
    ldrb r1, [r0, #0xc0]
    cmp r1, #0
    ldmneia sp!, {r4, pc}
    mov r1, #1
    strb r1, [r0, #0xc0]
    ldrsb r1, [r4, #0x3e]
    strb r1, [r0, #0xc1]
    ldrsb r1, [r4, #0x40]
    strb r1, [r0, #0xc2]
    ldrsb r1, [r4, #0x42]
    strb r1, [r0, #0xc3]
    ldrsb r1, [r4, #0x44]
    strb r1, [r0, #0xc4]
    ldmia sp!, {r4, pc}
}

asm void UnkClass_020621b4::func_0206f500()
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r0, r1, lsl #0x10
    ldr r5, =gEntryPool
    mov r6, #0
    mov r4, r0, lsr #0x10
@L_0206f514:
    mov r0, r5
    mov r1, r6
    bl _ZN9EntryPool3GetEi
    cmp r0, #0
    beq @L_0206f538
    ldrh r0, [r0, #0x64]
    cmp r4, r0
    moveq r0, r6
    ldmeqia sp!, {r4, r5, r6, pc}
@L_0206f538:
    add r6, r6, #1
    cmp r6, #0x84
    blt @L_0206f514
    mvn r0, #0
    ldmia sp!, {r4, r5, r6, pc}
}

asm void UnkClass_020621b4::func_0206f550()
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r5, r0
    mov r7, r2
    mov r6, r3
    bl _ZN17UnkClass_020621b413func_0206f500Ev
    cmp r0, #0
    mvnlt r0, #0
    ldmltia sp!, {r3, r4, r5, r6, r7, pc}
    bl func_ov015_02130ae8
    movs r4, r0
    mvneq r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    mov r0, r5
    ldrsh r5, [r4, #0x96]
    bl _ZN17UnkClass_020621b413func_0206ace8Ev
    cmp r0, #0
    movne r0, r5
    ldmneia sp!, {r3, r4, r5, r6, r7, pc}
    cmp r6, #0
    beq @L_0206f5a8
    cmp r6, #1
    beq @L_0206f5b0
@L_0206f5a8:
    mov r0, r5
    b @L_0206f5b4
@L_0206f5b0:
    ldrsh r0, [r4, #0xd2]
@L_0206f5b4:
    mul r1, r0, r7
    ldr r2, =0x51eb851f
    mov r0, r1, lsr #0x1f
    smull r1, r3, r2, r1
    add r3, r0, r3, asr #5
    mov r0, r3, lsl #0x10
    add r0, r5, r0, asr #16
    mov r0, r0, lsl #0x10
    movs r5, r0, asr #0x10
    ldrsh r0, [r4, #0xd2]
    movmi r5, #0
    cmp r5, r0
    movgt r5, r0
    mov r0, r4
    mov r1, r5
    bl func_02080b1c
    mov r0, r5
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

asm void UnkClass_020621b4::func_0206f600()
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r5, r0
    mov r7, r2
    mov r6, r3
    bl _ZN17UnkClass_020621b413func_0206f500Ev
    cmp r0, #0
    mvnlt r0, #0
    ldmltia sp!, {r3, r4, r5, r6, r7, pc}
    bl func_ov015_02130ae8
    movs r4, r0
    mvneq r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    mov r0, r5
    ldrsh r5, [r4, #0x94]
    bl _ZN17UnkClass_020621b413func_0206ace8Ev
    cmp r0, #0
    movne r0, r5
    ldmneia sp!, {r3, r4, r5, r6, r7, pc}
    cmp r6, #0
    beq @L_0206f658
    cmp r6, #1
    beq @L_0206f660
@L_0206f658:
    mov r0, r5
    b @L_0206f664
@L_0206f660:
    ldrsh r0, [r4, #0xd0]
@L_0206f664:
    mul r1, r0, r7
    ldr r2, =0x51eb851f
    mov r0, r1, lsr #0x1f
    smull r1, r3, r2, r1
    add r3, r0, r3, asr #5
    mov r0, r3, lsl #0x10
    add r0, r5, r0, asr #16
    mov r0, r0, lsl #0x10
    movs r5, r0, asr #0x10
    ldrsh r0, [r4, #0xd0]
    movmi r5, #0
    cmp r5, r0
    movgt r5, r0
    mov r0, r4
    mov r1, r5
    bl func_02080b00
    mov r0, r5
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

asm void UnkClass_020621b4::func_0206f6b0()
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r5, r0
    mov r4, r1
    cmp r2, #0
    bne @L_0206f6cc
    mov r1, #6
    b @L_0206f6d0
@L_0206f6cc:
    mov r1, #1
@L_0206f6d0:
    bl _ZN17UnkClass_020621b413func_0206bfb4Ei
    mov r0, r5
    mov r1, #0xf
    bl _ZN17UnkClass_020621b413func_0206bff4Ei
    cmp r4, #1
    mov r0, r5
    bne @L_0206f6f4
    mov r1, #0
    b @L_0206f6f8
@L_0206f6f4:
    mov r1, #1
@L_0206f6f8:
    bl _ZN17UnkClass_020621b413func_0206bfa0Eh
    add r0, r5, #0x11000
    mov r1, #1
    strb r1, [r0, #0x89f]
    ldmia sp!, {r3, r4, r5, pc}
}

asm void UnkClass_020621b4::func_0206f70c()
{
    stmdb sp!, {r3, lr}
    ldr lr, [r0, #0xc24]
    mov r3, #0
    cmp lr, #0
    ble @L_0206f748
    ldr r12, [r0, #0xbe0]
@L_0206f724:
    add r0, r12, r3, lsl #2
    ldrh r0, [r0, #2]
    mov r2, r3, lsl #2
    cmp r1, r0
    ldreqh r0, [r12, r2]
    ldmeqia sp!, {r3, pc}
    add r3, r3, #1
    cmp r3, lr
    blt @L_0206f724
@L_0206f748:
    mov r0, #0
    ldmia sp!, {r3, pc}
}

asm void UnkClass_020621b4::func_0206f750()
{
    stmdb sp!, {r3, lr}
    ldr lr, [r0, #0xc24]
    mov r3, #0
    cmp lr, #0
    ble @L_0206f79c
    ldr r12, [r0, #0xbe0]
@L_0206f768:
    mov r2, r3, lsl #2
    ldrh r0, [r12, r2]
    cmp r1, r0
    addeq r0, r12, r2
    ldreqh r0, [r0, #2]
    ldmeqia sp!, {r3, pc}
    add r2, r12, r2
    ldrh r2, [r2, #2]
    cmp r1, r2
    ldmeqia sp!, {r3, pc}
    add r3, r3, #1
    cmp r3, lr
    blt @L_0206f768
@L_0206f79c:
    mov r0, #0
    ldmia sp!, {r3, pc}
}

asm void UnkClass_020621b4::func_0206f7a4()
{
    stmdb sp!, {r3, r4, lr}
    sub sp, sp, #0x14
    mov r4, r0
    ldr r0, [r4, #0xbe0]
    cmp r0, #0
    bne @L_0206f810
    ldr r3, =data_020c47b4
    ldr r1, =data_020af210
    ldr r0, [r3]
    cmp r0, #0
    moveq r0, #0
    beq @L_0206f7f8
    mov r2, #0
    str r2, [sp]
    str r2, [sp, #4]
    str r2, [sp, #8]
    mov r12, #1
    str r12, [sp, #0xc]
    add r2, r4, #0xbe0
    str r12, [sp, #0x10]
    bl _ZN11FileManager4LoadEPKcPPvP8GameHeapiiiih
@L_0206f7f8:
    cmp r0, #0
    addeq sp, sp, #0x14
    moveq r0, #0
    ldmeqia sp!, {r3, r4, pc}
    mov r0, r0, lsr #2
    str r0, [r4, #0xc24]
@L_0206f810:
    mov r0, #1
    add sp, sp, #0x14
    ldmia sp!, {r3, r4, pc}
}

asm void UnkClass_020621b4::func_0206f824()
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r6, r0
    mov r5, r1
    mov r4, r2
    bl _ZN17UnkClass_020621b413func_0206f8c8Ev
    ldr lr, [r6, #0xc24]
    mov r0, #0x1000
    rsb r0, r0, #0
    cmp lr, #0
    and r1, r5, r0
    mov r12, #0
    ldmleia sp!, {r3, r4, r5, r6, r7, pc}
    ldr r3, [r6, #0xbe0]
    and r2, r5, r0, lsr #20
@L_0206f85c:
    mov r0, r12, lsl #2
    ldrh r7, [r3, r0]
    cmp r2, r7
    beq @L_0206f87c
    add r0, r3, r0
    ldrh r0, [r0, #2]
    cmp r2, r0
    bne @L_0206f8b8
@L_0206f87c:
    cmp r4, #0
    addne r0, r3, r12, lsl #2
    ldrneh r0, [r0, #2]
    orrne r0, r1, r0
    orreq r0, r1, r7
    cmp r5, #0
    cmpne r0, #0
    cmpne r5, r0
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    mov r1, r5, lsl #0x10
    mov r0, r6
    mov r1, r1, lsr #0x10
    mov r2, #0
    bl func_020823a0
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_0206f8b8:
    add r12, r12, #1
    cmp r12, lr
    blt @L_0206f85c
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

asm void UnkClass_020621b4::func_0206f8c8()
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    mov r5, r0
    mov r2, #0
    ldr lr, [r5, #0xc24]
    sub r3, r2, #0x1000
    mov r4, r2
    mov r0, r2
    cmp lr, #0
    and r3, r1, r3
    ble @L_0206f940
    ldr r6, =0xfff
    ldr r12, [r5, #0xbe0]
    and r8, r1, r6
@L_0206f8fc:
    mov r6, r0, lsl #2
    ldrh r7, [r12, r6]
    cmp r8, r7
    addeq r0, r12, r6
    ldreqh r0, [r0, #2]
    moveq r2, r1
    orreq r4, r3, r0
    beq @L_0206f940
    add r6, r12, r6
    ldrh r6, [r6, #2]
    cmp r8, r6
    moveq r4, r1
    orreq r2, r3, r7
    beq @L_0206f940
    add r0, r0, #1
    cmp r0, lr
    blt @L_0206f8fc
@L_0206f940:
    cmp r2, #0
    beq @L_0206f960
    mov r0, r5
    mov r1, r2
    bl _ZN17UnkClass_020621b413func_0206f500Ev
    cmp r0, #0
    movge r0, #0
    ldmgeia sp!, {r4, r5, r6, r7, r8, pc}
@L_0206f960:
    cmp r4, #0
    beq @L_0206f980
    mov r0, r5
    mov r1, r4
    bl _ZN17UnkClass_020621b413func_0206f500Ev
    cmp r0, #0
    movge r0, #1
    ldmgeia sp!, {r4, r5, r6, r7, r8, pc}
@L_0206f980:
    mov r0, #0
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

asm void UnkClass_020621b4::func_0206f98c()
{
    stmdb sp!, {r3, lr}
    ldr lr, [r0, #0xc24]
    mov r3, #0
    cmp lr, #0
    ble @L_0206f9d8
    ldr r12, [r0, #0xbe0]
@L_0206f9a4:
    mov r0, r3, lsl #2
    ldrh r2, [r12, r0]
    cmp r1, r2
    moveq r1, r2
    beq @L_0206f9d8
    add r0, r12, r0
    ldrh r0, [r0, #2]
    cmp r1, r0
    moveq r1, r2
    beq @L_0206f9d8
    add r3, r3, #1
    cmp r3, lr
    blt @L_0206f9a4
@L_0206f9d8:
    mov r0, r1
    ldmia sp!, {r3, pc}
}

asm void UnkClass_020621b4::func_0206f9e0()
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r4, #0
    ldr r2, [r0, #0xc24]
    mov r6, r1
    sub r1, r4, #0x1000
    mov r5, r4
    mov r12, r4
    cmp r2, #0
    and r1, r6, r1
    ble @L_0206fa58
    ldr r3, =0xfff
    ldr r7, [r0, #0xbe0]
    and lr, r6, r3
@L_0206fa14:
    mov r0, r12, lsl #2
    ldrh r3, [r7, r0]
    cmp lr, r3
    addeq r0, r7, r0
    ldreqh r0, [r0, #2]
    moveq r4, r6
    orreq r5, r1, r0
    beq @L_0206fa58
    add r0, r7, r0
    ldrh r0, [r0, #2]
    cmp lr, r0
    moveq r5, r6
    orreq r4, r1, r3
    beq @L_0206fa58
    add r12, r12, #1
    cmp r12, r2
    blt @L_0206fa14
@L_0206fa58:
    mov r7, #0
@L_0206fa5c:
    mov r0, r7
    bl func_ov015_02130ae8
    cmp r0, #0
    beq @L_0206fa88
    ldrh r0, [r0, #0x42]
    cmp r4, r0
    moveq r0, r4
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    cmp r5, r0
    moveq r0, r5
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
@L_0206fa88:
    add r7, r7, #1
    cmp r7, #0x84
    blt @L_0206fa5c
    mov r0, r6
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

asm void UnkClass_020621b4::func_0206faa0()
{
    stmdb sp!, {r4, lr}
    mov r0, r1, lsl #0x10
    mov r4, #0
    mov r1, r4
    mov r0, r0, lsr #0x10
    bl func_ov015_02130b14
    bl func_02080cd0
    cmp r0, #0
    movne r4, #1
    mov r0, r4
    ldmia sp!, {r4, pc}
}

void UnkClass_020621b4::func_0206facc()
{
}

asm void UnkClass_020621b4::func_0206fad0()
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    mov r9, r0
    mov r8, r2
    mov r5, r3
    bl _ZN17UnkClass_020621b413func_0206f500Ev
    mov r7, r0
    bl func_ov015_02130ae8
    cmp r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    bl func_02080b90
    mov r6, r0
    mov r0, r9
    mov r1, r6
    bl _ZN17UnkClass_020621b413func_0206b2c8Ev
    mov r4, r0
    strh r7, [r4, #4]
    mov r0, r9
    mov r1, r6
    strb r6, [r4, #6]
    bl _ZN17UnkClass_020621b413func_0206b4a8Ei
    strb r0, [r4, #7]
    cmp r8, #0
    bne @L_0206fb40
    ldr r0, =gGameState
    ldrb r1, [r0, #0x7e]
    strb r1, [r4, #8]
    ldr r0, [r0]
    b @L_0206fb90
@L_0206fb40:
    cmp r8, #4
    addls pc, pc, r8, lsl #2
    b @L_0206fb80
    b @L_0206fb80
    b @L_0206fb60
    b @L_0206fb68
    b @L_0206fb70
    b @L_0206fb78
@L_0206fb60:
    mov r0, #1
    b @L_0206fb7c
@L_0206fb68:
    mov r0, #4
    b @L_0206fb7c
@L_0206fb70:
    mov r0, #7
    b @L_0206fb7c
@L_0206fb78:
    mov r0, #0xa
@L_0206fb7c:
    strb r0, [r4, #8]
@L_0206fb80:
    mov r0, #0x3c
    mul r1, r5, r0
    mov r0, #0x1e
    mul r0, r1, r0
@L_0206fb90:
    str r0, [r4]
    mov r0, #0
    bl func_020841c8
    strb r0, [r4, #9]
    mov r0, #1
    bl func_020841c8
    strb r0, [r4, #0xa]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

void UnkClass_020621b4::func_0206fbb4(int i)
{
    u8 *entry = func_0206b4cc(i);

    if (entry != NULL) {
        entry[0xB]++;
    }
}

asm void UnkClass_020621b4::func_0206fbd0()
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    movs r8, r1
    mov r5, r0
    ldr r6, =0x51eb851f
    ldreq r0, =0x11900
    moveq r1, #0
    mov r4, r2
    streqh r1, [r5, r0]
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    mov r0, r8
    bl func_02083e34
    mov r1, r0
    ldr r2, =data_020c4eec
    ldr r0, =data_020c4ef4
    ldr r3, [r2, r1, lsl #4]
    ldr r2, [r0, r1, lsl #4]
    mov r7, #0
    add r2, r3, r2
    add r3, r2, r2, lsr #31
    mov r0, r5
    mov r2, r7
    mov r9, r3, asr #1
    bl _ZN17UnkClass_020621b413func_0206707cEii
    str r0, [sp]
    ldr r2, =data_020c4920
    mov r3, r9
    mov r0, r5
    ldmia r2, {r1, r2}
    bl func_01fff13c
    mov r2, r0, asr #0xb
    add r0, r0, r2, lsr #20
    mov r1, r8
    mov r8, r0, asr #0xc
    mov r0, r5
    bl func_ov015_02142824
    mov r1, r0, asr #0xb
    add r0, r0, r1, lsr #20
    mov r9, r0, asr #0xc
    mov r0, #0x64
    mul r0, r8, r0
    mov r1, r9
    bl func_0202273c
    mov r1, r9
    mov r9, r0
    sub r0, r8, #1
    bl func_0202273c
    cmp r0, #0
    movlt r0, r7
    cmp r4, #0
    mov r1, #0x14
    beq @L_0206fcc0
    ldrb r2, [r4]
    mov r3, #0
    cmp r2, #7
    bne @L_0206fcb8
    ldrb r2, [r4, #0xf]
    tst r2, #1
    movne r3, #1
@L_0206fcb8:
    cmp r3, #0
    bne @L_0206fd34
@L_0206fcc0:
    cmp r0, #3
    addls pc, pc, r0, lsl #2
    b @L_0206fd2c
    b @L_0206fcdc
    b @L_0206fcf4
    b @L_0206fcf8
    b @L_0206fd10
@L_0206fcdc:
    rsb r0, r9, #0x4b
    mul r2, r0, r1
    smull r1, r0, r6, r2
    mov r1, r2, lsr #0x1f
    add r0, r1, r0, asr #3
    b @L_0206fd84
@L_0206fcf4:
    b @L_0206fcf8
@L_0206fcf8:
    rsb r0, r9, #0
    mul r2, r0, r1
    smull r1, r0, r6, r2
    mov r1, r2, lsr #0x1f
    add r0, r1, r0, asr #5
    b @L_0206fd84
@L_0206fd10:
    sub r0, r9, #0x12c
    mul r2, r0, r1
    smull r0, r3, r6, r2
    mov r0, r2, lsr #0x1f
    add r3, r0, r3, asr #5
    sub r0, r1, #0x64
    b @L_0206fd70
@L_0206fd2c:
    mov r0, #0
    b @L_0206fd84
@L_0206fd34:
    cmp r0, #3
    addls pc, pc, r0, lsl #2
    b @L_0206fd80
    b @L_0206fd50
    b @L_0206fd54
    b @L_0206fd78
    b @L_0206fd7c
@L_0206fd50:
    b @L_0206fcdc
@L_0206fd54:
    mov r0, #0xa
    sub r1, r9, #0x64
    mul r2, r1, r0
    smull r1, r3, r6, r2
    mov r1, r2, lsr #0x1f
    add r3, r1, r3, asr #5
    sub r0, r0, #0x1e
@L_0206fd70:
    sub r0, r0, r3
    b @L_0206fd84
@L_0206fd78:
    b @L_0206fd54
@L_0206fd7c:
    b @L_0206fd54
@L_0206fd80:
    mvn r0, #0x31
@L_0206fd84:
    mov r0, r0, lsl #0x18
    ldr r1, =0x11900
    mov r0, r0, asr #0x18
    strh r0, [r5, r1]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

s16 UnkClass_020621b4::func_0206fdac()
{
    return unk_11900;
}

asm void UnkClass_020621b4::func_0206fdbc()
{
    stmdb sp!, {r4, lr}
    mov r4, r2
    bl _ZN17UnkClass_020621b413func_0206b4a8Ei
    cmp r0, #0
    bne @L_0206fdf4
    ldr r1, =data_020c4ee0
    ldr r0, =data_020c4de0
    ldrsh r1, [r1, #0x72]
    ldr r0, [r0, #0xd8]
    add r0, r0, r1, lsl #12
    cmp r0, r4
    movgt r0, #1
    movle r0, #0
    ldmia sp!, {r4, pc}
@L_0206fdf4:
    ldr r1, =data_020c4ee0
    ldr r0, =data_020c4de0
    ldrsh r1, [r1, #0x72]
    ldr r0, [r0, #0xd8]
    mov r1, r1, lsl #0xc
    rsb r1, r1, #0
    add r0, r1, r0
    cmp r0, r4
    movlt r0, #1
    movge r0, #0
    ldmia sp!, {r4, pc}
}

asm void UnkClass_020621b4::func_0206fe28()
{
    stmdb sp!, {r4, lr}
    mov r4, r2
    bl _ZN17UnkClass_020621b413func_0206b4a8Ei
    cmp r0, #0
    bne @L_0206fe60
    ldr r1, =data_020c4ee0
    ldr r0, =data_020c4de0
    ldrsh r1, [r1, #0x74]
    ldr r0, [r0, #0xd8]
    add r0, r0, r1, lsl #12
    cmp r0, r4
    movgt r0, #1
    movle r0, #0
    ldmia sp!, {r4, pc}
@L_0206fe60:
    ldr r1, =data_020c4ee0
    ldr r0, =data_020c4de0
    ldrsh r1, [r1, #0x74]
    ldr r0, [r0, #0xd8]
    mov r1, r1, lsl #0xc
    rsb r1, r1, #0
    add r0, r1, r0
    cmp r0, r4
    movlt r0, #1
    movge r0, #0
    ldmia sp!, {r4, pc}
}

void UnkClass_020621b4::func_0206fe94(int delta)
{
    unk_11900 += (s16)delta;
    if (unk_11900 < -90) {
        unk_11900 = -90;
    }
}

void UnkClass_020621b4::func_0206fec0(s16 value)
{
    unk_11900 = value;
}

asm void UnkClass_020621b4::func_0206fed0()
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #0xc
    mov r6, r1
    mov r7, r0
    mov r0, r6
    mov r8, r2
    mov r5, r3
    bl func_02081568
    ldr r1, [sp, #0x28]
    mov r2, r8
    str r1, [sp]
    ldr r1, [sp, #0x2c]
    ldr r8, =data_020c4824
    str r1, [sp, #4]
    mov r4, #0
    str r0, [sp, #8]
    ldr r0, [r8]
    mov r1, r4
    mov r3, r5
    bl func_0208e9d4
    ldr r0, [r8]
    mov r1, r4
    mov r2, r4
    bl func_0208e9b8
    mov r0, r7
    bl _ZN17UnkClass_020621b413func_0206dedcEv
    cmp r0, #0
    addne sp, sp, #0xc
    ldmneia sp!, {r4, r5, r6, r7, r8, r9, pc}
    mov r0, r7
    bl func_ov015_02143664
    mov r9, r0
    mov r0, r6
    bl func_ov015_02131970
    mov r6, r0
    ldrsh r1, [r9, #8]
    mov r0, r7
    bl func_020739cc
    ldrb r0, [r0]
    cmp r0, #7
    addeq sp, sp, #0xc
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, pc}
    cmp r6, #0
    bne @L_0206ffac
    ldr r0, =data_020c4de0
    ldr r0, [r0, #0xd8]
    cmp r5, r0
    addlt sp, sp, #0xc
    ldmltia sp!, {r4, r5, r6, r7, r8, r9, pc}
    ldr r0, [r8]
    mov r1, r4
    mov r2, #1
    bl func_0208e9b8
    add sp, sp, #0xc
    ldmia sp!, {r4, r5, r6, r7, r8, r9, pc}
@L_0206ffac:
    ldr r0, =data_020c4de0
    ldr r0, [r0, #0xd8]
    cmp r5, r0
    addgt sp, sp, #0xc
    ldmgtia sp!, {r4, r5, r6, r7, r8, r9, pc}
    ldr r0, [r8]
    mov r1, r4
    mov r2, #1
    bl func_0208e9b8
    add sp, sp, #0xc
    ldmia sp!, {r4, r5, r6, r7, r8, r9, pc}
}

asm void UnkClass_020621b4::func_0206ffe0()
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x64
    ldr r6, [sp, #0x88]
    ldr r5, [sp, #0x8c]
    mov r10, r0
    str r1, [sp, #0x14]
    str r2, [sp, #0x18]
    str r3, [sp, #0x1c]
    bl func_02070760
    cmp r0, #0
    addeq sp, sp, #0x64
    moveq r0, #0
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r0, [sp, #0x14]
    cmp r0, #0
    addeq sp, sp, #0x64
    moveq r0, #0
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r0, r10
    bl func_ov015_02143664
    mov r7, r0
    ldr r0, [sp, #0x14]
    bl func_02080b90
    mov r4, #1
    cmp r0, #0
    movne r4, #0
    cmp r6, #0x80000000
    str r0, [sp, #0x40]
    cmpne r5, #0x80000000
    beq @L_02070074
    ldr r1, [sp, #0x14]
    str r6, [sp]
    ldr r2, [sp, #0x18]
    ldr r3, [sp, #0x1c]
    mov r0, r10
    str r5, [sp, #4]
    bl _ZN17UnkClass_020621b413func_0206fed0Ev
@L_02070074:
    ldrsb r0, [r7, #0xd]
    bl func_ov015_02130ae8
    cmp r0, #0
    mvneq r11, #0
    beq @L_020700cc
    ldr r1, [r0, #0xe8]
    add r0, sp, #0x50
    ldr r3, [r1]
    ldr r2, [r1, #4]
    add r1, sp, #0x54
    str r5, [sp]
    str r3, [sp, #4]
    str r2, [sp, #8]
    str r0, [sp, #0xc]
    str r1, [sp, #0x10]
    ldr r0, =data_020c4824
    ldr r1, [sp, #0x18]
    ldr r0, [r0]
    ldr r2, [sp, #0x1c]
    mov r3, r6
    bl func_0208f6ac
    mov r11, r0
@L_020700cc:
    ldr r0, [sp, #0x18]
    sub r8, r6, r0
    ldr r0, [sp, #0x1c]
    smull r2, r1, r8, r8
    sub r9, r5, r0
    smull r0, r3, r9, r9
    adds r7, r0, #0x800
    add r0, r9, r9, lsr #31
    add r5, r5, r0, asr #1
    str r5, [sp, #0x24]
    ldr r5, [sp, #0x1c]
    add r8, r8, r8, lsr #31
    sub r0, r5, r0, asr #1
    add r6, r6, r8, asr #1
    str r0, [sp, #0x2c]
    adc r0, r3, #0
    mov r3, r7, lsr #0xc
    str r6, [sp, #0x28]
    ldr r6, [sp, #0x18]
    adds r2, r2, #0x800
    orr r3, r3, r0, lsl #20
    adc r0, r1, #0
    mov r1, r2, lsr #0xc
    orr r1, r1, r0, lsl #20
    sub r6, r6, r8, asr #1
    add r0, r1, r3
    mov r1, #0
    str r6, [sp, #0x30]
    str r1, [sp, #0x20]
    bl func_02001d80
    str r0, [sp, #0x34]
    mov r0, r10
    bl func_ov015_021436c0
    str r0, [sp, #0x38]
    ldr r0, [sp, #0x20]
    cmp r4, #0
    sub r0, r0, #1
    strh r0, [sp, #0x58]
    ldr r0, [sp, #0x20]
    sub r0, r0, #0x80000001
    str r0, [sp, #0x5c]
    movne r0, #0xb
    strne r0, [sp, #0x20]
    mov r0, #0
    str r0, [sp, #0x3c]
    b @L_020703d8
@L_02070184:
    ldr r1, [sp, #0x20]
    mov r0, r10
    bl func_02079d2c
    movs r9, r0
    beq @L_020703c0
    bl func_02080b90
    ldr r1, [sp, #0x40]
    cmp r1, r0
    beq @L_020703c0
    ldrh r0, [r9, #0xf0]
    tst r0, #0x80
    movne r0, #1
    moveq r0, #0
    cmp r0, #0
    beq @L_020701d4
    mov r0, r10
    mov r1, r9
    bl func_0207903c
    cmp r0, #0
    bne @L_020703c0
@L_020701d4:
    mov r0, r9
    bl func_02080b38
    cmp r0, #0
    bne @L_020703c0
    mov r0, r9
    bl func_02080abc
    cmp r0, #0
    beq @L_020703c0
    mov r8, #0
    mvn r0, #0
    mov r7, #1
    str r0, [sp, #0x44]
    mov r6, r8
    mov r4, r8
    mov r5, r7
    b @L_02070284
@L_02070214:
    add r0, r9, r8, lsl #1
    ldrh r1, [r0, #0x98]
    mov r0, r10
    bl func_020739cc
    cmp r0, #0
    beq @L_02070280
    ldrb r1, [r0, #0xf]
    tst r1, #2
    movne r1, r7
    moveq r1, r6
    cmp r1, #0
    bne @L_0207025c
    ldrb r1, [r0, #0xf]
    tst r1, #4
    movne r1, r5
    moveq r1, r4
    cmp r1, #0
    beq @L_02070280
@L_0207025c:
    ldrsh r4, [r9, #0x96]
    mov r1, r9
    bl func_02074a18
    cmp r4, r0
    ldrgesh r0, [r9, #0xf4]
    movge r0, r0, lsl #0x18
    movge r0, r0, asr #0x18
    strge r0, [sp, #0x44]
    b @L_0207028c
@L_02070280:
    add r8, r8, #1
@L_02070284:
    cmp r8, #6
    blt @L_02070214
@L_0207028c:
    ldr r0, [sp, #0x44]
    cmn r0, #1
    beq @L_020703c0
    mov r0, r9
    bl func_02081438
    ldr r2, =0x66666667
    mov r1, r0, lsr #0x1f
    smull r0, r3, r2, r0
    add r3, r1, r3, asr #1
    cmp r3, #0x14
    movgt r3, #0x14
    add r0, r3, #0xc
    mov r5, r0, lsl #0xc
    ldr r0, [r9, #0xe8]
    mov r7, #0
    ldmia r0, {r2, r3}
    ldr r4, =data_020c4824
    str r5, [sp]
    ldr r0, [r4]
    mov r1, r7
    bl func_0208f310
    movs r6, r0
    bmi @L_020703c0
    ldr r0, [r9, #0xe8]
    add r2, sp, #0x48
    ldmia r0, {r3, r12}
    ldr r0, [sp, #0x24]
    add r1, sp, #0x4c
    stmia sp, {r0, r3, r12}
    str r2, [sp, #0xc]
    str r1, [sp, #0x10]
    ldr r0, [r4]
    ldr r1, [sp, #0x30]
    ldr r2, [sp, #0x2c]
    ldr r3, [sp, #0x28]
    bl func_0208f6ac
    ldr r1, [sp, #0x48]
    ldr r0, [sp, #0x18]
    ldr r3, [sp, #0x4c]
    sub r0, r1, r0
    smull r2, r1, r0, r0
    ldr r0, [sp, #0x1c]
    sub r4, r3, r0
    smull r3, r0, r4, r4
    adds r4, r3, #0x800
    adc r3, r0, r7
    adds r2, r2, #0x800
    mov r0, r4, lsr #0xc
    adc r1, r1, r7
    mov r2, r2, lsr #0xc
    orr r0, r0, r3, lsl #20
    orr r2, r2, r1, lsl #20
    add r0, r2, r0
    bl func_02001d80
    cmp r11, #0
    cmpge r0, #0
    blt @L_02070378
    cmp r0, r11
    blt @L_0207038c
@L_02070378:
    cmp r11, #0
    ldrlt r1, [sp, #0x34]
    addlt r1, r5, r1
    cmplt r0, r1
    bge @L_020703c0
@L_0207038c:
    ldr r0, [sp, #0x5c]
    cmp r0, r6
    ble @L_020703c0
    ldrsh r2, [r9, #0xf4]
    ldr r1, [sp, #0x48]
    ldr r0, [sp, #0x4c]
    mov r1, r1, asr #0xc
    mov r0, r0, asr #0xc
    str r6, [sp, #0x5c]
    strh r8, [sp, #0x5a]
    strh r2, [sp, #0x58]
    strh r1, [sp, #0x60]
    strh r0, [sp, #0x62]
@L_020703c0:
    ldr r0, [sp, #0x3c]
    add r0, r0, #1
    str r0, [sp, #0x3c]
    ldr r0, [sp, #0x20]
    add r0, r0, #1
    str r0, [sp, #0x20]
@L_020703d8:
    ldr r0, [sp, #0x3c]
    cmp r0, #0xb
    blt @L_02070184
    ldrsh r1, [sp, #0x58]
    ldr r0, [sp, #0x38]
    ldrsh r3, [sp, #0x5a]
    strb r1, [r0, #0x1d]
    ldr r0, [sp, #0x14]
    ldrsh r2, [sp, #0x60]
    ldrsh r5, [r0, #0xf4]
    ldr r0, [sp, #0x38]
    ldrsh r1, [sp, #0x62]
    strb r5, [r0, #0x23]
    strh r3, [r0, #0x1e]
    strh r2, [r0, #0x24]
    strh r1, [r0, #0x26]
    ldrsb r0, [r0, #0x1d]
    mvn r4, #0
    mov r5, #0
    cmp r0, r4
    beq @L_0207048c
    bl func_ov015_02130ae8
    bl func_02084870
    cmp r0, #0
    beq @L_02070454
    ldr r0, [sp, #0x38]
    ldrsb r0, [r0, #0x1d]
    bl func_ov015_02130ae8
    mov r1, r0
    mov r0, r10
    bl _ZN17UnkClass_020621b413func_0206bf2cEP11MatchPlayer
@L_02070454:
    ldr r0, [sp, #0x38]
    ldrsb r0, [r0, #0x1d]
    bl func_ov015_02130ae8
    str r5, [sp]
    mov r2, #0xd
    str r5, [sp, #4]
    mov r1, r0
    mov r0, r10
    sub r3, r2, #0xe
    str r5, [sp, #8]
    bl _ZN17UnkClass_020621b413func_020654ccEP11MatchPlayeriiP10MatchPointS3_i
    ldr r0, [sp, #0x38]
    ldrsb r0, [r0, #0x1d]
    bl func_ov015_02130ae8
@L_0207048c:
    ldr r0, [sp, #0x38]
    ldrsb r0, [r0, #0x1d]
    cmp r0, r4
    movne r0, #1
    moveq r0, #0
    add sp, sp, #0x64
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}
