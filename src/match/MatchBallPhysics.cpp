#include "match/MatchBallPhysics.hpp"
#include "system/GameHeap.hpp"

extern "C" void func_02083afc(void);     // (for the asm functions)
extern "C" s32 func_0208413c(s32 arg0, s32 arg1);
extern "C" BOOL func_02084350(fx32 x, fx32 y);
extern "C" BOOL func_0208454c(fx32 x, fx32 y, fx32 z);
extern "C" char data_020aeadc[];
extern "C" char data_020aeb28[];
extern "C" char data_020aeb50[];
extern "C" char g3DFieldSprite[];
extern GameHeap gAllocator;
extern "C" MatchArea data_020c4de0;     // (the field)
extern "C" fx32 data_020c4ebc[4];     // (the field's rectangle)
extern "C" char data_020f98a0[];
extern "C" void _ZN8GameHeap4FreeEPv(void);
extern "C" void _ZN8GameHeap5AllocEiii(void);
extern "C" void _ZdlPv(void);
extern "C" s32 FX_Sqrt(s32 x);     // (the square root of x)
extern "C" u16 FX_Atan2Idx(fx32 y, fx32 x);
extern "C" BOOL func_02084808(fx32 x, fx32 y, fx32 *rect);    // (is (x, y) in the rectangle?)
extern "C" void func_ov015_02131704(int a);
extern "C" void func_ov015_0213a818(void *sprite);
extern "C" void func_ov015_02142de8(MatchBall *ball, int a);
extern "C" void func_ov015_02142e24(MatchBall *ball, int a);
extern "C" void func_ov015_02142ec8(MatchBall *ball, int a);
extern "C" BOOL func_ov087_02182234(MatchArea *area);
extern "C" s32 func_ov087_02182248(MatchArea *area, s32 side);

MatchBallPhysics *MatchBallPhysics::func_02061498()
{
    vtable = data_020aeadc;
    area = NULL;
    return this;
}

void MatchBallPhysics::func_020614b0()
{
}

MatchBallPhysics *MatchBallPhysics::func_020614b4()
{
    operator delete(this);
    return this;
}

void MatchBallPhysics::func_020614c8(MatchArea *area, fx32 value)
{
    this->area = area;
    unk_8 = value;
}

