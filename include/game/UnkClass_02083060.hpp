#ifndef GAME_UNKCLASS_02083060_HPP
#define GAME_UNKCLASS_02083060_HPP

#include "nitro/types.h"

struct MatchPlayer;
class UnkClass_020621b4;

// The object at the match data's 0xB80 (vtable data_020af3f0): the players by index and team
class UnkClass_02083060 {
public:
    UnkClass_02083060 *func_02083060();
    UnkClass_02083060 *func_02083078();
    void func_02083090();
    UnkClass_02083060 *func_02083094();
    void func_020830a8();
    void func_020830ac();
    int func_020831f8(int a);
    MatchPlayer *func_020832a8(int index);
    MatchPlayer *func_020832b4(int team, int i);
    void func_020832c8();
    BOOL func_020832e0();
    BOOL func_020832f4();
    int func_02083308();
    void func_0208331c();
    int func_02083378(int a, int b);
    void func_02083394();
    void func_02083448();
    int func_020834e0(BOOL side, int b);
    BOOL func_02083504();
    void func_0208350c(UnkClass_020621b4 *match);
    BOOL func_02083514();

    void **vtable;
    UnkClass_020621b4 *match;   // (the owner)
    MatchPlayer *players[22];   // (11 per team)
};

#endif // GAME_UNKCLASS_02083060_HPP
