#ifndef SYSTEM_GAMEMAIN_HPP
#define SYSTEM_GAMEMAIN_HPP

#include "nitro/types.h"

// The game's entry point (the start-up steps, then the main loop) and the destructors of its systems
class Main {
public:
    static void func_0204054c();
    static void func_02040560();
    static void func_02040574();
    static void func_02040584();
    static void func_02040588();
    static void func_0204058c();
    Main *func_020405dc();
    void func_020405f0();
    Main *func_020405f4();
    Main *func_0204061c();
    Main *func_0204063c();
    Main *func_02040650();
    Main *func_02040664();
    Main *func_02040678();
    static void *func_0204069c(void *arg, u32 size);
    static void *func_020406b4(void *arg, void *ptr);
    void func_020406d4();
};

#endif // SYSTEM_GAMEMAIN_HPP
