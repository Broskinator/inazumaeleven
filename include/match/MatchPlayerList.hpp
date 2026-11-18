#ifndef MATCH_MATCHPLAYERLIST_HPP
#define MATCH_MATCHPLAYERLIST_HPP

#include "nitro/types.h"
#include "match/Match.hpp"

struct MatchPlayer;
class MatchEngine;

// The object at the match data's 0xB80 (vtable data_020af3f0): the players by index and team
class MatchPlayerList {
public:
    MatchPlayerList *func_02083060();
    MatchPlayerList *func_02083078();
    void func_02083090();
    MatchPlayerList *func_02083094();
    void func_020830a8();
    void func_020830ac();
    int func_020831f8(int a);
    MatchPlayer *func_020832a8(int index);
    MatchPlayer *func_020832b4(int team, int i);
    void func_020832c8();
    BOOL func_020832e0();
    BOOL func_020832f4();
    int func_02083308();
    BOOL func_0208331c(MatchPlayer *player);
    int func_02083378(int a, int b);
    void func_02083394();
    BOOL func_02083448(int side, MatchPoint *point, int distance);
    int func_020834e0(BOOL side, int b);
    BOOL func_02083504();
    void func_0208350c(MatchEngine *match);
    BOOL func_02083514();

    void **vtable;
    MatchEngine *match;   // (the owner)
    MatchPlayer *players[22];   // (11 per team)
};

#endif // MATCH_MATCHPLAYERLIST_HPP
