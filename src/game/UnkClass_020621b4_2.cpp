#include "game/UnkClass_020621b4.hpp"
#include "game/UnkDeque_0207076c.hpp"
#include "nitro/mi.h"
extern "C" int func_020808c4(void *team, int i);
extern "C" MatchPlayer *func_ov015_02130b14(int index, int a);

extern "C" void _ZN17UnkClass_020621b413func_02069344Eiiiihi(void);     // (for the asm functions)
extern "C" void _ZN17UnkClass_020621b413func_02069394Eiiiihi(void);     // (for the asm functions)
extern "C" void _ZN17UnkClass_020621b413func_0206ace8Ev(void);     // (for the asm functions)
extern "C" void _ZN17UnkClass_020621b413func_0206b4ccEi(void);     // (for the asm functions)
extern "C" void _ZN17UnkClass_020621b413func_0206bfa8Ev(void);     // (for the asm functions)
extern "C" void _ZN17UnkClass_020621b413func_0206bfecEv(void);     // (for the asm functions)
extern "C" void _ZN17UnkClass_020621b413func_0206bff4Ei(void);     // (for the asm functions)
extern "C" void _ZN17UnkClass_020621b413func_0206de34Ev(void);     // (for the asm functions)
extern "C" void _ZN17UnkClass_020621b413func_020725acEv(void);     // (for the asm functions)
extern "C" void _ZN17UnkClass_020621b413func_020732b0Ev(void);     // (for the asm functions)
extern "C" void _ZN17UnkClass_020621b413func_020733d4Ev(void);     // (for the asm functions)
extern "C" void _ZN17UnkClass_020621b413func_020739ccEi(void);     // (for the asm functions)
extern "C" void _ZN17UnkClass_020621b413func_02073fa0Ev(void);     // (for the asm functions)
extern "C" void _ZN17UnkClass_020621b413func_02074210Ev(void);     // (for the asm functions)
extern "C" void _ZN17UnkClass_020621b413func_0207436cEv(void);     // (for the asm functions)
extern "C" void _ZN17UnkClass_020621b413func_0207455cEv(void);     // (for the asm functions)
extern "C" void _ZN17UnkClass_020621b413func_02074584Ev(void);     // (for the asm functions)
extern "C" void _ZN17UnkClass_020621b413func_020745acEv(void);     // (for the asm functions)
extern "C" void _ZN17UnkClass_020621b413func_020745d4Ev(void);     // (for the asm functions)
extern "C" void _ZN17UnkClass_020621b413func_020745e4Ev(void);     // (for the asm functions)
extern "C" void _ZN17UnkClass_020621b413func_02074700Ev(void);     // (for the asm functions)
extern "C" void _ZN17UnkClass_020621b413func_02074728Ev(void);     // (for the asm functions)
extern "C" void _ZN17UnkClass_020621b413func_02074750Ev(void);     // (for the asm functions)
extern "C" void _ZN17UnkClass_020621b413func_02074778Ev(void);     // (for the asm functions)
extern "C" void _ZN17UnkClass_020621b413func_020747a0Ev(void);     // (for the asm functions)
extern "C" void _ZN17UnkClass_020621b413func_020749c8Ev(void);     // (for the asm functions)
extern "C" void _ZN17UnkClass_020621b413func_02074a18Ev(void);     // (for the asm functions)
extern "C" void _ZN17UnkClass_020621b413func_02074aacEv(void);     // (for the asm functions)
extern "C" void _ZN17UnkClass_020621b413func_02074abcEv(void);     // (for the asm functions)
extern "C" void _ZN17UnkClass_020621b413func_020751b8Ev(void);     // (for the asm functions)
extern "C" void _ZN17UnkClass_020621b413func_020665a4Ev(void);     // (for the asm functions)
extern "C" void _ZN17UnkClass_020621b413func_0206a8d8Eiii(void);     // (for the asm functions)
extern "C" void _ZN17UnkClass_020621b413func_0206a93cEv(void);     // (for the asm functions)
extern "C" void _ZN17UnkClass_020621b413func_0206f500Ev(void);     // (for the asm functions)
extern "C" void _ZN17UnkClass_020621b413func_0206f9e0Ev(void);     // (for the asm functions)
extern "C" void _ZN17UnkClass_020621b413func_020728e0Ei(void);     // (for the asm functions)
extern "C" void _ZN17UnkClass_020621b413func_02072914Ev(void);     // (for the asm functions)
extern "C" void _ZN17UnkClass_020621b413func_02072a5cEv(void);     // (for the asm functions)
extern "C" void _ZN17UnkClass_020621b413func_02072bb8Ev(void);     // (for the asm functions)
extern "C" void _ZN17UnkClass_020621b413func_020730dcEP11MatchPlayeriii(void);     // (for the asm functions)
extern "C" void _ZN17UnkClass_020621b413func_020731c4Ev(void);     // (for the asm functions)
extern "C" void _ZN17UnkClass_020621b413func_020732b0Ev(void);     // (for the asm functions)
extern "C" void _ZN17UnkClass_020621b413func_020733d4Ev(void);     // (for the asm functions)
extern "C" void _ZN17UnkClass_020621b413func_020738e4Ev(void);     // (for the asm functions)
extern "C" void _ZN17UnkClass_020621b413func_020739a8Ei(void);     // (for the asm functions)
extern "C" void _ZN17UnkClass_020621b413func_020739ccEi(void);     // (for the asm functions)
extern "C" void _ZN17UnkClass_020621b413func_02073a20EPvii(void);     // (for the asm functions)
extern "C" void _ZN17UnkClass_020621b413func_02073a9cEPviii(void);     // (for the asm functions)
extern "C" void _ZN17UnkClass_020621b413func_02073e3cEPviih(void);     // (for the asm functions)
extern "C" void _ZN17UnkDeque_0207076c13func_02070854Ev(void);     // (for the asm functions)
extern "C" void _ZN17UnkDeque_0207076c13func_02070e34Ev(void);     // (for the asm functions)
extern "C" void _ZN17UnkDeque_0207076c13func_02070e44Ev(void);     // (for the asm functions)
extern "C" void _ZN17UnkDeque_0207076c13func_02070f6cEv(void);     // (for the asm functions)
extern "C" void _ZN17UnkDeque_0207076c13func_020710f0Ev(void);     // (for the asm functions)
extern "C" void _ZN17UnkDeque_0207076c13func_020711fcEv(void);     // (for the asm functions)
extern "C" void _ZN17UnkDeque_0207076c13func_02071214Ev(void);     // (for the asm functions)
extern "C" void _ZN17UnkDeque_0207076c13func_020717acEv(void);     // (for the asm functions)
extern "C" void _ZN17UnkDeque_0207076c13func_02071978Ev(void);     // (for the asm functions)
extern "C" void _ZN17UnkDeque_0207076c13func_02071b00Ev(void);     // (for the asm functions)
extern "C" void _ZN17UnkDeque_0207076c13func_02071c68Ev(void);     // (for the asm functions)
extern "C" void _ZN17UnkDeque_0207076c13func_02071d38Ev(void);     // (for the asm functions)
extern "C" void _ZN17UnkDeque_0207076c13func_02071df8Ev(void);     // (for the asm functions)
extern "C" void _ZN17UnkDeque_0207076c13func_02071e2cEv(void);     // (for the asm functions)
extern "C" void _ZN17UnkDeque_0207076c13func_02071ea8Ev(void);     // (for the asm functions)
extern "C" void _ZN17UnkDeque_0207076c13func_02071fb0Ev(void);     // (for the asm functions)
extern "C" void _ZN17UnkDeque_0207076c13func_020720b0Ev(void);     // (for the asm functions)
extern "C" void _ZN17UnkDeque_0207076c13func_020720e4Ev(void);     // (for the asm functions)
extern "C" void _ZN17UnkDeque_0207076c13func_02072128Ev(void);     // (for the asm functions)
extern "C" void _ZN17UnkDeque_0207076c13func_0207219cEv(void);     // (for the asm functions)
extern "C" void _ZN17UnkDeque_0207076c13func_02072230Ev(void);     // (for the asm functions)
extern "C" void _ZN17UnkDeque_0207076c13func_020723a8Ev(void);     // (for the asm functions)
extern "C" void _ZN17UnkDeque_0207076c13func_02072478Ev(void);     // (for the asm functions)
extern "C" void _ZN17UnkDeque_0207076c13func_020724f4Ev(void);     // (for the asm functions)
extern "C" void _ZN17UnkDeque_0207076c13func_02072538Ev(void);     // (for the asm functions)
extern "C" UnkSlot_020621b4 *func_ov015_02143750(UnkClass_020621b4 *self, int id);
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
extern "C" void func_ov015_02131970(void);
extern "C" void func_ov015_021319b0(void);
extern "C" void func_ov015_02142824(void);
extern "C" void func_ov015_021436c0(void);
extern "C" void gEntryPool(void);
extern "C" void gGameState(void);

extern "C" void _ZN17UnkClass_020621b413func_0206ad68Eii(void);     // (for the asm functions)
extern "C" void _ZN17UnkClass_020621b413func_020704b0Ei(void);     // (for the asm functions)
extern "C" void _ZN17UnkClass_020621b413func_020705b4Ei(void);     // (for the asm functions)
extern "C" void _ZN17UnkClass_020621b413func_02070760Ev(void);     // (for the asm functions)
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
extern "C" char data_020c4648[];
extern "C" char data_020cb288[];
extern "C" void func_0207620c(void);
extern "C" void func_0208f2d0(void);
extern "C" void func_0208f300(void);
extern "C" void func_ov015_0213a75c(void);
extern "C" void func_ov015_0213b1f0(void);
extern "C" char data_020aeb84[];
extern "C" char data_020aeb88[];
extern "C" char data_020aeb8c[];
extern "C" char data_020aed90[];
extern "C" char data_020af230[];
extern "C" char data_020af248[];
extern "C" char data_020fc6f8[];
extern "C" char data_020fc6fc[];
extern "C" char data_020fc700[];
extern "C" void _ZdlPv(void);
extern "C" void _Znwm(void);
extern "C" void func_02017a7c(void);
extern "C" void func_02018348(void);
extern "C" void func_0201a508(void);
extern "C" void func_02022948(void);
extern "C" char data_020a71d0[];
extern "C" char data_020af274[];
extern "C" void func_02078aac(void);
extern "C" void func_0207f634(void);
extern "C" void func_0207f730(void);
extern "C" void func_0207f7cc(void);
extern "C" void func_020802a0(void);
extern "C" void func_02080830(void);
extern "C" void func_0208084c(void);
extern "C" void func_020808e8(void);
extern "C" void func_02080964(void);
extern "C" void func_02080a38(void);
extern "C" void func_ov015_021318a4(void);
extern "C" void memset(void);
extern "C" char data_020c4808[];
extern "C" char data_020fa076[];
extern "C" char data_020fc704[];
extern "C" void func_01fff198(void);
extern "C" void func_020760e4(void);
extern "C" void func_02076168(void);
extern "C" void func_02076268(void);
extern "C" void func_020762c0(void);
extern "C" void func_02076370(void);
extern "C" void func_0207649c(void);
extern "C" void func_020764b4(void);
extern "C" void func_020764f8(void);
extern "C" void func_02076530(void);
extern "C" void func_02076568(void);
extern "C" void func_020765a0(void);
extern "C" void func_0207f3e0(void);
extern "C" void func_02080a80(void);
extern "C" void func_ov015_021309a4(void);
extern "C" void func_ov015_021317c8(void);
extern "C" void func_ov015_02131948(void);
extern "C" void func_ov015_02131994(void);
extern "C" void func_ov087_0217e70c(void);
extern "C" void func_ov087_0217e9e8(void);


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
    bl _ZN17UnkClass_020621b413func_020739ccEi
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
    bl _ZN17UnkClass_020621b413func_02070760Ev
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
    bl _ZN17UnkClass_020621b413func_020739ccEi
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
    bl _ZN17UnkClass_020621b413func_02074a18Ev
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

