#ifndef WIRELESS_WIRELESS_HPP
#define WIRELESS_WIRELESS_HPP

#include "nitro/types.h"
#include "nitro/wm.h"

class GameHeap;

#define WIRELESS_NUM_BSS 16

enum WirelessState {
    WIRELESS_STATE_NONE = 0,
    WIRELESS_STATE_IDLE,
    WIRELESS_STATE_BUSY,
    WIRELESS_STATE_SCANNING,
    WIRELESS_STATE_CONNECTED,
    WIRELESS_STATE_KEY_SHARING,
    WIRELESS_STATE_DATA_SHARING,
    WIRELESS_STATE_ERROR = 9,
};

// called with the data received from a player (NULL when the player disconnects)
typedef void (*WirelessReceiveCallback)(u16 aid, void *data, u16 length);

// Wireless play over the SDK's WM library (a single instance, kept in data_020c4588)
class Wireless {
public:
    void func_0203c0ec();
    void func_0203c0f0();
    void func_0203c0f4(GameHeap *heap);
    void *func_0203c0fc(u32 size);
    void func_0203c13c(void *ptr);
    void func_0203c170();
    void func_0203c358();
    void func_0203c364(BOOL flag);
    void func_0203c3bc(void *info, u16 length);
    static void func_0203c41c(void *arg);
    WMBssDesc *func_0203c420(int index);
    static void func_0203c444(void *arg);
    static void func_0203c4a4(void *arg);
    BOOL func_0203c4a8();
    static void func_0203c4d4(void *arg);
    void func_0203c540();
    static void func_0203c650(void *arg);
    BOOL func_0203c67c();
    BOOL func_0203c75c();
    static void func_0203c7e0(void *arg);
    BOOL func_0203c988();
    static void func_0203c9c0(void *arg);
    BOOL func_0203c9ec(int arg);
    static void func_0203ca48(void *arg);
    BOOL func_0203ca80(const void *data, u16 size, void *arg);
    static void func_0203cb2c(void *arg);
    static void func_0203cb90(WirelessReceiveCallback callback);
    static void func_0203cbb8(void *arg);
    void func_0203cbec(int arg);
    BOOL func_0203cc08(u16 aid, void *dest, u32 size);
    BOOL func_0203cc48();
    BOOL func_0203cc80();
    static void func_0203cca0(void *arg);
    BOOL func_0203cd04();
    static void func_0203cd24(void *arg);
    BOOL func_0203cd70();
    static void func_0203cdac(void *arg);
    BOOL func_0203cdf8(u16 arg, const void *key);
    static void func_0203ce58(void *arg);
    BOOL func_0203cebc(u16 channel);
    BOOL func_0203cef8(u16 channel);
    static void func_0203cf98(void *arg);
    BOOL func_0203d04c(u16 mode, u16 mpParam0, u16 mpParam1);
    static void func_0203d128(void *arg);
    static void func_0203d17c(void *arg);
    BOOL func_0203d2b8(u16 channel, u8 *bssid);
    BOOL func_0203d37c();
    static void func_0203d44c(void *arg);
    void func_0203d8d0();
    void func_0203d8dc();
    static void func_0203d908(void *arg);
    BOOL func_0203d960(u16 mode, int index);
    BOOL func_0203da3c();
    static void func_0203da6c(void *arg);
    static void func_0203dad8(void *arg);
    GameHeap *heap;
    u8 unk_004[0x200];          // the data sharing set
    void *sendBuffer;
    void *receiveBuffer;
    void *systemBuffer;         // for WM_Initialize
    u8 unk_210[0x10];
    u8 unk_220[0x14];
    u16 tgid;
    u8 gameInfoFlags;
    u8 unk_237;
    u32 sendSize;
    u32 receiveSize;
    void *(*alloc)(u32 size);
    void (*free)(void *ptr);
    u8 unk_248[0x18];
    WMBssDesc target;           // the parent to connect to
    WMParentParam parentParam;
    u16 unk_360;
    u16 bestChannel;            // (channel measurement)
    u16 bestBusyRatio;
    u8 unk_366[0x1A];
    WMScanExParam scanParam;
    u8 unk_3bc[0x24];
    u8 scanBuffer[0x400];
    WMBssDesc bss[WIRELESS_NUM_BSS];    // the parents found
    u16 unk_13e0;
    u8 bssMask;
    u8 bssLife[WIRELESS_NUM_BSS];
    u8 unk_13f3;
    u16 scanChannel;
    u8 unk_13f6[0xA];
    u8 dataSharing[0x820];
    u8 keySharing[0x820];
    s32 error;
    u8 unk_2444[0x18];
    u16 aid;
    u16 maxEntry;
    u16 connectedMask;
    u16 channel;
    u16 parentMaxSize;
    u16 childMaxSize;
    u16 connectMode;
    u16 state;                  // WirelessState
    u16 flags;
    u16 mpParam0;
    u16 mpParam1;
};

// the instance, and the receive callback
struct WirelessGlobals {
    Wireless *instance;
    WirelessReceiveCallback receive;
};

extern WirelessGlobals data_020c4588;

#endif // WIRELESS_WIRELESS_HPP
