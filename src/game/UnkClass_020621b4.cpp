#include "game/UnkClass_020621b4.hpp"
#include "game/Match.hpp"

extern "C" char data_020aec84[];
extern "C" void *data_020c4648;
extern "C" char data_020c4824[];
extern "C" char data_020c4938[];
extern "C" char data_020c4940[];
extern "C" void _ZdlPv(void);
extern "C" void func_01ff9490(void);
extern "C" void func_01ff9684(void);
extern "C" void func_01fff13c(void);
extern "C" void func_01fff15c(void);
extern "C" s32 func_01fff184(UnkClass_020621b4 *self, fx32 x, fx32 y);     // (the length of (x, y))
extern "C" void func_02001d60(void);
extern "C" u16 func_0200226c(fx32 y, fx32 x);     // (the direction of (x, y))
extern "C" void func_0202273c(void);
extern "C" void func_02063e7c(void);
extern "C" void func_02063ec8(void);
extern "C" void func_02065414(void);
extern "C" void func_020654cc(UnkClass_020621b4 *self, MatchPlayer *player, int a, int b, int c, int d, int e);
extern "C" void func_0206811c(void);
extern "C" void func_02068560(void);
extern "C" void func_0206896c(void);
extern "C" void func_02069344(void);
extern "C" void func_0206ad68(void);
extern "C" void func_0206ad94(void);
extern "C" void func_0206b4a8(void);
extern "C" void func_0206b4cc(void);
extern "C" void func_0206b9c4(void);
extern "C" void func_0206bfa8(void);
extern "C" void func_0206bfb4(void);
extern "C" void func_0206bff4(void);
extern "C" void func_0206c004(void);
extern "C" void func_0206c018(void);
extern "C" void func_0206c644(void);
extern "C" void func_0206c80c(void);
extern "C" void func_0206c834(void);
extern "C" void func_0206f354(void);
extern "C" void func_0206fbd0(void);
extern "C" void func_0206fe28(void);
extern "C" void func_0206ffe0(void);
extern "C" void func_020705f8(void);
extern "C" void func_020739cc(void);
extern "C" void func_020787e8(void);
extern "C" void func_02078fa4(void);
extern "C" void func_0207903c(void);
extern "C" MatchPlayer *func_02079d2c(UnkClass_020621b4 *self, int index);
extern "C" void func_02079e90(void);
extern "C" void func_0207a350(void);
extern "C" void func_0207a510(void);
extern "C" void func_0207f38c(void);
extern "C" void func_02080288(void);
extern "C" void func_02080b38(void);
extern "C" void func_02080b90(void);
extern "C" void func_02083afc(void);
extern "C" void func_020841d8(void);
extern "C" void func_02084788(void);
extern "C" BOOL func_020847b0(MatchPlayer *player);
extern "C" void func_02084870(void);
extern "C" void func_0208f294(void);
extern "C" void func_0208f300(void);
extern "C" void func_ov001_02127dcc(void);
extern "C" void func_ov015_02130b14(void);
extern "C" void func_ov015_02130e28(u16 angle);
extern "C" void func_ov015_021317c8(void);
extern "C" void func_ov015_02131854(void);
extern "C" void func_ov015_021318a4(void);
extern "C" void func_ov015_02131948(void);
extern "C" void func_ov015_02131970(void);
extern "C" void func_ov015_021319b0(void);
extern "C" void func_ov015_0213a69c(void *obj, int a, int b);
extern "C" void func_ov015_0213a75c(void);
extern "C" void func_ov015_0213ffc4(void);
extern "C" void func_ov015_02140da4(void);
extern "C" void func_ov015_02140df0(void);
extern "C" void func_ov015_02140e24(void);
extern "C" void func_ov015_021429b0(void);
extern "C" void func_ov015_02142de8(void);
extern "C" void func_ov015_02142e24(void);
extern "C" void func_ov015_021435e4(void);
extern "C" void func_ov015_02143664(void);
extern "C" void func_ov015_021443c0(void);
extern "C" void func_ov015_02144420(void);
extern "C" void func_ov015_02144458(void);
extern "C" void func_ov087_02177634(void);
extern "C" void func_ov087_02177a10(void);
extern "C" void func_ov087_02177f28(void);
extern "C" void func_ov087_02179e8c(void);
extern "C" void func_ov087_0217b3c8(void);
extern "C" void func_ov087_0217d0ac(void);
extern "C" void func_ov087_0217dfbc(void);
extern "C" void gGameState(void);

UnkClass_020621b4 *UnkClass_020621b4::func_020621b4()
{
    vtable = data_020aec84;
    unk_b7c = 0;
    unk_b80 = 0;
    unk_bb0 = 0;
    unk_bb2 = 0;
    unk_bb3 = 0;
    unk_bb4[0] = 0;
    unk_bb4[1] = 0;
    unk_bb4[2] = 0;
    unk_bb4[3] = 0;
    unk_bb4[4] = 0;
    unk_bb4[5] = 0;
    unk_bb4[6] = 0;
    unk_bb4[7] = 0;
    unk_bb4[8] = 0;
    unk_bb4[9] = 0;
    unk_bb4[10] = 0;
    unk_bb4[11] = 0;
    unk_bb4[12] = 0;
    unk_bb4[13] = 0;
    unk_bb4[14] = 0;
    unk_bb4[15] = 0;
    unk_bb4[16] = 0;
    unk_bb4[17] = 0;
    unk_bb4[18] = 0;
    unk_bb4[19] = 0;
    unk_bb4[20] = 0;
    unk_c28 = 0;
    unk_c2c = 0;
    unk_117d4 = 0;
    unk_117d5 = 0;
    unk_118dd = 0;
    unk_118f5 = 0;
    unk_118fc = 0;
    unk_11900 = 0;
    unk_11918 = 0;
    return this;
}

UnkClass_020621b4 *UnkClass_020621b4::func_02062268()
{
    vtable = data_020aec84;
    func_020622b0();
    return this;
}

UnkClass_020621b4 *UnkClass_020621b4::func_02062288()
{
    vtable = data_020aec84;
    func_020622b0();
    operator delete(this);
    return this;
}

void UnkClass_020621b4::func_020622b0()
{
}

