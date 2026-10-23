#ifndef GAME_UNKCLASS_02083060_HPP
#define GAME_UNKCLASS_02083060_HPP

#include "nitro/types.h"

struct MatchPlayer;

// The object at the match data's 0xB80 (vtable data_020af3f0): the players by index and team
class UnkClass_02083060 {
public:
    void func_02083060();
    void func_02083078();
    void func_02083090();
    void func_02083094();
    void func_020830a8();
    void func_020830ac();
    int func_020831f8(int a);
    MatchPlayer *func_020832a8(int index);     // (the player with that index)
    MatchPlayer *func_020832b4(int team, int i);
    void func_020832c8();
    void func_020832e0();
    void func_020832f4();
    void func_02083308();
    void func_0208331c();
    void func_02083378();
    void func_02083394();
    void func_02083448();
    void func_020834e0();
    void func_02083504();
    void func_0208350c();
    void func_02083514();

    void **vtable;
};

#endif // GAME_UNKCLASS_02083060_HPP