asm void UnkClass_020621b4::func_020704b0(BOOL a)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r6, r1
    bl func_ov015_02143750
    movs r4, r0
    ldmeqia sp!, {r4, r5, r6, pc}
    ldrb r0, [r4, #0x22]
    mov r0, r0, lsl #0x1c
    mov r0, r0, lsr #0x1c
    tst r0, #1
    movne r0, #1
    moveq r0, #0
    cmp r0, #0
    bne @L_020704ec
    cmp r6, #0
    beq @L_02070530
@L_020704ec:
    ldr r5, =data_020c4824
    ldr r0, [r5]
    bl func_0208f2d0
    ldr r0, [r5]
    mov r1, #0
    bl func_0208f300
    cmp r6, #0
    beq @L_02070530
    ldrb r1, [r4, #0x22]
    mov r0, r1, lsl #0x1c
    mov r0, r0, lsr #0x1c
    orr r0, r0, #4
    and r0, r0, #0xff
    bic r1, r1, #0xf
    and r0, r0, #0xf
    orr r0, r1, r0
    strb r0, [r4, #0x22]
@L_02070530:
    ldr r0, =data_020c4648
    ldr r0, [r0]
    bl func_ov015_0213b1f0
    ldmia sp!, {r4, r5, r6, pc}
}

asm void UnkClass_020621b4::func_02070548()
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r6, r0
    mov r4, r1
    bl func_ov015_02143750
    movs r5, r0
    ldmeqia sp!, {r4, r5, r6, pc}
    cmp r4, #0
    mov r0, r6
    bne @L_02070590
    bl func_ov015_02143664
    mov r4, r0
    mov r1, r5
    mov r2, #0x18
    bl MI_CpuCopy8
    str r4, [r5, #0x18]
    mov r0, #0
    strb r0, [r5, #0x1c]
    ldmia sp!, {r4, r5, r6, pc}
@L_02070590:
    bl func_0207620c
    mov r1, r5
    mov r2, #0x18
    mov r4, r0
    bl MI_CpuCopy8
    str r4, [r5, #0x18]
    mov r0, #1
    strb r0, [r5, #0x1c]
    ldmia sp!, {r4, r5, r6, pc}
}

void UnkClass_020621b4::func_020705b4(int id)
{
    UnkSlot_020621b4 *slot = func_ov015_02143750(this, id);

    if (slot == NULL || slot->unk_1c == 0xFF) {
        return;
    }
    MI_CpuCopy8(slot, slot->unk_18, sizeof(slot->unk_0));
}

void UnkClass_020621b4::func_020705dc(int id)
{
    func_020705b4(id);
    func_020704b0(0);
}

void UnkClass_020621b4::func_020705f8(u8 value)
{
    unk_11902 = value;
}

u8 UnkClass_020621b4::func_02070604()
{
    return unk_11902;
}

void UnkClass_020621b4::func_02070610(int amount)
{
    u8 value = unk_11904;
    u8 result;

    if ((value & 3) == 0 && (amount & 1) == 1) {
        amount += amount;
    }
    amount += value;
    if (amount > 120) {
        result = 100;
    } else {
        result = amount;
    }
    unk_11904 = result;
}

BOOL UnkClass_020621b4::func_02070644()
{
    return unk_11904 >= 100;
}

void UnkClass_020621b4::func_0207065c()
{
    unk_11904 = 0;
}

u8 UnkClass_020621b4::func_0207066c()
{
    return unk_11904;
}

void UnkClass_020621b4::func_02070678(BOOL value)
{
    unk_11914 = value != FALSE;
    if (unk_11914) {
        return;
    }
    func_0206ad68(TRUE, TRUE);
}

u8 UnkClass_020621b4::func_020706a8()
{
    return unk_11914;
}

asm void UnkClass_020621b4::func_020706b4()
{
    stmdb sp!, {r3, r4, lr}
    sub sp, sp, #4
    mov r4, r2
    mov r0, r1
    bl func_ov015_02130ae8
    cmp r4, #8
    movge r2, r4, lsr #0x1f
    mov r1, r0
    rsbge r0, r2, r4, lsl #29
    addge r4, r2, r0, ror #29
    mov r2, #1
    str r2, [sp]
    ldr r0, =data_020c4648
    cmp r4, #0
    movlt r4, #0
    ldr r0, [r0]
    mov r3, r4
    mov r2, #0
    bl func_ov015_0213a75c
    add sp, sp, #4
    ldmia sp!, {r3, r4, pc}
}

asm void UnkClass_020621b4::func_0207070c()
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    mov r8, #0
    mov r5, #0x70
    mov r6, r8
    ldr r7, =data_020cb288
    mov r4, r5
    b @L_02070750
@L_02070728:
    smlabb r1, r8, r4, r7
    ldrb r0, [r1, #0x56]
    cmp r0, #1
    bne @L_02070744
    mov r0, r6
    mov r2, r5
    bl MIi_CpuClearFast
@L_02070744:
    add r0, r8, #1
    mov r0, r0, lsl #0x10
    mov r8, r0, asr #0x10
@L_02070750:
    cmp r8, #0xf
    blt @L_02070728
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

s32 UnkClass_020621b4::func_02070760()
{
    return unk_11918;
}

asm void UnkDeque_0207076c::func_0207076c()
{
    stmdb sp!, {r4, r5, lr}
    sub sp, sp, #0x14
    mov r5, r0
    ldr r0, [r5, #0x10]
    mov r4, r1
    cmp r0, #0
    moveq r2, #0
    subne r0, r0, #1
    movne r2, r0, lsl #8
    ldr r1, [r5]
    ldr r0, [r5, #4]
    add r0, r1, r0
    subs r0, r2, r0
    bne @L_020707b0
    mov r0, r5
    mov r1, #1
    bl _ZN17UnkDeque_0207076c13func_02070854Ev
@L_020707b0:
    ldr r2, [r5, #4]
    add r0, sp, #0
    mov r1, r5
    bl _ZN17UnkDeque_0207076c13func_02071d38Ev
    ldr r1, [sp, #0x10]
    cmp r1, #0
    ldrne r0, [r4]
    strne r0, [r1]
    ldr r0, [r5, #4]
    add r0, r0, #1
    str r0, [r5, #4]
    add sp, sp, #0x14
    ldmia sp!, {r4, r5, pc}
}

asm void UnkDeque_0207076c::func_020707e4()
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r4, r0
    ldr r0, [r4, #0x10]
    mov r1, #0
    str r1, [r4, #4]
    cmp r0, #2
    bls @L_02070840
    mov r5, r1
@L_02070804:
    ldr r1, [r4, #8]
    ldr r0, [r4, #0xc]
    ldr r0, [r1, r0, lsl #2]
    bl _ZdlPv
    ldr r1, [r4, #0xc]
    ldr r0, [r4, #0x14]
    add r1, r1, #1
    cmp r1, r0
    ldr r0, [r4, #0x10]
    str r1, [r4, #0xc]
    sub r0, r0, #1
    streq r5, [r4, #0xc]
    str r0, [r4, #0x10]
    cmp r0, #2
    bhi @L_02070804
@L_02070840:
    ldr r0, [r4, #0x10]
    cmp r0, #0
    movne r0, #0x80
    strne r0, [r4]
    ldmia sp!, {r3, r4, r5, pc}
}

asm void UnkDeque_0207076c::func_02070854()
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x13c
    mov r10, r0
    tst r1, #0xff
    mov r6, #0
    movne r0, #1
    moveq r0, r6
    add r7, r0, r1, lsr #8
    add r4, sp, #0x28
    b @L_020708e8
@L_0207087c:
    ldr r1, [r10, #0xc]
    ldr r2, [r10, #8]
    mov r0, r1
    ldr r5, [r2, r1, lsl #2]
    add r1, r0, #1
    ldr r0, [r10, #0x14]
    str r1, [r10, #0xc]
    cmp r1, r0
    streq r6, [r10, #0xc]
    ldr r1, [r10, #0x10]
    ldr r0, [r10, #0xc]
    sub r2, r1, #1
    add r0, r0, r2
    ldr r1, [r10, #0x14]
    sub r0, r0, #1
    str r2, [r10, #0x10]
    bl func_02022948
    ldr r2, [r10, #8]
    add r0, r10, #8
    str r5, [r2, r1, lsl #2]
    mov r1, r4
    str r6, [sp, #0x28]
    bl _ZN17UnkDeque_0207076c13func_02070f6cEv
    ldr r0, [r10]
    sub r7, r7, #1
    sub r0, r0, #0x100
    str r0, [r10]
@L_020708e8:
    cmp r7, #0
    beq @L_020708fc
    ldr r0, [r10]
    cmp r0, #0x100
    bhs @L_0207087c
@L_020708fc:
    cmp r7, #0
    addeq sp, sp, #0x13c
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r1, =data_020fc700
    ldr r0, [r1]
    tst r0, #1
    bne @L_02070930
    mov r3, #0x200
    orr r2, r0, #1
    ldr r0, =data_020aeb84
    rsb r3, r3, #0
    str r3, [r0]
    str r2, [r1]
@L_02070930:
    ldr r2, =data_020aeb84
    mov r0, r7, lsl #8
    ldr r1, [r2]
    cmp r1, r7, lsl #8
    blo @L_0207098c
    ldr r1, =data_020fc700
    ldr r3, [r1]
    tst r3, #1
    moveq r4, #0x200
    orreq r3, r3, #1
    rsbeq r4, r4, #0
    streq r3, [r1]
    streq r4, [r2]
    ldr r2, [r10, #0x10]
    ldr r1, =data_020aeb84
    cmp r2, #0
    ldr r3, [r1]
    moveq r1, #0
    subne r1, r2, #1
    movne r1, r1, lsl #8
    sub r0, r3, r0
    cmp r1, r0
    bls @L_02070994
@L_0207098c:
    ldr r0, =data_020af230
    bl _ZN17UnkDeque_0207076c13func_02070e34Ev
@L_02070994:
    ldr r0, [r10, #0x14]
    mov r1, #0
    cmp r0, #0
    subne r1, r0, #1
    ldr r0, [r10, #0x10]
    add r0, r7, r0
    cmp r0, r1
    bhi @L_02070a28
    cmp r7, #0
    addeq sp, sp, #0x13c
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r4, =data_020aed90
    add r9, sp, #0x24
    mov r5, #0x400
@L_020709cc:
    mov r0, r5
    bl _Znwm
    movs r8, r0
    bne @L_020709e8
    mov r0, r4
    bl func_0201a508
    bl func_02017a7c
@L_020709e8:
    ldr r2, [r10, #0xc]
    ldr r0, [r10, #0x10]
    ldr r1, [r10, #0x14]
    add r0, r2, r0
    sub r0, r0, #1
    bl func_02022948
    ldr r2, [r10, #8]
    add r0, r10, #8
    str r8, [r2, r1, lsl #2]
    mov r1, r9
    str r6, [sp, #0x24]
    bl _ZN17UnkDeque_0207076c13func_02070f6cEv
    subs r7, r7, #1
    bne @L_020709cc
    add sp, sp, #0x13c
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02070a28:
    movs r1, #0
    add r4, sp, #0x12c
    str r1, [sp, #0x124]
    str r1, [sp, #0x128]
    str r1, [sp, #0xb4]
    str r1, [sp, #0xb8]
    str r1, [sp, #0xbc]
    str r1, [sp, #0xc0]
    str r1, [r4]
    str r1, [r4, #4]
    str r1, [r4, #8]
    str r1, [r4, #0xc]
    add r8, sp, #0xb4
    beq @L_02070a68
    add r0, r1, r1
    bl func_02022948
@L_02070a68:
    ldr r5, [r8]
    ldr r2, [r8, #4]
    ldr r0, [r8, #0xc]
    add r3, r5, r2, lsl #2
    add r2, r5, r0, lsl #2
    add r8, r5, r1, lsl #2
    ldrb r1, [sp, #0x10]
    add r0, sp, #0xc4
    str r8, [sp, #0xc4]
    str r5, [sp, #0xc8]
    str r5, [sp, #0xd8]
    str r3, [sp, #0xcc]
    str r2, [sp, #0xd0]
    str r0, [sp, #4]
    add r0, sp, #0xd4
    strb r1, [sp, #8]
    sub r5, sp, #0xc
    str r3, [sp, #0xd4]
    str r3, [sp, #0xdc]
    str r2, [sp, #0xe0]
    ldmia r0, {r0, r1, r2, r3}
    stmia r5, {r0, r1, r2, r3}
    mov r0, r4
    ldmia r5, {r1, r2, r3}
    bl _ZN17UnkDeque_0207076c13func_0207219cEv
    add r0, sp, #0xb4
    bl _ZN17UnkDeque_0207076c13func_020720b0Ev
    ldr r0, [r10, #0x10]
    mov r2, #0
    add r0, r7, r0
    add r0, r0, #1
    str r0, [sp, #0x1c]
    ldr r1, [r10, #0x14]
    add r9, sp, #0x12c
    cmp r1, #0
    subne r2, r1, #1
    cmp r0, r2, lsl #1
    addhi r0, sp, #0x1c
    mov r1, r2, lsl #1
    addls r0, sp, #0x20
    str r1, [sp, #0x20]
    ldr r1, [r0]
    mov r0, r9
    bl _ZN17UnkDeque_0207076c13func_02070e44Ev
    add r1, sp, #0x18
    mov r0, r9
    str r6, [sp, #0x18]
    bl _ZN17UnkDeque_0207076c13func_02070f6cEv
    cmp r7, #0
    beq @L_02070b90
    ldr r11, =data_020aed90
    add r4, sp, #0x14
    mov r5, #0x400
@L_02070b3c:
    mov r0, r5
    bl _Znwm
    movs r8, r0
    bne @L_02070b58
    mov r0, r11
    bl func_0201a508
    bl func_02017a7c
@L_02070b58:
    ldr r2, [r9, #4]
    ldr r0, [r9, #8]
    ldr r1, [r9, #0xc]
    add r0, r2, r0
    sub r0, r0, #1
    bl func_02022948
    ldr r2, [r9]
    mov r0, r9
    str r8, [r2, r1, lsl #2]
    mov r1, r4
    str r6, [sp, #0x14]
    bl _ZN17UnkDeque_0207076c13func_02070f6cEv
    subs r7, r7, #1
    bne @L_02070b3c
@L_02070b90:
    ldr r0, [r10, #0x10]
    mov r5, #0
    cmp r0, #0
    beq @L_02070cf8
    ldr r1, [r10, #0x14]
    cmp r1, #0
    moveq r1, r5
    beq @L_02070bc0
    ldr r2, [r10, #0xc]
    ldr r0, [r10, #0x10]
    add r0, r2, r0
    bl func_02022948
@L_02070bc0:
    ldr r6, [r10, #8]
    ldr r3, [r10, #0xc]
    add r2, r6, r1, lsl #2
    ldr r0, [r10, #0x14]
    add r4, r6, r3, lsl #2
    add r3, r6, r0, lsl #2
    add r0, sp, #0xa4
    str r2, [sp, #0xa4]
    str r6, [sp, #0xa8]
    str r4, [sp, #0xac]
    str r3, [sp, #0xb0]
    mvn r1, #0
    str r2, [sp, #0xe4]
    str r6, [sp, #0xe8]
    str r4, [sp, #0xec]
    str r3, [sp, #0xf0]
    bl _ZN17UnkDeque_0207076c13func_020720e4Ev
    ldr r1, [r10, #8]
    ldr r7, [sp, #0xa8]
    ldr r6, [sp, #0xac]
    ldr r8, [sp, #0xa4]
    ldr r3, [sp, #0xb0]
    ldr r0, [r10, #0xc]
    ldr r2, [r9]
    add r4, r1, r0, lsl #2
    ldr r0, [r10, #0x14]
    str r7, [sp, #0xf8]
    str r7, [sp, #0x40]
    str r7, [sp, #0x88]
    str r7, [sp, #0x74]
    add r7, r1, r0, lsl #2
    ldr r0, [r9, #4]
    str r6, [sp, #0xfc]
    str r6, [sp, #0x44]
    str r6, [sp, #0x8c]
    str r6, [sp, #0x78]
    add r6, r2, r0, lsl #2
    ldr r0, [r9, #0xc]
    and r5, r5, #0xff
    add r0, r2, r0, lsl #2
    str r3, [sp, #0x100]
    str r1, [sp, #0x108]
    str r3, [sp, #0x48]
    str r1, [sp, #0x30]
    str r3, [sp, #0x90]
    str r3, [sp, #0x7c]
    str r1, [sp, #0x98]
    str r1, [sp, #0x60]
    str r8, [sp, #0x70]
    add r1, sp, #0x4c
    str r2, [sp, #0x118]
    str r2, [sp, #0x50]
    add r2, sp, #0x5c
    str r0, [sp, #0x120]
    str r0, [sp, #0x58]
    add r3, sp, #0x70
    str r7, [sp, #0x68]
    mov r0, r9
    str r4, [sp, #0x5c]
    str r4, [sp, #0x64]
    str r6, [sp, #0x4c]
    str r6, [sp, #0x54]
    str r8, [sp, #0xf4]
    str r4, [sp, #0x104]
    str r4, [sp, #0x10c]
    str r8, [sp, #0x3c]
    str r4, [sp, #0x2c]
    str r4, [sp, #0x34]
    str r8, [sp, #0x84]
    str r4, [sp, #0x94]
    str r4, [sp, #0x9c]
    str r7, [sp, #0x110]
    str r6, [sp, #0x114]
    str r6, [sp, #0x11c]
    str r7, [sp, #0x38]
    str r7, [sp, #0xa0]
    strb r5, [sp]
    bl _ZN17UnkDeque_0207076c13func_02071214Ev
@L_02070cf8:
    ldr r2, [r10, #8]
    ldr r1, [r9]
    add r0, sp, #0x124
    str r1, [r10, #8]
    str r2, [r9]
    ldr r2, [r10, #0xc]
    ldr r1, [r9, #4]
    str r1, [r10, #0xc]
    str r2, [r9, #4]
    ldr r2, [r10, #0x10]
    ldr r1, [r9, #8]
    str r1, [r10, #0x10]
    str r2, [r9, #8]
    ldr r2, [r10, #0x14]
    ldr r1, [r9, #0xc]
    str r1, [r10, #0x14]
    ldr r1, [r9, #8]
    str r2, [r9, #0xc]
    sub r1, r1, r1
    str r1, [r9, #8]
    bl _ZN17UnkDeque_0207076c13func_02071c68Ev
    add sp, sp, #0x13c
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

asm void UnkDeque_0207076c::func_02070d64()
{
    stmdb sp!, {r4, r5, lr}
    sub sp, sp, #0x24
    mov r5, r0
    ldr r0, [r5, #0x10]
    mov r3, #0
    str r3, [r5, #4]
    cmp r0, #0
    beq @L_02070e20
    ldr r1, [r5, #0x14]
    cmp r1, #0
    beq @L_02070da4
    ldr r2, [r5, #0xc]
    ldr r0, [r5, #0x10]
    add r0, r2, r0
    bl func_02022948
    mov r3, r1
@L_02070da4:
    ldr r2, [r5, #8]
    ldr r1, [r5, #0xc]
    ldr r0, [r5, #0x14]
    add r1, r2, r1, lsl #2
    add r0, r2, r0, lsl #2
    add r4, r2, r3, lsl #2
    str r4, [sp, #0x14]
    str r2, [sp, #0x18]
    str r1, [sp, #0x1c]
    str r0, [sp, #0x20]
    str r1, [sp, #4]
    str r2, [sp, #8]
    str r1, [sp, #0xc]
    str r0, [sp, #0x10]
    cmp r1, r4
    beq @L_02070e20
@L_02070de4:
    ldr r0, [sp, #4]
    ldr r0, [r0]
    cmp r0, #0
    beq @L_02070df8
    bl _ZdlPv
@L_02070df8:
    ldr r1, [sp, #4]
    ldr r0, [sp, #0x10]
    add r1, r1, #4
    cmp r1, r0
    ldreq r0, [sp, #8]
    str r1, [sp, #4]
    streq r0, [sp, #4]
    ldr r0, [sp, #4]
    cmp r0, r4
    bne @L_02070de4
@L_02070e20:
    add r0, r5, #8
    bl _ZN17UnkDeque_0207076c13func_020720b0Ev
    mov r0, r5
    add sp, sp, #0x24
    ldmia sp!, {r4, r5, pc}
}

asm void UnkDeque_0207076c::func_02070e34()
{
    stmdb sp!, {r3, lr}
    bl func_0201a508
    bl func_02017a7c
    ldmia sp!, {r3, pc}
}

asm void UnkDeque_0207076c::func_02070e44()
{
    stmdb sp!, {r4, r5, r6, lr}
    sub sp, sp, #0x38
    mov r6, r0
    ldr r0, [r6, #0xc]
    cmp r0, #0
    moveq r0, #0
    subne r0, r0, #1
    cmp r1, r0
    addls sp, sp, #0x38
    ldmlsia sp!, {r4, r5, r6, pc}
    mov r4, #0
    add r0, r6, #0xc
    str r0, [sp, #0x34]
    str r4, [sp, #0x24]
    str r4, [sp, #0x28]
    str r4, [sp, #0x2c]
    str r4, [sp, #0x30]
    sub r0, sp, #4
    strb r4, [r0]
    ldr r2, [r0]
    add r0, sp, #0x24
    bl _ZN17UnkDeque_0207076c13func_02071e2cEv
    ldr r1, [r6, #0xc]
    cmp r1, #0
    beq @L_02070ebc
    ldr r2, [r6, #4]
    ldr r0, [r6, #8]
    add r0, r2, r0
    bl func_02022948
    mov r4, r1
@L_02070ebc:
    ldr r2, [r6]
    mov r5, #0
    add r0, r2, r4, lsl #2
    str r2, [sp, #8]
    str r0, [sp, #4]
    ldr r0, [r6, #4]
    add r4, sp, #0x24
    add r1, r2, r0, lsl #2
    str r1, [sp, #0xc]
    ldr r0, [r6, #0xc]
    add r0, r2, r0, lsl #2
    str r2, [sp, #0x18]
    str r0, [sp, #0x10]
    str r0, [sp, #0x20]
    str r1, [sp, #0x14]
    str r1, [sp, #0x1c]
    sub r0, sp, #4
    strb r5, [r0]
    ldr r3, [r0]
    add r1, sp, #0x14
    add r2, sp, #4
    mov r0, r4
    bl _ZN17UnkDeque_0207076c13func_02071fb0Ev
    str r5, [r6, #8]
    ldr r1, [r6]
    ldr r0, [sp, #0x24]
    add r3, sp, #0x30
    str r0, [r6]
    str r1, [sp, #0x24]
    ldr r2, [r6, #4]
    ldr r1, [sp, #0x28]
    mov r0, r4
    str r1, [r6, #4]
    ldr r1, [sp, #0x2c]
    str r2, [sp, #0x28]
    str r1, [r6, #8]
    str r5, [sp, #0x2c]
    ldr r2, [r6, #0xc]
    ldr r1, [r3]
    str r1, [r6, #0xc]
    str r2, [r3]
    bl _ZN17UnkDeque_0207076c13func_02071df8Ev
    add sp, sp, #0x38
    ldmia sp!, {r4, r5, r6, pc}
}

asm void UnkDeque_0207076c::func_02070f6c()
{
    stmdb sp!, {r4, r5, r6, lr}
    sub sp, sp, #0x38
    mov r6, r0
    ldr r3, [r6, #8]
    mov r4, r1
    ldr r1, [r6, #0xc]
    add r2, r3, #1
    cmp r2, r1
    bhs @L_02070fc0
    ldr r0, [r6, #4]
    add r0, r0, r3
    bl func_02022948
    ldr r0, [r6]
    add sp, sp, #0x38
    adds r1, r0, r1, lsl #2
    ldrne r0, [r4]
    strne r0, [r1]
    ldr r0, [r6, #8]
    add r0, r0, #1
    str r0, [r6, #8]
    ldmia sp!, {r4, r5, r6, pc}
@L_02070fc0:
    mov r5, #0
    add r2, r6, #0xc
    mov r1, #1
    str r5, [sp, #0x24]
    str r5, [sp, #0x28]
    str r5, [sp, #0x2c]
    str r5, [sp, #0x30]
    str r2, [sp, #0x34]
    bl _ZN17UnkDeque_0207076c13func_020710f0Ev
    mov r1, r0
    sub r0, sp, #4
    strb r5, [r0]
    ldr r2, [r0]
    add r0, sp, #0x24
    bl _ZN17UnkDeque_0207076c13func_02071e2cEv
    ldr r1, [r6, #8]
    ldr r0, [sp, #0x24]
    str r1, [sp, #0x28]
    adds r1, r0, r1, lsl #2
    ldrne r0, [r4]
    strne r0, [r1]
    ldr r0, [sp, #0x2c]
    add r0, r0, #1
    str r0, [sp, #0x2c]
    ldr r1, [r6, #0xc]
    cmp r1, #0
    moveq r1, #0
    beq @L_02071040
    ldr r2, [r6, #4]
    ldr r0, [r6, #8]
    add r0, r2, r0
    bl func_02022948
@L_02071040:
    ldr r2, [r6]
    mov r5, #0
    add r0, r2, r1, lsl #2
    str r2, [sp, #8]
    str r0, [sp, #4]
    ldr r0, [r6, #4]
    add r4, sp, #0x24
    add r1, r2, r0, lsl #2
    str r1, [sp, #0xc]
    ldr r0, [r6, #0xc]
    add r0, r2, r0, lsl #2
    str r2, [sp, #0x18]
    str r0, [sp, #0x10]
    str r0, [sp, #0x20]
    str r1, [sp, #0x14]
    str r1, [sp, #0x1c]
    sub r0, sp, #4
    strb r5, [r0]
    ldr r3, [r0]
    add r1, sp, #0x14
    add r2, sp, #4
    mov r0, r4
    bl _ZN17UnkDeque_0207076c13func_02071ea8Ev
    str r5, [r6, #8]
    ldr r1, [r6]
    ldr r0, [sp, #0x24]
    add r3, sp, #0x30
    str r0, [r6]
    str r1, [sp, #0x24]
    ldr r2, [r6, #4]
    ldr r1, [sp, #0x28]
    mov r0, r4
    str r1, [r6, #4]
    ldr r1, [sp, #0x2c]
    str r2, [sp, #0x28]
    str r1, [r6, #8]
    str r5, [sp, #0x2c]
    ldr r2, [r6, #0xc]
    ldr r1, [r3]
    str r1, [r6, #0xc]
    str r2, [r3]
    bl _ZN17UnkDeque_0207076c13func_02071df8Ev
    add sp, sp, #0x38
    ldmia sp!, {r4, r5, r6, pc}
}

asm void UnkDeque_0207076c::func_020710f0()
{
    stmdb sp!, {r0, r1, r2, r3}
    stmdb sp!, {r3, r4, r5, lr}
    sub sp, sp, #8
    ldr r2, =data_020fc6fc
    mov r5, #0
    ldr r3, [r2]
    tst r3, #1
    orreq r3, r3, #1
    ldreq r1, =data_020aeb88
    mvneq r4, #0xc0000001
    streq r3, [r2]
    streq r4, [r1]
    ldr r1, [r0, #0xc]
    ldr r0, =data_020aeb88
    cmp r1, #0
    subne r5, r1, #1
    ldr r4, [r0]
    ldr r1, [sp, #0x1c]
    sub r0, r4, r5
    cmp r1, r0
    bls @L_02071148
    bl _ZN17UnkDeque_0207076c13func_020711fcEv
@L_02071148:
    ldr r0, =0xaaaaaaab
    umull r0, r1, r4, r0
    mov r1, r1, lsr #1
    cmp r5, r1
    bhs @L_0207119c
    add r1, r5, #1
    ldr r0, =0xcccccccd
    add r1, r1, r1, lsl #1
    umull r0, r2, r1, r0
    mov r2, r2, lsr #2
    ldr r0, [sp, #0x1c]
    str r2, [sp, #4]
    cmp r0, r2
    addhi r0, sp, #0x1c
    addls r0, sp, #4
    ldr r0, [r0]
    add sp, sp, #8
    add r0, r5, r0
    ldmia sp!, {r3, r4, r5, lr}
    add sp, sp, #0x10
    bx lr
@L_0207119c:
    cmp r5, r1, lsl #1
    bhs @L_020711d8
    ldr r0, [sp, #0x1c]
    add r1, r5, #1
    mov r2, r1, lsr #1
    cmp r0, r1, lsr #1
    addhi r0, sp, #0x1c
    str r2, [sp]
    addls r0, sp, #0
    ldr r0, [r0]
    add sp, sp, #8
    add r0, r5, r0
    ldmia sp!, {r3, r4, r5, lr}
    add sp, sp, #0x10
    bx lr
@L_020711d8:
    mov r0, r4
    add sp, sp, #8
    ldmia sp!, {r3, r4, r5, lr}
    add sp, sp, #0x10
    bx lr
}

asm void UnkDeque_0207076c::func_020711fc()
{
    stmdb sp!, {r3, lr}
    ldr r0, =data_020af248
    bl func_0201a508
    bl func_02017a7c
    ldmia sp!, {r3, pc}
}

asm void UnkDeque_0207076c::func_02071214()
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x1b4
    mov r9, r2
    mov r8, r3
    ldrb r2, [r9, #0x10]
    ldrb r7, [r8, #0x10]
    mov r10, r0
    str r1, [sp]
    ldr r0, [r8, #8]
    ldr r1, [r8, #0xc]
    ldr r6, [r9]
    ldr r5, [r9, #4]
    ldr r4, [r9, #8]
    ldr r3, [r9, #0xc]
    ldr r12, [r8]
    ldr r11, [r8, #4]
    str r0, [sp, #0x170]
    str r0, [sp, #0x74]
    str r1, [sp, #0x174]
    str r1, [sp, #0x78]
    add r0, sp, #0x6c
    add r1, sp, #0x58
    str r12, [sp, #0x168]
    str r11, [sp, #0x16c]
    strb r7, [sp, #0x178]
    str r6, [sp, #0x17c]
    str r5, [sp, #0x180]
    strb r2, [sp, #0x18c]
    str r4, [sp, #0x184]
    str r12, [sp, #0x6c]
    str r11, [sp, #0x70]
    strb r7, [sp, #0x7c]
    str r3, [sp, #0x188]
    str r6, [sp, #0x58]
    str r5, [sp, #0x5c]
    str r4, [sp, #0x60]
    str r3, [sp, #0x64]
    strb r2, [sp, #0x68]
    bl _ZN17UnkDeque_0207076c13func_02072128Ev
    movs r4, r0
    addeq sp, sp, #0x1b4
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r0, [sp]
    ldr r3, [r10]
    ldr r1, [r10, #4]
    ldr r2, [r0]
    add r7, r3, r1, lsl #2
    sub r1, r2, r7
    mov r0, r1, asr #1
    add r0, r1, r0, lsr #30
    cmp r2, r7
    mov r5, r0, asr #2
    ldrlo r0, [r10, #0xc]
    mov r6, #0
    addlo r5, r5, r0
    ldr r0, [r10, #0xc]
    cmp r0, #0
    moveq r0, #0
    subne r0, r0, #1
    cmp r4, r0
    ldrls r2, [r10, #8]
    subls r0, r0, r4
    cmpls r2, r0
    bhi @L_020715f0
    str r7, [sp, #0x1a4]
    ldr r6, [r10]
    sub r0, r2, r5
    str r0, [sp, #8]
    str r6, [sp, #0x1a8]
    ldr r1, [sp, #8]
    ldr r0, [r10, #4]
    cmp r5, r1
    add r1, r6, r0, lsl #2
    str r1, [sp, #4]
    str r1, [sp, #0x1ac]
    ldr r1, [r10, #0xc]
    add r11, r6, r1, lsl #2
    str r11, [sp, #0x1b0]
    bhs @L_02071434
    add r0, sp, #0x1a4
    rsb r1, r4, #0
    bl _ZN17UnkDeque_0207076c13func_020720e4Ev
    ldr r0, [r10, #8]
    ldr r3, [sp, #0x1a4]
    ldr r2, [r10]
    add r1, r0, r4
    sub r2, r3, r2
    mov r0, r2, asr #1
    add r0, r2, r0, lsr #30
    mov r0, r0, asr #2
    stmib r10, {r0, r1}
    cmp r5, #0
    beq @L_02071564
    ldr r2, [sp, #0x1b0]
    ldr r10, [sp, #0x1a4]
    ldr r4, [sp, #0x1a8]
    ldr r3, [sp, #0x1ac]
    str r2, [sp, #0x134]
    ldr r2, [sp, #4]
    add r0, sp, #0x48
    mov r1, r5
    str r10, [sp, #0x128]
    str r4, [sp, #0x12c]
    str r3, [sp, #0x130]
    str r7, [sp, #0x48]
    str r6, [sp, #0x4c]
    str r2, [sp, #0x50]
    str r11, [sp, #0x54]
    bl _ZN17UnkDeque_0207076c13func_020720e4Ev
    ldr r2, [r0]
    add r1, sp, #0x148
    str r2, [sp, #0x138]
    ldr r3, [r0, #4]
    add r2, sp, #0x138
    str r3, [sp, #0x13c]
    ldr r4, [r0, #8]
    add r3, sp, #0x128
    str r4, [sp, #0x140]
    ldr r4, [r0, #0xc]
    add r0, sp, #0x158
    str r4, [sp, #0x144]
    ldr r4, [sp, #4]
    str r7, [sp, #0x148]
    str r6, [sp, #0x14c]
    str r4, [sp, #0x150]
    str r11, [sp, #0x154]
    bl _ZN17UnkDeque_0207076c13func_02071b00Ev
    ldr r3, [sp, #0x158]
    ldr r2, [sp, #0x15c]
    ldr r1, [sp, #0x160]
    ldr r0, [sp, #0x164]
    str r3, [sp, #0x1a4]
    str r2, [sp, #0x1a8]
    str r1, [sp, #0x1ac]
    str r0, [sp, #0x1b0]
    b @L_02071564
@L_02071434:
    add r2, r2, r4
    cmp r1, #0
    str r2, [r10, #8]
    moveq r1, #0
    beq @L_02071450
    add r0, r0, r2
    bl func_02022948
@L_02071450:
    ldr r5, [r10]
    ldr r2, [r10, #4]
    ldr r0, [r10, #0xc]
    add r3, r5, r2, lsl #2
    add r2, r5, r0, lsl #2
    ldr r0, [sp, #8]
    add r1, r5, r1, lsl #2
    str r1, [sp, #0x1a4]
    str r5, [sp, #0x1a8]
    str r3, [sp, #0x1ac]
    str r2, [sp, #0x1b0]
    cmp r0, #0
    beq @L_02071558
    add r0, sp, #0x28
    str r1, [sp, #0xe8]
    str r1, [sp, #0x28]
    str r5, [sp, #0xec]
    str r3, [sp, #0xf0]
    str r2, [sp, #0xf4]
    str r5, [sp, #0x2c]
    str r3, [sp, #0x30]
    str r2, [sp, #0x34]
    rsb r1, r4, #0
    bl _ZN17UnkDeque_0207076c13func_020720e4Ev
    ldr r2, [r0]
    ldr r1, [sp, #8]
    str r2, [sp, #0xf8]
    ldr r2, [r0, #4]
    add r1, r4, r1
    str r2, [sp, #0xfc]
    ldr r2, [r0, #8]
    ldr r6, [sp, #0x1a4]
    str r2, [sp, #0x100]
    ldr r7, [r0, #0xc]
    ldr r5, [sp, #0x1a8]
    ldr r3, [sp, #0x1ac]
    ldr r2, [sp, #0x1b0]
    add r0, sp, #0x38
    str r7, [sp, #0x104]
    str r6, [sp, #0x38]
    str r5, [sp, #0x3c]
    str r3, [sp, #0x40]
    str r2, [sp, #0x44]
    rsb r1, r1, #0
    bl _ZN17UnkDeque_0207076c13func_020720e4Ev
    ldr r2, [r0]
    add r1, sp, #0x108
    str r2, [sp, #0x108]
    ldr r3, [r0, #4]
    add r2, sp, #0xf8
    str r3, [sp, #0x10c]
    ldr r5, [r0, #8]
    add r3, sp, #0xe8
    str r5, [sp, #0x110]
    ldr r5, [r0, #0xc]
    add r0, sp, #0x118
    str r5, [sp, #0x114]
    bl _ZN17UnkDeque_0207076c13func_02071978Ev
    ldr r0, [sp, #0x118]
    ldr r2, [sp, #0x11c]
    ldr r1, [sp, #0x120]
    str r0, [sp, #0x1a4]
    ldr r0, [sp, #0x124]
    str r2, [sp, #0x1a8]
    str r1, [sp, #0x1ac]
    str r0, [sp, #0x1b0]
@L_02071558:
    add r0, sp, #0x1a4
    rsb r1, r4, #0
    bl _ZN17UnkDeque_0207076c13func_020720e4Ev
@L_02071564:
    ldrb r0, [r8, #0x10]
    ldr r10, [sp, #0x1a4]
    ldr r7, [sp, #0x1a8]
    ldr r6, [sp, #0x1ac]
    ldr r5, [sp, #0x1b0]
    ldr r4, [r8]
    ldr r3, [r8, #4]
    ldr r2, [r8, #8]
    ldr r1, [r8, #0xc]
    strb r0, [sp, #0xc0]
    str r10, [sp, #0xa0]
    str r7, [sp, #0xa4]
    str r6, [sp, #0xa8]
    str r5, [sp, #0xac]
    str r4, [sp, #0xb0]
    str r3, [sp, #0xb4]
    str r2, [sp, #0xb8]
    str r1, [sp, #0xbc]
    ldr r1, [r9]
    add r0, sp, #0xd8
    str r1, [sp, #0xc4]
    ldr r2, [r9, #4]
    add r1, sp, #0xc4
    str r2, [sp, #0xc8]
    ldr r3, [r9, #8]
    add r2, sp, #0xb0
    str r3, [sp, #0xcc]
    ldr r4, [r9, #0xc]
    add r3, sp, #0xa0
    str r4, [sp, #0xd0]
    ldrb r4, [r9, #0x10]
    strb r4, [sp, #0xd4]
    bl _ZN17UnkDeque_0207076c13func_020717acEv
    add sp, sp, #0x1b4
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_020715f0:
    add r2, r10, #0xc
    mov r0, r10
    mov r1, r4
    str r6, [sp, #0x190]
    str r6, [sp, #0x194]
    str r6, [sp, #0x198]
    str r6, [sp, #0x19c]
    str r2, [sp, #0x1a0]
    bl _ZN17UnkDeque_0207076c13func_020710f0Ev
    mov r1, r0
    and r2, r6, #0xff
    sub r0, sp, #4
    strb r2, [r0]
    ldr r2, [r0]
    add r0, sp, #0x190
    bl _ZN17UnkDeque_0207076c13func_02071e2cEv
    ldr r0, [sp, #0x190]
    str r5, [sp, #0x194]
    cmp r4, #0
    add r0, r0, r5, lsl #2
    beq @L_020716a8
@L_02071644:
    ldr r5, [r9]
    ldr r1, [r9, #0xc]
    ldr r3, [r9, #4]
    ldr r2, [r9, #8]
    str r1, [sp, #0x24]
    ldr r1, [r5]
    cmp r0, #0
    strne r1, [r0]
    ldr r1, [sp, #0x198]
    str r2, [sp, #0x20]
    add r1, r1, #1
    str r1, [sp, #0x198]
    ldr r2, [r9]
    ldr r1, [r9, #0xc]
    add r2, r2, #4
    cmp r2, r1
    ldreq r1, [r9, #4]
    str r2, [r9]
    sub r4, r4, #1
    streq r1, [r9]
    str r5, [sp, #0x18]
    str r3, [sp, #0x1c]
    add r0, r0, #4
    cmp r4, #0
    bne @L_02071644
@L_020716a8:
    ldr r1, [r10, #0xc]
    cmp r1, #0
    moveq r1, #0
    beq @L_020716c8
    ldr r2, [r10, #4]
    ldr r0, [r10, #8]
    add r0, r2, r0
    bl func_02022948
@L_020716c8:
    ldr r2, [r10]
    add r4, sp, #0x190
    add r0, r2, r1, lsl #2
    str r2, [sp, #0x94]
    str r0, [sp, #0x90]
    ldr r0, [r10, #4]
    sub r1, sp, #4
    add r0, r2, r0, lsl #2
    str r0, [sp, #0x98]
    ldr r0, [r10, #0xc]
    add r0, r2, r0, lsl #2
    str r0, [sp, #0x9c]
    and r0, r6, #0xff
    strb r0, [r1]
    ldr r3, [r1]
    ldr r1, [sp]
    add r2, sp, #0x90
    mov r0, r4
    bl _ZN17UnkDeque_0207076c13func_02071fb0Ev
    ldr r3, [r10]
    ldr r0, [r10, #4]
    sub r1, sp, #4
    add r0, r3, r0, lsl #2
    str r0, [sp, #0x80]
    str r0, [sp, #0x88]
    str r3, [sp, #0x84]
    ldr r2, [r10, #0xc]
    and r0, r6, #0xff
    add r2, r3, r2, lsl #2
    str r2, [sp, #0x8c]
    strb r0, [r1]
    ldr r3, [r1]
    ldr r2, [sp]
    add r1, sp, #0x80
    mov r0, r4
    bl _ZN17UnkDeque_0207076c13func_02071ea8Ev
    str r6, [r10, #8]
    ldr r1, [r10]
    ldr r0, [sp, #0x190]
    add r3, sp, #0x19c
    str r0, [r10]
    str r1, [sp, #0x190]
    ldr r2, [r10, #4]
    ldr r1, [sp, #0x194]
    mov r0, r4
    str r1, [r10, #4]
    ldr r1, [sp, #0x198]
    str r2, [sp, #0x194]
    str r1, [r10, #8]
    str r6, [sp, #0x198]
    ldr r2, [r10, #0xc]
    ldr r1, [r3]
    str r1, [r10, #0xc]
    str r2, [r3]
    bl _ZN17UnkDeque_0207076c13func_02071df8Ev
    add sp, sp, #0x1b4
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

asm void UnkDeque_0207076c::func_020717ac()
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x70
    mov r6, r1
    ldr r7, [r6]
    ldr r4, [r2]
    mov r11, r0
    mov r5, r3
    cmp r7, r4
    beq @L_02071950
    mov r0, r2
    bl _ZN17UnkDeque_0207076c13func_02072128Ev
    str r0, [sp, #0xc]
@L_020717dc:
    ldr r2, [r5, #0xc]
    ldr r0, [r5]
    ldr r1, [sp, #0xc]
    sub r2, r2, r0
    mov r0, r2, asr #1
    add r0, r2, r0, lsr #30
    mov r2, r0, asr #2
    cmp r1, r0, asr #2
    addle r0, sp, #0xc
    str r2, [sp, #8]
    addgt r0, sp, #8
    ldr r4, [r0]
    ldr r1, [r6]
    add r0, sp, #0x20
    str r1, [sp, #0x20]
    ldr r2, [r6, #4]
    mov r1, r4
    str r2, [sp, #0x24]
    ldr r2, [r6, #8]
    str r2, [sp, #0x28]
    ldr r2, [r6, #0xc]
    str r2, [sp, #0x2c]
    ldrb r2, [r6, #0x10]
    strb r2, [sp, #0x30]
    bl _ZN17UnkDeque_0207076c13func_020720e4Ev
    ldrb r12, [sp, #0x30]
    ldr r9, [sp, #0x20]
    ldr r8, [sp, #0x24]
    ldr r7, [sp, #0x28]
    ldr lr, [sp, #0x2c]
    ldr r10, [r6]
    ldrb r0, [r6, #0x10]
    ldr r3, [r6, #4]
    ldr r2, [r6, #8]
    ldr r1, [r6, #0xc]
    str r3, [sp, #0x4c]
    strb r12, [sp, #0x6c]
    str r9, [sp, #0x5c]
    str r8, [sp, #0x60]
    str r7, [sp, #0x64]
    str r7, [sp, #0x3c]
    str lr, [sp, #0x68]
    str r9, [sp, #0x34]
    str r8, [sp, #0x38]
    str lr, [sp, #0x40]
    strb r12, [sp, #0x44]
    str r10, [sp, #0x48]
    str r2, [sp, #0x50]
    str r1, [sp, #0x54]
    strb r0, [sp, #0x58]
    cmp r10, r9
    ldr r7, [r5]
    add r3, sp, #0x48
    beq @L_020718fc
@L_020718b4:
    ldr r8, [r3]
    ldr r2, [r3, #4]
    ldr r0, [r3, #0xc]
    add r8, r8, #4
    str r8, [r3]
    cmp r8, r0
    ldr r1, [r3, #8]
    ldr r12, [r10]
    streq r2, [r3]
    str r10, [sp, #0x10]
    ldr r10, [r3]
    str r12, [r7]
    str r2, [sp, #0x14]
    str r1, [sp, #0x18]
    str r0, [sp, #0x1c]
    add r7, r7, #4
    cmp r10, r9
    bne @L_020718b4
@L_020718fc:
    ldr r0, [sp, #0xc]
    sub r1, r4, #1
    sub r0, r0, r4
    str r0, [sp, #0xc]
    ldr r2, [r5]
    ldr r0, [r5, #0xc]
    add r1, r2, r1, lsl #2
    add r1, r1, #4
    cmp r1, r0
    ldreq r0, [r5, #4]
    str r1, [r5]
    streq r0, [r5]
    ldr r0, [sp, #0xc]
    cmp r0, #0
    beq @L_02071950
    add r0, sp, #0x5c
    ldmia r0, {r0, r1, r2, r3}
    stmia r6, {r0, r1, r2, r3}
    ldrb r4, [sp, #0x6c]
    strb r4, [r6, #0x10]
    b @L_020717dc
@L_02071950:
    ldr r0, [r5]
    str r0, [r11]
    ldr r0, [r5, #4]
    str r0, [r11, #4]
    ldr r0, [r5, #8]
    str r0, [r11, #8]
    ldr r0, [r5, #0xc]
    str r0, [r11, #0xc]
    add sp, sp, #0x70
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

asm void UnkDeque_0207076c::func_02071978()
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0xc
    mov r9, r1
    mov r8, r2
    ldr r2, [r8]
    ldr r1, [r9]
    mov r10, r0
    mov r7, r3
    cmp r1, r2
    beq @L_02071ad8
    add r4, sp, #8
    mov r11, #0
    mov r5, #1
@L_020719ac:
    ldr r0, [r8, #4]
    mov r6, r5
    cmp r2, r0
    ldreq r0, [r8, #0xc]
    mov r12, #1
    streq r0, [r8]
    ldr r0, [r8]
    sub r0, r0, #4
    str r0, [r8]
    ldr r1, [r7]
    ldr r0, [r7, #4]
    cmp r1, r0
    ldreq r0, [r7, #0xc]
    ldr r1, [r7, #8]
    streq r0, [r7]
    ldr r0, [r7]
    sub r0, r0, #4
    cmp r0, r1
    ldrlo r1, [r7, #4]
    str r0, [r7]
    sub r1, r0, r1
    mov r0, r1, asr #1
    add r0, r1, r0, lsr #30
    mov r0, r0, asr #2
    str r0, [sp, #8]
    ldr r3, [r9]
    ldr r2, [r9, #8]
    ldr r1, [r8, #8]
    cmp r3, r2
    ldr r2, [r8]
    movlo r6, r11
    cmp r2, r1
    movlo r12, #0
    cmp r6, r12
    bne @L_02071a5c
    sub r2, r2, r3
    mov r1, r2, asr #1
    add r1, r2, r1, lsr #30
    mov r2, r1, asr #2
    cmp r0, r1, asr #2
    movlt r0, r4
    str r2, [sp, #4]
    addge r0, sp, #4
    b @L_02071a84
@L_02071a5c:
    cmp r2, r1
    ldrlo r1, [r8, #4]
    sub r2, r2, r1
    mov r1, r2, asr #1
    add r1, r2, r1, lsr #30
    mov r2, r1, asr #2
    cmp r0, r1, asr #2
    movlt r0, r4
    str r2, [sp]
    addge r0, sp, #0
@L_02071a84:
    ldr r6, [r0]
    ldr r1, [r8]
    add r0, r6, #1
    sub r1, r1, r6, lsl #2
    mov r2, r0, lsl #2
    str r1, [r8]
    ldr r3, [r7]
    mov r0, r2, asr #1
    add r0, r2, r0, lsr #30
    add r3, r3, #4
    mov r2, r0, asr #2
    sub r0, r3, r2, lsl #2
    mov r2, r2, lsl #2
    bl func_02018348
    ldr r0, [r7]
    sub r0, r0, r6, lsl #2
    str r0, [r7]
    ldr r2, [r8]
    ldr r0, [r9]
    cmp r0, r2
    bne @L_020719ac
@L_02071ad8:
    ldr r0, [r7]
    str r0, [r10]
    ldr r0, [r7, #4]
    str r0, [r10, #4]
    ldr r0, [r7, #8]
    str r0, [r10, #8]
    ldr r0, [r7, #0xc]
    str r0, [r10, #0xc]
    add sp, sp, #0xc
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

asm void UnkDeque_0207076c::func_02071b00()
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0xc
    mov r9, r1
    mov r8, r2
    ldr r2, [r9]
    ldr r1, [r8]
    mov r10, r0
    mov r7, r3
    cmp r2, r1
    beq @L_02071c40
    add r4, sp, #8
    mov r11, #0
    mov r5, #1
@L_02071b34:
    ldr r1, [r7, #0xc]
    ldr r0, [r7]
    mov r6, r5
    sub r1, r1, r0
    mov r0, r1, asr #1
    add r0, r1, r0, lsr #30
    mov r0, r0, asr #2
    str r0, [sp, #8]
    ldr r2, [r9]
    ldr r1, [r9, #8]
    ldr r3, [r8]
    cmp r2, r1
    ldr r1, [r8, #8]
    movlo r6, r11
    cmp r3, r1
    movhs r1, #1
    movlo r1, #0
    cmp r6, r1
    bne @L_02071ba4
    sub r2, r3, r2
    mov r1, r2, asr #1
    add r1, r2, r1, lsr #30
    mov r2, r1, asr #2
    cmp r0, r1, asr #2
    movlt r0, r4
    str r2, [sp, #4]
    addge r0, sp, #4
    b @L_02071bc8
@L_02071ba4:
    ldr r1, [r9, #0xc]
    sub r2, r1, r2
    mov r1, r2, asr #1
    add r1, r2, r1, lsr #30
    mov r2, r1, asr #2
    cmp r0, r1, asr #2
    movlt r0, r4
    str r2, [sp]
    addge r0, sp, #0
@L_02071bc8:
    ldr r6, [r0]
    mov r1, r6, lsl #2
    mov r0, r1, asr #1
    add r0, r1, r0, lsr #30
    mov r0, r0, asr #2
    mov r2, r0, lsl #2
    ldr r1, [r9]
    ldr r0, [r7]
    bl func_02018348
    ldr r1, [r9]
    sub r0, r6, #1
    add r1, r1, r0, lsl #2
    add r2, r1, #4
    ldr r1, [r9, #0xc]
    str r2, [r9]
    cmp r2, r1
    ldreq r1, [r9, #4]
    streq r1, [r9]
    ldr r2, [r7]
    ldr r1, [r7, #0xc]
    add r0, r2, r0, lsl #2
    add r0, r0, #4
    str r0, [r7]
    cmp r0, r1
    ldreq r0, [r7, #4]
    streq r0, [r7]
    ldr r1, [r9]
    ldr r0, [r8]
    cmp r1, r0
    bne @L_02071b34
@L_02071c40:
    ldr r0, [r7]
    str r0, [r10]
    ldr r0, [r7, #4]
    str r0, [r10, #4]
    ldr r0, [r7, #8]
    str r0, [r10, #8]
    ldr r0, [r7, #0xc]
    str r0, [r10, #0xc]
    add sp, sp, #0xc
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

asm void UnkDeque_0207076c::func_02071c68()
{
    stmdb sp!, {r4, r5, lr}
    sub sp, sp, #0x24
    mov r5, r0
    ldr r0, [r5, #0x10]
    mov r3, #0
    str r3, [r5, #4]
    cmp r0, #0
    beq @L_02071d24
    ldr r1, [r5, #0x14]
    cmp r1, #0
    beq @L_02071ca8
    ldr r2, [r5, #0xc]
    ldr r0, [r5, #0x10]
    add r0, r2, r0
    bl func_02022948
    mov r3, r1
@L_02071ca8:
    ldr r2, [r5, #8]
    ldr r1, [r5, #0xc]
    ldr r0, [r5, #0x14]
    add r1, r2, r1, lsl #2
    add r0, r2, r0, lsl #2
    add r4, r2, r3, lsl #2
    str r4, [sp, #0x14]
    str r2, [sp, #0x18]
    str r1, [sp, #0x1c]
    str r0, [sp, #0x20]
    str r1, [sp, #4]
    str r2, [sp, #8]
    str r1, [sp, #0xc]
    str r0, [sp, #0x10]
    cmp r1, r4
    beq @L_02071d24
@L_02071ce8:
    ldr r0, [sp, #4]
    ldr r0, [r0]
    cmp r0, #0
    beq @L_02071cfc
    bl _ZdlPv
@L_02071cfc:
    ldr r1, [sp, #4]
    ldr r0, [sp, #0x10]
    add r1, r1, #4
    cmp r1, r0
    ldreq r0, [sp, #8]
    str r1, [sp, #4]
    streq r0, [sp, #4]
    ldr r0, [sp, #4]
    cmp r0, r4
    bne @L_02071ce8
@L_02071d24:
    add r0, r5, #8
    bl _ZN17UnkDeque_0207076c13func_020720b0Ev
    mov r0, r5
    add sp, sp, #0x24
    ldmia sp!, {r4, r5, pc}
}

asm void UnkDeque_0207076c::func_02071d38()
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    sub sp, sp, #0x30
    mov r5, r1
    ldr lr, [r5, #8]
    ldr r3, [r5, #0xc]
    ldr r1, [r5, #0x14]
    add r12, lr, r3, lsl #2
    ldr r7, [r5]
    add r3, lr, r1, lsl #2
    mov r4, r2
    add r4, r4, r7
    mov r6, r0
    add r0, sp, #0
    str r12, [sp]
    str lr, [sp, #4]
    str r12, [sp, #8]
    str r3, [sp, #0xc]
    mov r1, r4, lsr #8
    str r12, [sp, #0x10]
    str lr, [sp, #0x14]
    str r12, [sp, #0x18]
    str r3, [sp, #0x1c]
    bl _ZN17UnkDeque_0207076c13func_020720e4Ev
    ldr r0, [r5, #0x10]
    ldr r12, [sp]
    ldr r3, [sp, #4]
    ldr r2, [sp, #8]
    ldr r1, [sp, #0xc]
    cmp r0, #0
    mov r5, #0
    str r3, [sp, #0x24]
    str r2, [sp, #0x28]
    str r1, [sp, #0x2c]
    str r12, [sp, #0x20]
    mov r0, r4, lsl #0x18
    ldrne r5, [r12]
    ldr r4, [sp, #0x20]
    ldr r3, [sp, #0x24]
    ldr r2, [sp, #0x28]
    ldr r1, [sp, #0x2c]
    add r0, r5, r0, lsr #22
    str r4, [r6]
    str r3, [r6, #4]
    str r2, [r6, #8]
    str r1, [r6, #0xc]
    str r0, [r6, #0x10]
    add sp, sp, #0x30
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

asm void UnkDeque_0207076c::func_02071df8()
{
    stmdb sp!, {r3, r4, lr}
    sub sp, sp, #4
    mov r4, r0
    ldr r0, [r4]
    cmp r0, #0
    beq @L_02071e20
    ldr r1, [r4, #8]
    sub r1, r1, r1
    str r1, [r4, #8]
    bl _ZdlPv
@L_02071e20:
    mov r0, r4
    add sp, sp, #4
    ldmia sp!, {r3, r4, pc}
}

asm void UnkDeque_0207076c::func_02071e2c()
{
    stmdb sp!, {r4, r5, r6, lr}
    ldr r2, =data_020fc6f8
    mov r5, r0
    ldr r3, [r2]
    mov r4, r1
    tst r3, #1
    orreq r1, r3, #1
    ldreq r0, =data_020aeb8c
    mvneq r3, #0xc0000001
    streq r3, [r0]
    ldr r0, =data_020aeb8c
    streq r1, [r2]
    ldr r0, [r0]
    cmp r4, r0
    bls @L_02071e6c
    bl _ZN17UnkDeque_0207076c13func_020711fcEv
@L_02071e6c:
    add r0, r4, #1
    mov r0, r0, lsl #2
    bl _Znwm
    movs r6, r0
    bne @L_02071e8c
    ldr r0, =data_020aed90
    bl func_0201a508
    bl func_02017a7c
@L_02071e8c:
    add r0, r4, #1
    str r6, [r5]
    str r0, [r5, #0xc]
    ldmia sp!, {r4, r5, r6, pc}
}

asm void UnkDeque_0207076c::func_02071ea8()
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r7, r0
    mov r6, r1
    mov r5, r2
    ldr r3, [r7]
    ldr r0, [r7, #4]
    ldr r2, [r5]
    ldr r1, [r6]
    add r0, r3, r0, lsl #2
    cmp r1, r2
    bhi @L_02071f1c
    sub r3, r2, r1
    mov r2, r3, asr #1
    add r2, r3, r2, lsr #30
    mov r3, r2, asr #2
    mov r2, r3, lsl #2
    sub r0, r0, r3, lsl #2
    bl func_02018348
    ldr r1, [r5]
    ldr r0, [r6]
    ldr r2, [r7, #8]
    sub r1, r1, r0
    mov r0, r1, asr #1
    add r0, r1, r0, lsr #30
    ldr r1, [r7, #4]
    add r2, r2, r0, asr #2
    sub r0, r1, r0, asr #2
    stmib r7, {r0, r2}
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_02071f1c:
    ldr r1, [r5, #4]
    sub r3, r2, r1
    mov r2, r3, asr #1
    add r2, r3, r2, lsr #30
    mov r2, r2, asr #2
    sub r4, r0, r2, lsl #2
    mov r0, r4
    mov r2, r2, lsl #2
    bl func_02018348
    ldr r1, [r6]
    ldr r0, [r6, #0xc]
    sub r2, r0, r1
    mov r0, r2, asr #1
    add r0, r2, r0, lsr #30
    mov r0, r0, asr #2
    mov r2, r0, lsl #2
    sub r0, r4, r0, lsl #2
    bl func_02018348
    ldr r1, [r6, #0xc]
    ldr r0, [r6]
    ldr r4, [r5]
    ldr r3, [r5, #4]
    sub r2, r1, r0
    sub r3, r4, r3
    mov r1, r2, asr #1
    mov r0, r3, asr #1
    add r1, r2, r1, lsr #30
    add r0, r3, r0, lsr #30
    mov r2, r1, asr #2
    ldr r1, [r7, #4]
    add r2, r2, r0, asr #2
    ldr r0, [r7, #8]
    sub r1, r1, r2
    add r0, r0, r2
    str r1, [r7, #4]
    str r0, [r7, #8]
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

asm void UnkDeque_0207076c::func_02071fb0()
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    mov r7, r0
    ldr r3, [r7, #4]
    ldr r0, [r7, #8]
    mov r6, r1
    ldr r1, [r7, #0xc]
    add r0, r3, r0
    mov r5, r2
    bl func_02022948
    ldr r2, [r7]
    ldr r0, [r5]
    add r4, r2, r1, lsl #2
    ldr r1, [r6]
    cmp r1, r0
    bhi @L_0207202c
    sub r2, r0, r1
    mov r0, r2, asr #1
    add r0, r2, r0, lsr #30
    mov r2, r0, asr #2
    mov r0, r4
    mov r2, r2, lsl #2
    bl func_02018348
    ldr r1, [r5]
    ldr r0, [r6]
    ldr r2, [r7, #8]
    sub r1, r1, r0
    mov r0, r1, asr #1
    add r0, r1, r0, lsr #30
    add r0, r2, r0, asr #2
    str r0, [r7, #8]
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_0207202c:
    ldr r2, [r6, #0xc]
    mov r0, r4
    sub r3, r2, r1
    mov r2, r3, asr #1
    add r2, r3, r2, lsr #30
    mov r8, r2, asr #2
    mov r2, r8, lsl #2
    bl func_02018348
    ldr r1, [r5, #4]
    ldr r2, [r5]
    add r0, r4, r8, lsl #2
    sub r3, r2, r1
    mov r2, r3, asr #1
    add r2, r3, r2, lsr #30
    mov r2, r2, asr #2
    mov r2, r2, lsl #2
    bl func_02018348
    ldr r1, [r5]
    ldr r0, [r5, #4]
    ldr r4, [r6, #0xc]
    ldr r3, [r6]
    sub r2, r1, r0
    sub r3, r4, r3
    mov r1, r2, asr #1
    add r1, r2, r1, lsr #30
    mov r0, r3, asr #1
    add r0, r3, r0, lsr #30
    mov r1, r1, asr #2
    ldr r2, [r7, #8]
    add r0, r1, r0, asr #2
    add r0, r2, r0
    str r0, [r7, #8]
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

asm void UnkDeque_0207076c::func_020720b0()
{
    stmdb sp!, {r3, r4, lr}
    sub sp, sp, #4
    mov r4, r0
    ldr r0, [r4]
    cmp r0, #0
    beq @L_020720d8
    ldr r1, [r4, #8]
    sub r1, r1, r1
    str r1, [r4, #8]
    bl _ZdlPv
@L_020720d8:
    mov r0, r4
    add sp, sp, #4
    ldmia sp!, {r3, r4, pc}
}

asm void UnkDeque_0207076c::func_020720e4()
{
    stmdb sp!, {r4, lr}
    ldr r3, [r0, #0xc]
    ldmia r0, {r2, r4}
    sub r12, r2, r4
    sub lr, r3, r4
    mov r3, r12, asr #1
    mov r2, lr, asr #1
    add r3, r12, r3, lsr #30
    add r2, lr, r2, lsr #30
    adds r1, r1, r3, asr #2
    addmi r1, r1, r2, asr #2
    bmi @L_0207211c
    cmp r1, r2, asr #2
    subge r1, r1, r2, asr #2
@L_0207211c:
    add r1, r4, r1, lsl #2
    str r1, [r0]
    ldmia sp!, {r4, pc}
}

asm void UnkDeque_0207076c::func_02072128()
{
    stmdb sp!, {r3, lr}
    ldr r12, [r1]
    ldr r3, [r0]
    ldr lr, [r0, #8]
    sub r2, r3, r12
    mov r1, r2, asr #1
    add r1, r2, r1, lsr #30
    cmp r3, lr
    mov r2, r1, asr #2
    blo @L_02072174
    cmp r12, lr
    bhs @L_02072194
    ldr r1, [r0, #0xc]
    ldr r0, [r0, #4]
    sub r1, r1, r0
    mov r0, r1, asr #1
    add r0, r1, r0, lsr #30
    sub r2, r2, r0, asr #2
    b @L_02072194
@L_02072174:
    cmp r12, lr
    blo @L_02072194
    ldr r1, [r0, #0xc]
    ldr r0, [r0, #4]
    sub r1, r1, r0
    mov r0, r1, asr #1
    add r0, r1, r0, lsr #30
    add r2, r2, r0, asr #2
@L_02072194:
    mov r0, r2
    ldmia sp!, {r3, pc}
}

asm void UnkDeque_0207076c::func_0207219c()
{
    stmdb sp!, {r0, r1, r2, r3}
    stmdb sp!, {r3, r4, r5, r6, lr}
    sub sp, sp, #0x24
    ldr r1, [sp, #0x4c]
    mov r4, r0
    ldmia r1, {r0, r1, r2, r3}
    add r12, sp, #0x14
    stmia r12, {r0, r1, r2, r3}
    add r6, sp, #0x3c
    add r5, sp, #4
    ldmia r6, {r0, r1, r2, r3}
    stmia r5, {r0, r1, r2, r3}
    mov r0, r12
    mov r1, r5
    bl _ZN17UnkDeque_0207076c13func_02072538Ev
    movs r1, r0
    addeq sp, sp, #0x24
    ldmeqia sp!, {r3, r4, r5, r6, lr}
    addeq sp, sp, #0x10
    bxeq lr
    mov r5, #0
    sub r0, sp, #4
    strb r5, [r0]
    ldr r2, [r0]
    mov r0, r4
    bl _ZN17UnkDeque_0207076c13func_02072478Ev
    sub r0, sp, #4
    strb r5, [r0]
    ldr r3, [r0]
    ldr r2, [sp, #0x4c]
    mov r0, r4
    mov r1, r6
    bl _ZN17UnkDeque_0207076c13func_02072230Ev
    add sp, sp, #0x24
    ldmia sp!, {r3, r4, r5, r6, lr}
    add sp, sp, #0x10
    bx lr
}

asm void UnkDeque_0207076c::func_02072230()
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, lr}
    sub sp, sp, #0x5c
    mov r7, r0
    ldr r4, [r7]
    mov r6, r1
    cmp r4, #0
    mov r5, r2
    addeq sp, sp, #0x5c
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, pc}
    ldr r2, [r7, #4]
    ldr r0, [r7, #8]
    ldr r1, [r7, #0xc]
    add r0, r2, r0
    bl func_02022948
    add r4, r4, r1, lsl #2
    mov r0, r5
    mov r1, r6
    bl _ZN17UnkDeque_0207076c13func_02072538Ev
    str r0, [sp, #0x18]
    ldr r2, [r7]
    ldr r1, [r7, #0xc]
    ldr r12, [r6]
    add r1, r2, r1, lsl #2
    sub r2, r1, r4
    mov r1, r2, asr #1
    add r1, r2, r1, lsr #30
    mov r2, r1, asr #2
    cmp r0, r1, asr #2
    addlt r1, sp, #0x18
    str r2, [sp, #0x14]
    addge r1, sp, #0x14
    ldr r1, [r1]
    ldr r3, [r6, #8]
    str r1, [sp, #0x14]
    ldr r1, [r7, #8]
    ldr r2, [r6, #0xc]
    add r0, r1, r0
    str r0, [r7, #8]
    ldr r8, [r6, #4]
    ldr r1, [sp, #0x14]
    add r0, sp, #0x2c
    str r12, [sp, #0x2c]
    str r3, [sp, #0x34]
    str r2, [sp, #0x38]
    str r8, [sp, #0x30]
    bl _ZN17UnkDeque_0207076c13func_020724f4Ev
    ldr r8, [r0]
    ldr r3, [r0, #4]
    ldr r2, [r0, #8]
    ldr r1, [r0, #0xc]
    str r8, [sp, #0x4c]
    add r0, sp, #0x4c
    mov r8, sp
    str r3, [sp, #0x50]
    str r2, [sp, #0x54]
    str r1, [sp, #0x58]
    ldmia r0, {r0, r1, r2, r3}
    stmia r8, {r0, r1, r2, r3}
    str r4, [sp, #0x10]
    ldmia r6, {r0, r1, r2, r3}
    bl _ZN17UnkDeque_0207076c13func_020723a8Ev
    ldr r1, [sp, #0x14]
    ldr r0, [sp, #0x18]
    subs r0, r0, r1
    str r0, [sp, #0x18]
    addeq sp, sp, #0x5c
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, pc}
    ldr r8, [r6]
    ldr r4, [r6, #4]
    ldr r3, [r6, #8]
    ldr r2, [r6, #0xc]
    add r0, sp, #0x1c
    str r8, [sp, #0x1c]
    str r4, [sp, #0x20]
    str r3, [sp, #0x24]
    str r2, [sp, #0x28]
    bl _ZN17UnkDeque_0207076c13func_020724f4Ev
    ldmia r0, {r8, lr}
    ldr r12, [r0, #8]
    ldr r6, [r0, #0xc]
    mov r4, sp
    ldmia r5, {r0, r1, r2, r3}
    stmia r4, {r0, r1, r2, r3}
    ldr r4, [r7]
    str r8, [sp, #0x3c]
    add r0, sp, #0x3c
    str lr, [sp, #0x40]
    str r12, [sp, #0x44]
    str r6, [sp, #0x48]
    ldmia r0, {r0, r1, r2, r3}
    str r4, [sp, #0x10]
    bl _ZN17UnkDeque_0207076c13func_020723a8Ev
    add sp, sp, #0x5c
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
}

asm void UnkDeque_0207076c::func_020723a8()
{
    stmdb sp!, {r0, r1, r2, r3}
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    ldr r0, [sp, #0x28]
    ldr r7, [sp, #0x38]
    ldr r10, [sp, #0x48]
    cmp r0, r7
    ldr r8, [sp, #0x40]
    beq @L_02072468
    ldr r6, [sp, #0x38]
    mov r11, #1
    add r4, sp, #0x28
@L_020723d4:
    ldr r1, [sp, #0x30]
    mov r2, #1
    cmp r0, r1
    movhs r1, r11
    movlo r1, #0
    cmp r7, r8
    movlo r2, #0
    cmp r1, r2
    ldrne r1, [sp, #0x34]
    subeq r2, r6, r0
    subne r2, r1, r0
    mov r1, r2, asr #1
    add r1, r2, r1, lsr #30
    mov r9, r1, asr #2
    ldr r1, [sp, #0x28]
    add r0, r0, r9, lsl #2
    sub r2, r0, r1
    mov r0, r2, asr #1
    add r0, r2, r0, lsr #30
    mov r5, r0, asr #2
    mov r2, r5, lsl #2
    mov r0, r10
    bl func_02018348
    ldr r1, [r4]
    sub r0, r9, #1
    add r2, r1, r0, lsl #2
    ldr r0, [sp, #0x34]
    add r1, r2, #4
    str r2, [r4]
    cmp r1, r0
    ldreq r0, [sp, #0x2c]
    str r1, [sp, #0x28]
    streq r0, [sp, #0x28]
    ldr r0, [sp, #0x28]
    add r10, r10, r5, lsl #2
    cmp r0, r7
    bne @L_020723d4
@L_02072468:
    mov r0, r10
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    add sp, sp, #0x10
    bx lr
}

asm void UnkDeque_0207076c::func_02072478()
{
    stmdb sp!, {r4, r5, r6, lr}
    ldr r2, =data_020fc6fc
    mov r5, r0
    ldr r3, [r2]
    mov r4, r1
    tst r3, #1
    orreq r1, r3, #1
    ldreq r0, =data_020aeb88
    mvneq r3, #0xc0000001
    streq r3, [r0]
    ldr r0, =data_020aeb88
    streq r1, [r2]
    ldr r0, [r0]
    cmp r4, r0
    bls @L_020724b8
    bl _ZN17UnkDeque_0207076c13func_020711fcEv
@L_020724b8:
    add r0, r4, #1
    mov r0, r0, lsl #2
    bl _Znwm
    movs r6, r0
    bne @L_020724d8
    ldr r0, =data_020aed90
    bl func_0201a508
    bl func_02017a7c
@L_020724d8:
    add r0, r4, #1
    str r6, [r5]
    str r0, [r5, #0xc]
    ldmia sp!, {r4, r5, r6, pc}
}

asm void UnkDeque_0207076c::func_020724f4()
{
    stmdb sp!, {r4, lr}
    ldr r3, [r0, #0xc]
    ldmia r0, {r2, r4}
    sub r12, r2, r4
    sub lr, r3, r4
    mov r3, r12, asr #1
    mov r2, lr, asr #1
    add r3, r12, r3, lsr #30
    add r2, lr, r2, lsr #30
    adds r1, r1, r3, asr #2
    addmi r1, r1, r2, asr #2
    bmi @L_0207252c
    cmp r1, r2, asr #2
    subge r1, r1, r2, asr #2
@L_0207252c:
    add r1, r4, r1, lsl #2
    str r1, [r0]
    ldmia sp!, {r4, pc}
}

asm void UnkDeque_0207076c::func_02072538()
{
    stmdb sp!, {r3, lr}
    ldr r12, [r1]
    ldr r3, [r0]
    ldr lr, [r0, #8]
    sub r2, r3, r12
    mov r1, r2, asr #1
    add r1, r2, r1, lsr #30
    cmp r3, lr
    mov r2, r1, asr #2
    blo @L_02072584
    cmp r12, lr
    bhs @L_020725a4
    ldr r1, [r0, #0xc]
    ldr r0, [r0, #4]
    sub r1, r1, r0
    mov r0, r1, asr #1
    add r0, r1, r0, lsr #30
    sub r2, r2, r0, asr #2
    b @L_020725a4
@L_02072584:
    cmp r12, lr
    blo @L_020725a4
    ldr r1, [r0, #0xc]
    ldr r0, [r0, #4]
    sub r1, r1, r0
    mov r0, r1, asr #1
    add r0, r1, r0, lsr #30
    add r2, r2, r0, asr #2
@L_020725a4:
    mov r0, r2
    ldmia sp!, {r3, pc}
}

asm void UnkClass_020621b4::func_020725ac()
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x2c
    mov r9, r1
    mov r10, r0
    str r2, [sp, #8]
    mov r6, r3
    ldr r8, [sp, #0x54]
    mov r5, #0
    bl func_ov015_02143664
    mov r11, r0
    mov r0, r9
    bl func_ov015_021319b0
    add r0, r10, r0
    add r0, r0, #0x11000
    ldrb r0, [r0, #0x7d6]
    add r4, sp, #0xc
    mov r1, #0
    tst r0, #1
    movne r7, #1
    mov r0, r8
    mov r2, #0x20
    moveq r7, r5
    bl MI_CpuFill8
    mov r1, #0
    mov r2, #0x20
    mov r0, r4
    bl MI_CpuFill8
    ldr r0, [sp, #0x50]
    mov r1, #0
    cmp r0, #0
    orreq r5, r5, #1
    ldr r0, [sp, #8]
    orrne r5, r5, #2
    cmp r0, #0
    bne @L_020726f8
    cmp r6, #0
    mov r6, r1
    mov r0, r10
    mov r1, r9
    mov r2, r6
    bne @L_020726a4
    mov r3, r5
    bl _ZN17UnkClass_020621b413func_0207455cEv
    str r0, [r4]
    mov r0, r10
    mov r1, r9
    mov r2, #1
    mov r3, r5
    bl _ZN17UnkClass_020621b413func_0207455cEv
    str r0, [r4, #4]
    add r4, r4, #8
@L_02072678:
    mov r0, r10
    mov r1, r9
    mov r2, r6
    mov r3, r5
    str r7, [sp]
    bl _ZN17UnkClass_020621b413func_02074700Ev
    add r6, r6, #1
    cmp r6, #6
    str r0, [r4], #4
    blt @L_02072678
    b @L_0207284c
@L_020726a4:
    mov r3, r5
    bl _ZN17UnkClass_020621b413func_02074584Ev
    str r0, [r4]
    mov r0, r10
    mov r1, r9
    mov r2, #1
    mov r3, r5
    bl _ZN17UnkClass_020621b413func_02074584Ev
    str r0, [r4, #4]
    add r4, r4, #8
@L_020726cc:
    mov r0, r10
    mov r1, r9
    mov r2, r6
    mov r3, r5
    str r7, [sp]
    bl _ZN17UnkClass_020621b413func_02074728Ev
    add r6, r6, #1
    cmp r6, #6
    str r0, [r4], #4
    blt @L_020726cc
    b @L_0207284c
@L_020726f8:
    cmp r0, #2
    bne @L_02072758
    cmp r6, #1
    bne @L_02072740
    orr r5, r5, #0x40
    mov r6, r1
    mov r11, #6
@L_02072714:
    mov r0, r10
    mov r1, r9
    mov r2, r11
    mov r3, r6
    stmia sp, {r5, r7}
    bl _ZN17UnkClass_020621b413func_020745e4Ev
    add r6, r6, #1
    cmp r6, #6
    str r0, [r4], #4
    blt @L_02072714
    b @L_0207284c
@L_02072740:
    mov r0, r1
@L_02072744:
    add r0, r0, #1
    cmp r0, #6
    str r1, [r4], #4
    blt @L_02072744
    b @L_0207284c
@L_02072758:
    cmp r6, #0
    bne @L_020727ec
    ldrb r0, [r11, #0xf]
    mov r6, #0
    mov r2, r6
    tst r0, #0x20
    movne r1, #1
    cmp r1, #0
    orrne r5, r5, #0x20
    tst r0, #1
    movne r0, #1
    moveq r0, #0
    cmp r0, #0
    orrne r5, r5, #0x10
    mov r0, r10
    mov r1, r9
    mov r3, r5
    bl _ZN17UnkClass_020621b413func_020745acEv
    str r0, [r4]
    mov r0, r10
    mov r1, r9
    mov r2, #1
    mov r3, r5
    bl _ZN17UnkClass_020621b413func_020745acEv
    str r0, [r4, #4]
    add r4, r4, #8
@L_020727c0:
    mov r0, r10
    mov r1, r9
    mov r2, r6
    mov r3, r5
    str r7, [sp]
    bl _ZN17UnkClass_020621b413func_02074750Ev
    add r6, r6, #1
    cmp r6, #6
    str r0, [r4], #4
    blt @L_020727c0
    b @L_0207284c
@L_020727ec:
    mov r6, r1
    mov r0, r10
    mov r1, r9
    mov r2, r6
    mov r3, r5
    bl _ZN17UnkClass_020621b413func_020745d4Ev
    str r0, [r4]
    mov r0, r10
    mov r1, r9
    mov r2, #1
    mov r3, r5
    bl _ZN17UnkClass_020621b413func_020745d4Ev
    str r0, [r4, #4]
    add r4, r4, #8
@L_02072824:
    mov r0, r10
    mov r1, r9
    mov r2, r6
    mov r3, r5
    str r7, [sp]
    bl _ZN17UnkClass_020621b413func_02074778Ev
    add r6, r6, #1
    cmp r6, #6
    str r0, [r4], #4
    blt @L_02072824
@L_0207284c:
    ldr r0, [sp, #8]
    mov r2, #0
    mov r6, r2
    cmp r0, #2
    streq r6, [r8, #4]
    add r5, sp, #0xc
    streq r6, [r8]
    beq @L_02072880
@L_0207286c:
    ldr r0, [r5], #4
    str r0, [r8, r6, lsl #2]
    add r6, r6, #1
    cmp r6, #2
    blt @L_0207286c
@L_02072880:
    cmp r6, #8
    addge sp, sp, #0x2c
    mov r0, r6
    ldmgeia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02072890:
    mov r3, r2
    b @L_020728a8
@L_02072898:
    ldr r1, [r8, r3, lsl #2]
    add r3, r3, #1
    cmp r4, r1
    streq r2, [r5]
@L_020728a8:
    ldr r4, [r5]
    cmp r4, #0
    beq @L_020728bc
    cmp r3, r0
    blt @L_02072898
@L_020728bc:
    add r6, r6, #1
    cmp r4, #0
    strne r4, [r8, r0, lsl #2]
    addne r0, r0, #1
    cmp r6, #8
    add r5, r5, #4
    blt @L_02072890
    add sp, sp, #0x2c
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

int UnkClass_020621b4::func_020728e0(int value)
{
    if (value == 4) {
        return 4;
    }
    if (value == 5) {
        return 3;
    }
    if (value == 6) {
        return 2;
    }
    return value == 7;
}

asm void UnkClass_020621b4::func_02072914()
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r4, r3
    mov r5, r2
    ldrb r2, [r4, #2]
    ldrb r12, [r4]
    mov r3, #0
    cmp r2, #0xa
    moveq r3, #1
    cmp r12, #0xa
    addls pc, pc, r12, lsl #2
    b @L_02072a54
    b @L_0207296c
    b @L_02072974
    b @L_02072988
    b @L_0207299c
    b @L_020729c0
    b @L_020729c0
    b @L_020729c0
    b @L_020729c0
    b @L_02072a0c
    b @L_02072a24
    b @L_02072a3c
@L_0207296c:
    mov r0, #1
    ldmia sp!, {r3, r4, r5, pc}
@L_02072974:
    ldrh r0, [r4, #4]
    cmp r5, r0
    movle r0, #1
    movgt r0, #0
    ldmia sp!, {r3, r4, r5, pc}
@L_02072988:
    ldrh r0, [r4, #4]
    cmp r5, r0
    movge r0, #1
    movlt r0, #0
    ldmia sp!, {r3, r4, r5, pc}
@L_0207299c:
    ldrh r0, [r4, #4]
    cmp r5, r0
    blt @L_020729b8
    ldrh r0, [r4, #6]
    cmp r5, r0
    movle r0, #1
    ldmleia sp!, {r3, r4, r5, pc}
@L_020729b8:
    mov r0, #0
    ldmia sp!, {r3, r4, r5, pc}
@L_020729c0:
    cmp r3, #0
    cmpeq r5, #0
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, pc}
    mov r1, r12
    bl _ZN17UnkClass_020621b413func_020728e0Ei
    cmp r0, #0
    mov r2, #0
    ble @L_02072a04
@L_020729e4:
    add r1, r4, r2, lsl #1
    ldrh r1, [r1, #4]
    cmp r5, r1
    moveq r0, #1
    ldmeqia sp!, {r3, r4, r5, pc}
    add r2, r2, #1
    cmp r2, r0
    blt @L_020729e4
@L_02072a04:
    mov r0, #0
    ldmia sp!, {r3, r4, r5, pc}
@L_02072a0c:
    ldr r3, [sp, #0x10]
    bl func_0207f7cc
    cmp r5, r0
    movle r0, #1
    movgt r0, #0
    ldmia sp!, {r3, r4, r5, pc}
@L_02072a24:
    ldr r3, [sp, #0x10]
    bl func_0207f7cc
    cmp r5, r0
    movle r0, #1
    movgt r0, #0
    ldmia sp!, {r3, r4, r5, pc}
@L_02072a3c:
    ldr r3, [sp, #0x10]
    bl func_0207f7cc
    cmp r5, r0
    moveq r0, #1
    movne r0, #0
    ldmia sp!, {r3, r4, r5, pc}
@L_02072a54:
    mov r0, #0
    ldmia sp!, {r3, r4, r5, pc}
}

asm void UnkClass_020621b4::func_02072a5c()
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, lr}
    sub sp, sp, #4
    mov r5, r2
    movs r7, r1
    cmpne r5, #0
    mov r6, r0
    mov r4, r3
    addeq sp, sp, #4
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, pc}
    mov r0, r4
    bl _ZN17UnkClass_020621b413func_02074aacEv
    cmp r0, #1
    bne @L_02072ab0
    ldrh r1, [r7, #0x42]
    ldrh r0, [r5, #0x42]
    cmp r1, r0
    beq @L_02072b3c
    add sp, sp, #4
    mov r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
@L_02072ab0:
    cmp r0, #5
    bne @L_02072ad8
    mov r0, r7
    mov r1, r5
    bl func_ov015_021318a4
    cmp r0, #0
    bne @L_02072b3c
    add sp, sp, #4
    mov r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
@L_02072ad8:
    ldrh r2, [r7, #0x42]
    ldrh r1, [r5, #0x42]
    cmp r2, r1
    addeq sp, sp, #4
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, pc}
    cmp r0, #2
    bne @L_02072b18
    mov r0, r7
    mov r1, r5
    bl func_ov015_021318a4
    cmp r0, #0
    bne @L_02072b3c
    add sp, sp, #4
    mov r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
@L_02072b18:
    cmp r0, #3
    bne @L_02072b3c
    mov r0, r7
    mov r1, r5
    bl func_ov015_021318a4
    cmp r0, #0
    addne sp, sp, #4
    movne r0, #0
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, pc}
@L_02072b3c:
    ldrb r0, [r4, #2]
    mov r8, #1
    cmp r0, #0xe
    moveq r8, #6
    beq @L_02072b58
    cmp r0, #0xd
    moveq r8, #6
@L_02072b58:
    cmp r8, #0
    mov r7, #0
    ble @L_02072bac
@L_02072b64:
    ldrb r2, [r4, #2]
    mov r0, r6
    mov r1, r5
    mov r3, r7
    bl func_0207f7cc
    mov r2, r0
    mov r0, r6
    mov r1, r5
    mov r3, r4
    str r7, [sp]
    bl _ZN17UnkClass_020621b413func_02072914Ev
    cmp r0, #0
    addne sp, sp, #4
    movne r0, #1
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, pc}
    add r7, r7, #1
    cmp r7, r8
    blt @L_02072b64
@L_02072bac:
    mov r0, #0
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
}

asm void UnkClass_020621b4::func_02072bb8()
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x88
    add r5, sp, #0x24
    mov r4, #0
    mov r10, r0
    str r1, [sp, #8]
    str r2, [sp, #0xc]
    str r3, [sp, #0x10]
    strh r4, [r5]
    strh r4, [r5, #2]
    movs r0, r1
    beq @L_02072bfc
    mov r1, r3
    bl func_020808c4
    ldr r1, [sp, #0xc]
    cmp r1, r0
    beq @L_02072c08
@L_02072bfc:
    add sp, sp, #0x88
    mov r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02072c08:
    ldr r0, [sp, #8]
    ldr r1, [sp, #0x10]
    mov r2, r4
    mov r3, r4
    bl func_02080830
    ldr r1, [sp, #0xc]
    mov r0, r10
    bl _ZN17UnkClass_020621b413func_020739ccEi
    str r0, [sp, #0x20]
    cmp r0, #0
    addeq sp, sp, #0x88
    moveq r0, r4
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldrb r0, [r0, #0xa]
    cmp r0, #0
    addeq sp, sp, #0x88
    moveq r0, #1
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02072c50:
    ldr r0, [sp, #0x10]
    cmp r4, r0
    beq @L_02072cbc
    ldr r0, [sp, #8]
    mov r1, r4
    bl func_020808c4
    ldr r1, [sp, #0xc]
    cmp r1, r0
    bne @L_02072cbc
    ldr r0, [sp, #8]
    mov r1, r4
    mov r2, #0
    bl func_0208084c
    mov r5, #1
    mov r6, r0
    ldr r0, [sp, #8]
    mov r1, r4
    mov r2, r5
    bl func_0208084c
    mov r3, r0
    ldr r0, [sp, #8]
    ldr r1, [sp, #0x10]
    mov r2, r6
    bl func_02080830
    add sp, sp, #0x88
    mov r0, r5
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02072cbc:
    add r4, r4, #1
    cmp r4, #6
    blt @L_02072c50
    mov r0, #0
    str r0, [sp, #0x14]
    add r5, sp, #0x48
    mov r4, #0x20
    ldr r1, [sp, #0x14]
    mov r0, r5
    mov r2, r4
    bl memset
    ldr r1, [sp, #0x14]
    mov r2, r4
    add r0, sp, #0x68
    bl memset
    ldr r0, [sp, #8]
    bl func_02080b90
    ldr r1, [sp, #0x14]
    mov r2, r5
    str r1, [sp]
    mov r1, r0
    mov r0, #0x80
    str r0, [sp, #4]
    mov r0, r10
    mov r3, #0x10
    bl func_02078aac
    str r0, [sp, #0x1c]
    ldr r0, [sp, #8]
    bl func_020802a0
    add r5, sp, #0x28
    ldr r7, =data_020a71d0
    mov r8, r0
    mov r4, r5
    ldmia r7!, {r0, r1, r2, r3}
    stmia r5!, {r0, r1, r2, r3}
    ldmia r7, {r0, r1, r2, r3}
    stmia r5, {r0, r1, r2, r3}
    ldr r9, [sp, #0x14]
@L_02072d54:
    ldr r0, [r4, r9, lsl #2]
    cmp r8, r0
    streq r9, [sp, #0x18]
    add r9, r9, #1
    cmp r9, #0x20
    blo @L_02072d54
    ldr r0, [sp, #8]
    mov r7, #1
    ldrh r0, [r0, #0x42]
    add r4, sp, #0x28
    add r5, sp, #0x48
    strh r0, [sp, #0x68]
@L_02072d84:
    ldr r1, [sp, #0x18]
    ldr r0, [sp, #0x14]
    mov r9, #0
    add r11, r1, r0
    sub r8, r1, r0
@L_02072d98:
    mov r0, r9, lsl #1
    ldrh r1, [r5, r0]
    cmp r1, #0
    beq @L_02072e08
    mov r0, r10
    bl _ZN17UnkClass_020621b413func_0206f500Ev
    bl func_ov015_02130ae8
    cmp r0, #0
    beq @L_02072e08
    bl func_020802a0
    mov r2, #0
@L_02072dc4:
    ldr r1, [r4, r2, lsl #2]
    cmp r0, r1
    moveq r6, r2
    add r2, r2, #1
    cmp r2, #0x20
    blo @L_02072dc4
    cmp r6, r11
    cmpne r6, r8
    bne @L_02072e08
    mov r3, r9, lsl #1
    ldrh r2, [r5, r3]
    mov r1, r7, lsl #1
    add r0, sp, #0x68
    strh r2, [r0, r1]
    mov r0, #0
    add r7, r7, #1
    strh r0, [r5, r3]
@L_02072e08:
    add r9, r9, #1
    cmp r9, #0x10
    blt @L_02072d98
    ldr r0, [sp, #0x14]
    cmp r7, #0x10
    add r0, r0, #1
    str r0, [sp, #0x14]
    beq @L_02072e30
    cmp r0, #0x20
    blo @L_02072d84
@L_02072e30:
    ldr r0, [sp, #0x1c]
    mov r7, #0
    mov r9, r7
    cmp r0, #0
    mov r6, r7
    ble @L_02072ec8
    add r4, sp, #0x24
    add r8, sp, #0x68
@L_02072e50:
    mov r0, r9, lsl #1
    ldrh r0, [r8, r0]
    mov r1, r6
    bl func_ov015_02130b14
    movs r5, r0
    ldrne r0, [sp, #8]
    ldrneh r1, [r5, #0x42]
    ldrneh r0, [r0, #0x42]
    cmpne r1, r0
    beq @L_02072eb8
    ldr r1, [sp, #8]
    ldr r2, [sp, #0xc]
    mov r0, r10
    mov r3, r5
    str r6, [sp]
    bl _ZN17UnkClass_020621b413func_02073e3cEPviih
    cmp r0, #0
    bne @L_02072eb8
    ldr r0, [sp, #0x20]
    mov r1, r7, lsl #1
    ldrh r2, [r5, #0x42]
    ldrb r0, [r0, #0xa]
    add r7, r7, #1
    strh r2, [r4, r1]
    cmp r7, r0
    beq @L_02072ec8
@L_02072eb8:
    ldr r0, [sp, #0x1c]
    add r9, r9, #1
    cmp r9, r0
    blt @L_02072e50
@L_02072ec8:
    ldr r0, [sp, #0x20]
    mov r4, #1
    ldrb r0, [r0, #0xa]
    cmp r7, r0
    bge @L_02072fc4
    ldr r0, [sp, #8]
    bl func_02080b90
    mov r8, #0
    add r6, sp, #0x68
    mov r1, r0
    str r8, [sp]
    mov r0, #0x80
    str r0, [sp, #4]
    mov r0, r10
    mov r2, r6
    mov r3, #0x10
    bl func_02078aac
    mov r9, r0
    mov r0, r10
    mov r1, r6
    mov r2, r9
    mov r3, #0x81
    str r4, [sp]
    bl func_0207f634
    cmp r9, #0
    ble @L_02072fac
    add r11, sp, #0x24
    mov r5, r8
@L_02072f38:
    mov r0, r8, lsl #1
    ldrh r0, [r6, r0]
    mov r1, r5
    bl func_ov015_02130b14
    movs r4, r0
    ldrne r0, [sp, #8]
    ldrneh r1, [r4, #0x42]
    ldrneh r0, [r0, #0x42]
    cmpne r1, r0
    beq @L_02072fa0
    ldr r1, [sp, #8]
    ldr r2, [sp, #0xc]
    mov r0, r10
    mov r3, r4
    str r5, [sp]
    bl _ZN17UnkClass_020621b413func_02073e3cEPviih
    cmp r0, #0
    bne @L_02072fa0
    ldr r0, [sp, #0x20]
    mov r1, r7, lsl #1
    ldrh r2, [r4, #0x42]
    ldrb r0, [r0, #0xa]
    add r7, r7, #1
    strh r2, [r11, r1]
    cmp r7, r0
    beq @L_02072fac
@L_02072fa0:
    add r8, r8, #1
    cmp r8, r9
    blt @L_02072f38
@L_02072fac:
    ldr r0, [sp, #0x20]
    ldrb r0, [r0, #0xa]
    cmp r7, r0
    addlt sp, sp, #0x88
    movlt r0, #0
    ldmltia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02072fc4:
    ldrh r2, [sp, #0x24]
    ldrh r3, [sp, #0x26]
    ldr r0, [sp, #8]
    ldr r1, [sp, #0x10]
    bl func_02080830
    mov r0, #1
    add sp, sp, #0x88
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

asm void UnkClass_020621b4::func_02072fe8()
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, lr}
    sub sp, sp, #4
    movs r9, r1
    mov r10, r0
    mov r4, #0
    mov r8, r2
    mvn r5, #0
    addeq sp, sp, #4
    moveq r0, r4
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
    cmp r3, #0
    movne r6, r4
    movne r7, #4
    moveq r6, #4
    moveq r7, #6
    cmp r6, r7
    bge @L_02073064
@L_0207302c:
    mov r0, r9
    mov r1, r6
    bl func_020808c4
    cmp r0, r8
    addeq sp, sp, #4
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
    cmp r5, #0
    bge @L_02073058
    cmp r0, #0
    moveq r5, r6
@L_02073058:
    add r6, r6, #1
    cmp r6, r7
    blt @L_0207302c
@L_02073064:
    cmp r5, #0
    addlt sp, sp, #4
    movlt r0, #0
    ldmltia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
    mov r0, r10
    mov r1, r9
    mov r2, r8
    mov r3, r5
    str r4, [sp]
    bl _ZN17UnkClass_020621b413func_020730dcEP11MatchPlayeriii
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
}

int UnkClass_020621b4::func_02073094(int index, int a, int b)
{
    int result = 0;
    MatchPlayer *player = func_ov015_02130b14(index, 0);

    if (player != NULL) {
        result = func_020730dc(player, a, b, 0);
    }
    return result;
}

asm int UnkClass_020621b4::func_020730dc(MatchPlayer *player, int a, int b, int c)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    movs r6, r1
    mov r7, r0
    mov r5, r2
    mov r4, r3
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    mov r1, r5
    bl _ZN17UnkClass_020621b413func_020739ccEi
    movs r2, r0
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    mov r0, r7
    mov r1, r6
    mov r3, #1
    bl _ZN17UnkClass_020621b413func_020731c4Ev
    cmp r0, #0
    ldreqb r0, [sp, #0x20]
    cmpeq r0, #0
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    cmp r4, #4
    cmpne r4, #5
    beq @L_02073180
    mov r1, r5, lsl #0x10
    mov r0, r6
    mov r1, r1, lsr #0x10
    bl func_020808e8
    movs r9, r0
    beq @L_0207319c
    mov r8, #0
@L_02073158:
    mov r0, r6
    mov r1, r8
    bl func_020808c4
    cmp r5, r0
    moveq r4, r8
    beq @L_0207319c
    add r8, r8, #1
    cmp r8, #4
    blt @L_02073158
    b @L_0207319c
@L_02073180:
    mov r2, r5, lsl #0x10
    mov r0, r6
    mov r1, r4
    mov r2, r2, lsr #0x10
    mov r3, #1
    bl func_02080964
    mov r9, r0
@L_0207319c:
    cmp r9, #0
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    mov r0, r7
    mov r1, r6
    mov r2, r5
    mov r3, r4
    bl _ZN17UnkClass_020621b413func_02072bb8Ev
    mov r0, #1
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

asm void UnkClass_020621b4::func_020731c4()
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, lr}
    sub sp, sp, #0xc
    ldrb r2, [r2, #7]
    mov r8, r0
    mov r7, r1
    cmp r2, #0
    mov r5, r3
    addeq sp, sp, #0xc
    moveq r0, #1
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, pc}
    add r4, sp, #0
    mov r1, r4
    bl _ZN17UnkClass_020621b413func_020738e4Ev
    cmp r0, #0
    addeq sp, sp, #0xc
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, pc}
    mov r0, r4
    bl _ZN17UnkClass_020621b413func_02074aacEv
    cmp r0, #1
    bne @L_02073234
    mov r0, r8
    mov r1, r7
    mov r2, r7
    mov r3, r4
    bl _ZN17UnkClass_020621b413func_02072a5cEv
    add sp, sp, #0xc
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
@L_02073234:
    cmp r5, #0
    addne sp, sp, #0xc
    movne r0, #1
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, pc}
    mov r6, #0
    mov r5, r6
@L_0207324c:
    mov r0, r8
    mov r1, r5
    bl func_02079d2c
    mov r2, r0
    mov r0, r8
    mov r1, r7
    mov r3, r4
    bl _ZN17UnkClass_020621b413func_02072a5cEv
    cmp r0, #0
    beq @L_02073288
    mov r0, r4
    add r6, r6, #1
    bl _ZN17UnkClass_020621b413func_02074abcEv
    cmp r6, r0
    bge @L_02073294
@L_02073288:
    add r5, r5, #1
    cmp r5, #0x16
    blt @L_0207324c
@L_02073294:
    add r0, sp, #0
    bl _ZN17UnkClass_020621b413func_02074abcEv
    cmp r6, r0
    movge r0, #1
    movlt r0, #0
    add sp, sp, #0xc
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
}

asm void UnkClass_020621b4::func_020732b0()
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, lr}
    sub sp, sp, #4
    mov r6, r2
    mov r7, r1
    mov r5, r3
    mov r1, r6
    mov r8, r0
    mov r9, #0
    bl _ZN17UnkClass_020621b413func_020739ccEi
    mov r4, r0
    cmp r5, #0
    movne r0, #1
    strne r0, [r5]
    cmp r4, #0
    beq @L_02073314
    ldrb r0, [r4]
    cmp r0, #0
    beq @L_02073308
    ldrsh r0, [r4, #4]
    cmp r0, #0
    movge r0, #1
    bge @L_0207330c
@L_02073308:
    mov r0, #0
@L_0207330c:
    cmp r0, #0
    bne @L_0207332c
@L_02073314:
    cmp r5, #0
    movne r0, #3
    strne r0, [r5]
    add sp, sp, #4
    mov r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
@L_0207332c:
    ldrsh r10, [r7, #0x96]
    mov r0, r4
    mov r1, r7
    bl _ZN17UnkClass_020621b413func_02074a18Ev
    cmp r10, r0
    bge @L_0207335c
    cmp r5, #0
    movne r0, #4
    strne r0, [r5]
    add sp, sp, #4
    mov r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
@L_0207335c:
    ldrb r0, [r4, #0xa]
    cmp r0, #0
    beq @L_020733c0
    mov r4, #0
@L_0207336c:
    mov r0, r7
    mov r1, r4
    bl func_020808c4
    cmp r6, r0
    bne @L_020733b4
    add r3, sp, #0
    mov r0, r8
    mov r1, r7
    mov r2, r6
    bl _ZN17UnkClass_020621b413func_02073a20EPvii
    cmp r0, #0
    bne @L_020733c0
    cmp r5, #0
    movne r0, #8
    strne r0, [r5]
    add sp, sp, #4
    mov r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
@L_020733b4:
    add r4, r4, #1
    cmp r4, #6
    blt @L_0207336c
@L_020733c0:
    cmp r5, #0
    strne r9, [r5]
    mov r0, #1
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
}

asm void UnkClass_020621b4::func_020733d4()
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x1c
    mov r9, r3
    mov r10, r1
    mov r1, r9
    str r0, [sp, #0x14]
    str r2, [sp, #0x18]
    ldr r8, [sp, #0x40]
    ldr r7, [sp, #0x44]
    ldr r6, [sp, #0x4c]
    bl _ZN17UnkClass_020621b413func_020739ccEi
    mov r4, r0
    ldrb r0, [r4]
    add r0, r0, #0xfb
    and r0, r0, #0xff
    cmp r0, #3
    movls r0, #1
    movhi r0, #0
    cmp r0, #0
    beq @L_02073468
    mov r5, #0
@L_02073428:
    mov r0, r10
    mov r1, r5
    bl func_020808c4
    cmp r9, r0
    beq @L_02073448
    add r5, r5, #1
    cmp r5, #6
    blt @L_02073428
@L_02073448:
    cmp r5, #6
    bne @L_02073468
    cmp r6, #0
    movne r0, #2
    strne r0, [r6]
    add sp, sp, #0x1c
    mov r0, #0
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02073468:
    ldr r0, [sp, #0x14]
    mov r1, r10
    mov r2, r9
    mov r3, r6
    bl _ZN17UnkClass_020621b413func_020732b0Ev
    cmp r0, #0
    addeq sp, sp, #0x1c
    moveq r0, #0
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldrb r0, [sp, #0x48]
    cmp r0, #0
    bne @L_020734c4
    mov r0, r10
    mov r1, r9
    bl func_02080a38
    cmp r0, #0
    beq @L_020734c4
    cmp r6, #0
    movne r0, #9
    strne r0, [r6]
    add sp, sp, #0x1c
    mov r0, #0
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_020734c4:
    cmp r8, #0
    mov r3, #0
    bne @L_02073514
    ldrb r0, [r4]
    add r1, r0, #0xff
    and r2, r1, #0xff
    cmp r2, #5
    bhi @L_020734f4
    mov r1, #1
    mov r2, r1, lsl r2
    tst r2, #0x33
    movne r3, r1
@L_020734f4:
    cmp r3, #0
    bne @L_020735d0
    cmp r6, #0
    movne r0, #0xa
    strne r0, [r6]
    add sp, sp, #0x1c
    mov r0, #0
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02073514:
    cmp r8, #2
    ldrb r0, [r4]
    bne @L_02073590
    mov r2, #1
    cmp r0, #7
    bne @L_02073544
    ldrb r1, [r4, #0xf]
    tst r1, #4
    movne r1, r2
    moveq r1, r3
    cmp r1, #0
    movne r3, #1
@L_02073544:
    cmp r3, #0
    bne @L_02073570
    cmp r0, #6
    bne @L_0207356c
    ldrb r1, [r4, #0xf]
    tst r1, #2
    movne r1, #1
    moveq r1, #0
    cmp r1, #0
    bne @L_02073570
@L_0207356c:
    mov r2, #0
@L_02073570:
    cmp r2, #0
    bne @L_020735d0
    cmp r6, #0
    movne r0, #0xa
    strne r0, [r6]
    add sp, sp, #0x1c
    mov r0, #0
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02073590:
    add r1, r0, #0xff
    and r2, r1, #0xff
    cmp r2, #5
    bhi @L_020735b0
    mov r1, #1
    mov r2, r1, lsl r2
    tst r2, #0x33
    movne r3, r1
@L_020735b0:
    cmp r3, #0
    beq @L_020735d0
    cmp r6, #0
    movne r0, #0xa
    strne r0, [r6]
    add sp, sp, #0x1c
    mov r0, #0
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_020735d0:
    cmp r8, #2
    beq @L_0207365c
    add r1, r0, #0xff
    cmp r7, #0
    mov r3, #0
    and r2, r1, #0xff
    bne @L_02073624
    cmp r2, #6
    bhi @L_02073604
    mov r1, #1
    mov r2, r1, lsl r2
    tst r2, #0x55
    movne r3, r1
@L_02073604:
    cmp r3, #0
    bne @L_0207365c
    cmp r6, #0
    movne r0, #0xb
    strne r0, [r6]
    add sp, sp, #0x1c
    mov r0, #0
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02073624:
    cmp r2, #6
    bhi @L_0207363c
    mov r1, #1
    mov r2, r1, lsl r2
    tst r2, #0x55
    movne r3, r1
@L_0207363c:
    cmp r3, #0
    beq @L_0207365c
    cmp r6, #0
    movne r0, #0xb
    strne r0, [r6]
    add sp, sp, #0x1c
    mov r0, #0
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_0207365c:
    ldr r1, [r10, #0xec]
    ldrh r3, [r1, #0x32]
    cmp r3, #0
    beq @L_02073730
    ldr r1, =0x1ff
    cmp r3, r1
    bne @L_020736d8
    add r0, r0, #0xfb
    and r0, r0, #0xff
    cmp r0, #3
    mov r5, #0
    movls r0, #1
    movhi r0, r5
    cmp r0, #0
    bne @L_02073730
    str r7, [sp]
    str r5, [sp, #4]
    ldr r0, [sp, #0x14]
    ldr r2, [sp, #0x18]
    mov r1, r10
    mov r3, r8
    str r5, [sp, #8]
    bl _ZN17UnkClass_020621b413func_02074210Ev
    cmp r0, #0
    beq @L_02073730
    cmp r6, #0
    movne r0, #0xc
    strne r0, [r6]
    add sp, sp, #0x1c
    mov r0, #0
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_020736d8:
    cmp r9, r3
    mov r0, #0
    beq @L_02073730
    ldrb r1, [sp, #0x48]
    str r8, [sp]
    str r7, [sp, #4]
    str r1, [sp, #8]
    str r0, [sp, #0xc]
    ldrb r5, [sp, #0x50]
    ldr r0, [sp, #0x14]
    ldr r2, [sp, #0x18]
    mov r1, r10
    str r5, [sp, #0x10]
    bl _ZN17UnkClass_020621b413func_020733d4Ev
    cmp r0, #0
    beq @L_02073730
    cmp r6, #0
    movne r0, #0xc
    strne r0, [r6]
    add sp, sp, #0x1c
    mov r0, #0
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02073730:
    mov r11, #1
    mov r5, #0
@L_02073738:
    mov r0, r10
    mov r1, r5
    bl func_020808c4
    cmp r9, r0
    bne @L_02073764
    ldr r0, [r10, #0xec]
    ldrb r0, [r0, #0x88]
    tst r0, r11, lsl r5
    addne sp, sp, #0x1c
    movne r0, #0
    ldmneia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02073764:
    add r5, r5, #1
    cmp r5, #6
    blt @L_02073738
    ldr r0, [sp, #0x18]
    mov r5, #0
    cmp r0, #0
    beq @L_020737dc
    ldrh r0, [r0, #0xf0]
    tst r0, #0x80
    movne r0, #1
    moveq r0, r5
    cmp r0, #0
    beq @L_020737dc
    ldr r0, [sp, #0x14]
    ldr r1, [sp, #0x18]
    bl func_0207903c
    cmp r0, #0
    cmpne r8, #2
    beq @L_020737dc
    ldrb r0, [r4]
    add r0, r0, #0xfb
    and r0, r0, #0xff
    cmp r0, #1
    bhi @L_020737dc
    cmp r6, #0
    movne r0, #5
    strne r0, [r6]
    add sp, sp, #0x1c
    mov r0, #0
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_020737dc:
    ldrb r0, [r4, #7]
    cmp r0, #0
    beq @L_0207380c
    ldr r0, [sp, #0x14]
    mov r1, r10
    mov r2, r4
    mov r3, r5
    bl _ZN17UnkClass_020621b413func_020731c4Ev
    cmp r0, #0
    addeq sp, sp, #0x1c
    moveq r0, r5
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_0207380c:
    cmp r7, #0
    ldreqb r0, [sp, #0x50]
    cmpeq r0, #1
    bne @L_02073858
    ldrb r0, [r4]
    cmp r0, #7
    bne @L_02073838
    ldrb r0, [r4, #0xf]
    tst r0, #1
    movne r0, #1
    bne @L_0207383c
@L_02073838:
    mov r0, #0
@L_0207383c:
    cmp r0, #0
    bne @L_02073858
    cmp r9, #0x14
    cmpne r9, #0x16
    addne sp, sp, #0x1c
    movne r0, #0
    ldmneia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02073858:
    cmp r9, #0x15
    bne @L_020738d4
    ldr r0, [sp, #0x14]
    bl func_ov015_02143664
    cmp r0, #0
    addeq sp, sp, #0x1c
    moveq r0, #0
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldrb r0, [r0, #0xf]
    tst r0, #1
    movne r1, #1
    moveq r1, #0
    cmp r1, #0
    beq @L_020738a8
    cmp r6, #0
    movne r0, #6
    strne r0, [r6]
    add sp, sp, #0x1c
    mov r0, #0
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_020738a8:
    tst r0, #2
    movne r0, #1
    moveq r0, #0
    cmp r0, #0
    beq @L_020738d4
    cmp r6, #0
    movne r0, #7
    strne r0, [r6]
    add sp, sp, #0x1c
    mov r0, #0
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_020738d4:
    mov r0, #1
    add sp, sp, #0x1c
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

asm void UnkClass_020621b4::func_020738e4()
{
    stmdb sp!, {r0, r1, r2, r3}
    stmdb sp!, {r3, r4, lr}
    sub sp, sp, #0x14
    ldr r1, [sp, #0x24]
    mov r4, r2
    cmp r1, #0
    addeq sp, sp, #0x14
    moveq r0, #0
    ldmeqia sp!, {r3, r4, lr}
    addeq sp, sp, #0x10
    bxeq lr
    mov r1, r4
    bl _ZN17UnkClass_020621b413func_020739a8Ei
    cmp r0, #0
    beq @L_02073940
    ldr r1, [sp, #0x24]
    mov r2, #0xc
    bl MI_CpuCopy8
    add sp, sp, #0x14
    mov r0, #1
    ldmia sp!, {r3, r4, lr}
    add sp, sp, #0x10
    bx lr
@L_02073940:
    ldr r3, =data_020c47b4
    ldr r1, =data_020af274
    ldr r0, [r3]
    cmp r0, #0
    moveq r0, #0
    beq @L_02073984
    mov r2, #0xc
    mul r12, r4, r2
    str r12, [sp]
    str r2, [sp, #4]
    mov r2, #0
    str r2, [sp, #8]
    mov r12, #1
    str r12, [sp, #0xc]
    add r2, sp, #0x24
    str r12, [sp, #0x10]
    bl _ZN11FileManager4LoadEPKcPPvP8GameHeapiiiih
@L_02073984:
    cmp r0, #0
    moveq r0, #0
    movne r0, #1
    add sp, sp, #0x14
    ldmia sp!, {r3, r4, lr}
    add sp, sp, #0x10
    bx lr
}

u8 *UnkClass_020621b4::func_020739a8(int i)
{
    if (unk_be4 == NULL) {
        return NULL;
    }
    if ((u32)i >= 64) {
        return NULL;
    }
    return unk_be4[i];
}

u8 *UnkClass_020621b4::func_020739cc(int i)
{
    if ((u32)i >= 0x200) {
        return NULL;
    }
    return unk_bb8[i];
}

u8 UnkClass_020621b4::func_020739e4(void *team, int i)
{
    u8 *entry;

    if (team == NULL) {
        return 0;
    }
    entry = func_020739cc(func_020808c4(team, i));
    if (entry != NULL) {
        return entry[0xA];
    }
    return 0;
}

int UnkClass_020621b4::func_02073a20(void *team, int id, int a)
{
    int i;

    if (team == NULL) {
        return 0;
    }
    for (i = 0; i < 6; i++) {
        if (id == func_020808c4(team, i)) {
            break;
        }
    }
    if (i == 6) {
        return 0;
    }
    return func_02073a9c(team, i, a, 1);
}

asm int UnkClass_020621b4::func_02073a9c(void *team, int i, int a, int b)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x6c
    mov r8, r3
    movs r9, r1
    mov r10, r0
    ldr r7, [sp, #0x90]
    cmpne r8, #0
    mov r0, #0
    mov r11, r2
    addeq sp, sp, #0x6c
    moveq r0, #0
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    strneh r0, [r8, #2]
    ldrneh r0, [r8, #2]
    mov r1, r11
    strneh r0, [r8]
    mov r0, r9
    bl func_020808c4
    str r0, [sp, #0x10]
    ldr r1, [sp, #0x10]
    mov r0, r10
    bl _ZN17UnkClass_020621b413func_020739ccEi
    movs r4, r0
    addeq sp, sp, #0x6c
    moveq r0, #0
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldrb r0, [r4, #0xa]
    cmp r0, #0
    addeq sp, sp, #0x6c
    moveq r0, #1
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r5, #0
    mov r6, r5
    ble @L_02073be4
@L_02073b24:
    mov r0, r9
    mov r1, r11
    mov r2, r6
    bl func_0208084c
    mov r1, r0
    mov r0, r10
    bl _ZN17UnkClass_020621b413func_0206f9e0Ev
    mov r0, r0, lsl #0x10
    movs r0, r0, lsr #0x10
    beq @L_02073bd4
    ldrb r3, [r4, #0xa]
    mov r2, #0
    cmp r3, #0
    ble @L_02073b78
@L_02073b5c:
    mov r1, r2, lsl #1
    ldrh r1, [r8, r1]
    cmp r0, r1
    beq @L_02073b78
    add r2, r2, #1
    cmp r2, r3
    blt @L_02073b5c
@L_02073b78:
    cmp r2, r3
    bne @L_02073bd4
    mov r1, #0
    bl func_ov015_02130b14
    cmp r0, #0
    beq @L_02073bd4
    cmp r7, #0
    beq @L_02073bb0
    ldrh r1, [r0, #0xf0]
    tst r1, #8
    movne r1, #1
    moveq r1, #0
    cmp r1, #0
    beq @L_02073bd4
@L_02073bb0:
    ldrh r1, [r0, #0x42]
    mov r0, r6, lsl #1
    add r5, r5, #1
    strh r1, [r8, r0]
    ldrb r0, [r4, #0xa]
    cmp r5, r0
    addeq sp, sp, #0x6c
    moveq r0, #1
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02073bd4:
    ldrb r0, [r4, #0xa]
    add r6, r6, #1
    cmp r6, r0
    blt @L_02073b24
@L_02073be4:
    cmp r7, #0
    mov r11, #0
    addeq sp, sp, #0x6c
    moveq r0, r11
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldrb r0, [r4, #0xb]
    cmp r0, #0x51
    addeq sp, sp, #0x6c
    moveq r0, r11
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldrh r0, [r9, #0xf0]
    tst r0, #8
    movne r0, #1
    moveq r0, r11
    cmp r0, #0
    addeq sp, sp, #0x6c
    moveq r0, #0
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r6, #0
    mov r7, r6
@L_02073c34:
    mov r0, r10
    mov r1, r7
    bl func_02079d2c
    cmp r9, r0
    bne @L_02073c68
    mov r0, r10
    bl _ZN17UnkClass_020621b413func_0206a93cEv
    mov r2, r0
    mov r0, r10
    mov r1, r7
    mov r3, r11
    bl _ZN17UnkClass_020621b413func_0206a8d8Eiii
    mov r6, r0
@L_02073c68:
    add r7, r7, #1
    cmp r7, #0x16
    blt @L_02073c34
    cmp r6, #0
    addeq sp, sp, #0x6c
    moveq r0, #0
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    add r1, sp, #0x14
    add r7, sp, #0x40
    str r1, [sp]
    ldr r0, =0x60001
    mov r1, r6
    str r0, [sp, #4]
    mov r0, r10
    mov r3, r7
    mov r2, #0xb
    str r9, [sp, #8]
    bl _ZN17UnkClass_020621b413func_020665a4Ev
    str r0, [sp, #0xc]
    cmp r0, #0
    mov r6, #0
    ble @L_02073cd8
@L_02073cc0:
    ldr r0, [r7, r6, lsl #2]
    bl func_ov015_02130ae8
    ldr r0, [sp, #0xc]
    add r6, r6, #1
    cmp r6, r0
    blt @L_02073cc0
@L_02073cd8:
    ldrb r0, [r4, #0xb]
    cmp r0, #0
    beq @L_02073de4
    ldr r0, [sp, #0xc]
    mov r11, #0
    cmp r0, #0
    ble @L_02073de4
@L_02073cf4:
    add r0, sp, #0x40
    ldr r0, [r0, r11, lsl #2]
    bl func_ov015_02130ae8
    movs r6, r0
    beq @L_02073dd4
    ldrh r0, [r6, #0x42]
    ldr r3, =0xfff
    ldrh r1, [r9, #0x42]
    and r0, r0, r3
    mov r0, r0, lsl #0x10
    and r2, r1, r3
    mov r1, r0, lsr #0x10
    mov r0, r2, lsl #0x10
    cmp r1, r0, lsr #16
    beq @L_02073dd4
    ldrb r2, [r4, #0xa]
    mov r0, #0
    cmp r2, #0
    ble @L_02073d60
@L_02073d40:
    mov r7, r0, lsl #1
    ldrh r7, [r8, r7]
    and r7, r7, r3
    cmp r7, r1
    beq @L_02073d60
    add r0, r0, #1
    cmp r0, r2
    blt @L_02073d40
@L_02073d60:
    cmp r0, r2
    bne @L_02073dd4
    ldr r2, [sp, #0x10]
    mov r7, #0
    mov r0, r10
    mov r1, r9
    mov r3, r6
    str r7, [sp]
    bl _ZN17UnkClass_020621b413func_02073e3cEPviih
    cmp r0, #0
    bne @L_02073dd4
    ldrb r2, [r4, #0xa]
    cmp r2, #0
    ble @L_02073dbc
@L_02073d98:
    mov r1, r7, lsl #1
    ldrh r0, [r8, r1]
    cmp r0, #0
    ldreqh r0, [r6, #0x42]
    streqh r0, [r8, r1]
    beq @L_02073dbc
    add r7, r7, #1
    cmp r7, r2
    blt @L_02073d98
@L_02073dbc:
    ldrb r0, [r4, #0xa]
    add r5, r5, #1
    cmp r5, r0
    addeq sp, sp, #0x6c
    moveq r0, #1
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02073dd4:
    ldr r0, [sp, #0xc]
    add r11, r11, #1
    cmp r11, r0
    blt @L_02073cf4
@L_02073de4:
    mov r0, #0
    add sp, sp, #0x6c
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

int UnkClass_020621b4::func_02073df8(void *team, int i, int a, u8 b)
{
    return func_02073e3c(team, func_020808c4(team, i), a, b);
}

asm int UnkClass_020621b4::func_02073e3c(void *team, int id, int a, u8 b)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    mov r10, r0
    cmp r1, #0
    mov r9, r3
    mov r8, #0
    moveq r0, #6
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    cmp r9, #0
    moveq r0, #3
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    ldrh r3, [r1, #0x42]
    ldrh r1, [r9, #0x42]
    cmp r3, r1
    moveq r0, #6
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    mov r1, r2
    bl _ZN17UnkClass_020621b413func_020739ccEi
    movs r4, r0
    moveq r0, #6
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    ldrb r0, [r4, #0xa]
    cmp r0, #0
    moveq r0, #5
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    ldrb r0, [sp, #0x20]
    cmp r0, #0
    beq @L_02073ec4
    ldrh r0, [r9, #0xf0]
    tst r0, #8
    movne r0, #1
    moveq r0, r8
    cmp r0, #0
    moveq r0, #2
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_02073ec4:
    ldrb r7, [r4, #0xb]
    cmp r7, #0
    moveq r0, #0
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    cmp r7, #0x51
    bne @L_02073f00
    ldrsh r3, [r4, #0xc]
    mov r0, r10
    mov r1, r9
    mov r2, r7
    bl func_0207f7cc
    mov r8, #1
    cmp r0, #0
    moveq r8, #0
    b @L_02073f90
@L_02073f00:
    mov r0, r10
    mov r1, r7
    bl func_0207f730
    cmp r0, #0
    beq @L_02073f6c
    mov r6, #1
    cmp r7, #0xe
    moveq r6, #6
    beq @L_02073f2c
    cmp r7, #0xd
    moveq r6, #6
@L_02073f2c:
    cmp r6, #0
    mov r5, #0
    ble @L_02073f90
@L_02073f38:
    mov r0, r10
    mov r1, r9
    mov r2, r7
    mov r3, r5
    bl func_0207f7cc
    ldrsh r1, [r4, #0xc]
    cmp r1, r0
    moveq r8, #1
    beq @L_02073f90
    add r5, r5, #1
    cmp r5, r6
    blt @L_02073f38
    b @L_02073f90
@L_02073f6c:
    mov r8, #0
    mov r0, r10
    mov r1, r9
    mov r2, r7
    mov r3, r8
    bl func_0207f7cc
    ldrsh r1, [r4, #0xc]
    cmp r0, r1
    movge r8, #1
@L_02073f90:
    mov r0, #4
    cmp r8, #0
    movne r0, #0
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
}

asm void UnkClass_020621b4::func_02073fa0()
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, lr}
    sub sp, sp, #4
    mov r4, r2
    movs r5, r1
    ldr r9, [sp, #0x28]
    cmpne r4, #0
    mov r6, r0
    mov r8, r3
    mov r10, #0
    addeq sp, sp, #4
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
    mov r1, r4
    bl _ZN17UnkClass_020621b413func_020739ccEi
    movs r7, r0
    addeq sp, sp, #4
    moveq r0, r10
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
    ldrb r0, [r7, #0xa]
    cmp r0, #0
    addeq sp, sp, #4
    moveq r0, r10
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
    cmp r8, #0
    moveq r8, r10
    beq @L_02074034
    mov r0, r6
    mov r1, r5
    mov r2, r4
    mov r3, r8
    str r10, [sp]
    bl _ZN17UnkClass_020621b413func_02073e3cEPviih
    cmp r0, #0
    addne sp, sp, #4
    movne r0, r10
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
    ldrh r8, [r8, #0x42]
@L_02074034:
    ldrb r0, [r7, #0xa]
    mov r7, #0
    cmp r0, #2
    bne @L_02074078
    cmp r9, #0
    beq @L_02074078
    mov r0, r6
    mov r1, r5
    mov r2, r4
    mov r3, r9
    str r7, [sp]
    bl _ZN17UnkClass_020621b413func_02073e3cEPviih
    cmp r0, #0
    addne sp, sp, #4
    movne r0, r7
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
    ldrh r7, [r9, #0x42]
@L_02074078:
    mov r9, #0
    mov r6, r9
@L_02074080:
    mov r0, r5
    mov r1, r6
    bl func_020808c4
    cmp r4, r0
    bne @L_020740ac
    mov r0, r5
    mov r1, r6
    mov r2, r8
    mov r3, r7
    bl func_02080830
    add r9, r9, #1
@L_020740ac:
    add r6, r6, #1
    cmp r6, #6
    blt @L_02074080
    mov r0, #1
    cmp r9, #0
    movle r0, #0
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
}

asm void UnkClass_020621b4::func_020740cc()
{
    stmdb sp!, {r3, r4, r5, r6, lr}
    sub sp, sp, #4
    movs r5, r1
    mov r6, r0
    mov r4, r3
    addeq sp, sp, #4
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, pc}
    mov r0, r5
    mov r1, r2
    bl func_020808c4
    ldr r12, [sp, #0x18]
    mov r2, r0
    mov r0, r6
    mov r1, r5
    mov r3, r4
    str r12, [sp]
    bl _ZN17UnkClass_020621b413func_02073fa0Ev
    ldr r0, =gGameState
    ldrb r1, [r0, #0x1a]
    cmp r1, #0
    beq @L_02074144
    ldrsh r3, [r5, #0xf4]
    cmp r3, #0
    blt @L_02074144
    cmp r3, #0x20
    ldrlt r2, [r0, #0x78]
    movlt r1, #1
    orrlt r1, r2, r1, lsl r3
    strlt r1, [r0, #0x78]
@L_02074144:
    mov r0, #1
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, pc}
}

asm void UnkClass_020621b4::func_02074154()
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    mov r4, #0
    mov r9, r3
    mov r11, r1
    mov r10, r2
    mov r5, r4
    mov r2, r4
    cmp r9, #0
    ldr r8, [sp, #0x28]
    ldr r7, [sp, #0x2c]
    mov r0, r4
    mov r1, r4
    ble @L_02074198
@L_02074188:
    str r1, [r10, r2, lsl #2]
    add r2, r2, #1
    cmp r2, r9
    blt @L_02074188
@L_02074198:
    cmp r7, #0
    mov r1, #0
    ble @L_020741b4
@L_020741a4:
    str r0, [r8, r1, lsl #2]
    add r1, r1, #1
    cmp r1, r7
    blt @L_020741a4
@L_020741b4:
    mov r6, #0
@L_020741b8:
    mov r0, r11
    mov r1, r6
    bl func_020808c4
    cmp r4, r9
    strlt r0, [r10, r4, lsl #2]
    add r6, r6, #1
    addlt r4, r4, #1
    cmp r6, #4
    blt @L_020741b8
    cmp r6, #6
    bge @L_02074208
@L_020741e4:
    mov r0, r11
    mov r1, r6
    bl func_020808c4
    cmp r5, r7
    strlt r0, [r8, r5, lsl #2]
    add r6, r6, #1
    addlt r5, r5, #1
    cmp r6, #6
    blt @L_020741e4
@L_02074208:
    add r0, r4, r5
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

asm void UnkClass_020621b4::func_02074210()
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x1c
    mov r10, r0
    ldr r0, [sp, #0x48]
    ldr r11, [sp, #0x40]
    ldr r8, [sp, #0x44]
    movs r9, r1
    str r2, [sp, #0x14]
    str r3, [sp, #0x18]
    str r0, [sp, #0x48]
    mov r6, #0
    addeq sp, sp, #0x1c
    moveq r0, r6
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r0, r9
    bl func_ov015_021319b0
    add r0, r10, r0
    add r0, r0, #0x11000
    ldrb r0, [r0, #0x7d6]
    mov r5, #0
    tst r0, #1
    movne r7, #1
    moveq r7, r6
@L_0207426c:
    ldr r2, [sp, #0x18]
    mov r0, r10
    mov r1, r9
    mov r3, r11
    stmia sp, {r5, r7}
    bl _ZN17UnkClass_020621b413func_0207436cEv
    movs r4, r0
    beq @L_020742d8
    ldr r0, [sp, #0x18]
    mov r2, #0
    stmia sp, {r0, r11}
    str r7, [sp, #8]
    mov r0, #0
    str r0, [sp, #0xc]
    str r2, [sp, #0x10]
    ldr r2, [sp, #0x14]
    mov r0, r10
    mov r1, r9
    mov r3, r4
    bl _ZN17UnkClass_020621b413func_020733d4Ev
    cmp r0, #0
    beq @L_020742d8
    cmp r8, #0
    ldrne r0, [sp, #0x48]
    cmpne r6, r0
    strlt r4, [r8, r6, lsl #2]
    add r6, r6, #1
@L_020742d8:
    add r5, r5, #1
    cmp r5, #6
    blt @L_0207426c
    mov r0, r6
    add sp, sp, #0x1c
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

asm void UnkClass_020621b4::func_020742f0()
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #8
    mov r6, r1
    mov r7, r0
    mov r0, r6
    mov r5, r2
    mov r4, r3
    bl func_ov015_021319b0
    add r0, r7, r0
    add r0, r0, #0x11000
    ldrb r0, [r0, #0x7d6]
    mov r8, #0
    tst r0, #1
    movne r9, #1
    moveq r9, #0
@L_0207432c:
    mov r0, r7
    mov r1, r6
    mov r2, r5
    mov r3, r4
    stmia sp, {r8, r9}
    bl _ZN17UnkClass_020621b413func_0207436cEv
    cmp r0, #0
    addne sp, sp, #8
    movne r0, #1
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    add r8, r8, #1
    cmp r8, #6
    blt @L_0207432c
    mov r0, #0
    add sp, sp, #8
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

asm void UnkClass_020621b4::func_0207436c()
{
    stmdb sp!, {r3, lr}
    sub sp, sp, #8
    cmp r1, #0
    ldr lr, [sp, #0x10]
    ldr r12, [sp, #0x14]
    addeq sp, sp, #8
    moveq r0, #0
    ldmeqia sp!, {r3, pc}
    cmp r2, #0
    bne @L_020743c0
    cmp r3, #0
    mov r2, lr
    mov r3, #0
    str r12, [sp]
    bne @L_020743b4
    bl _ZN17UnkClass_020621b413func_02074700Ev
    add sp, sp, #8
    ldmia sp!, {r3, pc}
@L_020743b4:
    bl _ZN17UnkClass_020621b413func_02074728Ev
    add sp, sp, #8
    ldmia sp!, {r3, pc}
@L_020743c0:
    cmp r2, #2
    bne @L_020743f8
    cmp r3, #1
    addne sp, sp, #8
    movne r0, #0
    ldmneia sp!, {r3, pc}
    mov r2, #0x40
    str r2, [sp]
    mov r3, lr
    mov r2, #6
    str r12, [sp, #4]
    bl _ZN17UnkClass_020621b413func_020745e4Ev
    add sp, sp, #8
    ldmia sp!, {r3, pc}
@L_020743f8:
    cmp r3, #0
    mov r2, lr
    mov r3, #0
    str r12, [sp]
    bne @L_02074418
    bl _ZN17UnkClass_020621b413func_02074750Ev
    add sp, sp, #8
    ldmia sp!, {r3, pc}
@L_02074418:
    bl _ZN17UnkClass_020621b413func_02074778Ev
    add sp, sp, #8
    ldmia sp!, {r3, pc}
}

asm void UnkClass_020621b4::func_02074424()
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x14
    mov r9, r1
    mov r10, r0
    mov r0, r9
    mov r8, r2
    mov r7, r3
    ldr r6, [sp, #0x38]
    bl func_ov015_021319b0
    add r0, r10, r0
    add r0, r0, #0x11000
    ldrb r0, [r0, #0x7d6]
    mov r4, #0
    mov r11, r4
    tst r0, #1
    movne r5, #1
    moveq r5, #0
@L_02074468:
    mov r0, r10
    mov r1, r9
    mov r2, r7
    mov r3, r6
    stmia sp, {r4, r5}
    bl _ZN17UnkClass_020621b413func_0207436cEv
    movs r3, r0
    beq @L_020744bc
    str r7, [sp]
    str r6, [sp, #4]
    str r5, [sp, #8]
    str r11, [sp, #0xc]
    mov r0, r10
    mov r1, r9
    mov r2, r8
    str r11, [sp, #0x10]
    bl _ZN17UnkClass_020621b413func_020733d4Ev
    cmp r0, #0
    addne sp, sp, #0x14
    movne r0, #1
    ldmneia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_020744bc:
    add r4, r4, #1
    cmp r4, #6
    blt @L_02074468
    mov r0, #0
    add sp, sp, #0x14
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

asm void UnkClass_020621b4::func_020744d4()
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, lr}
    sub sp, sp, #0xc
    mov r8, #0
    mov r10, r0
    mov r9, r1
    add r4, sp, #8
    mov r7, #0x20
    mov r6, r8
    mov r5, #7
@L_020744f8:
    str r7, [sp]
    mov r0, r10
    mov r1, r9
    mov r2, r5
    mov r3, r8
    str r6, [sp, #4]
    bl _ZN17UnkClass_020621b413func_020745e4Ev
    movs r2, r0
    addeq sp, sp, #0xc
    moveq r0, r6
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
    mov r0, r10
    mov r1, r9
    mov r3, r4
    bl _ZN17UnkClass_020621b413func_020732b0Ev
    cmp r0, #0
    addne sp, sp, #0xc
    movne r0, #1
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
    add r8, r8, #1
    cmp r8, #6
    blt @L_020744f8
    mov r0, r6
    add sp, sp, #0xc
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
}

asm void UnkClass_020621b4::func_0207455c()
{
    tst r3, #1
    beq @L_02074574
    mov r0, #1
    cmp r2, #0
    movne r0, #2
    bx lr
@L_02074574:
    mov r0, #3
    cmp r2, #0
    movne r0, #2
    bx lr
}

asm void UnkClass_020621b4::func_02074584()
{
    tst r3, #1
    beq @L_0207459c
    mov r0, #0xc
    cmp r2, #0
    movne r0, #0xb
    bx lr
@L_0207459c:
    mov r0, #0xa
    cmp r2, #0
    movne r0, #0xb
    bx lr
}

asm void UnkClass_020621b4::func_020745ac()
{
    tst r3, #0x10
    beq @L_020745c4
    mov r0, #0x16
    cmp r2, #0
    movne r0, #0x17
    bx lr
@L_020745c4:
    mov r0, #0x14
    cmp r2, #0
    movne r0, #0x15
    bx lr
}

asm void UnkClass_020621b4::func_020745d4()
{
    mov r0, #0x1e
    cmp r2, #0
    movne r0, #0x1f
    bx lr
}

asm void UnkClass_020621b4::func_020745e4()
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #8
    ldr r4, [sp, #0x30]
    mov r6, #0
    ldr r9, [sp, #0x34]
    str r0, [sp]
    mov r10, r1
    mov r11, r2
    str r3, [sp, #4]
    mov r5, r6
    and r7, r4, #0x40
    and r8, r4, #0x20
@L_02074614:
    mov r0, r10
    mov r1, r5
    bl func_020808c4
    movs r4, r0
    beq @L_020746e8
    cmp r9, #0
    bne @L_02074644
    mov r0, r10
    mov r1, r5
    bl func_02080a80
    cmp r0, #0
    bne @L_020746e8
@L_02074644:
    ldr r0, [sp]
    mov r1, r4
    bl _ZN17UnkClass_020621b413func_020739ccEi
    cmp r7, #0
    beq @L_02074690
    cmp r0, #0
    beq @L_020746d0
    ldrb r0, [r0, #0xf]
    tst r0, #2
    movne r1, #1
    moveq r1, #0
    cmp r1, #1
    beq @L_020746d0
    tst r0, #4
    movne r0, #1
    moveq r0, #0
    cmp r0, #1
    beq @L_020746d0
    b @L_020746e8
@L_02074690:
    cmp r0, #0
    beq @L_020746e8
    ldrb r1, [r0]
    cmp r1, r11
    bne @L_020746e8
    cmp r8, #0
    beq @L_020746d0
    cmp r1, #7
    bne @L_020746c4
    ldrb r0, [r0, #0xf]
    tst r0, #1
    movne r0, #1
    bne @L_020746c8
@L_020746c4:
    mov r0, #0
@L_020746c8:
    cmp r0, #0
    beq @L_020746e8
@L_020746d0:
    ldr r0, [sp, #4]
    cmp r6, r0
    addeq sp, sp, #8
    moveq r0, r4
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    add r6, r6, #1
@L_020746e8:
    add r5, r5, #1
    cmp r5, #6
    blt @L_02074614
    mov r0, #0
    add sp, sp, #8
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

asm void UnkClass_020621b4::func_02074700()
{
    stmdb sp!, {r3, lr}
    sub sp, sp, #8
    ldrb r12, [sp, #0x10]
    str r3, [sp]
    mov r3, r2
    mov r2, #5
    str r12, [sp, #4]
    bl _ZN17UnkClass_020621b413func_020745e4Ev
    add sp, sp, #8
    ldmia sp!, {r3, pc}
}

asm void UnkClass_020621b4::func_02074728()
{
    stmdb sp!, {r3, lr}
    sub sp, sp, #8
    ldrb r12, [sp, #0x10]
    str r3, [sp]
    mov r3, r2
    mov r2, #6
    str r12, [sp, #4]
    bl _ZN17UnkClass_020621b413func_020745e4Ev
    add sp, sp, #8
    ldmia sp!, {r3, pc}
}

asm void UnkClass_020621b4::func_02074750()
{
    stmdb sp!, {r3, lr}
    sub sp, sp, #8
    ldrb r12, [sp, #0x10]
    str r3, [sp]
    mov r3, r2
    mov r2, #7
    str r12, [sp, #4]
    bl _ZN17UnkClass_020621b413func_020745e4Ev
    add sp, sp, #8
    ldmia sp!, {r3, pc}
}

asm void UnkClass_020621b4::func_02074778()
{
    stmdb sp!, {r3, lr}
    sub sp, sp, #8
    ldrb r12, [sp, #0x10]
    str r3, [sp]
    mov r3, r2
    mov r2, #8
    str r12, [sp, #4]
    bl _ZN17UnkClass_020621b413func_020745e4Ev
    add sp, sp, #8
    ldmia sp!, {r3, pc}
}

asm void UnkClass_020621b4::func_020747a0()
{
    ldr r0, [r0, #0xbe8]
    cmp r0, #0
    ldrnesb r0, [r0, r1]
    moveq r0, #0
    bx lr
}

asm void UnkClass_020621b4::func_020747b4()
{
    ldr r3, [r0, #0xbe8]
    cmp r3, #0
    moveq r0, #0
    bxeq lr
    cmp r2, #0x7f
    movgt r2, #0x7f
    mvn r0, #0x7e
    cmp r2, r0
    movlt r2, r0
    strb r2, [r3, r1]
    mov r0, #1
    bx lr
}

asm void UnkClass_020621b4::func_020747e4()
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r4, #0
    mov r0, r1
    mov r1, r4
    mov r5, r2
    bl func_ov015_02130b14
    cmp r0, #0
    moveq r0, r4
    ldmeqia sp!, {r3, r4, r5, pc}
    cmp r5, #0x200
    movhs r0, #0
    ldrlo r1, [r0, #0xec]
    movlo r0, #1
    strloh r5, [r1, #0x32]
    ldmia sp!, {r3, r4, r5, pc}
}

asm void UnkClass_020621b4::func_02074820()
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r6, #0
    mov r0, r1
    mov r1, r6
    mov r4, r2
    mov r7, r3
    bl func_ov015_02130b14
    movs r5, r0
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    sub r0, r6, #1
    cmp r4, r0
    bne @L_020748a4
    mov r4, #1
@L_02074854:
    mov r0, r5
    mov r1, r6
    bl func_020808c4
    cmp r0, #0
    beq @L_02074894
    ldr r3, [r5, #0xec]
    mov r2, r4, lsl r6
    ldrb r1, [r3, #0x88]
    rsb r0, r2, #0xff
    cmp r7, #0
    and r0, r1, r0
    strb r0, [r3, #0x88]
    ldrneb r1, [r3, #0x88]
    andne r0, r2, #0xff
    orrne r0, r1, r0
    strneb r0, [r3, #0x88]
@L_02074894:
    add r6, r6, #1
    cmp r6, #6
    blt @L_02074854
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_020748a4:
    mov r0, r5
    mov r1, r6
    bl func_020808c4
    cmp r4, r0
    bne @L_020748ec
    ldr r3, [r5, #0xec]
    mov r0, #1
    mov r2, r0, lsl r6
    ldrb r1, [r3, #0x88]
    rsb r0, r2, #0xff
    cmp r7, #0
    and r0, r1, r0
    strb r0, [r3, #0x88]
    ldrneb r1, [r3, #0x88]
    andne r0, r2, #0xff
    orrne r0, r1, r0
    strneb r0, [r3, #0x88]
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_020748ec:
    add r6, r6, #1
    cmp r6, #6
    blt @L_020748a4
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

asm void UnkClass_020621b4::func_020748fc()
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    mov r7, r0
    bl _ZN17UnkClass_020621b413func_020739ccEi
    cmp r0, #0
    moveq r0, #0
    ldmeqia sp!, {r4, r5, r6, r7, r8, pc}
    ldrb r1, [r0, #0xf]
    tst r1, #2
    movne r2, #1
    moveq r2, #0
    cmp r2, #0
    beq @L_02074950
@L_0207492c:
    ldr r3, [r0, #0x18]
    ldr r0, =0xcccccccd
    mov r2, #0xa
    umull r0, r1, r3, r0
    mov r1, r1, lsr #3
    umull r0, r1, r2, r1
    sub r1, r3, r0
    sub r5, r3, r1
    b @L_02074970
@L_02074950:
    tst r1, #4
    movne r1, #1
    moveq r1, #0
    cmp r1, #0
    beq @L_02074968
    b @L_0207492c
@L_02074968:
    mov r0, #0
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_02074970:
    ldr r6, =0x1c2
    ldr r4, =0xcccccccd
    mov r8, #0xa
@L_0207497c:
    mov r0, r7
    mov r1, r6
    bl _ZN17UnkClass_020621b413func_020739ccEi
    ldr r2, [r0, #0x18]
    umull r0, r1, r2, r4
    mov r1, r1, lsr #3
    umull r0, r1, r8, r1
    sub r1, r2, r0
    sub r0, r2, r1
    cmp r5, r0
    moveq r0, r6
    ldmeqia sp!, {r4, r5, r6, r7, r8, pc}
    add r6, r6, #1
    cmp r6, #0x200
    blt @L_0207497c
    mov r0, #0
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

asm void UnkClass_020621b4::func_020749c8()
{
    ldrsh r0, [r0, #4]
    cmp r0, #0
    rsblt r0, r0, #0
    mov r0, r0, lsl #0x10
    mov r0, r0, lsr #0x10
    cmp r1, #0
    addne r1, r0, r0, lsl #1
    movne r0, r1, asr #1
    addne r0, r1, r0, lsr #30
    movne r0, r0, lsl #0xe
    movne r0, r0, lsr #0x10
    mul r1, r0, r2
    ldr r2, =0x51eb851f
    mov r0, r1, lsr #0x1f
    smull r1, r3, r2, r1
    add r3, r0, r3, asr #5
    mov r0, r3, lsl #0x10
    mov r0, r0, lsr #0x10
    bx lr
}

asm void UnkClass_020621b4::func_02074a18()
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    movs r7, r1
    mov r6, r0
    mov r4, #0
    mov r5, #0x64
    beq @L_02074a48
    mov r0, r7
    bl func_02080b90
    ldr r1, =data_020fa076
    ldrb r0, [r1, r0]
    tst r0, #2
    movne r4, #1
@L_02074a48:
    ldr r0, [r7, #0xf8]
    tst r0, #0x200
    beq @L_02074a64
    ldr r0, =data_020e88a0
    mov r1, #0x3c
    bl _ZN17UnkClass_020621b413func_020739ccEi
    ldrb r5, [r0, #6]
@L_02074a64:
    ldr r0, [r7, #0xf8]
    tst r0, #0x400
    beq @L_02074a8c
    mov r0, #0x78
    mul r1, r5, r0
    ldr r2, =0x51eb851f
    mov r0, r1, lsr #0x1f
    smull r1, r3, r2, r1
    add r3, r0, r3, asr #5
    and r5, r3, #0xff
@L_02074a8c:
    mov r0, r6
    mov r1, r4
    mov r2, r5
    bl _ZN17UnkClass_020621b413func_020749c8Ev
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

asm void UnkClass_020621b4::func_02074aac()
{
    ldrb r0, [r0, #1]
    mov r0, r0, asr #5
    and r0, r0, #7
    bx lr
}

asm void UnkClass_020621b4::func_02074abc()
{
    ldrb r0, [r0, #1]
    and r0, r0, #0x1f
    bx lr
}

asm void UnkClass_020621b4::func_02074ac8()
{
    ldrb r0, [r0]
    bx lr
}

asm void UnkClass_020621b4::func_02074ad0()
{
    cmp r1, #0
    beq @L_02074ae0
    cmp r1, #0x14
    bls @L_02074ae8
@L_02074ae0:
    mov r0, #0
    bx lr
@L_02074ae8:
    cmp r1, #1
    moveq r0, #0
    subne r1, r1, #2
    addne r0, r0, r1, lsl #1
    ldrneb r0, [r0, #1]
    bx lr
}

asm void UnkClass_020621b4::func_02074b00()
{
    cmp r1, #0
    beq @L_02074b10
    cmp r1, #0x14
    bls @L_02074b18
@L_02074b10:
    mov r0, #0
    bx lr
@L_02074b18:
    cmp r1, #1
    moveq r0, #0
    subne r1, r1, #2
    addne r0, r0, r1, lsl #1
    ldrneb r0, [r0, #2]
    bx lr
}

asm void UnkClass_020621b4::func_02074b30()
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x4c
    mov r9, r0
    mov r8, r1
    mov r7, r2
    add r4, sp, #0xc
    bl func_ov015_021317c8
    cmp r0, #0
    addne sp, sp, #0x4c
    ldmneia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r0, r9
    bl _ZN17UnkClass_020621b413func_0206bfecEv
    cmp r0, #0
    addne sp, sp, #0x4c
    ldmneia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r0, r9
    bl _ZN17UnkClass_020621b413func_0206bfa8Ev
    cmp r0, #0
    addne sp, sp, #0x4c
    ldmneia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mvn r5, #0x80000000
    mov r6, #0
    sub r1, r5, #0x80000000
    add r3, sp, #0x2c
    add r2, sp, #0x3c
    add r0, sp, #0x1c
    b @L_02074bb0
@L_02074b9c:
    str r5, [r3, r6, lsl #2]
    str r1, [r4, r6, lsl #2]
    str r5, [r2, r6, lsl #2]
    str r1, [r0, r6, lsl #2]
    add r6, r6, #1
@L_02074bb0:
    cmp r6, #4
    blt @L_02074b9c
    ldr r4, =data_020c4920
    mov r11, #1
    ldr r0, [r4, #0x48]
    bl func_ov015_02131948
    ldr r1, [r4, #0x48]
    add r4, sp, #0xc
    add r2, sp, #0x2c
    mov r3, #0x80000000
    str r3, [r2, r0, lsl #4]
    str r1, [r4, r0, lsl #4]
    mov r5, #0
    ldr r10, =data_020c4920
    b @L_02074cf8
@L_02074bec:
    mov r0, r5
    bl func_ov015_02130ae8
    movs r6, r0
    beq @L_02074cf4
    ldrh r0, [r6, #0xf0]
    tst r0, #1
    movne r0, #1
    moveq r0, #0
    cmp r0, #0
    beq @L_02074cf4
    ldrh r0, [r6, #0xf0]
    tst r0, #8
    movne r0, #1
    moveq r0, #0
    cmp r0, #0
    ldrne r0, [r10, #0x48]
    cmpne r5, r0
    beq @L_02074cf4
    mov r0, r6
    bl func_02080abc
    cmp r0, #0
    beq @L_02074cf4
    ldr r1, [r6, #0xe8]
    ldr r0, [r10]
    ldr r1, [r1]
    subs r2, r1, r0
    ldr r0, [r6, #0xe8]
    rsbmi r2, r2, #0
    ldr r1, [r0, #4]
    ldr r0, [r10, #4]
    subs r0, r1, r0
    rsbmi r0, r0, #0
    cmp r2, #0x30000
    cmple r0, #0x30000
    bgt @L_02074cf4
    ldr r0, [r6, #0xe8]
    ldr r1, [r0, #4]
    ldr r3, [r0]
    mov r0, r9
    str r1, [sp]
    ldmia r10, {r1, r2}
    bl func_01fff198
    mov r6, r0
    cmp r6, #0x30000
    bgt @L_02074cf4
    mov r0, r5
    bl func_ov015_02131948
    add r1, sp, #0x2c
    add r12, r1, r0, lsl #4
    add r3, r4, r0, lsl #4
    str r6, [r12, #0xc]
    str r5, [r3, #0xc]
    mov lr, #2
    b @L_02074cec
@L_02074cc4:
    ldr r2, [r12, lr, lsl #2]
    cmp r2, r6
    ble @L_02074cf4
    ldr r0, [r3, lr, lsl #2]
    add r1, lr, #1
    str r2, [r12, r1, lsl #2]
    str r0, [r3, r1, lsl #2]
    str r6, [r12, lr, lsl #2]
    str r5, [r3, lr, lsl #2]
    sub lr, lr, #1
@L_02074cec:
    cmp lr, #0
    bge @L_02074cc4
@L_02074cf4:
    add r5, r5, #1
@L_02074cf8:
    cmp r5, #0x20
    blt @L_02074bec
    mov r5, #1
    add r6, sp, #0x1c
    b @L_02074da0
@L_02074d0c:
    ldr r0, [r4, r5, lsl #2]
    bl func_ov015_02130ae8
    sub r1, r5, #1
    ldr r2, [r4, r1, lsl #2]
    ldr r1, [r4, r5, lsl #2]
    cmp r2, r1
    beq @L_02074d48
    cmp r0, #0
    beq @L_02074d54
    ldrh r0, [r0, #0xf0]
    tst r0, #0x80
    movne r0, r11
    moveq r0, #0
    cmp r0, #0
    beq @L_02074d54
@L_02074d48:
    add r0, r5, #1
    ldr r0, [r4, r0, lsl #2]
    str r0, [r4, r5, lsl #2]
@L_02074d54:
    ldr r0, [r6, r5, lsl #2]
    bl func_ov015_02130ae8
    sub r1, r5, #1
    ldr r2, [r6, r1, lsl #2]
    ldr r1, [r6, r5, lsl #2]
    cmp r2, r1
    beq @L_02074d90
    cmp r0, #0
    beq @L_02074d9c
    ldrh r0, [r0, #0xf0]
    tst r0, #0x80
    movne r0, r11
    moveq r0, #0
    cmp r0, #0
    beq @L_02074d9c
@L_02074d90:
    add r0, r5, #1
    ldr r0, [r6, r0, lsl #2]
    str r0, [r6, r5, lsl #2]
@L_02074d9c:
    add r5, r5, #1
@L_02074da0:
    cmp r5, #3
    blt @L_02074d0c
    mov r0, r9
    mov r4, #0
    bl func_02076168
    mov r6, r0
    mov r0, r9
    mov r1, r8
    mov r2, r7
    bl func_020760e4
    cmp r0, #0
    ldrb r0, [r6, #0x12]
    orrne r0, r0, #8
    andeq r0, r0, #0xf7
    strb r0, [r6, #0x12]
    ldr r0, =data_020c4920
    ldr r0, [r0, #0x48]
    bl func_ov015_02131948
    mov r1, r8, lsl #0x18
    mov r10, r1, asr #0x18
    add r1, sp, #0xc
    mov r2, #1
    cmp r0, #0
    add r11, r1, r0, lsl #4
    movne r2, #0
    mov r0, r1
    add r3, r0, r2, lsl #4
    mov r0, r7, lsl #0x18
    mov r1, r0, asr #0x18
    mov r5, #0
    mov r0, #2
    b @L_02074ef8
@L_02074e20:
    ldr r2, [r11, r5, lsl #2]
    cmp r2, #0
    blt @L_02074e8c
    cmp r8, r2
    bne @L_02074e68
    ldrb r2, [r6, #0x10]
    cmp r2, #0
    beq @L_02074e58
    add r2, r6, r2
    ldrsb r12, [r6, #4]
    strb r12, [r2, #4]
    ldrb r2, [r6, #0x10]
    add r2, r6, r2
    strb r4, [r2, #0xa]
@L_02074e58:
    strb r10, [r6, #4]
    mov r2, #1
    strb r2, [r6, #0xa]
    b @L_02074e80
@L_02074e68:
    ldrb r12, [r6, #0x10]
    add r12, r6, r12
    strb r2, [r12, #4]
    ldrb r2, [r6, #0x10]
    add r2, r6, r2
    strb r4, [r2, #0xa]
@L_02074e80:
    ldrb r2, [r6, #0x10]
    add r2, r2, #1
    strb r2, [r6, #0x10]
@L_02074e8c:
    ldr r2, [r3, r5, lsl #2]
    cmp r2, #0
    blt @L_02074ef4
    cmp r7, r2
    bne @L_02074ed0
    ldrb r2, [r6, #0x11]
    cmp r2, #0
    beq @L_02074ec4
    add r2, r6, r2
    ldrsb r12, [r6, #7]
    strb r12, [r2, #7]
    ldrb r2, [r6, #0x11]
    add r2, r6, r2
    strb r4, [r2, #0xd]
@L_02074ec4:
    strb r1, [r6, #7]
    strb r0, [r6, #0xd]
    b @L_02074ee8
@L_02074ed0:
    ldrb r12, [r6, #0x11]
    add r12, r6, r12
    strb r2, [r12, #7]
    ldrb r2, [r6, #0x11]
    add r2, r6, r2
    strb r4, [r2, #0xd]
@L_02074ee8:
    ldrb r2, [r6, #0x11]
    add r2, r2, #1
    strb r2, [r6, #0x11]
@L_02074ef4:
    add r5, r5, #1
@L_02074ef8:
    cmp r5, #3
    blt @L_02074e20
    ldrsb r0, [r6, #4]
    bl func_ov015_02130ae8
    mov r8, r0
    ldrsb r0, [r6, #7]
    bl func_ov015_02130ae8
    mov r5, #0
    mov r4, #1
    mov r7, r0
    str r5, [sp]
    stmib sp, {r4, r7}
    mov r0, r9
    mov r1, r8
    mov r2, r5
    mov r3, r4
    bl _ZN17UnkClass_020621b413func_02069344Eiiiihi
    mov r1, r0
    mov r0, r6
    bl func_02076568
    str r5, [sp]
    mov r1, r7
    mov r2, r5
    mov r0, r9
    mov r3, #3
    stmib sp, {r4, r8}
    bl _ZN17UnkClass_020621b413func_02069344Eiiiihi
    mov r1, r0
    mov r0, r6
    bl func_020765a0
    mov r0, r9
    bl func_ov087_0217e70c
    mov r0, r9
    mov r1, r4
    bl _ZN17UnkClass_020621b413func_0206bff4Ei
    add sp, sp, #0x4c
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

asm void UnkClass_020621b4::func_02074f90()
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x34
    mov r6, r0
    mov r8, r1
    mov r5, r2
    add r7, sp, #0x14
    bl func_02076268
    mov r9, r0
    mov r0, r6
    bl func_020762c0
    str r0, [sp, #0x10]
    mov r0, #0x64
    bl func_ov015_021309f8
    mov r11, r0
    mov r0, #2
    bl func_ov015_021309f8
    str r0, [sp, #0xc]
    mov r0, r6
    bl func_0207620c
    ldrb r0, [r0, #0x12]
    mov r4, #1
    tst r0, #8
    moveq r0, #1
    movne r0, #0
    cmp r0, #0
    mov r0, r9
    moveq r4, #0
    bl func_ov015_02131994
    cmp r8, r0
    bne @L_020750d4
    mov r0, r9
    bl func_ov015_02130ae8
    mov r10, r0
    ldr r0, [sp, #0x10]
    bl func_ov015_02130ae8
    mov r9, #0
    mov r2, r0
    str r9, [sp]
    add r7, sp, #0x14
    mov r0, #4
    str r7, [sp, #4]
    str r0, [sp, #8]
    mov r0, r6
    mov r1, r10
    mov r3, r9
    bl _ZN17UnkClass_020621b413func_02074210Ev
    mov r8, r0
    mov r0, r6
    mov r1, r10
    mov r2, r8
    bl func_ov087_0217e9e8
    ldr r1, [r10, #0xec]
    ldrh r2, [r1, #0x32]
    cmp r2, #0
    cmpne r8, #0
    ble @L_02075090
@L_02075070:
    ldr r1, [r7, r9, lsl #2]
    cmp r1, r2
    addeq sp, sp, #0x34
    streq r1, [r5]
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    add r9, r9, #1
    cmp r9, r8
    blt @L_02075070
@L_02075090:
    cmp r8, #0
    add r7, sp, #0x14
    ble @L_020750c0
    cmp r11, r0
    bhs @L_020750c0
    mov r0, r11
    mov r1, r8
    bl func_02022948
    ldr r0, [r7, r1, lsl #2]
    add sp, sp, #0x34
    str r0, [r5]
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_020750c0:
    mov r2, #0
    mov r0, r6
    mov r1, r10
    mov r3, r2
    b @L_02075198
@L_020750d4:
    ldr r0, [sp, #0x10]
    bl func_ov015_02130ae8
    mov r8, r0
    mov r0, r9
    bl func_ov015_02130ae8
    mov r2, r0
    mov r0, #1
    stmia sp, {r0, r7}
    mov r0, #4
    mov r10, #0
    str r0, [sp, #8]
    mov r0, r6
    mov r1, r8
    mov r3, r10
    bl _ZN17UnkClass_020621b413func_02074210Ev
    mov r9, r0
    mov r0, r6
    mov r1, r8
    mov r2, r9
    bl func_ov087_0217e9e8
    ldr r1, [r8, #0xec]
    ldrh r2, [r1, #0x32]
    cmp r2, #0
    cmpne r9, #0
    ble @L_02075158
@L_02075138:
    ldr r1, [r7, r10, lsl #2]
    cmp r1, r2
    addeq sp, sp, #0x34
    streq r1, [r5]
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    add r10, r10, #1
    cmp r10, r9
    blt @L_02075138
@L_02075158:
    cmp r9, #0
    add r7, sp, #0x14
    ble @L_02075188
    cmp r11, r0
    bhs @L_02075188
    mov r0, r11
    mov r1, r9
    bl func_02022948
    ldr r0, [r7, r1, lsl #2]
    add sp, sp, #0x34
    str r0, [r5]
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02075188:
    mov r0, r6
    mov r1, r8
    mov r2, #0
    mov r3, #1
@L_02075198:
    stmia sp, {r4, r7}
    bl _ZN17UnkClass_020621b413func_020725acEv
    ldr r0, [sp, #0xc]
    add r1, sp, #0x14
    ldr r0, [r1, r0, lsl #2]
    str r0, [r5]
    add sp, sp, #0x34
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

asm void UnkClass_020621b4::func_020751b8()
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0xc
    mov r7, r3
    ldrh r3, [r7, #0xf0]
    mov r4, #1
    mov r10, r0
    tst r3, #0x80
    movne r0, r4
    moveq r0, #0
    mov r9, r1
    mov r8, r2
    ldr r6, [sp, #0x30]
    mov r5, #2
    cmp r0, #0
    beq @L_02075228
    mov r0, r7
    bl func_02080b90
    mov r1, r0
    mov r0, r10
    bl _ZN17UnkClass_020621b413func_0206de34Ev
    cmp r0, #0
    beq @L_02075228
    mov r0, r9
    mov r1, r5
    bl func_02076370
    add sp, sp, #0xc
    mov r0, r5
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02075228:
    ldrh r0, [r8, #0xf0]
    tst r0, #0x80
    movne r0, #1
    moveq r0, #0
    cmp r0, #0
    beq @L_02075274
    mov r0, r8
    bl func_02080b90
    mov r1, r0
    mov r0, r10
    bl _ZN17UnkClass_020621b413func_0206de34Ev
    cmp r0, #0
    beq @L_02075274
    mov r0, r9
    mov r1, r4
    bl func_02076370
    add sp, sp, #0xc
    mov r0, r4
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02075274:
    ldrb r0, [r6]
    mov r1, #0
    add r0, r0, #0xff
    and r0, r0, #0xff
    cmp r0, #6
    bhi @L_02075298
    mov r0, r4, lsl r0
    tst r0, #0x55
    movne r1, r4
@L_02075298:
    cmp r1, #0
    movne r5, r6
    mov r0, r8
    ldrne r6, [sp, #0x34]
    ldreq r5, [sp, #0x34]
    bl func_0207f3e0
    mov r4, r0
    ldrsh r1, [r9]
    mov r0, r10
    bl _ZN17UnkClass_020621b413func_020747a0Ev
    add r4, r4, r0
    mov r0, r7
    bl func_0207f3e0
    mov r11, r0
    ldrsh r1, [r9, #2]
    mov r0, r10
    bl _ZN17UnkClass_020621b413func_020747a0Ev
    add r0, r11, r0
    cmp r4, r0
    ble @L_02075304
    mov r4, #1
    mov r0, r9
    mov r1, r4
    bl func_02076370
    add sp, sp, #0xc
    mov r0, r4
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02075304:
    cmp r4, r0
    mov r0, #2
    mov r4, #0
    bge @L_02075330
    mov r4, r0
    mov r0, r9
    mov r1, r4
    bl func_02076370
    add sp, sp, #0xc
    mov r0, r4
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02075330:
    ldrb r1, [r5]
    add r1, r1, #0xfb
    and r1, r1, #0xff
    cmp r1, #3
    movls r1, #1
    movhi r1, r4
    str r4, [sp]
    cmp r1, #0
    str r0, [sp, #4]
    mov r0, r10
    mov r1, r8
    beq @L_0207536c
    mov r2, r5
    mov r3, #0x19
    b @L_02075374
@L_0207536c:
    mov r2, r5
    mov r3, #1
@L_02075374:
    str r7, [sp, #8]
    bl _ZN17UnkClass_020621b413func_02069394Eiiiihi
    ldrb r1, [r6]
    mov r5, r0
    mov r0, #2
    add r1, r1, #0xfb
    and r1, r1, #0xff
    cmp r1, #3
    movls r1, #1
    movhi r1, #0
    str r4, [sp]
    cmp r1, #0
    str r0, [sp, #4]
    mov r0, r10
    mov r1, r7
    beq @L_020753c0
    mov r2, r6
    mov r3, #0x1b
    b @L_020753c8
@L_020753c0:
    mov r2, r6
    mov r3, #3
@L_020753c8:
    str r8, [sp, #8]
    bl _ZN17UnkClass_020621b413func_02069394Eiiiihi
    mov r4, r0
    cmp r5, #1
    movlt r5, #1
    cmp r4, #1
    movlt r4, #1
    cmp r5, r4
    bne @L_020753fc
    cmp r4, #2
    movlt r5, #1
    movlt r4, #2
    subge r5, r5, #1
@L_020753fc:
    mov r0, r9
    mov r1, r5
    bl func_020764f8
    mov r0, r9
    mov r1, r4
    bl func_02076530
    mov r0, #1
    cmp r5, r4
    movle r0, #2
    add sp, sp, #0xc
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

asm void UnkClass_020621b4::func_02075428()
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x30
    mov r10, r0
    mov r9, r1
    mov r8, r3
    bl func_0207620c
    mov r4, r0
    ldrsb r0, [r4, #4]
    bl func_ov015_02130ae8
    mov r5, r0
    ldrsb r0, [r4, #7]
    bl func_ov015_02130ae8
    str r0, [sp, #0xc]
    mov r0, r10
    mov r1, r9
    bl _ZN17UnkClass_020621b413func_020739ccEi
    str r0, [sp, #8]
    mov r0, r10
    mov r1, r8
    bl _ZN17UnkClass_020621b413func_020739ccEi
    mov r11, r0
    mov r0, r5
    bl func_ov015_021319b0
    cmp r0, #0
    mov r6, #0
    streqh r9, [r4]
    streqh r8, [r4, #2]
    strneh r8, [r4]
    strneh r9, [r4, #2]
    ldrb r1, [r4, #0x10]
    ldrb r2, [r4, #0x11]
    mov r7, r6
    mov r0, r6
@L_020754ac:
    cmp r0, r1
    bge @L_020754c4
    add r3, r4, r0
    ldrb r3, [r3, #0xa]
    cmp r3, #0
    addeq r6, r6, #1
@L_020754c4:
    cmp r0, r2
    bge @L_020754dc
    add r3, r4, r0
    ldrb r3, [r3, #0xd]
    cmp r3, #0
    addeq r7, r7, #1
@L_020754dc:
    add r0, r0, #1
    cmp r0, #3
    blt @L_020754ac
    cmp r6, #1
    cmpgt r7, #1
    ble @L_02075548
    mov r0, #0
    mov r6, #3
    mov r1, #4
@L_02075500:
    ldrb r2, [r4, #0x10]
    cmp r0, r2
    bge @L_0207551c
    add r3, r4, r0
    ldrb r2, [r3, #0xa]
    cmp r2, #0
    streqb r6, [r3, #0xa]
@L_0207551c:
    ldrb r2, [r4, #0x11]
    cmp r0, r2
    bge @L_02075538
    add r3, r4, r0
    ldrb r2, [r3, #0xd]
    cmp r2, #0
    streqb r1, [r3, #0xd]
@L_02075538:
    add r0, r0, #1
    cmp r0, #3
    blt @L_02075500
    b @L_0207558c
@L_02075548:
    cmp r6, #0
    cmpgt r7, #0
    ble @L_0207558c
    mov r0, #2
    bl func_ov015_021309a4
    cmp r6, #1
    cmpne r0, #0
    moveq r1, #3
    streqb r1, [r4, #0xb]
    movne r1, #3
    strneb r1, [r4, #0xc]
    cmp r7, #1
    cmpne r0, #0
    moveq r0, #4
    streqb r0, [r4, #0xe]
    movne r0, #4
    strneb r0, [r4, #0xf]
@L_0207558c:
    mov r0, #0
    mov r6, #5
    mov r1, #6
@L_02075598:
    ldrb r2, [r4, #0x10]
    cmp r0, r2
    bge @L_020755b4
    add r3, r4, r0
    ldrb r2, [r3, #0xa]
    cmp r2, #0
    streqb r6, [r3, #0xa]
@L_020755b4:
    ldrb r2, [r4, #0x11]
    cmp r0, r2
    bge @L_020755d0
    add r3, r4, r0
    ldrb r2, [r3, #0xd]
    cmp r2, #0
    streqb r1, [r3, #0xd]
@L_020755d0:
    add r0, r0, #1
    cmp r0, #3
    blt @L_02075598
    mov r0, r10
    mov r6, #1
    bl _ZN17UnkClass_020621b413func_0206ace8Ev
    cmp r0, #0
    bne @L_02075600
    bl func_ov015_021317c8
    cmp r0, #0
    addeq r0, r10, #0x11000
    streqb r6, [r0, #0x89a]
@L_02075600:
    ldrb r0, [r4, #0x12]
    ldr r3, [sp, #0xc]
    mov r6, #1
    tst r0, #8
    moveq r0, #1
    movne r0, #0
    cmp r0, #0
    ldr r0, [sp, #8]
    mov r1, r4
    str r0, [sp]
    mov r0, r10
    mov r2, r5
    ldr r7, =data_020fc704
    moveq r6, #0
    str r11, [sp, #4]
    bl _ZN17UnkClass_020621b413func_020751b8Ev
    ldr r1, =data_020c4808
    str r0, [r7]
    ldrb r0, [r1]
    cmp r0, #0
    beq @L_0207575c
    bl func_ov015_021317c8
    cmp r0, #0
    bne @L_0207575c
    ldr r0, [sp, #8]
    ldr r7, =data_020fc704
    ldrb r0, [r0]
    add r0, r0, #0xfb
    and r0, r0, #0xff
    cmp r0, #3
    movls r0, #1
    movhi r0, #0
    cmp r0, #0
    bne @L_0207575c
    ldrb r0, [r11]
    add r0, r0, #0xfb
    and r0, r0, #0xff
    cmp r0, #3
    movls r0, #1
    movhi r0, #0
    cmp r0, #0
    bne @L_0207575c
    ldr r0, =0x117fe
    ldrh r0, [r10, r0]
    tst r0, #0x200
    beq @L_0207575c
    ldrh r0, [r5, #0xf0]
    mov r2, #0
    tst r0, #0x20
    movne r0, #1
    moveq r0, #0
    cmp r0, #0
    beq @L_020756ec
    add r10, sp, #0x10
    ldr r0, =data_020e88a0
    mov r1, r5
    mov r3, r2
    stmia sp, {r6, r10}
    b @L_02075704
@L_020756ec:
    add r5, sp, #0x10
    str r6, [sp]
    ldr r0, =data_020e88a0
    ldr r1, [sp, #0xc]
    mov r3, #1
    str r5, [sp, #4]
@L_02075704:
    bl _ZN17UnkClass_020621b413func_020725acEv
    ldr r0, [sp, #0x10]
    cmp r0, r9
    cmpne r0, r8
    bne @L_02075730
    ldrb r1, [r4, #0x12]
    mov r0, #2
    orr r1, r1, #0x20
    strb r1, [r4, #0x12]
    str r0, [r7]
    b @L_02075750
@L_02075730:
    ldr r0, [sp, #0x14]
    cmp r0, r9
    cmpne r0, r8
    ldreqb r1, [r4, #0x12]
    moveq r0, #2
    orreq r1, r1, #0x40
    streqb r1, [r4, #0x12]
    streq r0, [r7]
@L_02075750:
    ldr r1, [r7]
    mov r0, r4
    bl func_02076370
@L_0207575c:
    ldr r0, =data_020fc704
    ldr r0, [r0]
    add sp, sp, #0x30
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

asm void UnkClass_020621b4::func_0207577c(int n)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    mov r7, #0
    mov r10, r0
    mov r9, r1
    mov r8, r7
    bl _ZN17UnkClass_020621b413func_0206ace8Ev
    cmp r0, #0
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldrsb r0, [r9, #4]
    bl func_ov015_02130ae8
    mov r4, r0
    ldrsb r0, [r9, #7]
    bl func_ov015_02130ae8
    mov r5, r0
    ldrsh r1, [r9]
    mov r0, r10
    bl _ZN17UnkClass_020621b413func_020739ccEi
    mov r11, r0
    ldrsh r1, [r9, #2]
    mov r0, r10
    bl _ZN17UnkClass_020621b413func_020739ccEi
    mov r6, r0
    cmp r4, #0
    beq @L_020757f4
    mov r0, r4
    bl func_ov015_021319b0
    mov r1, r0
    mov r0, r10
    bl _ZN17UnkClass_020621b413func_0206b4ccEi
    mov r7, r0
@L_020757f4:
    cmp r5, #0
    beq @L_02075814
    mov r0, r5
    bl func_ov015_021319b0
    mov r1, r0
    mov r0, r10
    bl _ZN17UnkClass_020621b413func_0206b4ccEi
    mov r8, r0
@L_02075814:
    mov r0, r9
    bl func_0207649c
    str r0, [sp]
    mov r0, r9
    bl func_020764b4
    ldr r1, [sp]
    cmp r1, r0
    movge r0, #1
    movlt r0, #2
    mov r0, r0, lsl #0x18
    mov r0, r0, asr #0x18
    cmp r0, #1
    bne @L_020758e0
    cmp r4, #0
    beq @L_020758b8
    ldr r0, [r4, #0xe8]
    ldrh r0, [r0, #0x16]
    tst r0, #0x4000
    movne r0, #1
    moveq r0, #0
    cmp r0, #0
    bne @L_020758b8
    add r0, r10, #0x11000
    ldrb r0, [r0, #0x89d]
    cmp r0, #0
    beq @L_020758b8
    mov r0, r11
    mov r1, r4
    ldrsh r5, [r4, #0x96]
    bl _ZN17UnkClass_020621b413func_02074a18Ev
    mov r1, #0x64
    mul r1, r0, r1
    ldr r2, =0x51eb851f
    mov r0, r1, lsr #0x1f
    smull r1, r3, r2, r1
    add r3, r0, r3, asr #5
    sub r0, r5, r3
    mov r1, r0, lsl #0x10
    mov r0, r4
    mov r1, r1, asr #0x10
    bl func_02080b1c
@L_020758b8:
    cmp r11, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldrb r0, [r11]
    cmp r0, #5
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    cmp r7, #0
    ldrneh r0, [r7, #4]
    addne r0, r0, #1
    strneh r0, [r7, #4]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_020758e0:
    cmp r5, #0
    beq @L_02075950
    ldr r0, [r5, #0xe8]
    ldrh r0, [r0, #0x16]
    tst r0, #0x4000
    movne r0, #1
    moveq r0, #0
    cmp r0, #0
    bne @L_02075950
    add r0, r10, #0x11000
    ldrb r0, [r0, #0x89d]
    cmp r0, #0
    beq @L_02075950
    mov r0, r6
    mov r1, r5
    ldrsh r4, [r5, #0x96]
    bl _ZN17UnkClass_020621b413func_02074a18Ev
    mov r1, #0x64
    mul r1, r0, r1
    ldr r2, =0x51eb851f
    mov r0, r1, lsr #0x1f
    smull r1, r3, r2, r1
    add r3, r0, r3, asr #5
    sub r0, r4, r3
    mov r1, r0, lsl #0x10
    mov r0, r5
    mov r1, r1, asr #0x10
    bl func_02080b1c
@L_02075950:
    cmp r6, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldrb r0, [r6]
    cmp r0, #6
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    cmp r8, #0
    ldrneh r0, [r8, #6]
    addne r0, r0, #1
    strneh r0, [r8, #6]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}
