#include "match/MatchEngine.hpp"
extern "C" void func_01ffde48(MatchEngine *engine, u8 *entry, int slot);
extern "C" void func_020802a0(void);
extern "C" int func_02080b90(MatchPlayer *player);
extern "C" void func_02080c64(MatchPlayer *player, u8 team);
#include "data/EntryPool.hpp"
extern "C" void _ZN9EntryPool3GetEi(void);     // (for the asm functions)

extern "C" void _ZN11MatchEngine13func_0207a5c0EiPv(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_0207add4Eim(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_0207ae40Eim(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_02082d5cEi(void);     // (for the asm functions)
int MatchEngine::func_02082d5c(int id)
{
    u8 buf[0x60];
    func_0207a5c0(id, buf);
    return ((s32 (*)(...))func_020802a0)(buf);
}

BOOL MatchEngine::func_02082d80(int id, int value)
{
    return value == func_02082d5c(id);
}

// (nonmatching: the ROM schedules the member-wise struct copies across members)
#ifdef NONMATCHING
void MatchEngine::func_02082d9c(int team, MatchTeamSave *src)
{
    MatchPlayer *player;
    int i;

    ((MatchTeamRecord *)unk_17c)[team] = src->record;
    ((MatchIdList *)unk_34c)[team] = src->members;
    for (i = 0; i < 16; i++) {
        func_01ffde48(this, src->players[i], i + 0x10);
        player = (MatchPlayer *)gEntryPool.Get(i + 0x10);
        if (player != NULL) {
            func_02080c64(player, team);
            player->unk_42 = (player->unk_42 & ~0x8000) | (((u32)team << 31) >> 16);
            player->unk_f0 = (player->unk_f0 | 0x40) & ~0x20;
        }
    }
}
#else
asm void MatchEngine::func_02082d9c(int team, MatchTeamSave *src)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    mov r10, r0
    mov r9, r1
    add r1, r10, r9, lsl #6
    add r0, r2, #0x3d4
    add r4, r0, #0x400
    add r5, r1, #0x17c
    mov r3, #0xf
@L_02082dbc:
    ldrb r0, [r4, #1]
    ldrb r1, [r4], #2
    subs r3, r3, #1
    strb r0, [r5, #1]
    strb r1, [r5], #2
    bne @L_02082dbc
    ldrb r4, [r4]
    add r1, r2, #0x700
    ldrb r3, [r2, #0x7f3]
    strb r4, [r5]
    add r0, r10, r9, lsl #6
    strb r3, [r0, #0x19b]
    ldrh r6, [r1, #0xf4]
    add r4, r0, #0x100
    ldrh r5, [r1, #0xf6]
    strh r6, [r4, #0x9c]
    ldrh r6, [r1, #0xf8]
    strh r5, [r4, #0x9e]
    ldrh r5, [r1, #0xfa]
    strh r6, [r4, #0xa0]
    ldrh r6, [r1, #0xfc]
    strh r5, [r4, #0xa2]
    ldrh r5, [r1, #0xfe]
    strh r6, [r4, #0xa4]
    ldrb r1, [r2, #0x800]
    strh r5, [r4, #0xa6]
    add r3, r2, #0x800
    strb r1, [r0, #0x1a8]
    ldrb r7, [r2, #0x801]
    ldrh r5, [r3, #2]
    add r6, r10, r9, lsl #5
    strb r7, [r0, #0x1a9]
    strh r5, [r4, #0xaa]
    ldrh r7, [r3, #4]
    ldrh r5, [r3, #6]
    add r1, r2, #0x14
    strh r7, [r4, #0xac]
    strh r5, [r4, #0xae]
    ldrh r7, [r3, #8]
    ldrsb r5, [r3, #0xa]
    strh r7, [r4, #0xb0]
    strb r5, [r0, #0x1b2]
    ldrsb r7, [r3, #0xb]
    ldrsb r5, [r3, #0xc]
    strb r7, [r0, #0x1b3]
    strb r5, [r0, #0x1b4]
    ldrsb r7, [r3, #0xd]
    ldrh r5, [r3, #0xe]
    ldrh r3, [r3, #0x12]
    strb r7, [r0, #0x1b5]
    strh r5, [r4, #0xb6]
    ldrb r7, [r2, #0x810]
    ldrb r5, [r2, #0x811]
    strb r7, [r0, #0x1b8]
    strb r5, [r0, #0x1b9]
    strh r3, [r4, #0xba]
    add r5, r1, #0x800
    add r4, r6, #0x34c
    mov r3, #8
@L_02082ea8:
    ldrh r0, [r5, #2]
    ldrh r1, [r5], #4
    subs r3, r3, #1
    strh r0, [r4, #2]
    strh r1, [r4], #4
    bne @L_02082ea8
    ldr r11, =gEntryPool
    ldr r4, =0xffdf
    add r7, r2, #0xd4
    mov r6, r9, lsl #0x1f
    mov r8, #0
@L_02082ed4:
    mov r0, r10
    mov r1, r7
    add r2, r8, #0x10
    bl func_01ffde48
    mov r0, r11
    add r1, r8, #0x10
    bl _ZN9EntryPool3GetEi
    movs r5, r0
    beq @L_02082f20
    mov r1, r9
    bl func_02080c64
    ldrh r0, [r5, #0x42]
    bic r0, r0, #0x8000
    orr r0, r0, r6, lsr #16
    strh r0, [r5, #0x42]
    ldrh r0, [r5, #0xf0]
    orr r0, r0, #0x40
    and r0, r0, r4
    strh r0, [r5, #0xf0]
@L_02082f20:
    add r8, r8, #1
    cmp r8, #0x10
    add r7, r7, #0x70
    blt @L_02082ed4
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}
#endif

void MatchEngine::func_02082f3c(int team, int kind)
{
    MatchPlayer *player;
    BOOL found = FALSE;
    int mask = 0x2000;
    int i;

    if (kind == 2) {
        mask = 0x4000;
    } else if (kind == 3) {
        mask = 0x8000;
    }
    for (i = 0; i < 0x84; i++) {
        player = func_ov015_02130ae8(i);
        if (player == NULL || !MatchPlayer_HasFlag(player, 1)) {
            continue;
        }
        if (team != func_02080b90(player)) {
            continue;
        }
        if (!(mask & player->unk_ba)) {
            continue;
        }
        if (found
            || (kind == 1 && !data_020e88a0.func_0207ae40(team, player->unk_42))
            || (kind == 2 && !data_020e88a0.func_0207add4(team, player->unk_42))
            || (kind == 3 && !data_020e88a0.func_0207ae40(2, player->unk_42))) {
            player->unk_ba &= ~mask;
        } else {
            found = TRUE;
        }
    }
}

u8 *MatchEngine::func_02083048(int team)
{
    return unk_3ac[team];
}

u8 *MatchEngine::func_02083054(int team)
{
    return unk_34c[team];
}
