#ifndef QUEUE_H
#define QUEUE_H

#include "../deque/deque.h"

#define INIT_QUEUE(name, type)              \
    INIT_DEQUE(name, type)

#define ENQUEUE(name, type, data)           \
    DEQUE_PUSH_BACK(name, type, data)

#define DEQUEUE(name)                       \
    DEQUE_POP_FRONT(name)

#define QUEUE_PEEK(name)                    \
    DEQUE_PEEK_FRONT(name)

#define QUEUE_EMPTY(name)                   \
    !name->front || !name->back

#define QUEUE_SIZE(name)    (name->size)

#endif