// bounces the ball's next position (px, py) off the field's sides that func_ov087_02182248 says it
// has, turning outDir with func_0208413c: TRUE when it bounced
// (nonmatching: 7 words: the side argument 0 of the first func_ov087_02182248 is set early; the (s32) casts keep MWCC from folding minX + (minX - x) into 2 * minX - x)
#ifdef NONMATCHING
BOOL MatchBallPhysics::func_020614d0(MatchBall *ball, fx32 *px, fx32 *py, u16 *outDir)
{
    BOOL bounced = FALSE;
    fx32 bx;
    fx32 by;
    fx32 minX;
    fx32 maxX;
    fx32 minY;
    fx32 maxY;
    fx32 x = *px;
    fx32 y = *py;
    s32 dir = ball->unk_52;

    if (!func_ov087_02182234(&data_020c4de0)) {
        return FALSE;
    }
    if (outDir != NULL) {
        *outDir = ball->unk_52;
    }
    bx = ball->pos.x;
    by = ball->pos.y;
    minX = area->minX;
    maxX = area->maxX;
    minY = area->minY;
    maxY = area->maxY;
    if (func_ov087_02182248(&data_020c4de0, 0) && bx > minX && x <= minX) {
        x = minX + (s32)(minX - x) + 1;
        bounced = TRUE;
        dir = func_0208413c(dir, 0x4000);
    } else if (func_ov087_02182248(&data_020c4de0, 2) && bx < maxX && x >= maxX) {
        x = maxX - (s32)(x - maxX) - 1;
        bounced = TRUE;
        dir = func_0208413c(dir, 0x4000);
    }
    if (func_ov087_02182248(&data_020c4de0, 1) && by > minY && y <= minY) {
        y = minY + (s32)(minY - y) + 1;
        bounced = TRUE;
        dir = func_0208413c(dir, 0);
    } else if (func_ov087_02182248(&data_020c4de0, 3) && by < maxY && y >= maxY) {
        y = maxY - (s32)(y - maxY) - 1;
        bounced = TRUE;
        dir = func_0208413c(dir, 0);
    }
    if (bounced) {
        if (outDir != NULL) {
            *outDir = dir;
        }
        *px = x;
        *py = y;
    }
    return bounced;
}
#else
asm BOOL MatchBallPhysics::func_020614d0(MatchBall *ball, fx32 *px, fx32 *py, u16 *outDir)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x14
    mov r4, r1
    mov r1, r2
    ldr r8, [r1]
    mov r1, r3
    ldr r9, [r1]
    ldrh r1, [r4, #0x52]
    mov r5, r0
    ldr r0, =data_020c4de0
    ldr r10, [sp, #0x38]
    str r2, [sp]
    str r3, [sp, #4]
    str r1, [sp, #8]
    mov r11, #0
    bl func_ov087_02182234
    cmp r0, #0
    addeq sp, sp, #0x14
    moveq r0, r11
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    cmp r10, #0
    ldrneh r0, [r4, #0x52]
    ldr r2, [r4]
    ldr r3, [r5, #4]
    strneh r0, [r10]
    str r2, [sp, #0x10]
    ldr r2, [r4, #4]
    ldr r0, =data_020c4de0
    mov r1, #0
    str r2, [sp, #0xc]
    ldr r4, [r3, #0xdc]
    ldr r5, [r3, #0xe4]
    ldr r6, [r3, #0xe0]
    ldr r7, [r3, #0xe8]
    bl func_ov087_02182248
    cmp r0, #0
    ldrne r0, [sp, #0x10]
    cmpne r0, r4
    ble @L_0206158c
    cmp r8, r4
    bgt @L_0206158c
    sub r0, r4, r8
    add r2, r4, r0
    ldr r0, [sp, #8]
    mov r1, #0x4000
    add r8, r2, #1
    b @L_020615c4
@L_0206158c:
    ldr r0, =data_020c4de0
    mov r1, #2
    bl func_ov087_02182248
    cmp r0, #0
    ldrne r0, [sp, #0x10]
    cmpne r0, r5
    bge @L_020615d0
    cmp r8, r5
    blt @L_020615d0
    sub r0, r8, r5
    sub r2, r5, r0
    ldr r0, [sp, #8]
    mov r1, #0x4000
    sub r8, r2, #1
@L_020615c4:
    mov r11, #1
    bl func_0208413c
    str r0, [sp, #8]
@L_020615d0:
    mov r4, #1
    ldr r0, =data_020c4de0
    mov r1, r4
    bl func_ov087_02182248
    cmp r0, #0
    ldrne r0, [sp, #0xc]
    cmpne r0, r6
    ble @L_02061614
    cmp r9, r6
    bgt @L_02061614
    sub r0, r6, r9
    add r2, r6, r0
    ldr r0, [sp, #8]
    mov r1, #0
    mov r11, r4
    add r9, r2, #1
    b @L_02061650
@L_02061614:
    ldr r0, =data_020c4de0
    mov r1, #3
    bl func_ov087_02182248
    cmp r0, #0
    ldrne r0, [sp, #0xc]
    cmpne r0, r7
    bge @L_02061658
    cmp r9, r7
    blt @L_02061658
    sub r0, r9, r7
    sub r2, r7, r0
    ldr r0, [sp, #8]
    mov r1, #0
    sub r9, r2, #1
    mov r11, #1
@L_02061650:
    bl func_0208413c
    str r0, [sp, #8]
@L_02061658:
    cmp r11, #0
    beq @L_0206167c
    cmp r10, #0
    ldrne r0, [sp, #8]
    strneh r0, [r10]
    ldr r0, [sp]
    str r8, [r0]
    ldr r0, [sp, #4]
    str r9, [r0]
@L_0206167c:
    mov r0, r11
    add sp, sp, #0x14
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}
#endif

asm void MatchBallPhysics::func_0206168c()
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x2c
    ldr r4, [sp, #0x50]
    str r2, [sp]
    movs r2, r4
    ldr r2, [sp]
    mov r10, r3
    ldr r8, [r2]
    ldr r2, [r10]
    ldr r9, [sp, #0x58]
    str r2, [sp, #8]
    ldrh r2, [r1, #0x52]
    str r4, [sp, #0x50]
    mov r11, #0
    str r2, [sp, #4]
    ldrne r3, [sp, #4]
    movne r2, r4
    strneh r3, [r2]
    ldr r2, [r1]
    ldr r1, [r1, #4]
    ldr r3, [sp, #0x54]
    str r1, [sp, #0x20]
    ldr r1, [sp, #8]
    cmp r3, #1
    str r1, [sp, #0x28]
    ldr r1, [r0, #4]
    moveq r0, #0x4800
    addeq r3, r1, #0xec
    moveq r1, #0x800
    addne r3, r1, #0xfc
    str r2, [sp, #0x1c]
    str r8, [sp, #0x24]
    movne r0, #0x800
    movne r1, #0x4800
    cmp r9, #0
    ldr r5, [r3, #8]
    ldmia r3, {r4, r6}
    ldr r7, [r3, #0xc]
    beq @L_02061768
    cmp r2, r4
    blt @L_02061768
    cmp r8, r4
    bgt @L_02061768
    sub r3, r6, r0
    ldr r0, [sp, #4]
    add r2, r7, r1
    mov r1, #0x4000
    str r3, [sp, #0x10]
    str r2, [sp, #0x18]
    str r4, [sp, #0xc]
    str r4, [sp, #0x14]
    bl func_0208413c
    mov r1, r4, lsl #1
@L_02061760:
    add r1, r1, #1
    b @L_020617e0
@L_02061768:
    cmp r9, #0
    bne @L_020617a4
    cmp r2, r5
    blt @L_020617a4
    cmp r8, r5
    bgt @L_020617a4
    ldr r0, [sp, #4]
    mov r1, #0x4000
    str r5, [sp, #0xc]
    str r6, [sp, #0x10]
    str r5, [sp, #0x14]
    str r7, [sp, #0x18]
    bl func_0208413c
    mov r1, r5, lsl #1
    b @L_02061760
@L_020617a4:
    cmp r9, #0
    bne @L_020617f0
    cmp r2, r4
    bgt @L_020617f0
    cmp r8, r4
    blt @L_020617f0
    ldr r0, [sp, #4]
    mov r1, #0x4000
    str r4, [sp, #0xc]
    str r6, [sp, #0x10]
    str r4, [sp, #0x14]
    str r7, [sp, #0x18]
    bl func_0208413c
    mov r1, r4, lsl #1
@L_020617dc:
    sub r1, r1, #1
@L_020617e0:
    str r0, [sp, #4]
    sub r8, r1, r8
    mov r0, #1
    b @L_02061838
@L_020617f0:
    cmp r9, #0
    beq @L_02061834
    cmp r2, r5
    bgt @L_02061834
    cmp r8, r5
    blt @L_02061834
    sub r3, r6, r0
    ldr r0, [sp, #4]
    add r2, r7, r1
    mov r1, #0x4000
    str r3, [sp, #0x10]
    str r2, [sp, #0x18]
    str r5, [sp, #0xc]
    str r5, [sp, #0x14]
    bl func_0208413c
    mov r1, r5, lsl #1
    b @L_020617dc
@L_02061834:
    mov r0, #0
@L_02061838:
    cmp r0, #0
    beq @L_0206187c
    add r0, sp, #0xc
    add r1, sp, #0x1c
    mov r2, #0
    bl func_02083afc
    cmp r0, #0
    beq @L_0206187c
    ldr r0, [sp, #0x50]
    orr r11, r11, #1
    cmp r0, #0
    ldrne r1, [sp, #4]
    strneh r1, [r0]
    ldr r0, [sp]
    str r8, [r0]
    ldr r0, [sp, #8]
    str r0, [r10]
@L_0206187c:
    cmp r9, #0
    beq @L_020618c8
    ldr r0, [sp, #0x54]
    ldr r1, [r10]
    cmp r0, #1
    bne @L_020618b0
    add r0, r6, #0x4000
    cmp r1, r0
    addlt r0, r6, #1
    addlt r0, r0, #0x4000
    strlt r0, [r10]
    orrlt r11, r11, #2
    b @L_020618c8
@L_020618b0:
    sub r0, r7, #0x4000
    cmp r1, r0
    mvngt r0, #0x4000
    addgt r0, r7, r0
    strgt r0, [r10]
    orrgt r11, r11, #2
@L_020618c8:
    mov r0, r11
    add sp, sp, #0x2c
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

// whether the ball has left the field
BOOL MatchBallPhysics::func_020618d4(MatchBall *ball, BOOL inside, BOOL check)
{
    fx32 prevX = ball->prevPos.x;
    fx32 prevY = ball->prevPos.y;
    fx32 x = ball->pos.x;
    fx32 y = ball->pos.y;
    fx32 *rect;

    if (MatchBall_HasFlag(ball, 4)) {
        return FALSE;
    }
    if (!MatchBall_HasFlag(ball, 1) && !func_02084350(x, y) && func_02084350(prevX, prevY)) {
        return TRUE;
    }
    if (!func_02084350(x, y) && !inside) {
        rect = data_020c4ebc;
        if ((prevX < rect[0] && prevX > x) || (prevX > rect[2] && prevX < x)
            || (prevY < rect[1] && prevY > y) || (prevY > rect[3] && prevY < y)) {
            return TRUE;
        }
        if (MatchBall_HasFlag(ball, 1) || MatchBall_IsHeld(ball)) {
            return TRUE;
        }
    } else if (check && func_0208454c(x, y, ball->pos.z)) {
        return TRUE;
    }
    return FALSE;
}

// keeps a position at most 32 units out of the area horizontally, 58 vertically
void MatchBallPhysics::func_02061a2c(VecFx32 *pos)
{
    MatchArea *area = this->area;
    fx32 limit;

    if (pos->x < (limit = area->minX - 32 * FX32_ONE)) {
        pos->x = limit;
    } else if (pos->x > (limit = area->maxX + 32 * FX32_ONE)) {
        pos->x = limit;
    }
    if (pos->y < (limit = area->minY - 58 * FX32_ONE)) {
        pos->y = limit;
    } else if (pos->y > (limit = area->maxY + 58 * FX32_ONE)) {
        pos->y = limit;
    }
}

fx32 MatchBallPhysics::func_02061a84(MatchBall *ball)
{
    return FX_Mul(unk_8, ball->unk_38);
}

void MatchBallPhysics::func_02061aa4(MatchBall *ball)
{
    ball->unk_44 += unk_8;
}

// applies the vertical speed to the height; inside either rectangle of the area, the
// height can't cross the line (data_020f98a0 + 0x7EC)
// (nonmatching: register allocation differs)
#ifdef NONMATCHING
void MatchBallPhysics::func_02061ab8(MatchBall *ball, fx32 x, fx32 y)
{
    fx32 speed = ball->unk_44;
    fx32 line = *(fx32 *)(data_020f98a0 + 0x7EC);
    s32 prev;

    prev = ball->height;
    ball->height = ball->unk_40 + (FX_Mul(ball->unk_3c, speed) - FX_Mul(FX_Mul(speed, speed), 0x4E66));
    if (!func_02084808(x, y, area->unk_ec) && !func_02084808(x, y, area->unk_fc)) {
        return;
    }
    if (prev <= line && ball->height > line) {
        ball->height = line - 1;
    }
    if (prev >= line && ball->height < line) {
        ball->height = line + 1;
    }
}
#else
asm void MatchBallPhysics::func_02061ab8(MatchBall *ball, fx32 x, fx32 y)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    mov r7, r1
    ldr r6, [r7, #0x44]
    ldr r4, [r7, #0x3c]
    smull r5, r1, r6, r6
    smull r8, r6, r4, r6
    adds r4, r8, #0x800
    adc r12, r6, #0
    adds r5, r5, #0x800
    adc r1, r1, #0
    mov r6, r5, lsr #0xc
    orr r6, r6, r1, lsl #20
    ldr r5, =0x4e66
    mov r8, r0
    umull r1, r0, r6, r5
    mov r6, r6, asr #0x1f
    adds r1, r1, #0x800
    mla r0, r6, r5, r0
    mov lr, r4, lsr #0xc
    ldr r4, =data_020f98a0
    mov r6, r2
    mov r5, r3
    ldr r4, [r4, #0x7ec]
    orr lr, lr, r12, lsl #20
    adc r0, r0, #0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #20
    sub r0, lr, r1
    ldr r1, [r7, #0x40]
    ldr r9, [r7, #0x30]
    add r0, r1, r0
    str r0, [r7, #0x30]
    ldr r1, [r8, #4]
    mov r0, r6
    add r2, r1, #0xec
    mov r1, r5
    bl func_02084808
    cmp r0, #0
    bne @L_02061b70
    ldr r2, [r8, #4]
    mov r0, r6
    mov r1, r5
    add r2, r2, #0xfc
    bl func_02084808
    cmp r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
@L_02061b70:
    cmp r9, r4
    bgt @L_02061b88
    ldr r0, [r7, #0x30]
    cmp r0, r4
    subgt r0, r4, #1
    strgt r0, [r7, #0x30]
@L_02061b88:
    cmp r9, r4
    ldmltia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    ldr r0, [r7, #0x30]
    cmp r0, r4
    addlt r0, r4, #1
    strlt r0, [r7, #0x30]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}
#endif

void MatchBallPhysics::func_02061bac(MatchBall *ball)
{
    ball->unk_54 = ball->unk_54 + (ball->unk_38 >> 5);
}

// (the ball lands at (x, y): it bounces, or stops when it is slow)
// (nonmatching: the ROM loads unk_58 again for the sound test (it matches with opt_common_subs off))
#ifdef NONMATCHING
void MatchBallPhysics::func_02061bc0(MatchBall *ball, fx32 x, fx32 y, int kind, u8 sound)
{
    if (ball->height > 0) {
        return;
    }
    if (ball->unk_58 == 0 || ball->unk_3c >= 0x5000) {
        if (sound && ball->unk_58 != 2 && kind != 5) {
            func_ov015_02131704(1);
        }
    }
    if (sound && ball->unk_58 != 2) {
        func_ov015_0213a818(*(void **)g3DFieldSprite);
    }
    ball->unk_20.x = x;
    ball->unk_20.y = y;
    if (ball->unk_58 != 2) {
        fx32 v;
        ball->unk_38 = FX_Mul(ball->unk_38, 0xCCD);
        if (ball->unk_40 > 0) {
            v = FX_Mul(ball->unk_44, 0x9CCD) - ball->unk_3c;
        } else {
            v = ball->unk_3c;
        }
        ball->unk_3c = FX_Mul(v, 0xB33);
        ball->unk_50 = FX_Atan2Idx(ball->unk_3c, ball->unk_38);
    } else if (ball->unk_38 > 0) {
        ball->unk_38 -= 0x800;
        if (ball->unk_38 < 0) {
            ball->unk_38 = 0;
        }
    }
    if (ball->unk_58 != 0 && ball->unk_3c < 0xCCD) {
        ball->unk_3c = 0;
        func_ov015_02142ec8(ball, 2);
        if (ball->unk_38 < 0xCCD) {
            ball->unk_18.x = 0x80000000;
            ball->unk_18.y = 0x80000000;
            ball->prevPos = ball->pos;
            func_ov015_02142de8(ball, 1);
            func_ov015_02142e24(ball, 0);
            ball->unk_34 = 0;
            ball->unk_38 = 0;
            ball->unk_3c = 0;
            ball->height = 0;
            ball->unk_40 = 0;
            ball->unk_5a = 0;
            ball->unk_56 = 0;
        }
    } else {
        func_ov015_02142ec8(ball, 1);
    }
    ball->unk_44 = 0;
    ball->unk_40 = 0;
    ball->height = 0;
}
#else
asm void MatchBallPhysics::func_02061bc0(MatchBall *ball, fx32 x, fx32 y, int kind, u8 sound)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r7, r1
    ldr r0, [r7, #0x30]
    mov r6, r2
    mov r5, r3
    mov r4, #0
    cmp r0, #0
    ldmgtia sp!, {r3, r4, r5, r6, r7, pc}
    ldrb r0, [r7, #0x58]
    cmp r0, #0
    beq @L_02061bf8
    ldr r0, [r7, #0x3c]
    cmp r0, #0x5000
    blt @L_02061c1c
@L_02061bf8:
    ldrb r0, [sp, #0x1c]
    cmp r0, #0
    ldrneb r0, [r7, #0x58]
    cmpne r0, #2
    ldrne r0, [sp, #0x18]
    cmpne r0, #5
    beq @L_02061c1c
    mov r0, #1
    bl func_ov015_02131704
@L_02061c1c:
    ldrb r0, [sp, #0x1c]
    cmp r0, #0
    ldrneb r0, [r7, #0x58]
    cmpne r0, #2
    beq @L_02061c3c
    ldr r0, =g3DFieldSprite
    ldr r0, [r0]
    bl func_ov015_0213a818
@L_02061c3c:
    ldrb r0, [r7, #0x58]
    str r6, [r7, #0x20]
    str r5, [r7, #0x24]
    cmp r0, #2
    beq @L_02061cf8
    ldr r1, [r7, #0x38]
    ldr r0, =0xccd
    umull r3, r2, r1, r0
    mla r2, r1, r4, r2
    mov r1, r1, asr #0x1f
    mla r2, r1, r0, r2
    adds r3, r3, #0x800
    ldr r1, [r7, #0x40]
    adc r2, r2, r4
    mov r3, r3, lsr #0xc
    orr r3, r3, r2, lsl #20
    cmp r1, #0
    mov r1, #0x800
    str r3, [r7, #0x38]
    ldrle r1, [r7, #0x3c]
    ble @L_02061cc0
    ldr r2, [r7, #0x44]
    add r0, r0, #0x9000
    umull r5, r3, r2, r0
    mla r3, r2, r4, r3
    mov r2, r2, asr #0x1f
    mla r3, r2, r0, r3
    adds r5, r5, r1
    adc r1, r3, r4
    mov r2, r5, lsr #0xc
    ldr r0, [r7, #0x3c]
    orr r2, r2, r1, lsl #20
    sub r1, r2, r0
@L_02061cc0:
    ldr r0, =0xb33
    umull r3, r2, r1, r0
    mla r2, r1, r4, r2
    mov r1, r1, asr #0x1f
    mla r2, r1, r0, r2
    adds r3, r3, #0x800
    adc r1, r2, r4
    mov r0, r3, lsr #0xc
    orr r0, r0, r1, lsl #20
    ldr r1, [r7, #0x38]
    str r0, [r7, #0x3c]
    bl FX_Atan2Idx
    strh r0, [r7, #0x50]
    b @L_02061d10
@L_02061cf8:
    ldr r0, [r7, #0x38]
    cmp r0, #0
    ble @L_02061d10
    subs r0, r0, #0x800
    str r0, [r7, #0x38]
    strmi r4, [r7, #0x38]
@L_02061d10:
    ldrb r0, [r7, #0x58]
    cmp r0, #0
    ldrne r0, [r7, #0x3c]
    ldrne r5, =0xccd
    cmpne r0, r5
    mov r0, r7
    bge @L_02061da0
    mov r1, #2
    str r4, [r7, #0x3c]
    bl func_ov015_02142ec8
    ldr r0, [r7, #0x38]
    cmp r0, r5
    bge @L_02061da8
    ldr r5, [r7]
    mov r6, #0x80000000
    ldr r3, [r7, #4]
    ldr r2, [r7, #8]
    mov r0, r7
    mov r1, #1
    str r6, [r7, #0x18]
    str r6, [r7, #0x1c]
    str r5, [r7, #0xc]
    str r3, [r7, #0x10]
    str r2, [r7, #0x14]
    bl func_ov015_02142de8
    mov r0, r7
    mov r1, r4
    bl func_ov015_02142e24
    str r4, [r7, #0x34]
    str r4, [r7, #0x38]
    str r4, [r7, #0x3c]
    str r4, [r7, #0x30]
    str r4, [r7, #0x40]
    strb r4, [r7, #0x5a]
    strb r4, [r7, #0x56]
    b @L_02061da8
@L_02061da0:
    mov r1, #1
    bl func_ov015_02142ec8
@L_02061da8:
    str r4, [r7, #0x44]
    str r4, [r7, #0x40]
    str r4, [r7, #0x30]
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}
#endif

// moves the ball, keeping its previous position
void MatchBallPhysics::func_02061dc4(MatchBall *ball, fx32 x, fx32 y, fx32 z)
{
    ball->prevPos = ball->pos;
    ball->unk_5b = ball->unk_52 >> 8;
    ball->pos.x = x;
    ball->pos.y = y;
    ball->pos.z = z;
}

DistanceTable *DistanceTable::func_02061df8()
{
    vtable = data_020aeb28;
    table = NULL;
    width = 0;
    height = 0;
    capacity = 0;
    stepX = 0;
    stepY = 0;
    return this;
}

void DistanceTable::Release()
{
    if (table != NULL) {
        gAllocator.Free(table);
        table = NULL;
    }
    width = 0;
    height = 0;
    capacity = 0;
    stepX = 0;
    stepY = 0;
}

BOOL DistanceTable::Create(int width, int height)
{
    int size = width * height * sizeof(s32);

    if (capacity < size) {
        if (table != NULL) {
            gAllocator.Free(table);
        }
        table = (s32 *)gAllocator.Alloc(size, 0, TRUE);
        if (table == NULL) {
            return FALSE;
        }
        capacity = size;
    }
    this->width = width;
    this->height = height;
    return TRUE;
}

void DistanceTable::Fill(fx32 stepX, fx32 stepY)
{
    int i;
    fx32 x;
    fx32 y = 0;
    int j;
    s32 *entry = table;

    for (j = 0; j < height; j++) {
        fx32 y2;

        x = 0;
        i = 0;
        if (width > 0) {
            y2 = FX_Mul(y, y);
            for (; i < width; i++) {
                *entry++ = FX_Sqrt((FX_Mul(x, x) >> 4) + (y2 >> 4)) << 2;
                x += stepX;
            }
        }
        y += stepY;
    }
    this->stepX = stepX;
    this->stepY = stepY;
}

DistanceTable *DistanceTable::func_02061f9c()
{
    vtable = data_020aeb28;
    Release();
    operator delete(this);
    return this;
}

DistanceTable *DistanceTable::func_02061fc4()
{
    vtable = data_020aeb28;
    Release();
    return this;
}

DistanceTable32 *DistanceTable32::func_02061fe4()
{
    func_02061df8();
    vtable = data_020aeb50;
    return this;
}

DistanceTable32 *DistanceTable32::func_02062004()
{
    vtable = data_020aeb28;
    Release();
    return this;
}

DistanceTable32 *DistanceTable32::func_02062024()
{
    vtable = data_020aeb28;
    Release();
    operator delete(this);
    return this;
}

BOOL DistanceTable32::Init()
{
    return Create(32, 32);
}

void DistanceTable32::CalcDistance()
{
    Fill(FX32_ONE, FX32_ONE);
}

s32 DistanceTable32::GetDistance(int x, int y)
{
    return table[x + y * 32];
}

// the length of (x, y), both positive: looked up with as many units dropped as needed
// for the table, then corrected with the dropped bits
fx32 DistanceTable32::ApproxDistance(fx32 x, fx32 y)
{
    int ix = x >> FX32_SHIFT;
    int iy = y >> FX32_SHIFT;
    int shift = 0;
    s32 length;
    s32 mask;

    while ((ix | iy) & ~0x1F) {
        ix >>= 1;
        iy >>= 1;
        shift++;
    }
    length = GetDistance(ix, iy);
    if (x > y * 2) {
        return (length << shift) + (x & ((1 << (shift + FX32_SHIFT)) - 1));
    }
    if (y > x * 2) {
        return (length << shift) + (y & ((1 << (shift + FX32_SHIFT)) - 1));
    }
    mask = (1 << (shift + FX32_SHIFT)) - 1;
    length = (length << shift) + (((x & mask) + (y & mask)) >> 1);
    return length + ((mask & (x | y)) >> 2);
}

fx32 DistanceTable32::ApproxDistanceAbs(fx32 x, fx32 y)
{
    if (y < 0) {
        y = -y;
    }
    if (x < 0) {
        x = -x;
    }
    return ApproxDistance(x, y);
}

fx32 DistanceTable32::DistanceBetween(VecFx32 *a, VecFx32 *b)
{
    fx32 dy = a->y - b->y;
    fx32 dx;

    if (dy < 0) {
        dy = -dy;
    }
    dx = a->x - b->x;
    if (dx < 0) {
        dx = -dx;
    }
    return ApproxDistance(dx, dy);
}

void DistanceTable32::func_02062178()
{
    func_02062184();
}

void DistanceTable32::func_02062184()
{
}

fx32 DistanceTable32::DistanceToBall(MatchPlayer *player)
{
    return DistanceBetween(&player->body->pos, &data_020c4920.pos);
}

fx32 DistanceTable32::DistanceBetweenPlayers(MatchPlayer *a, MatchPlayer *b)
{
    return DistanceBetween(&a->body->pos, &b->body->pos);
}
