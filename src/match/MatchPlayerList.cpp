#include "match/MatchPlayerList.hpp"
#include "match/MatchEngine.hpp"
#include "nitro/mi.h"

extern "C" s32 FX_Sqrt(s32 x);
extern "C" MatchPoint *func_02083eac(int side);
extern "C" void *data_020af3f0[];     // (the vtable)
extern "C" u8 data_020c4eec[];
extern "C" u8 data_020c4efc[];
extern "C" void *func_02083e94(int a);
extern "C" int func_02084470(void *obj, int a);

extern "C" char data_020ca6e8[];
extern "C" void _ZN11MatchEngine13func_0206c644Ev(void);
extern "C" void _ZN11MatchEngine13func_0206cec0Ev(void);
extern "C" void _ZN11MatchEngine13func_0206d188Eii(void);
extern "C" void _ZN11MatchEngine13func_0206de4cEv(void);
extern "C" void _ZN10MatchRules13func_0206ef60Ev(void);
extern "C" void _ZN10MatchRules13func_0206ef74Ev(void);
extern "C" void _ZdlPv(void);
extern "C" s32 func_ov015_02131854(s32 arg0, s32 arg1);
extern "C" void func_ov015_021319b0(void);
extern "C" void gGameState(void);

MatchPlayerList *MatchPlayerList::func_02083060()
{
    vtable = data_020af3f0;
    match = NULL;
    return this;
}

MatchPlayerList *MatchPlayerList::func_02083078()
{
    vtable = data_020af3f0;
    match = NULL;
    return this;
}

void MatchPlayerList::func_02083090()
{
}

MatchPlayerList *MatchPlayerList::func_02083094()
{
    operator delete(this);
    return this;
}

void MatchPlayerList::func_020830a8()
{
}

