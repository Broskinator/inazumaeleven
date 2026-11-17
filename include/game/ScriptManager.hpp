#ifndef GAME_SCRIPTMANAGER_HPP
#define GAME_SCRIPTMANAGER_HPP

#include "nitro/types.h"

// A component of 0x2ACC bytes (the treasure box has one at 0x8C)
class ScriptManager {
public:
    ScriptManager * func_02060294();
    void func_020602ec();
    void func_02060310();
    void func_020603e0();
    void Callocate();
    void func_02060480(void *ptr);
    void func_02060494(void *dst);
    void func_020604f8(void *src);
    u8 *GetGlobalVariable(int i);
    void func_02060634();
    u8 *GetFileContext(int i);
    void LoadScript(int a, int b, int c, int d);
    void RequestLoad(int a, int b, int c, int d);
    void func_02060a48();
    void func_02060a98();
    s32 GetFileCode(int i);
    BOOL UnloadScript(int i);
    void RequestUnloadSlot();
    void func_02060be8();
    void func_02060c80();
    void func_02060d14();
    void func_02060ddc();
    void func_02060e80();
    void func_02060efc();
    void func_02060f54();
    void StopActiveThread();
    void func_02061258();
    void func_02061274();
    void func_020612a0(s32 value);
    void func_020612ac(s32 value);
    void func_020612b8();
    void func_0206131c();
    void func_02061358();
    void func_02061400();
    s32 func_02061450();
    void func_0206145c();
    void func_0206146c(int bit);
    u8 func_0206148c();

    u8 data[0x2ACC];
};

#endif // GAME_SCRIPTMANAGER_HPP
