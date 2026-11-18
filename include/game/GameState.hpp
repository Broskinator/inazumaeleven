#ifndef GAME_GAMESTATE_HPP
#define GAME_GAMESTATE_HPP

#include "nitro/types.h"

// The parts of the game's state that go into the save (SaveManager), as blocks copied
// whole. Their contents are not known yet: the types only give the size and alignment
// (u8/u16/u32 arrays), which decide how they are copied.

struct SaveBlock0 { u8 data[0x400]; };
struct SaveBlock2 { u8 data[0x28]; };
struct SaveBlock3 { u8 data[4]; };
struct SaveBlock4 { u8 data[0x12C]; };
struct SaveBlock6 { u8 data[0x176]; };
struct SaveBlock7 { u8 data[8]; };
struct SaveBlock8 { u32 data[3]; };   // data[2]: SaveSystemHeader::unk_20
struct SaveBlock9 { u16 data[0x15]; };
struct SaveBlock10 { u16 data[6]; };
struct SaveBlock11 { u32 data[0x69]; };
struct SaveBlock12 { u32 data[0x1A4]; };
struct SaveBlock13 { u8 data[0x2B]; };

// player profile (copied whole: a union, so it is copied as a block)
union SaveProfile {
    u32 raw[0x44];
    struct {
        char name[0x14];
        u32 unk_14;
        u32 unk_18;
        u32 playTime;           // 0x1C
        u32 unk_20;
        u32 unk_24;
        u32 unk_28;
        s8 unk_2C;
        u8 unk_2D[0x45 - 0x2D];
        u8 unk_45;              // (0: the level follows the team's)
        s8 unk_46;              // (a level, see MatchEngine::func_0206ccb8)
        u8 unk_47[0x4A - 0x47];
        u8 unk_4A;
        u8 unk_4B[0xC5];
    };
};

#define GAME_EXTRA_SIZE 0x5210

class GameState {
public:
    void LoadExtra(void *src);
    void SaveExtra(void *dst);

    u8 unk_000[0x78];
    u32 unk_078;                // (a bit per match player, see MatchEngine::func_020740cc)
    u8 unk_07c[0xAC - 0x7C];
    SaveBlock0 block0;          // 0x0AC
    SaveProfile profile;        // 0x4AC
    SaveBlock2 block2;          // 0x5BC
    SaveBlock3 block3;          // 0x5E4
    SaveBlock4 block4;          // 0x5E8
    SaveBlock4 block5;          // 0x714
    SaveBlock6 block6;          // 0x840
    SaveBlock7 block7;          // 0x9B6
    SaveBlock8 block8;          // 0x9C0
    SaveBlock9 block9;          // 0x9CC
    SaveBlock10 block10;        // 0x9F6
    SaveBlock11 block11;        // 0xA04
    SaveBlock12 block12;        // 0xBA8
    s16 unk_1238;
    s16 unk_123A;
    u8 unk_123C;
    SaveBlock13 block13;        // 0x123D
    u8 unk_1268[4];
    void *extra;                // 0x126C: GAME_EXTRA_SIZE bytes, saved when present
    u32 extraCrc;
    u8 unk_1274[0xD];
    u8 unk_1281;
    u8 unk_1282[2];
    u32 playTime;               // 0x1284
};

extern GameState gGameState;

#endif // GAME_GAMESTATE_HPP
