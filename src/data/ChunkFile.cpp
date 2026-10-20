#include "data/ChunkFile.hpp"
#include "nitro/std.h"

#define NEXT_BLOCK(block) ((ChunkBlock *)((u8 *)(block) + (block)->size))
#define NEXT_ITEM(item) ((ChunkItem *)((u8 *)(item) + (item)->size))

ChunkFile::ChunkFile()
{
    header = NULL;
}

ChunkFile::~ChunkFile()
{
}

// (nonmatching: the original has no check before the second loop of version 2)
#ifdef NONMATCHING
BOOL ChunkFile::Init(void *data, const char *signature)
{
    u32 version;

    header = (ChunkFileHeader *)data;
    if (data == NULL) {
        return FALSE;
    }

    if (signature != NULL) {
        STD_CompareString(header->signature, signature);
    }

    version = header->version & 0xFFFF0000;
    if (version == CHUNK_FILE_VERSION_2) {
        ChunkBlock *block = (ChunkBlock *)((u8 *)(header + 1) - 0x10);
        ChunkItem *item;
        int i;
        int n;

        blocks = (u8 *)block;
        itemsOffset = 0;
        for (i = 0; i < header->numBlocks; i++) {
            itemsOffset += block->size;
            block = NEXT_BLOCK(block);
        }

        block = (ChunkBlock *)blocks;
        item = (ChunkItem *)(blocks + itemsOffset);
        numItems = *(s32 *)item;
        item = (ChunkItem *)((u8 *)item + 4);
        items = item;
        itemsSize = item->size;

        i = 0;
        n = 0;
        while (i < header->numBlocks) {
            if (block->id == item->blockId) {
                do {
                    block->items[item->index] = item->data;
                    n++;
                    if (n >= numItems) {
                        break;
                    }
                    item = NEXT_ITEM(item);
                    itemsSize += item->size;
                } while (block->id == item->blockId);
            }
            block = NEXT_BLOCK(block);
            i++;
        }
    } else if (version == CHUNK_FILE_VERSION_3) {
        ChunkBlock *block = (ChunkBlock *)(header + 1);
        ChunkItem *item;
        int i;
        int n;

        blocks = (u8 *)block;
        itemsOffset = header->itemsOffset;
        numItems = header->numItems;
        itemsSize = header->itemsSize;
        item = (ChunkItem *)((u8 *)block + itemsOffset);
        items = item;

        i = 0;
        n = 0;
        while (i < header->numBlocks && n < numItems) {
            if (block->id == item->blockId) {
                do {
                    block->items[item->index] = item->data;
                    n++;
                    item = NEXT_ITEM(item);
                } while (n < numItems && block->id == item->blockId);
            }
            block = NEXT_BLOCK(block);
            i++;
        }
    }

    return TRUE;
}
#else
asm BOOL ChunkFile::Init(void *data, const char *signature)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    cmp r1, #0x0
    str r1, [r4, #0x0]
    moveq r0, #0x0
    ldmeqia sp!, {r4, pc}
    cmp r2, #0x0
    beq @L_0203608c
    mov r0, r1
    mov r1, r2
    bl STD_CompareString
@L_0203608c:
    ldr lr, [r4, #0x0]
    mov r0, #0x10000
    ldr r1, [lr, #0x4]
    rsb r0, r0, #0x0
    and r0, r1, r0
    cmp r0, #0x20000
    bne @L_02036198
    add r0, lr, #0x20
    sub r3, r0, #0x10
    mov ip, #0x0
    stmib r4, {r3, ip}
    ldrsh r0, [lr, #0xc]
    cmp r0, #0x0
    ble @L_020360f0
@L_020360c4:
    ldrsh r1, [r3, #0x2]
    ldr r2, [r4, #0x8]
    ldr r0, [r4, #0x0]
    add r1, r2, r1
    str r1, [r4, #0x8]
    ldrsh r1, [r3, #0x2]
    ldrsh r0, [r0, #0xc]
    add ip, ip, #0x1
    add r3, r3, r1
    cmp ip, r0
    blt @L_020360c4
@L_020360f0:
    ldr r2, [r4, #0x4]
    ldr r1, [r4, #0x8]
    mov r3, #0x0
    add r0, r2, r1
    ldr r1, [r2, r1]
    add r0, r0, #0x4
    str r1, [r4, #0xc]
    str r0, [r4, #0x14]
    ldrh ip, [r0, #0x4]
    mov r1, r3
    str ip, [r4, #0x10]
    b @L_02036184
@L_02036120:
    ldrsh lr, [r2, #0x0]
    ldrsh ip, [r0, #0x0]
    cmp lr, ip
    bne @L_02036178
@L_02036130:
    ldrh ip, [r0, #0x2]
    add lr, r0, #0x8
    add r1, r1, #0x1
    add ip, r2, ip, lsl #0x2
    str lr, [ip, #0x8]
    ldr ip, [r4, #0xc]
    cmp r1, ip
    bge @L_02036178
    ldrh ip, [r0, #0x4]
    ldr lr, [r4, #0x10]
    add r0, r0, ip
    ldrh ip, [r0, #0x4]
    add ip, lr, ip
    str ip, [r4, #0x10]
    ldrsh lr, [r2, #0x0]
    ldrsh ip, [r0, #0x0]
    cmp lr, ip
    beq @L_02036130
@L_02036178:
    ldrsh ip, [r2, #0x2]
    add r3, r3, #0x1
    add r2, r2, ip
@L_02036184:
    ldr ip, [r4, #0x0]
    ldrsh ip, [ip, #0xc]
    cmp r3, ip
    blt @L_02036120
    b @L_02036244
@L_02036198:
    cmp r0, #0x30000
    bne @L_02036244
    add r0, lr, #0x20
    str r0, [r4, #0x4]
    ldr r2, [lr, #0x10]
    mov r1, #0x0
    str r2, [r4, #0x8]
    ldrsh ip, [lr, #0xe]
    add r2, r0, r2
    mov r3, r1
    str ip, [r4, #0xc]
    ldr ip, [lr, #0x14]
    str ip, [r4, #0x10]
    str r2, [r4, #0x14]
    b @L_02036228
@L_020361d4:
    ldrsh lr, [r0, #0x0]
    ldrsh ip, [r2, #0x0]
    cmp lr, ip
    bne @L_0203621c
@L_020361e4:
    ldrh ip, [r2, #0x2]
    add lr, r2, #0x8
    add r3, r3, #0x1
    add ip, r0, ip, lsl #0x2
    str lr, [ip, #0x8]
    ldrh lr, [r2, #0x4]
    ldr ip, [r4, #0xc]
    cmp r3, ip
    add r2, r2, lr
    bge @L_0203621c
    ldrsh lr, [r0, #0x0]
    ldrsh ip, [r2, #0x0]
    cmp lr, ip
    beq @L_020361e4
@L_0203621c:
    ldrsh ip, [r0, #0x2]
    add r1, r1, #0x1
    add r0, r0, ip
@L_02036228:
    ldr ip, [r4, #0x0]
    ldrsh ip, [ip, #0xc]
    cmp r1, ip
    bge @L_02036244
    ldr ip, [r4, #0xc]
    cmp r3, ip
    blt @L_020361d4
@L_02036244:
    mov r0, #0x1
    ldmia sp!, {r4, pc}
}
#endif

// the block after this one (the first block for NULL), NULL after the last
ChunkBlock *ChunkFile::GetNextBlock(ChunkBlock *block)
{
    ChunkBlock *next;

    if (block == NULL) {
        return (ChunkBlock *)blocks;
    }

    next = NEXT_BLOCK(block);
    if ((u32)((u8 *)next - blocks) >= header->itemsOffset) {
        next = NULL;
    }

    return next;
}
