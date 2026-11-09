#include "game/Unk_020920a4.hpp"

extern "C" void func_020985fc(void);     // (for the asm functions)
extern "C" void func_02096eb4(void);     // (for the asm functions)
extern "C" int func_02091d74(void *self, BOOL a);

extern "C" int func_020920a4(void *self);
extern "C" int func_020920b4(void *self);
extern "C" void func_020920c4(void);
extern "C" s32 func_02092270(u8 *arg0, s32 arg1);
extern "C" void func_020922fc(void);
extern "C" void func_020923e0(void);
extern "C" void func_0209249c(void);
extern "C" void func_02092544(void);
extern "C" void func_0209263c(void);
extern "C" void func_02092758(void);
extern "C" void func_02092808(void);
extern "C" void func_020928b0(void);
extern "C" void func_020929cc(void);
extern "C" void func_02092aac(void);
extern "C" void func_02092b68(void);
extern "C" void func_02092c48(void);
extern "C" void func_02092d3c(void);
extern "C" void func_02092e18(void);
extern "C" void func_02092ed4(void);
extern "C" void func_02092fc4(void);
extern "C" void func_020930e0(void);
extern "C" void func_02093188(void);
extern "C" void func_0209323c(void);
extern "C" void func_020932f0(u8 *arg0, s32 arg1, s32 arg2, u8 arg3);
extern "C" void func_02093368(void);
extern "C" void func_0209342c(u8 *arg0, s32 arg1, s32 arg2, u32 arg3);
extern "C" void func_020934ac(u8 *arg0, s32 arg1, s32 arg2, u16 arg3);
extern "C" void func_02093524(void);
extern "C" void func_0209360c(void);
extern "C" void func_020936b4(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s16 arg4);
extern "C" void func_02093734(void);
extern "C" void func_020937dc(void);

extern "C" char data_020c47b4[];
extern "C" s32 MIi_CpuClearFast(...);
extern "C" s32 _ZN8GameHeap4FreeEPv(...);
extern "C" void _ZN8GameHeap5AllocEiii(void);
extern "C" void _fflt(void);
extern "C" void _ffix(void);
extern "C" void _fadd(void);
extern "C" void _fsub(void);
extern "C" void func_02090e38(void);
extern "C" void func_02090ee0(void);
extern "C" s32 func_02090f68(...);
extern "C" void func_020917c0(void);
extern "C" void func_02091f68(void);
extern "C" void func_02091f80(void);
extern "C" void func_02091f8c(void);
extern "C" void func_02091fc0(void);

extern "C" int func_020920a4(void *self)
{
    return func_02091d74(self, 1);
}

extern "C" int func_020920b4(void *self)
{
    return func_02091d74(self, 0);
}

