#ifndef QUEUE_H
#define QUEUE_H

#include "deque.h"

// typedef struct s_queue {
//   struct s_deque_node* front;
//   struct s_deque_node* back;
// } queue_t;

void enqueue(deque_t*, void*);
void* queue_peek(deque_t*);
void* dequeue(deque_t*);
int empty(deque_t*);

#endif