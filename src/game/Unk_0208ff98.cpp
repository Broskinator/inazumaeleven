#include "game/Unk_0208ff98.hpp"

extern "C" void func_02098cdc(void);     // (for the asm functions)
extern "C" s32 C3DVramMan_FreeRes(...);     // (for the asm functions)
extern "C" void Vram_InitTexPool(void);
extern "C" s32 func_020900a4(void);
extern "C" void func_020900f4(void);
extern "C" u8 *Vram_GetTexPoolElement(int i);

extern "C" char g3DVramMan[];
extern "C" char gAllocator[];
extern "C" char data_020fc708[];
extern "C" char data_020fc708_b[];

// A table on the heap
typedef struct {
    s32 unk_0;
    u8 unk_4[5];
    u8 unk_9;
    u8 unk_a[2];
    u8 *data;           // 0x0C (on the heap)
    s32 unk_10;
    s32 count;          // 0x14
    s32 size;           // 0x18 (of an entry)
} UnkTable_020fc708;

#define TABLE ((UnkTable_020fc708 *)data_020fc708)     // (data_020fc708 again: see config/yeep/arm9/lcf_symbols.txt)
extern "C" s32 MIi_CpuClearFast(...);
extern "C" s32 _ZN8GameHeap4FreeEPv(...);
extern "C" void _ZN8GameHeap5AllocEiii(void);
extern "C" void C3DVramMan_QueueUpload(void);

extern "C" asm void Vram_InitTexPool(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, lr}
    sub sp, sp, #0xc
    mov r10, r0
    mov r9, r1
    bl func_020900a4
    mul r8, r9, r10
    ldr r6, =gAllocator
    mov r7, #0
    mov r5, #1
    mov r0, r6
    mov r1, r8
    mov r2, r7
    mov r3, r5
    bl _ZN8GameHeap5AllocEiii
    movs r4, r0
    addeq sp, sp, #0xc
    moveq r0, r7
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
    ldr r0, =g3DVramMan
    add r1, sp, #0
    ldr r0, [r0]
    mov r2, r8
    str r7, [sp]
    str r7, [sp, #4]
    strb r7, [sp, #8]
    strb r7, [sp, #9]
    bl func_02098cdc
    cmp r0, #0
    bne @L_02090024
    mov r0, r6
    mov r1, r4
    bl _ZN8GameHeap4FreeEPv
    add sp, sp, #0xc
    mov r0, r7
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
@L_02090024:
    ldr r1, =data_020fc708
    mov r0, r7
    mov r2, #0x1c
    bl MIi_CpuClearFast
    mov r0, r7
    mov r1, r4
    mov r2, r8
    bl MIi_CpuClearFast
    ldr r0, [sp]
    ldr r1, =data_020fc708_b
    ldr r2, [sp, #4]
    str r0, [r1]
    ldrb r0, [sp, #8]
    str r2, [r1, #4]
    ldrb r2, [sp, #9]
    strb r0, [r1, #8]
    ldrb r0, [sp, #0xa]
    strb r2, [r1, #9]
    ldrb r2, [sp, #0xb]
    strb r0, [r1, #0xa]
    mov r0, r5
    strb r2, [r1, #0xb]
    str r4, [r1, #0xc]
    str r8, [r1, #0x10]
    str r10, [r1, #0x14]
    str r9, [r1, #0x18]
    add sp, sp, #0xc
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
}

extern "C" s32 func_020900a4(void)
{
    s32 r1;
    s32 v2;
    s32 t0;
    t0 = *(s32 *)(((u8 *)&g3DVramMan));
    C3DVramMan_FreeRes(t0, (u8 *)((u8 *)&data_020fc708));
    r1 = *(s32 *)(((u8 *)&data_020fc708_b) + 0xC);
    if (r1 != 0) {
        _ZN8GameHeap4FreeEPv((u8 *)((u8 *)&gAllocator), r1);
    }
    v2 = MIi_CpuClearFast(0, (u8 *)((u8 *)&data_020fc708), 0x1C);
    return v2;
}

extern "C" void func_020900f4(void)
{
    if (*(u32 *)(data_020fc708 + 0xC) == 0 || *(s32 *)data_020fc708 <= 0)
        return;
    if (*(u8 *)(data_020fc708 + 9) != 0)
        return;
    ((void (*)(s32, void *, s32, s32, s32, s32, s32))C3DVramMan_QueueUpload)(*(s32 *)g3DVramMan, data_020fc708_b, 0, *(s32 *)(data_020fc708 + 0xC), *(s32 *)(data_020fc708 + 0x10), 0, 0);
}

extern "C" u8 *Vram_GetTexPoolElement(int i)
{
    if (i < 0 || i >= TABLE->count) {
        return NULL;
    }
    return TABLE->data + i * TABLE->size;
}
