#ifndef STACK_H
#define STACK_H

#include "deque.h"

void* stack_top(deque_t*);
void stack_push(deque_t*, void*);
void stack_pop(deque_t*);
int empty(deque_t*);

#endif