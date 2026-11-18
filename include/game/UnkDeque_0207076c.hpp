#ifndef GAME_UNKDEQUE_0207076C_HPP
#define GAME_UNKDEQUE_0207076C_HPP

#include "nitro/types.h"

// The ring buffer that holds the pointers to the deque's blocks (MSL's __cdeque): its data,
// and the number of entries at 8
class UnkDequeBuffer_0207076c {
public:
    void **data;
    u32 unk_4;
    u32 size;
    u32 unk_c;

    UnkDequeBuffer_0207076c *func_02071df8();
    UnkDequeBuffer_0207076c *func_020720b0();
};

// An iterator of that ring buffer: the entry, the buffer, its first entry and the buffer's end
// (two instances of the same template, the second one at 0x020724f4)
class UnkDequeIterator_0207076c {
public:
    void **cur;
    void **begin;
    void **start;
    void **end;

    void func_020720e4(int n);
    int func_02072128(const UnkDequeIterator_0207076c &other) const;
    void func_020724f4(int n);
    int func_02072538(const UnkDequeIterator_0207076c &other) const;
};

// A position in the deque: the block (an iterator of the ring buffer) and the entry in it
struct UnkDequePos_0207076c {
    UnkDequeIterator_0207076c block;
    u32 *entry;
};

// A container of blocks of 0x100 entries (template code, in the match data's file;
// the match data has one, see func_0206d6b4): an MSL deque of 4-byte values
class UnkDeque_0207076c {
public:
    u32 start;                       // the first entry's index in the first block
    u32 count;
    UnkDequeBuffer_0207076c blocks;  // the blocks

    void func_0207076c(const u32 &value);
    void func_020707e4();
    void func_02070854(u32 n);
    void func_02070d64();
    static void func_02070e34(const char *message);
    void func_02070e44();
    void func_02070f6c();
    void func_020710f0();
    static void func_020711fc();
    void func_02071214();
    void func_020717ac();
    void func_02071978();
    void func_02071b00();
    void func_02071c68();
    UnkDequePos_0207076c func_02071d38(u32 index);
    void func_02071e2c();
    void func_02071ea8();
    void func_02071fb0();
    void func_0207219c();
    void func_02072230();
    void func_020723a8();
    void func_02072478();

};

#endif // GAME_UNKDEQUE_0207076C_HPP
