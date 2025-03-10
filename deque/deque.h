#ifndef DEQUE_H
#define DEQUE_H

#include <stdlib.h>

#define INIT_DEQUE(name, type)                              \
typedef struct s_##type##_deque_node {                      \
type val;                                                   \
struct s_##type##_deque_node* prev;                         \
struct s_##type##_deque_node* next;                         \
} type##_deque_node_t;                                      \
typedef struct s_##type##_deque {                           \
struct s_##type##_deque_node* front;                        \
struct s_##type##_deque_node* back;                         \
size_t size;                                                \
} type##_deque_t;                                           \
MAKE_DEQUE(name, type)

#define MAKE_DEQUE(name, type)                              \
    type##_deque_t* name = malloc(sizeof(type##_deque_t));  \
    name->front = NULL;                                     \
    name->back = NULL;                                      \
    name->size = 0;                                         \

#define DEQUE_PUSH_FRONT(name, type, data)                  \
    do {                                                    \
        type##_deque_node_t* node;                          \
        node = malloc(sizeof(type##_deque_node_t));         \
        node->val = data;                                   \
        node->prev = NULL;                                  \
        node->next = name->front;                           \
        if (name->front) { name->front->prev = node; }      \
        else { name->back = node; }                         \
        name->front = node;                                 \
        ++name->size;                                       \
    } while (0);

#define DEQUE_PUSH_BACK(name, type, data)                   \
    do {                                                    \
        type##_deque_node_t* node;                          \
        node = malloc(sizeof(type##_deque_node_t));         \
        node->val = data;                                   \
        node->prev = name->back;                            \
        node->next = NULL;                                  \
        if (name->back) { name->back->next = node; }        \
        else { name->front = node; }                        \
        name->back = node;                                  \
        ++name->size;                                       \
    } while (0);

#define DEQUE_PEEK_FRONT(name)                              \
    name->front->val

#define DEQUE_PEEK_BACK(name)                               \
    name->back->val

#define DEQUE_POP_FRONT(name)                               \
    name->front = name->front->next;                        \
    if (name->front) name->front->prev = NULL;              \
    else name->front = NULL;                                \
    --name->size;

#define DEQUE_POP_BACK(name)                                \
    name->back = name->back->prev;                          \
    if (name->back) name->back->next = NULL;                \
    else name->back = NULL;                                 \
    --name->size;

#define DEQUE_EMPTY(name)                                   \
    !name->front || !name->back

#define DEQUE_SIZE(name)            (name->size)

#endif