extern "C" asm void func_020920c4(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    mov r5, r1
    mov r8, r0
    mov r4, r2
    cmp r5, #0
    mov r11, #0
    ble @L_020920e8
    cmp r5, #0xfe
    blt @L_020920f0
@L_020920e8:
    mov r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_020920f0:
    bl func_02090e38
    ldr r1, [r8, #0x1c]
    mov r7, r0
    cmp r1, #0
    ldrne r0, [r8, #0x20]
    cmpne r0, #0
    movle r9, #0
    ble @L_02092130
    cmp r7, #0
    ble @L_02092120
    cmp r7, r0
    ble @L_02092128
@L_02092120:
    mov r9, #0
    b @L_02092130
@L_02092128:
    sub r0, r7, #1
    add r9, r1, r0, lsl #5
@L_02092130:
    cmp r9, #0
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r0, r11
    mov r1, r9
    mov r2, #0x20
    bl MIi_CpuClearFast
    mov r0, #0x60
    mul r6, r5, r0
    mov r0, #0x1f
    strb r0, [r9, #7]
    ldr r2, =0x7fff
    ldr r0, =data_020c47b4
    strh r2, [r9, #0x14]
    mov r1, r6
    mov r2, r11
    mov r3, #1
    bl _ZN8GameHeap5AllocEiii
    movs r10, r0
    mov r0, r11
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r2, r6
    mov r1, r10
    mov r6, #0
    bl MIi_CpuClearFast
    str r10, [r9]
    strb r5, [r9, #6]
    ldrh r0, [r9, #4]
    cmp r4, #0
    orr r0, r0, #3
    strh r0, [r9, #4]
    beq @L_020921c4
    mov r0, r8
    mov r3, r9
    add r1, r8, #0x24
    add r2, r8, #0x28
    bl func_02090ee0
@L_020921c4:
    ldrb r8, [r9, #6]
    cmp r8, #1
    blt @L_02092260
    ldr r4, =0x7fff
    mov r5, #0x1f
    mov r11, #0x3f
@L_020921dc:
    cmp r9, #0
    ldrne r2, [r9]
    cmpne r2, #0
    cmpne r8, #0
    ble @L_020921fc
    ldrb r0, [r9, #6]
    cmp r8, r0
    ble @L_02092204
@L_020921fc:
    mov r10, r6
    b @L_02092210
@L_02092204:
    sub r1, r8, #1
    mov r0, #0x60
    mla r10, r1, r0, r2
@L_02092210:
    cmp r10, #0
    beq @L_02092254
    mov r0, r6
    mov r1, r10
    mov r2, #0x60
    bl MIi_CpuClearFast
    strb r5, [r10, #4]
    strh r4, [r10, #6]
    strb r11, [r10, #5]
    mov r0, #0x32
    strb r0, [r10, #0x18]
    strb r0, [r10, #0x19]
    strb r6, [r10, #0x1a]
    strb r6, [r10, #0x1b]
    ldrh r0, [r10, #2]
    orr r0, r0, #3
    strh r0, [r10, #2]
@L_02092254:
    sub r8, r8, #1
    cmp r8, #1
    bge @L_020921dc
@L_02092260:
    mov r0, r7
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" s32 func_02092270(u8 *arg0, s32 arg1)
{
    s32 r2;
    s32 r3;
    u8 *r4;
    s32 v2;
    r3 = *(s32 *)(arg0 + 0x1C);
    if ((r3 == 0 || (r2 = *(s32 *)(arg0 + 0x20), r2 <= 0))) {
        r4 = (u8 *)0;
    } else {
        if ((arg1 <= 0 || arg1 > r2)) {
            r4 = (u8 *)0;
        } else {
            r4 = (u8 *)(r3 + ((arg1 - 1) << 5));
        }
    }
    if ((s32)r4 == 0)
        return (s32)arg0;
    if ((*(u16 *)(r4 + 0x4) & 1) != 0) {
        func_02090f68((s32)arg0, (s32)(arg0 + 0x24), (s32)(arg0 + 0x28), (s32)r4);
    }
    arg1 = *(s32 *)(r4);
    if (arg1 != 0) {
        _ZN8GameHeap4FreeEPv((s32)((u8 *)&data_020c47b4), arg1);
    }
    v2 = MIi_CpuClearFast(0, (s32)r4, 0x20);
    return v2;
}

extern "C" asm void func_020922fc(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    mov r6, r2
    mov r4, r1
    mov r1, r6
    mov r7, r0
    bl func_020985fc
    cmp r6, #0
    beq @L_02092330
    cmp r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    bl func_02096eb4
    cmp r0, #0
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
@L_02092330:
    ldr r1, [r7, #0x1c]
    cmp r1, #0
    ldrne r0, [r7, #0x20]
    cmpne r0, #0
    movle r5, #0
    ble @L_02092368
    cmp r4, #0
    ble @L_02092358
    cmp r4, r0
    ble @L_02092360
@L_02092358:
    mov r5, #0
    b @L_02092368
@L_02092360:
    sub r0, r4, #1
    add r5, r1, r0, lsl #5
@L_02092368:
    cmp r5, #0
    ldrne r0, [r5]
    cmpne r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    ldrb r4, [r5, #6]
    cmp r4, #1
    ldmltia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    mov r9, #0
    mov r8, #0x60
@L_0209238c:
    cmp r5, #0
    ldrne r1, [r5]
    cmpne r1, #0
    cmpne r4, #0
    ble @L_020923ac
    ldrb r0, [r5, #6]
    cmp r4, r0
    ble @L_020923b4
@L_020923ac:
    mov r1, r9
    b @L_020923bc
@L_020923b4:
    sub r0, r4, #1
    mla r1, r0, r8, r1
@L_020923bc:
    cmp r1, #0
    beq @L_020923d0
    mov r0, r7
    mov r2, r6
    bl func_02091f68
@L_020923d0:
    sub r4, r4, #1
    cmp r4, #1
    bge @L_0209238c
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

extern "C" asm void func_020923e0(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    mov r7, r0
    ldr r3, [r7, #0x1c]
    mov r6, r2
    cmp r3, #0
    ldrne r0, [r7, #0x20]
    cmpne r0, #0
    movle r5, #0
    ble @L_02092424
    cmp r1, #0
    ble @L_02092414
    cmp r1, r0
    ble @L_0209241c
@L_02092414:
    mov r5, #0
    b @L_02092424
@L_0209241c:
    sub r0, r1, #1
    add r5, r3, r0, lsl #5
@L_02092424:
    cmp r5, #0
    ldrne r0, [r5]
    cmpne r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    ldrb r4, [r5, #6]
    cmp r4, #1
    ldmltia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    mov r9, #0
    mov r8, #0x60
@L_02092448:
    cmp r5, #0
    ldrne r1, [r5]
    cmpne r1, #0
    cmpne r4, #0
    ble @L_02092468
    ldrb r0, [r5, #6]
    cmp r4, r0
    ble @L_02092470
@L_02092468:
    mov r1, r9
    b @L_02092478
@L_02092470:
    sub r0, r4, #1
    mla r1, r0, r8, r1
@L_02092478:
    cmp r1, #0
    beq @L_0209248c
    mov r0, r7
    mov r2, r6
    bl func_02091f80
@L_0209248c:
    sub r4, r4, #1
    cmp r4, #1
    bge @L_02092448
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

extern "C" asm void func_0209249c(void)
{
    stmdb sp!, {r4, lr}
    ldr r3, [r0, #0x1c]
    cmp r3, #0
    ldrne r0, [r0, #0x20]
    cmpne r0, #0
    movle r4, #0
    ble @L_020924d8
    cmp r1, #0
    ble @L_020924c8
    cmp r1, r0
    ble @L_020924d0
@L_020924c8:
    mov r4, #0
    b @L_020924d8
@L_020924d0:
    sub r0, r1, #1
    add r4, r3, r0, lsl #5
@L_020924d8:
    cmp r4, #0
    ldrne r0, [r4]
    cmpne r0, #0
    ldmeqia sp!, {r4, pc}
    ldrb lr, [r4, #6]
    cmp lr, #1
    ldmltia sp!, {r4, pc}
    mov r3, #0
    mov r0, #0x60
@L_020924fc:
    cmp r4, #0
    ldrne r12, [r4]
    cmpne r12, #0
    cmpne lr, #0
    ble @L_0209251c
    ldrb r1, [r4, #6]
    cmp lr, r1
    ble @L_02092524
@L_0209251c:
    mov r12, r3
    b @L_0209252c
@L_02092524:
    sub r1, lr, #1
    mla r12, r1, r0, r12
@L_0209252c:
    sub lr, lr, #1
    cmp r12, #0
    strneb r2, [r12, #0x34]
    cmp lr, #1
    bge @L_020924fc
    ldmia sp!, {r4, pc}
}

extern "C" asm void func_02092544(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    ldr r3, =0x7fff
    cmp r2, r3
    movhi r2, r3
    ldr r3, [r0, #0x1c]
    cmp r3, #0
    ldrne r0, [r0, #0x20]
    cmpne r0, #0
    movle r7, #0
    ble @L_0209258c
    cmp r1, #0
    ble @L_0209257c
    cmp r1, r0
    ble @L_02092584
@L_0209257c:
    mov r7, #0
    b @L_0209258c
@L_02092584:
    sub r0, r1, #1
    add r7, r3, r0, lsl #5
@L_0209258c:
    cmp r7, #0
    ldrne r0, [r7]
    cmpne r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldrb r6, [r7, #6]
    cmp r6, #1
    ldmltia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    rsb r9, r2, #0
    mov r10, r9, lsl #0xc
    mov r5, #0
    mov r11, #0x3f000000
    mov r4, #0x60
@L_020925bc:
    cmp r7, #0
    ldrne r1, [r7]
    cmpne r1, #0
    cmpne r6, #0
    ble @L_020925dc
    ldrb r0, [r7, #6]
    cmp r6, r0
    ble @L_020925e4
@L_020925dc:
    mov r8, r5
    b @L_020925ec
@L_020925e4:
    sub r0, r6, #1
    mla r8, r0, r4, r1
@L_020925ec:
    cmp r8, #0
    beq @L_02092628
    cmp r9, #0
    mov r0, r10
    ble @L_02092614
    bl _fflt
    mov r1, r0
    mov r0, r11
    bl _fadd
    b @L_02092620
@L_02092614:
    bl _fflt
    mov r1, #0x3f000000
    bl _fsub
@L_02092620:
    bl _ffix
    str r0, [r8, #0x24]
@L_02092628:
    sub r6, r6, #1
    cmp r6, #1
    bge @L_020925bc
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_0209263c(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    movs r10, r2
    mov r5, #0
    mov r9, r3
    movmi r10, r5
    bmi @L_02092660
    ldr r2, =0x7fff
    cmp r10, r2
    movgt r10, r2
@L_02092660:
    ldr r2, [r0, #0x1c]
    cmp r2, #0
    ldrne r0, [r0, #0x20]
    cmpne r0, #0
    movle r7, #0
    ble @L_02092698
    cmp r1, #0
    ble @L_02092688
    cmp r1, r0
    ble @L_02092690
@L_02092688:
    mov r7, #0
    b @L_02092698
@L_02092690:
    sub r0, r1, #1
    add r7, r2, r0, lsl #5
@L_02092698:
    cmp r7, #0
    ldrne r0, [r7]
    cmpne r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldrb r0, [r7, #6]
    mov r6, #0
    cmp r0, #0
    ldmltia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r4, =0x7fff
    mov r11, #0x60
@L_020926c0:
    cmp r7, #0
    ldrne r1, [r7]
    cmpne r1, #0
    cmpne r6, #0
    ble @L_020926dc
    cmp r6, r0
    ble @L_020926e4
@L_020926dc:
    mov r8, r5
    b @L_020926ec
@L_020926e4:
    sub r0, r6, #1
    mla r8, r0, r11, r1
@L_020926ec:
    cmp r8, #0
    beq @L_02092740
    rsb r0, r10, #0
    cmp r0, #0
    mov r0, r0, lsl #0xc
    ble @L_02092718
    bl _fflt
    mov r1, r0
    mov r0, #0x3f000000
    bl _fadd
    b @L_02092724
@L_02092718:
    bl _fflt
    mov r1, #0x3f000000
    bl _fsub
@L_02092724:
    bl _ffix
    adds r10, r10, r9
    str r0, [r8, #0x24]
    movmi r10, r5
    bmi @L_02092740
    cmp r10, r4
    movgt r10, r4
@L_02092740:
    ldrb r0, [r7, #6]
    add r6, r6, #1
    cmp r6, r0
    ble @L_020926c0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_02092758(void)
{
    stmdb sp!, {r4, lr}
    ldr r3, [r0, #0x1c]
    cmp r2, #0x1f
    movhi r2, #0x1f
    cmp r3, #0
    ldrne r0, [r0, #0x20]
    cmpne r0, #0
    movle r4, #0
    ble @L_0209279c
    cmp r1, #0
    ble @L_0209278c
    cmp r1, r0
    ble @L_02092794
@L_0209278c:
    mov r4, #0
    b @L_0209279c
@L_02092794:
    sub r0, r1, #1
    add r4, r3, r0, lsl #5
@L_0209279c:
    cmp r4, #0
    ldrne r0, [r4]
    cmpne r0, #0
    ldmeqia sp!, {r4, pc}
    ldrb lr, [r4, #6]
    cmp lr, #1
    ldmltia sp!, {r4, pc}
    mov r3, #0
    mov r0, #0x60
@L_020927c0:
    cmp r4, #0
    ldrne r12, [r4]
    cmpne r12, #0
    cmpne lr, #0
    ble @L_020927e0
    ldrb r1, [r4, #6]
    cmp lr, r1
    ble @L_020927e8
@L_020927e0:
    mov r12, r3
    b @L_020927f0
@L_020927e8:
    sub r1, lr, #1
    mla r12, r1, r0, r12
@L_020927f0:
    sub lr, lr, #1
    cmp r12, #0
    strneb r2, [r12, #4]
    cmp lr, #1
    bge @L_020927c0
    ldmia sp!, {r4, pc}
}

extern "C" asm void func_02092808(void)
{
    stmdb sp!, {r4, lr}
    ldr r3, [r0, #0x1c]
    cmp r3, #0
    ldrne r0, [r0, #0x20]
    cmpne r0, #0
    movle r4, #0
    ble @L_02092844
    cmp r1, #0
    ble @L_02092834
    cmp r1, r0
    ble @L_0209283c
@L_02092834:
    mov r4, #0
    b @L_02092844
@L_0209283c:
    sub r0, r1, #1
    add r4, r3, r0, lsl #5
@L_02092844:
    cmp r4, #0
    ldrne r0, [r4]
    cmpne r0, #0
    ldmeqia sp!, {r4, pc}
    ldrb lr, [r4, #6]
    cmp lr, #1
    ldmltia sp!, {r4, pc}
    mov r3, #0
    mov r0, #0x60
@L_02092868:
    cmp r4, #0
    ldrne r12, [r4]
    cmpne r12, #0
    cmpne lr, #0
    ble @L_02092888
    ldrb r1, [r4, #6]
    cmp lr, r1
    ble @L_02092890
@L_02092888:
    mov r12, r3
    b @L_02092898
@L_02092890:
    sub r1, lr, #1
    mla r12, r1, r0, r12
@L_02092898:
    sub lr, lr, #1
    cmp r12, #0
    strneh r2, [r12, #6]
    cmp lr, #1
    bge @L_02092868
    ldmia sp!, {r4, pc}
}

extern "C" asm void func_020928b0(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    ldr r4, [r0, #0x1c]
    mov r10, r2
    cmp r4, #0
    ldrne r0, [r0, #0x20]
    mov r9, r3
    cmpne r0, #0
    movle r5, #0
    ble @L_020928f4
    cmp r1, #0
    ble @L_020928e4
    cmp r1, r0
    ble @L_020928ec
@L_020928e4:
    mov r5, #0
    b @L_020928f4
@L_020928ec:
    sub r0, r1, #1
    add r5, r4, r0, lsl #5
@L_020928f4:
    cmp r5, #0
    ldrne r0, [r5]
    cmpne r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldrb r4, [r5, #6]
    cmp r4, #1
    ldmltia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r7, r10, lsl #0xc
    mov r8, r9, lsl #0xc
    mov r11, #0x60
@L_0209291c:
    cmp r5, #0
    ldrne r1, [r5]
    cmpne r1, #0
    cmpne r4, #0
    ble @L_0209293c
    ldrb r0, [r5, #6]
    cmp r4, r0
    ble @L_02092944
@L_0209293c:
    mov r6, #0
    b @L_0209294c
@L_02092944:
    sub r0, r4, #1
    mla r6, r0, r11, r1
@L_0209294c:
    cmp r6, #0
    beq @L_020929bc
    cmp r10, #0
    mov r0, r7
    ble @L_02092974
    bl _fflt
    mov r1, r0
    mov r0, #0x3f000000
    bl _fadd
    b @L_02092980
@L_02092974:
    bl _fflt
    mov r1, #0x3f000000
    bl _fsub
@L_02092980:
    bl _ffix
    str r0, [r6, #0x1c]
    cmp r9, #0
    mov r0, r8
    ble @L_020929a8
    bl _fflt
    mov r1, r0
    mov r0, #0x3f000000
    bl _fadd
    b @L_020929b4
@L_020929a8:
    bl _fflt
    mov r1, #0x3f000000
    bl _fsub
@L_020929b4:
    bl _ffix
    str r0, [r6, #0x20]
@L_020929bc:
    sub r4, r4, #1
    cmp r4, #1
    bge @L_0209291c
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_020929cc(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    mov r10, r0
    ldr r4, [r10, #0x1c]
    mov r9, r2
    cmp r4, #0
    ldrne r0, [r10, #0x20]
    mov r8, r3
    cmpne r0, #0
    movle r7, #0
    ble @L_02092a14
    cmp r1, #0
    ble @L_02092a04
    cmp r1, r0
    ble @L_02092a0c
@L_02092a04:
    mov r7, #0
    b @L_02092a14
@L_02092a0c:
    sub r0, r1, #1
    add r7, r4, r0, lsl #5
@L_02092a14:
    cmp r7, #0
    ldrne r0, [r7]
    cmpne r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldrb r6, [r7, #6]
    cmp r6, #1
    ldmltia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r5, #0
    mov r11, #0xd
    mov r4, #0x60
@L_02092a3c:
    cmp r7, #0
    ldrne r1, [r7]
    cmpne r1, #0
    cmpne r6, #0
    ble @L_02092a5c
    ldrb r0, [r7, #6]
    cmp r6, r0
    ble @L_02092a64
@L_02092a5c:
    mov r1, r5
    b @L_02092a6c
@L_02092a64:
    sub r0, r6, #1
    mla r1, r0, r4, r1
@L_02092a6c:
    cmp r1, #0
    beq @L_02092a9c
    ldrsh r0, [r1, #0x10]
    cmp r0, r9
    ldreqsh r0, [r1, #0x12]
    cmpeq r0, r8
    beq @L_02092a9c
    strh r9, [r1, #0x10]
    mov r0, r10
    mov r2, r11
    strh r8, [r1, #0x12]
    bl func_020917c0
@L_02092a9c:
    sub r6, r6, #1
    cmp r6, #1
    bge @L_02092a3c
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_02092aac(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    mov r9, r0
    ldr r4, [r9, #0x1c]
    mov r8, r2
    cmp r4, #0
    ldrne r0, [r9, #0x20]
    mov r7, r3
    cmpne r0, #0
    movle r6, #0
    ble @L_02092af4
    cmp r1, #0
    ble @L_02092ae4
    cmp r1, r0
    ble @L_02092aec
@L_02092ae4:
    mov r6, #0
    b @L_02092af4
@L_02092aec:
    sub r0, r1, #1
    add r6, r4, r0, lsl #5
@L_02092af4:
    cmp r6, #0
    ldrne r0, [r6]
    cmpne r0, #0
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    ldrb r5, [r6, #6]
    cmp r5, #1
    ldmltia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    mov r4, #0
    mov r10, #0x60
@L_02092b18:
    cmp r6, #0
    ldrne r1, [r6]
    cmpne r1, #0
    cmpne r5, #0
    ble @L_02092b38
    ldrb r0, [r6, #6]
    cmp r5, r0
    ble @L_02092b40
@L_02092b38:
    mov r1, r4
    b @L_02092b48
@L_02092b40:
    sub r0, r5, #1
    mla r1, r0, r10, r1
@L_02092b48:
    mov r0, r9
    mov r2, r8
    mov r3, r7
    bl func_02091f8c
    sub r5, r5, #1
    cmp r5, #1
    bge @L_02092b18
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
}

extern "C" asm void func_02092b68(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    mov r10, r0
    ldr r4, [r10, #0x1c]
    mov r9, r2
    cmp r4, #0
    ldrne r0, [r10, #0x20]
    mov r8, r3
    cmpne r0, #0
    movle r7, #0
    ble @L_02092bb0
    cmp r1, #0
    ble @L_02092ba0
    cmp r1, r0
    ble @L_02092ba8
@L_02092ba0:
    mov r7, #0
    b @L_02092bb0
@L_02092ba8:
    sub r0, r1, #1
    add r7, r4, r0, lsl #5
@L_02092bb0:
    cmp r7, #0
    ldrne r0, [r7]
    cmpne r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldrb r6, [r7, #6]
    cmp r6, #1
    ldmltia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r5, #0
    mov r11, #2
    mov r4, #0x60
@L_02092bd8:
    cmp r7, #0
    ldrne r1, [r7]
    cmpne r1, #0
    cmpne r6, #0
    ble @L_02092bf8
    ldrb r0, [r7, #6]
    cmp r6, r0
    ble @L_02092c00
@L_02092bf8:
    mov r1, r5
    b @L_02092c08
@L_02092c00:
    sub r0, r6, #1
    mla r1, r0, r4, r1
@L_02092c08:
    cmp r1, #0
    beq @L_02092c38
    ldrsh r0, [r1, #0xc]
    cmp r0, r9
    ldreqsh r0, [r1, #0xe]
    cmpeq r0, r8
    beq @L_02092c38
    strh r9, [r1, #0xc]
    mov r0, r10
    mov r2, r11
    strh r8, [r1, #0xe]
    bl func_020917c0
@L_02092c38:
    sub r6, r6, #1
    cmp r6, #1
    bge @L_02092bd8
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_02092c48(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    mov r10, r0
    cmp r3, #0
    bne @L_02092c60
    bl func_02092d3c
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02092c60:
    ldr r3, [r10, #0x1c]
    cmp r3, #0
    ldrne r0, [r10, #0x20]
    cmpne r0, #0
    movle r8, #0
    ble @L_02092c98
    cmp r1, #0
    ble @L_02092c88
    cmp r1, r0
    ble @L_02092c90
@L_02092c88:
    mov r8, #0
    b @L_02092c98
@L_02092c90:
    sub r0, r1, #1
    add r8, r3, r0, lsl #5
@L_02092c98:
    cmp r8, #0
    ldrne r0, [r8]
    cmpne r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldrb r7, [r8, #6]
    cmp r7, #1
    ldmltia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r0, =0xf0ff
    and r9, r2, #0x3c
    and r0, r2, r0
    mov r5, r0, lsl #0x10
    mov r6, #0
    mov r11, #2
    mov r4, #0x60
@L_02092cd0:
    cmp r8, #0
    ldrne r1, [r8]
    cmpne r1, #0
    cmpne r7, #0
    ble @L_02092cf0
    ldrb r0, [r8, #6]
    cmp r7, r0
    ble @L_02092cf8
@L_02092cf0:
    mov r1, r6
    b @L_02092d00
@L_02092cf8:
    sub r0, r7, #1
    mla r1, r0, r4, r1
@L_02092d00:
    cmp r1, #0
    beq @L_02092d28
    ldrh r0, [r1, #2]
    cmp r9, #0
    orr r0, r0, r5, lsr #16
    strh r0, [r1, #2]
    beq @L_02092d28
    mov r0, r10
    mov r2, r11
    bl func_020917c0
@L_02092d28:
    sub r7, r7, #1
    cmp r7, #1
    bge @L_02092cd0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_02092d3c(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    mov r10, r0
    ldr r3, [r10, #0x1c]
    cmp r3, #0
    ldrne r0, [r10, #0x20]
    cmpne r0, #0
    movle r8, #0
    ble @L_02092d7c
    cmp r1, #0
    ble @L_02092d6c
    cmp r1, r0
    ble @L_02092d74
@L_02092d6c:
    mov r8, #0
    b @L_02092d7c
@L_02092d74:
    sub r0, r1, #1
    add r8, r3, r0, lsl #5
@L_02092d7c:
    cmp r8, #0
    ldrne r0, [r8]
    cmpne r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldrb r7, [r8, #6]
    cmp r7, #1
    ldmltia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mvn r0, r2
    and r9, r2, #0x3c
    mov r5, r0, lsl #0x10
    mov r6, #0
    mov r11, #2
    mov r4, #0x60
@L_02092db0:
    cmp r8, #0
    ldrne r1, [r8]
    cmpne r1, #0
    cmpne r7, #0
    ble @L_02092dd0
    ldrb r0, [r8, #6]
    cmp r7, r0
    ble @L_02092dd8
@L_02092dd0:
    mov r1, r6
    b @L_02092de0
@L_02092dd8:
    sub r0, r7, #1
    mla r1, r0, r4, r1
@L_02092de0:
    cmp r1, #0
    beq @L_02092e08
    ldrh r0, [r1, #2]
    cmp r9, #0
    and r0, r0, r5, lsr #16
    strh r0, [r1, #2]
    beq @L_02092e08
    mov r0, r10
    mov r2, r11
    bl func_020917c0
@L_02092e08:
    sub r7, r7, #1
    cmp r7, #1
    bge @L_02092db0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_02092e18(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    mov r9, r0
    ldr r4, [r9, #0x1c]
    mov r8, r2
    cmp r4, #0
    ldrne r0, [r9, #0x20]
    mov r7, r3
    cmpne r0, #0
    movle r6, #0
    ble @L_02092e60
    cmp r1, #0
    ble @L_02092e50
    cmp r1, r0
    ble @L_02092e58
@L_02092e50:
    mov r6, #0
    b @L_02092e60
@L_02092e58:
    sub r0, r1, #1
    add r6, r4, r0, lsl #5
@L_02092e60:
    cmp r6, #0
    ldrne r0, [r6]
    cmpne r0, #0
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    ldrb r5, [r6, #6]
    cmp r5, #1
    ldmltia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    mov r4, #0
    mov r10, #0x60
@L_02092e84:
    cmp r6, #0
    ldrne r1, [r6]
    cmpne r1, #0
    cmpne r5, #0
    ble @L_02092ea4
    ldrb r0, [r6, #6]
    cmp r5, r0
    ble @L_02092eac
@L_02092ea4:
    mov r1, r4
    b @L_02092eb4
@L_02092eac:
    sub r0, r5, #1
    mla r1, r0, r10, r1
@L_02092eb4:
    mov r0, r9
    mov r2, r8
    mov r3, r7
    bl func_02091fc0
    sub r5, r5, #1
    cmp r5, #1
    bge @L_02092e84
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
}

extern "C" asm void func_02092ed4(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    mov r10, r0
    ldr r4, [r10, #0x1c]
    mov r9, r2
    cmp r4, #0
    ldrne r0, [r10, #0x20]
    mov r8, r3
    cmpne r0, #0
    movle r7, #0
    ble @L_02092f1c
    cmp r1, #0
    ble @L_02092f0c
    cmp r1, r0
    ble @L_02092f14
@L_02092f0c:
    mov r7, #0
    b @L_02092f1c
@L_02092f14:
    sub r0, r1, #1
    add r7, r4, r0, lsl #5
@L_02092f1c:
    cmp r7, #0
    ldrne r0, [r7]
    cmpne r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldrb r6, [r7, #6]
    cmp r9, #0x64
    movhi r9, #0x64
    cmp r8, #0x64
    movhi r8, #0x64
    cmp r6, #1
    ldmltia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r5, #0
    mov r11, #4
    mov r4, #0x60
@L_02092f54:
    cmp r7, #0
    ldrne r1, [r7]
    cmpne r1, #0
    cmpne r6, #0
    ble @L_02092f74
    ldrb r0, [r7, #6]
    cmp r6, r0
    ble @L_02092f7c
@L_02092f74:
    mov r1, r5
    b @L_02092f84
@L_02092f7c:
    sub r0, r6, #1
    mla r1, r0, r4, r1
@L_02092f84:
    cmp r1, #0
    beq @L_02092fb4
    ldrb r0, [r1, #0x1a]
    cmp r0, r9
    ldreqb r0, [r1, #0x1b]
    cmpeq r0, r8
    beq @L_02092fb4
    strb r9, [r1, #0x1a]
    mov r0, r10
    mov r2, r11
    strb r8, [r1, #0x1b]
    bl func_020917c0
@L_02092fb4:
    sub r6, r6, #1
    cmp r6, #1
    bge @L_02092f54
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_02092fc4(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    mov r5, r0
    ldr r3, [r5, #0x1c]
    mov r4, r2
    cmp r3, #0
    ldrne r0, [r5, #0x20]
    cmpne r0, #0
    movle r10, #0
    ble @L_02093008
    cmp r1, #0
    ble @L_02092ff8
    cmp r1, r0
    ble @L_02093000
@L_02092ff8:
    mov r10, #0
    b @L_02093008
@L_02093000:
    sub r0, r1, #1
    add r10, r3, r0, lsl #5
@L_02093008:
    cmp r10, #0
    ldrne r0, [r10]
    cmpne r0, #0
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    ldrb r9, [r10, #6]
    sub r0, r9, #1
    add r4, r4, r0, lsl #3
    cmp r9, #1
    ldmltia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    mov r8, #0
    mov r7, #0xff
    mov r6, #0x60
@L_02093038:
    cmp r10, #0
    ldrne r1, [r10]
    cmpne r1, #0
    cmpne r9, #0
    ble @L_02093058
    ldrb r0, [r10, #6]
    cmp r9, r0
    ble @L_02093060
@L_02093058:
    mov r1, r8
    b @L_02093068
@L_02093060:
    sub r0, r9, #1
    mla r1, r0, r6, r1
@L_02093068:
    cmp r1, #0
    beq @L_020930cc
    ldrsh r0, [r4]
    ldrsh r2, [r1, #0xc]
    cmp r2, r0
    ldreqsh r3, [r1, #0xe]
    ldreqsh r2, [r4, #2]
    cmpeq r3, r2
    ldreqsh r3, [r1, #8]
    ldreqsh r2, [r4, #4]
    cmpeq r3, r2
    ldreqsh r3, [r1, #0xa]
    ldreqsh r2, [r4, #6]
    cmpeq r3, r2
    beq @L_020930cc
    strh r0, [r1, #0xc]
    ldrsh r3, [r4, #2]
    mov r0, r5
    mov r2, r7
    strh r3, [r1, #0xe]
    ldrsh r3, [r4, #4]
    strh r3, [r1, #8]
    ldrsh r3, [r4, #6]
    strh r3, [r1, #0xa]
    bl func_020917c0
@L_020930cc:
    sub r9, r9, #1
    cmp r9, #1
    sub r4, r4, #8
    bge @L_02093038
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
}

extern "C" asm void func_020930e0(void)
{
    stmdb sp!, {r4, lr}
    ldr r3, [r0, #0x1c]
    cmp r3, #0
    ldrne r0, [r0, #0x20]
    cmpne r0, #0
    movle r4, #0
    ble @L_0209311c
    cmp r1, #0
    ble @L_0209310c
    cmp r1, r0
    ble @L_02093114
@L_0209310c:
    mov r4, #0
    b @L_0209311c
@L_02093114:
    sub r0, r1, #1
    add r4, r3, r0, lsl #5
@L_0209311c:
    cmp r4, #0
    ldrne r0, [r4]
    cmpne r0, #0
    ldmeqia sp!, {r4, pc}
    ldrb lr, [r4, #6]
    cmp lr, #1
    ldmltia sp!, {r4, pc}
    mov r3, #0
    mov r0, #0x60
@L_02093140:
    cmp r4, #0
    ldrne r12, [r4]
    cmpne r12, #0
    cmpne lr, #0
    ble @L_02093160
    ldrb r1, [r4, #6]
    cmp lr, r1
    ble @L_02093168
@L_02093160:
    mov r12, r3
    b @L_02093170
@L_02093168:
    sub r1, lr, #1
    mla r12, r1, r0, r12
@L_02093170:
    sub lr, lr, #1
    cmp r12, #0
    strneb r2, [r12, #5]
    cmp lr, #1
    bge @L_02093140
    ldmia sp!, {r4, pc}
}

extern "C" asm void func_02093188(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r4, r3
    mov r7, r1
    mov r1, r4
    mov r6, r0
    mov r5, r2
    bl func_020985fc
    cmp r4, #0
    beq @L_020931c0
    cmp r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    bl func_02096eb4
    cmp r0, #0
    ldmneia sp!, {r3, r4, r5, r6, r7, pc}
@L_020931c0:
    ldr r1, [r6, #0x1c]
    cmp r1, #0
    ldrne r0, [r6, #0x20]
    cmpne r0, #0
    movle r0, #0
    ble @L_020931f8
    cmp r7, #0
    ble @L_020931e8
    cmp r7, r0
    ble @L_020931f0
@L_020931e8:
    mov r0, #0
    b @L_020931f8
@L_020931f0:
    sub r0, r7, #1
    add r0, r1, r0, lsl #5
@L_020931f8:
    cmp r0, #0
    ldrne r1, [r0]
    cmpne r1, #0
    cmpne r5, #0
    ble @L_02093218
    ldrb r0, [r0, #6]
    cmp r5, r0
    ble @L_02093220
@L_02093218:
    mov r1, #0
    b @L_0209322c
@L_02093220:
    sub r2, r5, #1
    mov r0, #0x60
    mla r1, r2, r0, r1
@L_0209322c:
    mov r0, r6
    mov r2, r4
    bl func_02091f68
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm void func_0209323c(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r4, r3
    mov r7, r1
    mov r1, r4
    mov r6, r0
    mov r5, r2
    bl func_020985fc
    cmp r4, #0
    beq @L_02093274
    cmp r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    bl func_02096eb4
    cmp r0, #0
    ldmneia sp!, {r3, r4, r5, r6, r7, pc}
@L_02093274:
    ldr r1, [r6, #0x1c]
    cmp r1, #0
    ldrne r0, [r6, #0x20]
    cmpne r0, #0
    movle r0, #0
    ble @L_020932ac
    cmp r7, #0
    ble @L_0209329c
    cmp r7, r0
    ble @L_020932a4
@L_0209329c:
    mov r0, #0
    b @L_020932ac
@L_020932a4:
    sub r0, r7, #1
    add r0, r1, r0, lsl #5
@L_020932ac:
    cmp r0, #0
    ldrne r1, [r0]
    cmpne r1, #0
    cmpne r5, #0
    ble @L_020932cc
    ldrb r0, [r0, #6]
    cmp r5, r0
    ble @L_020932d4
@L_020932cc:
    mov r1, #0
    b @L_020932e0
@L_020932d4:
    sub r2, r5, #1
    mov r0, #0x60
    mla r1, r2, r0, r1
@L_020932e0:
    mov r0, r6
    mov r2, r4
    bl func_02091f80
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" void func_020932f0(u8 *arg0, s32 arg1, s32 arg2, u8 arg3)
{
    u8 *t = *(u8 **)(arg0 + 0x1C);
    s32 c;
    u8 *e;
    u8 *r;
    if (t == 0 || (c = *(s32 *)(arg0 + 0x20)) <= 0)
        e = 0;
    else if (arg1 <= 0 || arg1 > c)
        e = 0;
    else
        e = t + ((arg1 - 1) << 5);
    if (e == 0 || (t = *(u8 **)e) == 0 || arg2 <= 0 || arg2 > e[6])
        r = 0;
    else
        r = t + (arg2 - 1) * 0x60;
    if (r != 0)
        r[0x34] = arg3;
}

extern "C" asm void func_02093368(void)
{
    stmdb sp!, {r4, lr}
    ldr r12, =0x7fff
    cmp r3, r12
    movhi r3, r12
    ldr r12, [r0, #0x1c]
    cmp r12, #0
    ldrne r0, [r0, #0x20]
    cmpne r0, #0
    movle r0, #0
    ble @L_020933b0
    cmp r1, #0
    ble @L_020933a0
    cmp r1, r0
    ble @L_020933a8
@L_020933a0:
    mov r0, #0
    b @L_020933b0
@L_020933a8:
    sub r0, r1, #1
    add r0, r12, r0, lsl #5
@L_020933b0:
    cmp r0, #0
    ldrne r12, [r0]
    cmpne r12, #0
    cmpne r2, #0
    ble @L_020933d0
    ldrb r0, [r0, #6]
    cmp r2, r0
    ble @L_020933d8
@L_020933d0:
    mov r4, #0
    b @L_020933e4
@L_020933d8:
    sub r1, r2, #1
    mov r0, #0x60
    mla r4, r1, r0, r12
@L_020933e4:
    cmp r4, #0
    ldmeqia sp!, {r4, pc}
    rsb r0, r3, #0
    cmp r0, #0
    mov r0, r0, lsl #0xc
    ble @L_02093410
    bl _fflt
    mov r1, r0
    mov r0, #0x3f000000
    bl _fadd
    b @L_0209341c
@L_02093410:
    bl _fflt
    mov r1, #0x3f000000
    bl _fsub
@L_0209341c:
    bl _ffix
    str r0, [r4, #0x24]
    ldmia sp!, {r4, pc}
}

extern "C" void func_0209342c(u8 *arg0, s32 arg1, s32 arg2, u32 arg3)
{
    u8 *t = *(u8 **)(arg0 + 0x1C);
    s32 c;
    u8 *e;
    u8 *r;
    if (arg3 > 0x1F)
        arg3 = 0x1F;
    if (t == 0 || (c = *(s32 *)(arg0 + 0x20)) <= 0)
        e = 0;
    else if (arg1 <= 0 || arg1 > c)
        e = 0;
    else
        e = t + ((arg1 - 1) << 5);
    if (e == 0 || (t = *(u8 **)e) == 0 || arg2 <= 0 || arg2 > e[6])
        r = 0;
    else
        r = t + (arg2 - 1) * 0x60;
    if (r != 0)
        r[4] = arg3;
}

extern "C" void func_020934ac(u8 *arg0, s32 arg1, s32 arg2, u16 arg3)
{
    u8 *t = *(u8 **)(arg0 + 0x1C);
    s32 c;
    u8 *e;
    u8 *r;
    if (t == 0 || (c = *(s32 *)(arg0 + 0x20)) <= 0)
        e = 0;
    else if (arg1 <= 0 || arg1 > c)
        e = 0;
    else
        e = t + ((arg1 - 1) << 5);
    if (e == 0 || (t = *(u8 **)e) == 0 || arg2 <= 0 || arg2 > e[6])
        r = 0;
    else
        r = t + (arg2 - 1) * 0x60;
    if (r != 0)
        *(u16 *)(r + 6) = arg3;
}

extern "C" asm void func_02093524(void)
{
    stmdb sp!, {r4, lr}
    ldr r12, [r0, #0x1c]
    cmp r12, #0
    ldrne r0, [r0, #0x20]
    cmpne r0, #0
    movle r0, #0
    ble @L_02093560
    cmp r1, #0
    ble @L_02093550
    cmp r1, r0
    ble @L_02093558
@L_02093550:
    mov r0, #0
    b @L_02093560
@L_02093558:
    sub r0, r1, #1
    add r0, r12, r0, lsl #5
@L_02093560:
    cmp r0, #0
    ldrne r12, [r0]
    cmpne r12, #0
    cmpne r2, #0
    ble @L_02093580
    ldrb r0, [r0, #6]
    cmp r2, r0
    ble @L_02093588
@L_02093580:
    mov r4, #0
    b @L_02093594
@L_02093588:
    sub r1, r2, #1
    mov r0, #0x60
    mla r4, r1, r0, r12
@L_02093594:
    cmp r4, #0
    ldmeqia sp!, {r4, pc}
    cmp r3, #0
    mov r0, r3, lsl #0xc
    ble @L_020935bc
    bl _fflt
    mov r1, r0
    mov r0, #0x3f000000
    bl _fadd
    b @L_020935c8
@L_020935bc:
    bl _fflt
    mov r1, #0x3f000000
    bl _fsub
@L_020935c8:
    bl _ffix
    ldrsh r1, [sp, #8]
    str r0, [r4, #0x1c]
    cmp r1, #0
    mov r0, r1, lsl #0xc
    ble @L_020935f4
    bl _fflt
    mov r1, r0
    mov r0, #0x3f000000
    bl _fadd
    b @L_02093600
@L_020935f4:
    bl _fflt
    mov r1, #0x3f000000
    bl _fsub
@L_02093600:
    bl _ffix
    str r0, [r4, #0x20]
    ldmia sp!, {r4, pc}
}

extern "C" asm void func_0209360c(void)
{
    stmdb sp!, {r3, lr}
    ldr lr, [r0, #0x1c]
    cmp lr, #0
    ldrne r12, [r0, #0x20]
    cmpne r12, #0
    movle r1, #0
    ble @L_02093648
    cmp r1, #0
    ble @L_02093638
    cmp r1, r12
    ble @L_02093640
@L_02093638:
    mov r1, #0
    b @L_02093648
@L_02093640:
    sub r1, r1, #1
    add r1, lr, r1, lsl #5
@L_02093648:
    cmp r1, #0
    ldrne r12, [r1]
    cmpne r12, #0
    cmpne r2, #0
    ble @L_02093668
    ldrb r1, [r1, #6]
    cmp r2, r1
    ble @L_02093670
@L_02093668:
    mov r1, #0
    b @L_0209367c
@L_02093670:
    sub r2, r2, #1
    mov r1, #0x60
    mla r1, r2, r1, r12
@L_0209367c:
    cmp r1, #0
    ldmeqia sp!, {r3, pc}
    ldrsh r2, [r1, #0x10]
    cmp r2, r3
    ldreqsh r12, [r1, #0x12]
    ldreqsh r2, [sp, #8]
    cmpeq r12, r2
    ldmeqia sp!, {r3, pc}
    ldrsh r12, [sp, #8]
    strh r3, [r1, #0x10]
    mov r2, #0xd
    strh r12, [r1, #0x12]
    bl func_020917c0
    ldmia sp!, {r3, pc}
}

extern "C" void func_020936b4(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s16 arg4)
{
    u8 *t = *(u8 **)(arg0 + 0x1C);
    s32 c;
    u8 *e;
    u8 *r;
    if (t == 0 || (c = *(s32 *)(arg0 + 0x20)) <= 0)
        e = 0;
    else if (arg1 <= 0 || arg1 > c)
        e = 0;
    else
        e = t + ((arg1 - 1) << 5);
    if (e == 0 || (t = *(u8 **)e) == 0 || arg2 <= 0 || arg2 > e[6])
        r = 0;
    else
        r = t + (arg2 - 1) * 0x60;
    ((s32 (*)(...))func_02091f8c)(arg0, r, arg3, arg4);
}

extern "C" asm void func_02093734(void)
{
    stmdb sp!, {r3, lr}
    ldr lr, [r0, #0x1c]
    cmp lr, #0
    ldrne r12, [r0, #0x20]
    cmpne r12, #0
    movle r1, #0
    ble @L_02093770
    cmp r1, #0
    ble @L_02093760
    cmp r1, r12
    ble @L_02093768
@L_02093760:
    mov r1, #0
    b @L_02093770
@L_02093768:
    sub r1, r1, #1
    add r1, lr, r1, lsl #5
@L_02093770:
    cmp r1, #0
    ldrne r12, [r1]
    cmpne r12, #0
    cmpne r2, #0
    ble @L_02093790
    ldrb r1, [r1, #6]
    cmp r2, r1
    ble @L_02093798
@L_02093790:
    mov r1, #0
    b @L_020937a4
@L_02093798:
    sub r2, r2, #1
    mov r1, #0x60
    mla r1, r2, r1, r12
@L_020937a4:
    cmp r1, #0
    ldmeqia sp!, {r3, pc}
    ldrsh r2, [r1, #0xc]
    cmp r2, r3
    ldreqsh r12, [r1, #0xe]
    ldreqsh r2, [sp, #8]
    cmpeq r12, r2
    ldmeqia sp!, {r3, pc}
    ldrsh r12, [sp, #8]
    strh r3, [r1, #0xc]
    mov r2, #2
    strh r12, [r1, #0xe]
    bl func_020917c0
    ldmia sp!, {r3, pc}
}

extern "C" asm void func_020937dc(void)
{
    stmdb sp!, {r3, lr}
    ldr lr, [r0, #0x1c]
    cmp lr, #0
    ldrne r12, [r0, #0x20]
    cmpne r12, #0
    movle r1, #0
    ble @L_02093818
    cmp r1, #0
    ble @L_02093808
    cmp r1, r12
    ble @L_02093810
@L_02093808:
    mov r1, #0
    b @L_02093818
@L_02093810:
    sub r1, r1, #1
    add r1, lr, r1, lsl #5
@L_02093818:
    cmp r1, #0
    ldrne r12, [r1]
    cmpne r12, #0
    cmpne r2, #0
    ble @L_02093838
    ldrb r1, [r1, #6]
    cmp r2, r1
    ble @L_02093840
@L_02093838:
    mov r1, #0
    b @L_0209384c
@L_02093840:
    sub r2, r2, #1
    mov r1, #0x60
    mla r1, r2, r1, r12
@L_0209384c:
    cmp r1, #0
    ldrneh r2, [r1, #0x14]
    cmpne r2, r3
    ldmeqia sp!, {r3, pc}
    mov r2, #2
    strh r3, [r1, #0x14]
    bl func_020917c0
    ldmia sp!, {r3, pc}
}