asm void MatchPlayerList::func_020830ac()
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    ldr r3, =gGameState
    mov r5, r0
    ldrb r0, [r3, #0x7e]
    mov r6, #0
    cmp r0, #2
    movls r4, #1
    bls @L_0208312c
    cmp r0, #3
    blo @L_020830e0
    cmp r0, #5
    movls r4, #2
    bls @L_0208312c
@L_020830e0:
    ldrb r0, [r3, #0x7e]
    cmp r0, #6
    blo @L_020830f8
    cmp r0, #8
    movls r4, #3
    bls @L_0208312c
@L_020830f8:
    ldrb r0, [r3, #0x7e]
    cmp r0, #9
    blo @L_02083110
    cmp r0, #0xb
    movls r4, #4
    bls @L_0208312c
@L_02083110:
    ldrb r0, [r3, #0x7e]
    cmp r0, #0xc
    blo @L_02083128
    cmp r0, #0xe
    movls r4, #5
    bls @L_0208312c
@L_02083128:
    mvn r4, #0
@L_0208312c:
    ldr r0, =data_020ca6e8
    sub r4, r4, #1
    ldr r0, [r0, r4, lsl #2]
    ldr r3, [r3, #4]
    mov r4, #1
    cmp r3, r0
    movlo r4, #0
    cmp r1, #0
    cmpeq r2, #0
    bne @L_0208318c
    ldr r0, =data_020c4920
    ldrb r0, [r0, #0x59]
    tst r0, #2
    movne r0, #1
    moveq r0, #0
    cmp r0, #0
    bne @L_0208318c
    ldr r0, =data_020c4920
    ldrb r0, [r0, #0x5a]
    cmp r0, #0
    movne r0, #1
    moveq r0, #0
    cmp r0, #0
    beq @L_02083190
@L_0208318c:
    mov r4, #0
@L_02083190:
    ldr r0, [r5, #4]
    bl _ZN11MatchEngine13func_0206cec0Ev
    mov r7, r0
    ldr r0, [r5, #4]
    mov r1, r6
    mov r2, r7
    bl _ZN11MatchEngine13func_0206d188Eii
    cmp r0, #0
    bne @L_020831cc
    ldr r0, [r5, #4]
    mov r2, r7
    mov r1, #1
    bl _ZN11MatchEngine13func_0206d188Eii
    cmp r0, #0
    beq @L_020831d4
@L_020831cc:
    mov r0, #1
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_020831d4:
    ldr r0, [r5, #4]
    bl _ZN11MatchEngine13func_0206c644Ev
    cmp r0, #0
    movne r0, r6
    moveq r0, r4
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

asm int MatchPlayerList::func_020831f8(int a)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    mov r7, #0
    mov r10, r0
    mov r8, r7
    adds r0, r10, #8
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r1, r7
    mov r2, #0x58
    bl MI_CpuFill8
    mov r5, #1
    mov r6, r7
    mov r4, r7
    mov r11, r5
@L_0208322c:
    mov r0, r6
    bl func_ov015_02130ae8
    movs r9, r0
    beq @L_02083298
    ldrh r0, [r9, #0xf0]
    tst r0, #1
    movne r1, r5
    moveq r1, r4
    cmp r1, #0
    beq @L_02083298
    tst r0, #8
    movne r0, r11
    moveq r0, #0
    cmp r0, #0
    beq @L_02083298
    mov r0, r9
    bl func_ov015_021319b0
    cmp r0, #0
    moveq r1, r7
    addne r1, r8, #0xb
    add r0, r10, r1, lsl #2
    str r9, [r0, #8]
    ldr r0, [r9, #0xec]
    addeq r7, r7, #1
    addne r8, r8, #1
    cmp r0, #0
    strneb r1, [r0, #0x2c]
@L_02083298:
    add r6, r6, #1
    cmp r6, #0x20
    blt @L_0208322c
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

MatchPlayer *MatchPlayerList::func_020832a8(int index)
{
    return players[index];
}

MatchPlayer *MatchPlayerList::func_020832b4(int team, int i)
{
    return players[team * 11 + i];
}

void MatchPlayerList::func_020832c8()
{
    MI_CpuFill8(players, 0, sizeof(players));
}

BOOL MatchPlayerList::func_020832e0()
{
    return match->func_0206de4c()->func_0206ef60();
}

BOOL MatchPlayerList::func_020832f4()
{
    return match->func_0206de4c()->func_0206ef74();
}

int MatchPlayerList::func_02083308()
{
    return ((int (*)(MatchPlayerList *))vtable[4])(this);
}

BOOL MatchPlayerList::func_0208331c(MatchPlayer *player)
{
    if (data_020c4920.unk_48 >= 0) {
        return func_ov015_02131854(data_020c4920.unk_48, player->unk_f4) ? TRUE : FALSE;
    }
    if (data_020c4920.unk_4c >= 0) {
        return func_ov015_02131854(data_020c4920.unk_4c, player->unk_f4) ? TRUE : FALSE;
    }
    return FALSE;
}

int MatchPlayerList::func_02083378(int a, int b)
{
    return func_02084470(func_02083e94(a), b);
}

asm void MatchPlayerList::func_02083394()
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r7, r1
    mov r5, r2
    mov r0, r7
    mov r4, r3
    bl func_02083e94
    mov r1, r5
    mov r6, r0
    bl func_02084470
    cmp r0, #0
    beq @L_02083440
    cmp r7, #0
    ldreq r1, [r6, #4]
    ldr r3, [r5]
    subeq r2, r1, #0x6000
    ldrne r1, [r6, #0xc]
    ldr r12, [r6]
    addne r2, r1, #0x6000
    subs lr, r12, r3
    ldr r0, [r6, #8]
    rsbmi lr, lr, #0
    subs r6, r0, r3
    ldr r0, [r5, #4]
    rsbmi r6, r6, #0
    subs r0, r1, r0
    rsbmi r0, r0, #0
    cmp lr, r6
    cmplt lr, r0
    ldrlt r0, [r5, #4]
    sublt r1, r12, #0x6000
    strlt r1, [r4]
    strlt r0, [r4, #4]
    blt @L_02083438
    cmp r6, lr
    cmplt r6, r0
    ldrlt r0, [r5, #4]
    addlt r1, r12, #0x6000
    strlt r1, [r4]
    strlt r0, [r4, #4]
    strge r3, [r4]
    strge r2, [r4, #4]
@L_02083438:
    mov r0, #1
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_02083440:
    mov r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

// (the distance between two points; the differences lose 4 bits so that their squares fit)
static inline fx32 MatchDistance(const MatchPoint *a, const MatchPoint *b)
{
    fx32 dx = (a->x - b->x) >> 4;
    fx32 dy = (a->y - b->y) >> 4;

    return FX_Sqrt(FX_Mul(dx, dx) + FX_Mul(dy, dy)) << 4;
}

// (nonmatching: the point's two words come with ldm and the goal's y first, and the flag gets r4 before the call (the ROM reuses the point's register for dy and the flag))
#ifdef NONMATCHING
BOOL MatchPlayerList::func_02083448(int side, MatchPoint *point, int distance)
{
    BOOL near = FALSE;

    if (distance * 0x36E66 / 100 > MatchDistance(point, func_02083eac(side))) {
        near = TRUE;
    }
    return near;
}
#else
asm BOOL MatchPlayerList::func_02083448(int side, MatchPoint *point, int distance)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r4, r2
    mov r0, r1
    mov r5, r3
    bl func_02083eac
    ldr r2, [r0]
    ldr r3, [r4]
    ldr r1, [r4, #4]
    ldr r0, [r0, #4]
    sub r2, r3, r2
    sub r0, r1, r0
    mov r1, r2, asr #4
    mov r4, r0, asr #4
    smull r0, r2, r1, r1
    adds r3, r0, #0x800
    smull r1, r0, r4, r4
    adc r2, r2, #0
    adds r1, r1, #0x800
    mov r3, r3, lsr #0xc
    adc r0, r0, #0
    mov r1, r1, lsr #0xc
    orr r3, r3, r2, lsl #20
    orr r1, r1, r0, lsl #20
    add r0, r3, r1
    mov r4, #0
    bl FX_Sqrt
    ldr r1, =0x36e66
    ldr r2, =0x51eb851f
    mul r3, r5, r1
    smull r1, r5, r2, r3
    mov r1, r3, lsr #0x1f
    add r5, r1, r5, asr #5
    cmp r5, r0, lsl #4
    movgt r4, #1
    mov r0, r4
    ldmia sp!, {r3, r4, r5, pc}
}
#endif

int MatchPlayerList::func_020834e0(BOOL side, int b)
{
    void *rect = data_020c4efc;

    if (side) {
        rect = data_020c4eec;
    }
    return func_02084470(rect, b);
}

BOOL MatchPlayerList::func_02083504()
{
    return TRUE;
}

void MatchPlayerList::func_0208350c(MatchEngine *match)
{
    this->match = match;
}

BOOL MatchPlayerList::func_02083514()
{
    return TRUE;
}