asm void UnkClass_020621b4::func_020622b4()
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x20
    mov r8, r2
    ldrb r2, [r8, #0x5a]
    mov r9, r1
    mov r10, r0
    str r3, [sp, #0xc]
    cmp r2, #0
    mov r1, #2
    mov r4, #1
    mov r6, #0
    beq @L_020622f8
    cmp r2, #1
    beq @L_020625a4
    cmp r2, #2
    beq @L_02062624
    b @L_02062630
@L_020622f8:
    mov r1, r4
    mov r2, r6
    bl func_0206ad94
    mov r0, r10
    bl func_ov015_021435e4
    mov r5, r0
    strb r6, [r5, #0xe]
    sub r0, r4, #2
    mov r7, r6
    strb r0, [r5, #0xd]
    mov r11, r4
    b @L_02062378
@L_02062328:
    mov r0, r10
    mov r1, r7
    bl func_02079d2c
    movs r4, r0
    beq @L_02062374
    ldrh r0, [r4, #0xf0]
    tst r0, #0x80
    movne r0, r11
    moveq r0, #0
    cmp r0, #0
    beq @L_02062374
    mov r0, r4
    mov r1, r9
    bl func_ov015_021318a4
    cmp r0, #0
    ldreqsh r0, [r4, #0xf4]
    moveq r6, r4
    streqb r0, [r5, #0xd]
    beq @L_02062380
@L_02062374:
    add r7, r7, #1
@L_02062378:
    cmp r7, #0x16
    blt @L_02062328
@L_02062380:
    ldrsh r0, [r9, #0xf4]
    cmp r6, #0
    mov r4, #1
    strb r0, [r5, #0xc]
    mov r7, #0
    beq @L_020623f0
    str r7, [sp]
    mov r0, r10
    mov r1, r9
    mov r2, r7
    mov r3, #4
    stmib sp, {r4, r6}
    bl func_02069344
    mov r1, r0
    mov r0, r5
    bl func_ov015_02144420
    str r7, [sp]
    mov r1, r6
    mov r2, r7
    mov r0, r10
    mov r3, #8
    stmib sp, {r4, r9}
    bl func_02069344
    mov r1, r0
    mov r0, r5
    bl func_ov015_02144458
    mov r0, #0x1e
    strh r0, [r5, #0xa]
@L_020623f0:
    mov r0, r9
    bl func_ov015_021319b0
    add r0, r10, r0
    add r0, r0, #0x11000
    ldrb r0, [r0, #0x7d6]
    mov r1, r9
    mov r2, #0
    tst r0, #1
    movne r0, #1
    moveq r0, #0
    cmp r0, #0
    ldrneb r0, [r5, #0xf]
    orrne r0, r0, #8
    strneb r0, [r5, #0xf]
    mov r0, r10
    bl func_0206fbd0
    mov r0, r9
    bl func_02080b90
    add r0, r10, r0
    add r0, r0, #0x11000
    ldrb r0, [r0, #0x905]
    cmp r0, #0
    beq @L_02062478
    mov r0, r9
    bl func_02080b90
    add r0, r10, r0
    add r0, r0, #0x11000
    ldrb r0, [r0, #0x907]
    cmp r0, #0
    ldrb r0, [r5, #0xf]
    orrne r0, r0, #0x20
    strneb r0, [r5, #0xf]
    orreq r0, r0, #0x10
    streqb r0, [r5, #0xf]
@L_02062478:
    ldr r0, [sp, #0xc]
    mov r2, #2
    cmp r0, #0
    beq @L_02062508
    mov r4, #1
    strb r4, [r8, #0x5a]
    add r1, r10, #0x11000
    mov r0, r5
    strb r7, [r1, #0x8f3]
    bl func_020841d8
    ldrb r0, [r8, #0x59]
    mov r1, #6
    tst r0, #0x80
    moveq r4, r7
    cmp r4, #0
    ldrneb r0, [r5, #0xf]
    orrne r0, r0, #1
    strneb r0, [r5, #0xf]
    mov r0, r10
    bl func_0206bff4
    ldrb r1, [r8, #0x5c]
    mov r0, r10
    bl func_0206c80c
    cmp r0, #0
    mov r0, r10
    bne @L_020624e8
    mov r1, #1
    b @L_020624ec
@L_020624e8:
    mov r1, #0xd
@L_020624ec:
    bl func_0206c004
    mov r1, #1
    mov r0, r10
    mov r2, r1
    bl func_0206ad68
    add sp, sp, #0x20
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02062508:
    mov r0, r10
    mov r1, r7
    strb r2, [r8, #0x5a]
    bl func_020705f8
    mov r0, r10
    bl func_ov015_02143664
    bl func_ov015_021443c0
    cmp r0, #0
    bne @L_02062630
    ldr r5, =data_020c4824
    mov r1, r4
    ldr r0, [r5]
    bl func_0208f300
    ldr r1, [r8, #0x18]
    mov r0, r10
    str r1, [sp]
    ldr r2, [r8, #0x1c]
    mov r1, r9
    str r2, [sp, #4]
    ldr r3, [r9, #0xe8]
    ldmia r3, {r2, r3}
    bl func_0206ffe0
    str r4, [sp]
    cmp r0, #0
    mov r3, #0x14
    ldr r0, [r5]
    beq @L_0206258c
    ldr r2, =0x191f
    mov r1, r7
@L_0206257c:
    bl func_0208f294
    ldr r0, [r5]
    strb r4, [r0, #0x291]
    b @L_02062630
@L_0206258c:
    ldr r2, =0x5044
    mov r1, r7
    bl func_0208f294
    ldr r0, [r5]
    strb r7, [r0, #0x291]
    b @L_02062630
@L_020625a4:
    strb r1, [r8, #0x5a]
    bl func_ov015_02143664
    bl func_ov015_021443c0
    cmp r0, #0
    bne @L_02062630
    ldr r5, =data_020c4824
    mov r1, r4
    ldr r0, [r5]
    bl func_0208f300
    ldr r1, [r8, #0x18]
    mov r0, r10
    str r1, [sp]
    ldr r2, [r8, #0x1c]
    mov r1, r9
    str r2, [sp, #4]
    ldr r3, [r9, #0xe8]
    ldmia r3, {r2, r3}
    bl func_0206ffe0
    str r4, [sp]
    cmp r0, #0
    mov r3, #0x14
    ldr r0, [r5]
    beq @L_0206260c
    ldr r2, =0x191f
    mov r1, r6
    b @L_0206257c
@L_0206260c:
    ldr r2, =0x5044
    mov r1, r6
    bl func_0208f294
    ldr r0, [r5]
    strb r6, [r0, #0x291]
    b @L_02062630
@L_02062624:
    add sp, sp, #0x20
    strb r6, [r8, #0x5a]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02062630:
    mov r0, r10
    mov r7, #1
    mov r6, #0
    bl func_ov015_02143664
    mov r5, r0
    ldrsb r0, [r5, #0xd]
    bl func_ov015_02130ae8
    movs r4, r0
    addeq sp, sp, #0x20
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldrh r0, [r4, #0xf0]
    tst r0, #8
    movne r0, r7
    moveq r0, r6
    cmp r0, #0
    addeq sp, sp, #0x20
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldrsb r0, [r5, #0xc]
    bl func_ov015_02130ae8
    str r0, [sp, #0x14]
    ldrb r1, [r8, #0x5c]
    mov r0, r10
    bl func_0206c80c
    cmp r0, #0
    beq @L_02062784
    ldrsb r0, [r5, #0xd]
    ldrb r6, [r5, #0x13]
    bl func_ov015_02131948
    add r7, sp, #0x18
    mov r3, r0
    mov r0, r10
    mov r1, r4
    mov r2, r7
    str r6, [sp]
    bl func_ov001_02127dcc
    cmp r6, #3
    bne @L_020626f0
    mov r3, #0
    str r3, [sp]
    mov r2, #0x1e
    mov r0, r10
    mov r1, r4
    str r3, [sp, #4]
    mov r4, #0xa
    sub r3, r2, #0x1f
    str r4, [sp, #8]
@L_020626e8:
    bl func_020654cc
    b @L_02062a30
@L_020626f0:
    mov r2, #0x20
    str r7, [sp]
    mov r7, #0
    str r7, [sp, #4]
    mov r0, r10
    mov r1, r4
    sub r3, r2, #0x21
    str r7, [sp, #8]
    bl func_020654cc
    mov r0, r4
    bl func_ov015_02131970
    cmp r0, #0
    bne @L_02062754
    mov r1, #1
    cmp r6, #4
    cmpne r6, #5
    mov r0, #3
    ldreq r1, [r4, #0xe8]
    moveq r0, #7
    mov r2, #2
    streqb r0, [r1, #0x1a]
    streqb r2, [r5, #0xe]
    ldrne r2, [r4, #0xe8]
    strneb r1, [r2, #0x1a]
    b @L_0206277c
@L_02062754:
    cmp r6, #1
    cmpne r6, #2
    mov r0, #2
    ldreq r1, [r4, #0xe8]
    moveq r0, #5
    mov r2, #3
    streqb r0, [r1, #0x1a]
    streqb r2, [r5, #0xe]
    ldrne r1, [r4, #0xe8]
    strneb r2, [r1, #0x1a]
@L_0206277c:
    strneb r0, [r5, #0xe]
    b @L_02062a0c
@L_02062784:
    ldrb r1, [r8, #0x56]
    mov r0, r10
    bl func_ov015_02140e24
    cmp r0, #0
    beq @L_020627bc
    strb r7, [r5, #0xe]
    str r6, [sp]
    mov r2, #0x1f
    str r6, [sp, #4]
    mov r0, r10
    mov r1, r4
    sub r3, r2, #0x20
    str r6, [sp, #8]
    b @L_020626e8
@L_020627bc:
    mov r0, r4
    bl func_02084870
    cmp r0, #0
    bne @L_02062a30
    ldr r2, =data_020c4920
    add r3, sp, #0x18
    mov r0, r10
    mov r1, r4
    bl func_ov087_02177f28
    cmp r0, #0
    beq @L_02062a30
    ldr r1, [r4, #0xe8]
    ldr r0, [sp, #0x18]
    ldr r1, [r1]
    subs r11, r1, r0
    ldr r1, [r4, #0xe8]
    ldr r0, [sp, #0x1c]
    ldr r1, [r1, #4]
    rsbmi r11, r11, #0
    subs r7, r1, r0
    ldrsh r1, [r5, #0xa]
    mov r0, r10
    rsbmi r7, r7, #0
    bl func_020739cc
    ldrb r1, [r5, #0xf]
    mov r6, r0
    tst r1, #0x30
    beq @L_020628ac
    ldr r0, [sp, #0x14]
    ldr r1, [r0, #0xe8]
    ldr r1, [r1, #4]
    str r1, [sp, #0x10]
    bl func_ov015_021319b0
    mov r1, r0
    ldr r2, [sp, #0x10]
    mov r0, r10
    bl func_0206fe28
    cmp r0, #0
    bne @L_020628ac
    mov r6, #0
    str r6, [sp]
    mov r2, #0x31
    str r6, [sp, #4]
    mov r0, r10
    mov r1, r4
    sub r3, r2, #0x32
    str r6, [sp, #8]
    bl func_020654cc
    mov r0, r4
    bl func_ov015_02131970
    cmp r0, #0
    mov r0, r4
    bne @L_0206289c
    mov r1, r6
    mov r2, r6
    b @L_020628a4
@L_0206289c:
    mov r2, r6
    mov r1, #4
@L_020628a4:
    bl func_0207f38c
    b @L_02062a04
@L_020628ac:
    cmp r6, #0
    beq @L_02062900
    ldrb r0, [r6]
    mov r1, #1
    mov r3, r1
    cmp r0, #5
    cmpne r0, #6
    movne r3, #0
    mov r2, r1
    cmp r3, #0
    bne @L_020628e4
    ldrb r0, [r6]
    cmp r0, #7
    movne r2, #0
@L_020628e4:
    cmp r2, #0
    bne @L_020628f8
    ldrb r0, [r6]
    cmp r0, #8
    movne r1, #0
@L_020628f8:
    cmp r1, #0
    bne @L_020629b4
@L_02062900:
    ldr r1, [r4, #0xe8]
    add r2, sp, #0x18
    mov r0, r10
    bl func_01fff15c
    cmp r0, #0x10000
    ble @L_020629b4
    cmp r11, r7, lsl #1
    mov r6, #1
    mov r7, #0
    ble @L_020629b4
    str r7, [sp]
    mov r2, #0x1d
    str r7, [sp, #4]
    mov r0, r10
    mov r1, r4
    sub r3, r2, #0x1e
    str r7, [sp, #8]
    bl func_020654cc
    mov r0, r4
    bl func_ov015_02131970
    cmp r0, #0
    bne @L_02062984
    ldr r2, [r4, #0xe8]
    ldr r0, [sp, #0x18]
    ldr r1, [r2]
    cmp r1, r0
    mov r0, #3
    movgt r0, #7
    strgtb r0, [r2, #0x1a]
    movgt r0, #2
    strgtb r0, [r5, #0xe]
    strleb r6, [r2, #0x1a]
    b @L_020629ac
@L_02062984:
    ldr r3, [r4, #0xe8]
    ldr r1, [sp, #0x18]
    ldr r2, [r3]
    mov r0, #2
    cmp r2, r1
    movgt r0, #5
    mov r1, #3
    strgtb r0, [r3, #0x1a]
    strgtb r1, [r5, #0xe]
    strleb r1, [r3, #0x1a]
@L_020629ac:
    strleb r0, [r5, #0xe]
    b @L_02062a0c
@L_020629b4:
    mov r6, #0
    str r6, [sp]
    mov r2, #0x1e
    str r6, [sp, #4]
    mov r0, r10
    mov r1, r4
    sub r3, r2, #0x1f
    str r6, [sp, #8]
    bl func_020654cc
    mov r0, r4
    bl func_ov015_02131970
    cmp r0, #0
    mov r0, r4
    bne @L_020629f8
    mov r1, r6
    mov r2, r6
    b @L_02062a00
@L_020629f8:
    mov r2, r6
    mov r1, #4
@L_02062a00:
    bl func_0207f38c
@L_02062a04:
    mov r0, #1
    strb r0, [r5, #0xe]
@L_02062a0c:
    ldr r0, [r4, #0xe8]
    mov r6, #0
    ldrb r3, [r0, #0x1a]
    ldrb r2, [r0, #0x1d]
    ldr r0, =data_020c4648
    mov r1, r4
    str r6, [sp]
    ldr r0, [r0]
    bl func_ov015_0213a75c
@L_02062a30:
    mov r0, r9
    bl func_02080b90
    cmp r0, #0
    mov r1, #1
    movne r1, #0
    mov r0, r10
    bl func_0206b4a8
    mov r6, r0
    mov r0, r9
    bl func_ov015_021319b0
    mov r1, r0
    mov r0, r10
    bl func_0206b4cc
    ldr r1, =gGameState
    mov r4, r0
    ldrb r0, [r1, #0x7e]
    cmp r0, #2
    movls r0, #1
    bls @L_02062ae8
    cmp r0, #3
    blo @L_02062a90
    cmp r0, #5
    movls r0, #2
    bls @L_02062ae8
@L_02062a90:
    ldr r0, =gGameState
    ldrb r0, [r0, #0x7e]
    cmp r0, #6
    blo @L_02062aac
    cmp r0, #8
    movls r0, #3
    bls @L_02062ae8
@L_02062aac:
    ldr r0, =gGameState
    ldrb r0, [r0, #0x7e]
    cmp r0, #9
    blo @L_02062ac8
    cmp r0, #0xb
    movls r0, #4
    bls @L_02062ae8
@L_02062ac8:
    ldr r0, =gGameState
    ldrb r0, [r0, #0x7e]
    cmp r0, #0xc
    blo @L_02062ae4
    cmp r0, #0xe
    movls r0, #5
    bls @L_02062ae8
@L_02062ae4:
    mvn r0, #0
@L_02062ae8:
    cmp r0, #5
    addeq sp, sp, #0x20
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldrb r0, [r5, #0xf]
    tst r0, #0x10
    beq @L_02062b2c
    mov r0, r10
    mov r1, r6
    add r2, r8, #0x18
    mov r3, #0xc8
    bl func_02068560
    cmp r0, #0
    ldrneb r0, [r4, #0xb]
    add sp, sp, #0x20
    addne r0, r0, #1
    strneb r0, [r4, #0xb]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02062b2c:
    ldrb r0, [r4, #0xb]
    add r0, r0, #1
    strb r0, [r4, #0xb]
    add sp, sp, #0x20
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

asm void UnkClass_020621b4::func_02062b58()
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    sub sp, sp, #0x10
    mov r8, r2
    ldr r2, [r8, #0xec]
    mov r9, r1
    ldrb r5, [r2, #0x84]
    ldrb r0, [r2, #0x85]
    add r1, r2, #0x34
    mov r7, r3
    cmp r5, r0
    add r6, r1, r5, lsl #3
    ldr r1, [r8, #0xe8]
    bge @L_02062bf0
    add r4, sp, #0
@L_02062b90:
    ldmia r1, {r3, r12}
    ldr r10, [r6, #4]
    ldr lr, [r6]
    mov r0, r9
    mov r1, r4
    mov r2, r7
    str r3, [sp]
    str r12, [sp, #4]
    str lr, [sp, #8]
    str r10, [sp, #0xc]
    bl func_02083afc
    cmp r0, #0
    ldrne r1, [sp, #0x30]
    addne sp, sp, #0x10
    movne r0, #1
    strne r5, [r1]
    ldmneia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    ldr r0, [r8, #0xec]
    mov r1, r6
    ldrb r0, [r0, #0x85]
    add r5, r5, #1
    add r6, r6, #8
    cmp r5, r0
    blt @L_02062b90
@L_02062bf0:
    mov r0, #0
    add sp, sp, #0x10
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
}

void // (nonmatching: the products are scheduled differently)
#ifdef NONMATCHING
UnkClass_020621b4::func_02062bfc(fx32 *segment, fx32 x, fx32 y, u16 angle, fx32 from, fx32 to)
{
    fx32 sin = FX_SinIdx(angle >> 4);
    fx32 cos = FX_CosIdx(angle >> 4);

    segment[0] = x + FX_Mul(from, cos);
    segment[1] = y + FX_Mul(from, sin);
    segment[2] = x + FX_Mul(to, cos);
    segment[3] = y + FX_Mul(to, sin);
}
#else
asm UnkClass_020621b4::func_02062bfc(fx32 *segment, fx32 x, fx32 y, u16 angle, fx32 from, fx32 to)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    ldrh r0, [sp, #0x20]
    ldr r5, =FX_SinCosTable_
    ldr r4, [sp, #0x28]
    mov r0, r0, asr #4
    mov r6, r0, lsl #1
    add r0, r6, #1
    mov r6, r6, lsl #1
    mov r0, r0, lsl #1
    ldrsh r8, [r5, r6]
    ldrsh lr, [r5, r0]
    ldr r12, [sp, #0x24]
    smull r6, r5, r4, r8
    smull r0, r7, r12, lr
    adds r9, r0, #0x800
    smull r0, r8, r12, r8
    adc r7, r7, #0
    adds r0, r0, #0x800
    mov r9, r9, lsr #0xc
    orr r9, r9, r7, lsl #20
    add r12, r2, r9
    smull r7, lr, r4, lr
    adc r9, r8, #0
    adds r8, r7, #0x800
    adc r7, lr, #0
    adds r4, r6, #0x800
    mov r6, r0, lsr #0xc
    mov r0, r8, lsr #0xc
    orr r6, r6, r9, lsl #20
    orr r0, r0, r7, lsl #20
    add r7, r3, r6
    add r6, r2, r0
    adc r0, r5, #0
    mov r2, r4, lsr #0xc
    orr r2, r2, r0, lsl #20
    add r0, r3, r2
    str r12, [r1]
    str r7, [r1, #4]
    str r6, [r1, #8]
    str r0, [r1, #0xc]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}
#endif

asm void UnkClass_020621b4::func_02062ca4()
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    sub sp, sp, #0x20
    ldr r2, =data_020c4920
    mov r6, r0
    ldrb r0, [r2, #0x59]
    mov r4, #0
    mov r5, r1
    tst r0, #1
    movne r0, #1
    moveq r0, r4
    cmp r0, #0
    addne sp, sp, #0x20
    movne r0, #0
    ldmneia sp!, {r3, r4, r5, r6, r7, pc}
    ldr r0, =data_020c4920
    ldr r0, [r0, #0x48]
    cmp r0, #0
    movge r0, #1
    movlt r0, #0
    cmp r0, #0
    addne sp, sp, #0x20
    movne r0, #0
    ldmneia sp!, {r3, r4, r5, r6, r7, pc}
    ldr r0, =data_020c4920
    mov r1, #0x400000
    ldrh r2, [r0, #0x52]
    add r7, sp, #0x10
    stmia sp, {r2, r4}
    str r1, [sp, #8]
    ldmia r0, {r2, r3}
    mov r0, r6
    mov r1, r7
    bl func_02062bfc
    mov r0, r6
    mov r1, r7
    mov r2, r5
    mov r3, r4
    bl func_ov087_02179e8c
    cmp r0, #0
    addne sp, sp, #0x20
    movne r0, #1
    ldmneia sp!, {r3, r4, r5, r6, r7, pc}
    add r12, sp, #0xc
    mov r0, r6
    mov r1, r7
    mov r2, r5
    mov r3, r4
    str r12, [sp]
    bl func_02062b58
    add sp, sp, #0x20
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

asm void UnkClass_020621b4::func_02062d74()
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x44
    ldr r4, =data_020c4920
    mvn r3, #0
    str r3, [sp, #0x14]
    ldrb r3, [r4, #0x59]
    mov r9, r0
    ldr r0, [sp, #0x14]
    tst r3, #1
    sub r7, r0, #0x80000000
    movne r0, #1
    moveq r0, #0
    cmp r0, #0
    str r1, [sp, #0xc]
    mov r8, r2
    addne sp, sp, #0x44
    movne r0, #0
    ldmneia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r0, =data_020c4938
    bl func_02084788
    cmp r0, #0
    addne sp, sp, #0x44
    movne r0, #0
    ldmneia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    add r4, sp, #0x24
    ldr r1, =data_020c4920
    mov r0, r9
    mov r2, r4
    bl func_0206896c
    ldr r1, =data_020c4940
    mov r2, r4
    mov r0, r9
    bl func_01fff15c
    mov r11, r0
    ldr r0, =data_020c4920
    mov r6, #0
    ldrh r1, [r0, #0x52]
    mov r0, #0x400000
    ldr r3, =data_020c4920
    stmia sp, {r1, r6}
    str r0, [sp, #8]
    ldr r1, =data_020c4920
    ldr r3, [r3, #4]
    ldr r2, [r1]
    mov r0, r9
    add r1, sp, #0x34
    bl func_02062bfc
    add r4, sp, #0x1c
    b @L_02062f64
@L_02062e38:
    ldr r1, [sp, #0xc]
    mov r0, r9
    mov r2, r6
    bl func_02079e90
    movs r5, r0
    ldrnesh r1, [r5, #0xf4]
    cmpne r8, r1
    beq @L_02062f60
    bl func_02084870
    cmp r0, #0
    beq @L_02062f60
    mov r0, r9
    mov r1, r5
    bl func_0207a350
    cmp r0, #0
    bne @L_02062f60
    add r0, sp, #0x18
    str r0, [sp]
    mov r0, r9
    add r1, sp, #0x34
    mov r2, r5
    mov r3, r4
    bl func_02062b58
    cmp r0, #0
    beq @L_02062f60
    ldr r1, =data_020c4940
    mov r0, r9
    mov r2, r4
    bl func_01fff15c
    cmp r0, r11
    blt @L_02062f60
    ldr r1, =data_020c4920
    ldr r1, [r1, #0x38]
    bl func_02001d60
    ldr r1, =data_020c4920
    smull r12, r10, r0, r0
    ldr r3, [r1, #0x3c]
    smull r2, r1, r3, r0
    adds r3, r12, #0x800
    adc r0, r10, #0
    mov r10, r3, lsr #0xc
    orr r10, r10, r0, lsl #20
    ldr r0, =0x9ccd
    mov r3, r10, asr #0x1f
    umull lr, r12, r10, r0
    ldr r0, =0x9ccd
    mla r12, r3, r0, r12
    adds r3, lr, #0x800
    adc r0, r12, #0
    adds r2, r2, #0x800
    mov r3, r3, lsr #0xc
    orr r3, r3, r0, lsl #20
    adc r1, r1, #0
    mov r2, r2, lsr #0xc
    add r0, r3, r3, lsr #31
    orr r2, r2, r1, lsl #20
    sub r0, r2, r0, asr #1
    cmp r0, #0x10000
    bgt @L_02062f60
    ldr r1, =data_020c4938
    mov r0, r9
    mov r2, r4
    bl func_01fff15c
    cmp r0, r7
    bge @L_02062f60
    ldrsh r1, [r5, #0xf4]
    mov r7, r0
    ldr r0, [sp, #0x20]
    str r1, [sp, #0x14]
    ldr r1, [sp, #0x1c]
    str r0, [sp, #0x30]
    ldr r0, [sp, #0x18]
    str r1, [sp, #0x2c]
    str r0, [sp, #0x10]
@L_02062f60:
    add r6, r6, #1
@L_02062f64:
    cmp r6, #0xb
    blt @L_02062e38
    ldr r0, [sp, #0x14]
    mov r5, #0
    cmp r0, #0
    addlt sp, sp, #0x44
    movlt r0, r5
    ldmltia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    bl func_ov015_02130ae8
    movs r4, r0
    beq @L_0206301c
    mov r0, r9
    mov r1, r4
    bl func_0206f354
    cmp r0, #0
    bne @L_02062fbc
    mov r0, r9
    mov r1, r4
    bl func_02065414
    add sp, sp, #0x44
    mov r0, r5
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02062fbc:
    add r0, sp, #0x2c
    stmia sp, {r0, r5}
    mov r2, #0x12
    mov r0, r9
    mov r1, r4
    str r5, [sp, #8]
    sub r3, r2, #0x13
    bl func_020654cc
    ldr r1, [r4, #0xec]
    ldr r0, [sp, #0x10]
    ldr r5, =data_020c4920
    strh r0, [r1, #0x86]
    ldr r1, [sp, #0x30]
    mov r0, r9
    str r1, [sp]
    ldr r3, [sp, #0x2c]
    ldmia r5, {r1, r2}
    bl func_01fff13c
    mov r2, r0
    mov r0, r9
    mov r1, r5
    bl func_0206b9c4
    ldr r1, [r4, #0xec]
    strh r0, [r1, #0x28]
@L_0206301c:
    mov r0, #1
    add sp, sp, #0x44
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

void UnkClass_020621b4::func_02063038(MatchPlayer *player)
{
    if (func_020847b0(player)) {
        func_020654cc(this, player, 25, -1, 0, 0, 0);
    } else {
        func_020654cc(this, player, 10, -1, 0, 0, 0);
    }
    player->state->unk_86 = -1;
}

void UnkClass_020621b4::func_020630a8()
{
    int i;

    for (i = 0; i < 0x20; i++) {
        MatchPlayer *player = func_ov015_02130ae8(i);
        if (player != NULL) {
            player->state->unk_86 = -1;
        }
    }
}

void UnkClass_020621b4::func_020630d8()
{
    int i;

    for (i = 0; i < 2; i++) {
        unk_117e4[i] = 0x80000000;
    }
}

void UnkClass_020621b4::func_020630fc()
{
    int i;

    for (i = 0; i < 0x20; i++) {
        MatchPlayer *player = func_ov015_02130ae8(i);
        if (player != NULL && player->body != NULL) {
            player->body->unk_16 &= 0xCFFF;
        }
    }
}

asm void UnkClass_020621b4::func_0206313c()
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0xc
    mov r10, r0
    mov r6, #0
    bl func_0206c644
    cmp r0, #0
    bne @L_020631f4
    mov r7, #1
    mov r8, r6
    mov r5, #2
    mvn r4, #0
    mov r11, r7
    b @L_020631ec
@L_02063170:
    mov r0, r8
    bl func_ov015_02130ae8
    movs r9, r0
    beq @L_020631e8
    ldrh r0, [r9, #0xf0]
    tst r0, #8
    movne r0, r7
    moveq r0, r6
    cmp r0, #0
    beq @L_020631e8
    mov r0, r9
    bl func_02084870
    cmp r0, #0
    bne @L_020631e8
    ldr r0, [r9, #0xec]
    ldrh r0, [r0, #0x1c]
    cmp r0, #2
    beq @L_020631d8
    str r6, [sp]
    str r6, [sp, #4]
    mov r0, r10
    mov r1, r9
    mov r2, r5
    mov r3, r4
    str r6, [sp, #8]
    bl func_020654cc
@L_020631d8:
    mov r0, r10
    mov r1, r9
    mov r2, r11
    bl func_ov087_0217d0ac
@L_020631e8:
    add r8, r8, #1
@L_020631ec:
    cmp r8, #0x20
    blt @L_02063170
@L_020631f4:
    ldr r4, =data_020c4920
    ldr r0, [r4, #0x4c]
    bl func_ov015_02130ae8
    movs r5, r0
    beq @L_02063234
    mov r0, r4
    bl func_02084788
    cmp r0, #0
    bne @L_02063234
    ldrb r2, [r4, #0x5c]
    mov r0, r10
    mov r1, r5
    str r2, [sp]
    ldrb r3, [r4, #0x56]
    mov r2, r4
    bl func_ov087_0217b3c8
@L_02063234:
    mov r5, #0
    add r4, r10, #0x9c
    b @L_0206324c
@L_02063240:
    add r0, r4, r5, lsl #3
    bl func_020841d8
    add r5, r5, #1
@L_0206324c:
    cmp r5, #2
    blt @L_02063240
    mov r4, #0
    b @L_02063270
@L_0206325c:
    mov r0, r10
    mov r1, r4
    bl func_0206c018
    bl func_020841d8
    add r4, r4, #1
@L_02063270:
    cmp r4, #5
    blt @L_0206325c
    ldr r1, =data_020c4920
    mov r0, r10
    ldrb r1, [r1, #0x5c]
    bl func_0206c80c
    cmp r0, #0
    bne @L_020632a0
    bl func_ov015_021317c8
    cmp r0, #0
    moveq r0, #1
    streq r0, [r10, #0xc70]
@L_020632a0:
    mov r0, r10
    bl func_0206c834
    add sp, sp, #0xc
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

BOOL // (nonmatching: register allocation differs)
#ifdef NONMATCHING
UnkClass_020621b4::func_020632b4(MatchPlayer *a, MatchPlayer *b, s32 *distance)
{
    MatchPlayerBody *bodyB;
    MatchPlayerBody *bodyA;
    fx32 dx;
    fx32 dy;
    s32 d;

    if (a->unk_f4 == b->unk_f4) {
        return FALSE;
    }
    bodyB = b->body;
    bodyA = a->body;
    dx = bodyA->pos.x - bodyB->pos.x;
    if (dx < 0) {
        dx = -dx;
    }
    dy = bodyA->pos.y - bodyB->pos.y;
    if (dy < 0) {
        dy = -dy;
    }
    if (dx > 12 * FX32_ONE || dy > 12 * FX32_ONE) {
        return FALSE;
    }
    d = func_01fff184(this, dx, dy);
    if (d >= 12 * FX32_ONE) {
        return FALSE;
    }
    if (distance != NULL) {
        *distance = d;
    }
    return TRUE;
}
#else
asm UnkClass_020621b4::func_020632b4(MatchPlayer *a, MatchPlayer *b, s32 *distance)
{
    stmdb sp!, {r4, lr}
    ldrsh lr, [r1, #0xf4]
    ldrsh r12, [r2, #0xf4]
    mov r4, r3
    cmp lr, r12
    moveq r0, #0
    ldmeqia sp!, {r4, pc}
    ldr r3, [r2, #0xe8]
    ldr r12, [r1, #0xe8]
    ldr r2, [r3]
    ldr r1, [r12]
    ldr r3, [r3, #4]
    subs r1, r1, r2
    ldr r2, [r12, #4]
    rsbmi r1, r1, #0
    subs r2, r2, r3
    rsbmi r2, r2, #0
    cmp r1, #0xc000
    cmple r2, #0xc000
    movgt r0, #0
    ldmgtia sp!, {r4, pc}
    bl func_01fff184
    cmp r0, #0xc000
    movge r0, #0
    ldmgeia sp!, {r4, pc}
    cmp r4, #0
    strne r0, [r4]
    mov r0, #1
    ldmia sp!, {r4, pc}
}
#endif

BOOL UnkClass_020621b4::func_02063328(MatchPlayer *player)
{
    int i;
    s32 distance;

    if (player == NULL) {
        return FALSE;
    }
    for (i = 0; i < 0x16; i++) {
        MatchPlayer *other = func_02079d2c(this, i);
        if (other != NULL && func_020632b4(player, other, &distance)) {
            return TRUE;
        }
    }
    return FALSE;
}

BOOL UnkClass_020621b4::func_02063388(s16 team, fx32 x, fx32 y)
{
    int i;

    for (i = 0; i < 0x16; i++) {
        MatchPlayer *player = func_02079d2c(this, i);
        if (player != NULL && player->unk_f4 != team) {
            fx32 dx = player->body->pos.x - x;
            fx32 dy;

            if (dx < 0) {
                dx = -dx;
            }
            dy = player->body->pos.y - y;
            if (dy < 0) {
                dy = -dy;
            }
            if (dx <= 12 * FX32_ONE && dy <= 12 * FX32_ONE && func_01fff184(this, dx, dy) < 12 * FX32_ONE) {
                return TRUE;
            }
        }
    }
    return FALSE;
}

BOOL UnkClass_020621b4::func_0206340c(int value)
{
    BOOL result = FALSE;
    u32 i = value - 4;

    if (i <= 4 && ((1 << i) & 0x13)) {
        result = TRUE;
    }
    return result;
}

void // (nonmatching: the loop starts with its test)
#ifdef NONMATCHING
UnkClass_020621b4::func_02063430()
{
    int i;
    int n = 0;

    for (i = 0; i < 0x16; i++) {
        if (func_ov015_02130ae8(i) != NULL) {
            func_ov015_0213a69c(data_020c4648, n, 0);
            n++;
        }
    }
}
#else
asm UnkClass_020621b4::func_02063430()
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r7, #0
    mov r6, r7
    mov r5, r7
    ldr r4, =data_020c4648
    b @L_02063470
@L_02063448:
    mov r0, r6
    bl func_ov015_02130ae8
    cmp r0, #0
    beq @L_0206346c
    ldr r0, [r4]
    mov r1, r7
    mov r2, r5
    bl func_ov015_0213a69c
    add r7, r7, #1
@L_0206346c:
    add r6, r6, #1
@L_02063470:
    cmp r6, #0x16
    blt @L_02063448
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}
#endif

asm void UnkClass_020621b4::func_02063480()
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r6, r1
    mov r7, r0
    mov r4, r2
    bl func_020787e8
    mov r5, r0
    mov r0, r6
    bl func_02084870
    cmp r0, #0
    beq @L_020634d0
    ldr r1, [r6, #0xec]
    mov r0, #1
    ldrb r2, [r1, #0x84]
    add r3, r1, #0x34
    ldr r1, [r3, r2, lsl #3]
    add r2, r3, r2, lsl #3
    str r1, [r4]
    ldr r1, [r2, #4]
    str r1, [r4, #4]
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_020634d0:
    mov r0, r7
    mov r1, r6
    mov r2, r5
    mov r3, r4
    bl func_ov087_02177a10
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

asm void UnkClass_020621b4::func_020634e8()
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    sub sp, sp, #8
    mov r5, #0
    mov r8, r0
    mov r0, r1
    mov r1, r5
    mov r7, r2
    mov r6, r3
    bl func_ov015_02130b14
    movs r4, r0
    addeq sp, sp, #8
    ldmeqia sp!, {r4, r5, r6, r7, r8, pc}
    mov r12, #1
    str r12, [sp]
    mov r0, r8
    mov r1, r4
    mov r2, r7
    mov r3, r6
    str r12, [sp, #4]
    bl func_02063550
    mov r0, r8
    mov r1, r4
    mov r2, r5
    bl func_01ff9490
    add sp, sp, #8
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

asm void UnkClass_020621b4::func_02063550()
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    movs r6, r1
    mov r5, r2
    mov r4, r3
    ldmeqia sp!, {r4, r5, r6, r7, r8, pc}
    cmp r5, #0
    beq @L_02063674
    ldr r1, [sp, #0x1c]
    cmp r1, #0
    beq @L_020635a8
    ldr r1, [r6, #0xf8]
    tst r1, #0x20
    beq @L_020635a8
    mov r1, #0x38
    bl func_020739cc
    mov r1, r0
    mov r0, #0x64
    mul r0, r5, r0
    ldrb r1, [r1, #6]
    bl func_0202273c
    mov r0, r0, lsl #0x10
    mov r5, r0, lsr #0x10
@L_020635a8:
    ldrb r0, [sp, #0x18]
    cmp r0, #0
    beq @L_02063630
    mov r0, r6
    bl func_020847b0
    cmp r0, #0
    beq @L_02063630
    ldr r8, =data_020c4920
    mvn r0, #0
    str r0, [r8, #0x48]
    ldrsh r2, [r6, #0xf4]
    mov r1, #0x80000000
    mov r0, r8
    str r2, [r8, #0x4c]
    str r1, [r8, #0x18]
    str r1, [r8, #0x1c]
    ldr r2, [r8]
    mov r1, #1
    str r2, [r8, #0xc]
    ldr r2, [r8, #4]
    str r2, [r8, #0x10]
    ldr r2, [r8, #8]
    str r2, [r8, #0x14]
    bl func_ov015_02142de8
    mov r7, #0
    mov r0, r8
    mov r1, r7
    bl func_ov015_02142e24
    str r7, [r8, #0x34]
    str r7, [r8, #0x38]
    str r7, [r8, #0x3c]
    str r7, [r8, #0x30]
    str r7, [r8, #0x40]
    strb r7, [r8, #0x5a]
@L_02063630:
    ldr r1, [r6, #0xec]
    ldrh r0, [r1, #0x1e]
    cmp r5, r0
    strhih r5, [r1, #0x1e]
    ldr r1, [r6, #0xec]
    ldrsh r0, [r1, #0x26]
    cmp r5, r0
    strgth r5, [r1, #0x26]
    cmp r4, #0
    beq @L_02063670
    ldr r1, [r6, #0xe8]
    cmp r1, #0
    ldrneh r0, [r1, #0x16]
    orrne r0, r0, #0x100
    strneh r0, [r1, #0x16]
    b @L_020636a0
@L_02063670:
    b @L_02063688
@L_02063674:
    ldr r0, [r6, #0xec]
    mov r1, #0
    strh r1, [r0, #0x1e]
    ldr r0, [r6, #0xec]
    strh r1, [r0, #0x26]
@L_02063688:
    ldr r2, [r6, #0xe8]
    cmp r2, #0
    ldrneh r1, [r2, #0x16]
    ldrne r0, =0xfeff
    andne r0, r1, r0
    strneh r0, [r2, #0x16]
@L_020636a0:
    ldr r1, [r6, #0xec]
    mov r0, #0
    str r0, [r1, #0x14]
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

asm void UnkClass_020621b4::func_020636b8()
{
    stmdb sp!, {r3, r4, r5, lr}
    movs r4, r1
    mov r5, r0
    beq @L_020636e8
    bl func_02078fa4
    cmp r0, #0
    beq @L_020636e8
    mov r0, r5
    mov r1, r4
    bl func_0207903c
    cmp r0, #0
    bne @L_020636f0
@L_020636e8:
    mov r0, #0
    ldmia sp!, {r3, r4, r5, pc}
@L_020636f0:
    add r0, r5, #0x11000
    ldrb r0, [r0, #0x8de]
    cmp r0, #0
    movne r0, #0
    ldmneia sp!, {r3, r4, r5, pc}
    mov r0, r4
    bl func_02084870
    cmp r0, #0
    moveq r0, #1
    movne r0, #0
    ldmia sp!, {r3, r4, r5, pc}
}

asm void UnkClass_020621b4::func_0206371c()
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x28
    ldr r5, =data_020c4920
    mov r9, r1
    ldrb r1, [r5, #0x56]
    mov r10, r0
    mov r8, r2
    mov r4, r3
    mov r11, #0
    bl func_ov015_02140da4
    cmp r0, #0
    beq @L_02063760
    ldrb r0, [r5, #0x58]
    cmp r0, #0
    addeq sp, sp, #0x28
    moveq r0, r11
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02063760:
    mov r0, r10
    mov r1, r9
    bl func_020787e8
    mov r1, r0
    mov r0, r10
    bl func_0206811c
    add r1, r10, #0x11000
    ldrb r1, [r1, #0x899]
    str r0, [sp, #0xc]
    cmp r1, #0
    bne @L_0206379c
    mov r0, r10
    bl func_01ff9684
    cmp r0, #0
    beq @L_020637c4
@L_0206379c:
    ldr r0, [sp, #0xc]
    cmp r0, #0
    beq @L_020637b8
    mov r0, r10
    mov r1, r9
    mov r2, #0
    bl func_ov087_0217d0ac
@L_020637b8:
    add sp, sp, #0x28
    mov r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_020637c4:
    ldrsh r0, [r9, #0xf4]
    ldr r1, [r8, #0x4c]
    cmp r1, r0
    bne @L_02063818
    ldrb r0, [r8, #0x5c]
    cmp r0, #1
    addeq sp, sp, #0x28
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldrb r1, [r8, #0x56]
    mov r0, r10
    bl func_ov015_02140df0
    cmp r0, #0
    bne @L_02063818
    mov r0, r10
    mov r1, r8
    bl func_ov015_021429b0
    cmp r0, #0
    addne sp, sp, #0x28
    movne r0, #0
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02063818:
    mov r0, r9
    bl func_02084870
    cmp r0, #0
    beq @L_02063850
    ldr r0, [sp, #0xc]
    cmp r0, #0
    beq @L_02063844
    mov r0, r10
    mov r1, r9
    mov r2, #0
    bl func_ov087_0217d0ac
@L_02063844:
    add sp, sp, #0x28
    mov r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02063850:
    ldr r0, =data_020c4920
    ldr r0, [r0, #0x48]
    bl func_ov015_02130ae8
    str r0, [sp, #0x14]
    cmp r0, #0
    beq @L_020638a0
    mov r1, r9
    bl func_ov015_021318a4
    cmp r0, #0
    beq @L_020638a0
    ldr r0, [sp, #0xc]
    cmp r0, #0
    beq @L_02063894
    mov r0, r10
    mov r1, r9
    mov r2, #0
    bl func_ov087_0217d0ac
@L_02063894:
    add sp, sp, #0x28
    mov r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_020638a0:
    mov r0, r10
    mov r1, r9
    bl func_02078fa4
    cmp r0, #0
    beq @L_020638d4
    cmp r4, #0
    beq @L_020638c8
    mov r0, r10
    mov r1, r9
    bl func_ov087_0217dfbc
@L_020638c8:
    add sp, sp, #0x28
    mov r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_020638d4:
    ldr r1, [sp, #0x14]
    mov r0, r10
    bl func_020636b8
    cmp r0, #0
    beq @L_02063910
    ldr r0, [sp, #0xc]
    cmp r0, #0
    beq @L_02063904
    mov r0, r10
    mov r1, r9
    mov r2, #0
    bl func_ov087_0217d0ac
@L_02063904:
    add sp, sp, #0x28
    mov r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02063910:
    add r4, sp, #0x1c
    str r4, [sp]
    mov r4, #1
    ldr r1, =data_020c4920
    add r3, sp, #0x20
    mov r0, r10
    mov r2, r9
    str r4, [sp, #4]
    bl func_ov087_02177634
    cmp r0, #0
    bne @L_02063964
    ldr r0, [sp, #0xc]
    cmp r0, #0
    beq @L_02063958
    mov r0, r10
    mov r1, r9
    mov r2, #0
    bl func_ov087_0217d0ac
@L_02063958:
    add sp, sp, #0x28
    mov r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02063964:
    mov r0, r9
    ldr r6, [sp, #0x1c]
    bl func_02080b90
    str r0, [sp, #0x10]
    mvn r0, #0x80000000
    mov r7, #0
    str r0, [sp, #0x18]
    b @L_02063af0
@L_02063984:
    ldr r1, [sp, #0x10]
    mov r0, r10
    mov r2, r7
    bl func_02079e90
    movs r4, r0
    beq @L_02063aec
    mov r0, r10
    mov r1, r9
    mov r2, r4
    bl func_0207a510
    cmp r0, #0
    bne @L_02063aec
    mov r0, r4
    bl func_02080b38
    cmp r0, #0
    bne @L_02063aec
    mov r0, r10
    mov r1, r4
    bl func_020787e8
    mov r1, r0
    mov r0, r10
    bl func_0206811c
    cmp r0, #0
    beq @L_02063aec
    mov r0, r10
    mov r1, r4
    bl func_02078fa4
    cmp r0, #0
    beq @L_02063a4c
    mov r0, r10
    mov r1, r8
    bl func_ov015_021429b0
    cmp r0, #0
    mov r0, r10
    ldr r1, [r4, #0xe8]
    beq @L_02063a1c
    add r2, r8, #0x18
    b @L_02063a20
@L_02063a1c:
    mov r2, r8
@L_02063a20:
    bl func_01fff15c
    mov r5, r0
    ldr r0, [r4, #0xe8]
    ldrh r0, [r0, #0x16]
    tst r0, #0x20
    movne r0, #1
    moveq r0, #0
    cmp r0, #0
    movne r5, r5, lsl #1
    moveq r5, r5, lsl #2
    b @L_02063a74
@L_02063a4c:
    ldr r0, [r4, #0xec]
    bl func_02084788
    cmp r0, #0
    ldrne r5, [sp, #0x18]
    bne @L_02063a74
    ldr r1, [r4, #0xe8]
    ldr r2, [r4, #0xec]
    mov r0, r10
    bl func_01fff15c
    mov r5, r0
@L_02063a74:
    cmp r5, r6
    bge @L_02063ac8
    ldr r0, [sp, #0x14]
    cmp r0, #0
    beq @L_02063a90
    cmp r6, #0x28000
    ble @L_02063abc
@L_02063a90:
    cmp r11, #0
    beq @L_02063abc
    mov r0, r10
    mov r1, r9
    bl func_02078fa4
    cmp r0, #0
    bne @L_02063abc
    mov r1, r11
    mov r0, r10
    mov r2, #1
    bl func_ov087_0217d0ac
@L_02063abc:
    mov r11, r4
    mov r6, r5
    b @L_02063aec
@L_02063ac8:
    ldr r0, [sp, #0x14]
    cmp r0, #0
    beq @L_02063adc
    cmp r5, #0x28000
    ble @L_02063aec
@L_02063adc:
    mov r1, r4
    mov r0, r10
    mov r2, #0
    bl func_ov087_0217d0ac
@L_02063aec:
    add r7, r7, #1
@L_02063af0:
    cmp r7, #0xb
    blt @L_02063984
    ldr r0, [sp, #0x1c]
    mov r4, #0
    cmp r6, r0
    bne @L_02063be8
    ldr r0, =data_020c4920
    ldr r0, [r0, #0x4c]
    cmp r0, #0
    blt @L_02063b68
    ldrsh r1, [r9, #0xf4]
    bl func_ov015_02131854
    cmp r0, #0
    beq @L_02063b68
    mov r0, r10
    mov r1, r9
    bl func_0206f354
    cmp r0, #0
    bne @L_02063b4c
@L_02063b3c:
    mov r0, r10
    mov r1, r9
    bl func_02065414
    b @L_02063bdc
@L_02063b4c:
    add r0, sp, #0x20
    mov r2, #0x10
    stmia sp, {r0, r4}
    mov r0, r10
    mov r1, r9
    sub r3, r2, #0x11
    b @L_02063bd4
@L_02063b68:
    mov r0, r10
    mov r1, r9
    bl func_0206f354
    cmp r0, #0
    bne @L_02063b80
    b @L_02063b3c
@L_02063b80:
    ldr r0, [r9, #0xec]
    ldrb r0, [r0, #0x89]
    cmp r0, #8
    bge @L_02063ba0
    ldr r0, [r9, #0xec]
    ldrh r0, [r0, #0x1c]
    cmp r0, #0x33
    bne @L_02063bbc
@L_02063ba0:
    add r0, sp, #0x20
    mov r2, #0x33
    stmia sp, {r0, r4}
    mov r0, r10
    mov r1, r9
    sub r3, r2, #0x34
    b @L_02063bd4
@L_02063bbc:
    add r0, sp, #0x20
    mov r2, #0x11
    stmia sp, {r0, r4}
    mov r0, r10
    mov r1, r9
    sub r3, r2, #0x12
@L_02063bd4:
    str r4, [sp, #8]
    bl func_020654cc
@L_02063bdc:
    add sp, sp, #0x28
    mov r0, #1
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02063be8:
    ldr r0, [sp, #0xc]
    cmp r0, #0
    beq @L_02063c04
    mov r0, r10
    mov r1, r9
    mov r2, r4
    bl func_ov087_0217d0ac
@L_02063c04:
    mov r0, #0
    add sp, sp, #0x28
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

asm void UnkClass_020621b4::func_02063c14()
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    sub sp, sp, #0x10
    mov r9, r1
    mov r10, r0
    ldr r7, [r9, #0xec]
    mov r4, #1
    mov r5, #0
    bl func_02080288
    mov r0, r10
    mov r1, r9
    mov r8, r5
    bl func_020787e8
    ldr r1, [r9, #0xe8]
    mov r6, r0
    ldrh r0, [r1, #0x16]
    tst r0, #8
    movne r0, r4
    moveq r0, r8
    cmp r0, #0
    addeq sp, sp, #0x10
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    ldr r1, [r9, #0xe8]
    cmp r1, #0
    ldrneh r0, [r1, #0x16]
    orrne r0, r0, #1
    strneh r0, [r1, #0x16]
    ldr r0, [r9, #0xe8]
    ldrh r0, [r0, #0x16]
    tst r0, #2
    movne r0, #1
    moveq r0, #0
    cmp r0, #0
    beq @L_02063cf8
    mov r0, r9
    bl func_02080b38
    cmp r0, #0
    addne sp, sp, #0x10
    ldmneia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    mov r0, r9
    bl func_020847b0
    cmp r0, #0
    mov r0, r10
    mov r1, r9
    bne @L_02063ccc
    bl func_02063e7c
    b @L_02063cd0
@L_02063ccc:
    bl func_02063ec8
@L_02063cd0:
    ldr r0, [r9, #0xe8]
    mov r1, r9
    ldrb r3, [r0, #0x1a]
    ldrb r2, [r0, #0x1d]
    ldr r0, =data_020c4648
    str r5, [sp]
    ldr r0, [r0]
    bl func_ov015_0213a75c
    add sp, sp, #0x10
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_02063cf8:
    ldrh r0, [r6, #0x12]
    tst r0, #8
    bne @L_02063d48
    ldr r0, [r9, #0xec]
    strb r4, [r0, #0x2f]
    ldr r1, [r9, #0xe8]
    cmp r1, #0
    ldrneh r0, [r1, #0x16]
    orrne r0, r0, #2
    strneh r0, [r1, #0x16]
    ldr r0, [r9, #0xe8]
    mov r1, r9
    ldrb r3, [r0, #0x1a]
    ldrb r2, [r0, #0x1d]
    ldr r0, =data_020c4648
    str r5, [sp]
    ldr r0, [r0]
    bl func_ov015_0213a75c
    add sp, sp, #0x10
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_02063d48:
    ldrb r0, [r6, #0xd]
    cmp r0, #4
    beq @L_02063d60
    cmp r0, #5
    addne sp, sp, #0x10
    ldmneia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_02063d60:
    mov r0, r9
    bl func_020847b0
    cmp r0, #0
    ldrne r0, [r7, #8]
    cmpne r0, #0x80000000
    ldrne r0, [r7, #0xc]
    cmpne r0, #0x80000000
    beq @L_02063dfc
    ldrh r0, [r6, #0x12]
    tst r0, #2
    beq @L_02063d9c
    mov r0, r10
    bl func_0206bfa8
    cmp r0, #0
    movne r8, #0x20
@L_02063d9c:
    mov r0, r10
    bl func_0206bfa8
    stmia sp, {r0, r4}
    str r4, [sp, #8]
    str r8, [sp, #0xc]
    ldr r1, [r7, #8]
    ldr r2, [r7, #0xc]
    mov r0, r10
    mov r3, r5
    bl func_ov015_0213ffc4
    add r0, r7, #8
    bl func_020841d8
    ldrh r0, [r6, #0x12]
    tst r0, #2
    beq @L_02063dfc
    mov r0, r10
    bl func_0206bfa8
    cmp r0, #0
    beq @L_02063dfc
    mov r0, r10
    mov r1, r5
    bl func_0206bfb4
    mov r0, r10
    bl func_0206313c
@L_02063dfc:
    ldr r0, [r9, #0xe8]
    ldrh r0, [r0, #0x16]
    tst r0, #1
    movne r0, #1
    moveq r0, #0
    cmp r0, #0
    addeq sp, sp, #0x10
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    ldr r1, [r9, #0xe8]
    ldrb r0, [r1, #0x1d]
    cmp r0, #0
    addne sp, sp, #0x10
    ldmneia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    cmp r1, #0
    ldrneh r0, [r1, #0x16]
    orrne r0, r0, #2
    strneh r0, [r1, #0x16]
    add sp, sp, #0x10
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
}

u16 UnkClass_020621b4::func_02063e4c(fx32 x, fx32 y)
{
    return func_0200226c(data_020c4920.pos.y - y, data_020c4920.pos.x - x);
}

void UnkClass_020621b4::func_02063e6c(fx32 x, fx32 y)
{
    func_ov015_02130e28(func_02063e4c(x, y));
}
