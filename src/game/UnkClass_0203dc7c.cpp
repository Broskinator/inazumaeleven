#include "game/UnkClass_0203dc7c.hpp"
#include "game/UnkClass_020621b4.hpp"
#include "nitro/mi.h"

extern "C" char data_020abe94[];        // the vtable
extern "C" void func_ov015_02132554(int);
extern "C" void func_ov015_02132600(int);
extern "C" void func_ov015_02132614(int);
extern "C" BOOL func_ov015_02132774(UnkObject *object);
extern "C" BOOL func_ov015_02132784(UnkObject *object);
extern "C" void func_ov015_021327ec(int which);

UnkClass_0203dc7c *UnkClass_0203dc7c::func_0203dc7c()
{
    vtable = data_020abe94;
    func_0203dc9c();
    return this;
}

void UnkClass_0203dc7c::func_0203dc9c()
{
    depth[0] = 0;
    depth[1] = 0;
    MI_CpuFill8(stack, 0, sizeof(stack));
    children[0] = NULL;
    children[1] = NULL;
    swapPending = FALSE;
    swapped = FALSE;
    changed[0] = FALSE;
    changed[1] = FALSE;
    mode[0] = UNK_STACK_SET;
    mode[1] = UNK_STACK_SET;
    current[0] = 0;
    current[1] = 0;
}

int UnkClass_0203dc7c::func_0203dcec(int a, int b)
{
    if (swapped) {
        if (children[1] != NULL && !func_ov015_02132784(children[1])) {
            children[1]->vtable->func_08(children[1], a, b);
        }
    } else {
        if (children[0] != NULL && !func_ov015_02132774(children[0])) {
            children[0]->vtable->func_08(children[0], a, b);
        }
    }
    data_020e88a0.func_0206b3c4(a, b);
    return 0;
}

int UnkClass_0203dc7c::func_0203dd74(int a)
{
    if (swapped) {
        if (children[1] != NULL && !func_ov015_02132784(children[1])) {
            children[1]->vtable->func_0c(children[1], a);
        }
    } else {
        if (children[0] != NULL && !func_ov015_02132774(children[0])) {
            children[0]->vtable->func_0c(children[0], a);
        }
    }
    return 0;
}

int UnkClass_0203dc7c::func_0203dde0(int which)
{
    if (which == 0) {
        if (children[0] != NULL) {
            int value = children[0]->vtable->func_14(children[0]);

            children[0]->vtable->func_18(children[0], value);
        }
    } else {
        if (children[1] != NULL) {
            int value = children[1]->vtable->func_14(children[1]);

            children[1]->vtable->func_18(children[1], value);
        }
    }
    return 0;
}

int UnkClass_0203dc7c::func_0203de48()
{
    return 0;
}

int UnkClass_0203dc7c::func_0203de50(int which)
{
    func_ov015_021327ec(which);
    if (which == 0) {
        if (children[0] != NULL) {
            children[0]->vtable->func_1c(children[0]);
        }
    } else {
        if (children[1] != NULL) {
            children[1]->vtable->func_1c(children[1]);
        }
    }
    return 0;
}

// deletes an object and unloads the overlay its code is in
void UnkClass_0203dc7c::func_0203de9c(UnkObject *object, UnkOverlayObject *list)
{
    for (; list->id != 0; list++) {
        if (list->loaded && list->object == object) {
            FS_UnloadOverlay(MI_PROCESSOR_ARM9, list->overlay);
            if (list->object != NULL) {
                list->object->vtable->Delete(list->object);
            }
            list->object = NULL;
            return;
        }
    }
}

void UnkClass_0203dc7c::func_0203df08()
{
    if (children[0] != NULL) {
        func_ov015_02132554(6);
    }
}

void UnkClass_0203dc7c::func_0203df24()
{
    if (children[0] != NULL) {
        func_ov015_02132600(6);
    }
}

void UnkClass_0203dc7c::func_0203df40()
{
    if (children[1] != NULL) {
        func_ov015_02132614(6);
    }
}

int UnkClass_0203dc7c::func_0203df5c(int a)
{
    if (children[0] == NULL) {
        return -1;
    }
    return children[0]->vtable->func_60(children[0], a);
}

int UnkClass_0203dc7c::func_0203df80()
{
    return -1;
}

int UnkClass_0203dc7c::func_0203df88(int a)
{
    if (children[1] == NULL) {
        return -1;
    }
    return children[1]->vtable->func_60(children[1], a);
}

int UnkClass_0203dc7c::func_0203dfac(int a)
{
    if (children[0] == NULL) {
        return -1;
    }
    return children[0]->vtable->func_64(children[0], a);
}

