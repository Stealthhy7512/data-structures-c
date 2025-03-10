#ifndef STACK_H
#define STACK_H

#include "../deque/deque.h"

#define INIT_STACK(name, type)              \
    INIT_DEQUE(name, type)

#define STACK_PUSH(name, type, data)        \
    DEQUE_PUSH_FRONT(name, type, data)

#define STACK_POP(name)                     \
    DEQUE_POP_FRONT(name)

#define STACK_TOP(name)                     \
    DEQUE_PEEK_FRONT(name)

#define STACK_SIZE(name)    (name->size)

#define STACK_EMPTY(name)                   \
    !name->front || !name->back

#endif