int UnkClass_0203dc7c::func_0203dfd0()
{
    return -1;
}

int UnkClass_0203dc7c::func_0203dfd8(int a)
{
    if (children[1] == NULL) {
        return -1;
    }
    return children[1]->vtable->func_64(children[1], a);
}

int UnkClass_0203dc7c::func_0203dffc()
{
    if (children[0] == NULL) {
        return -1;
    }
    return children[0]->vtable->func_68(children[0]);
}

int UnkClass_0203dc7c::func_0203e020()
{
    return -1;
}

int UnkClass_0203dc7c::func_0203e028()
{
    if (children[1] == NULL) {
        return -1;
    }
    return children[1]->vtable->func_68(children[1]);
}

// replaces the top of a stack
void UnkClass_0203dc7c::func_0203e04c(int index, int value)
{
    UnkStackEntry *entry = &stack[depth[index]][index];

    mode[index] = UNK_STACK_SET;
    changed[index] = entry->next != value;
    entry->next = value;
}

void UnkClass_0203dc7c::func_0203e090(int index, int value)
{
    UnkStackEntry *entry = &stack[depth[index] + 1][index];

    mode[index] = UNK_STACK_PUSH;
    changed[index] = TRUE;
    entry->next = value;
}

void UnkClass_0203dc7c::func_0203e0cc(int index)
{
    UnkStackEntry *entry = &stack[depth[index] - 1][index];

    mode[index] = UNK_STACK_POP;
    changed[index] = TRUE;
    entry->next = entry->value;
    entry->value = 0;
}

// applies the pending change of a stack
void UnkClass_0203dc7c::func_0203e114(int index, int arg)
{
    int level = depth[index];
    UnkStackEntry *entry;

    current[index] = stack[level][index].value;
    switch (mode[index]) {
    case UNK_STACK_POP:
        level--;
        break;
    case UNK_STACK_PUSH:
        level++;
        break;
    }
    entry = &stack[level][index];
    depth[index] = level;
    mode[index] = UNK_STACK_SET;
    changed[index] = FALSE;
    entry->previous = entry->value;
    entry->value = arg;
}

int UnkClass_0203dc7c::func_0203e18c()
{
    int level = depth[0];

    switch (mode[0]) {
    case UNK_STACK_POP:
        level--;
        break;
    case UNK_STACK_PUSH:
        level++;
        break;
    }
    return stack[level][0].value;
}

int UnkClass_0203dc7c::func_0203e1bc()
{
    int level = depth[0];

    switch (mode[0]) {
    case UNK_STACK_POP:
        level--;
        break;
    case UNK_STACK_PUSH:
        level++;
        break;
    }
    return stack[level][0].next;
}

int UnkClass_0203dc7c::func_0203e1ec()
{
    return current[0];
}

int UnkClass_0203dc7c::func_0203e1f4()
{
    int level = depth[1];

    switch (mode[1]) {
    case UNK_STACK_POP:
        level--;
        break;
    case UNK_STACK_PUSH:
        level++;
        break;
    }
    return stack[level][1].value;
}

int UnkClass_0203dc7c::func_0203e224()
{
    int level = depth[1];

    switch (mode[1]) {
    case UNK_STACK_POP:
        level--;
        break;
    case UNK_STACK_PUSH:
        level++;
        break;
    }
    return stack[level][1].next;
}

int UnkClass_0203dc7c::func_0203e254()
{
    return current[1];
}

// swaps the screens if asked to
void UnkClass_0203dc7c::func_0203e25c()
{
    if (!swapPending) {
        return;
    }
    if (swapped) {
        REG_POWCNT = REG_POWCNT & ~0x8000;
    } else {
        REG_POWCNT = REG_POWCNT | 0x8000;
    }
    swapped = swapped ? FALSE : TRUE;
    swapPending = FALSE;
}

BOOL UnkClass_0203dc7c::func_0203e2b0(int value)
{
    return (u32)(value - 90) <= 3;
}

void UnkClass_0203dc7c::func_0203e2c4()
{
}

void UnkClass_0203dc7c::func_0203e2c8()
{
}

UnkClass_0203dc7c *UnkClass_0203dc7c::func_0203e2cc()
{
    operator delete(this);
    return this;
}

void UnkClass_0203dc7c::func_0203e2e0()
{
}

void UnkClass_0203dc7c::func_0203e2e4()
{
}

void UnkClass_0203dc7c::func_0203e2e8()
{
}

void UnkClass_0203dc7c::func_0203e2ec()
{
}

void UnkClass_0203dc7c::func_0203e2f0()
{
}

void UnkClass_0203dc7c::func_0203e2f4()
{
}

void UnkClass_0203dc7c::func_0203e2f8()
{
}
