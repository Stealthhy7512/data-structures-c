#include "queue.h"
#include "deque.h"


void queue_push(deque_t* queue, void* value) {
  push_back(queue, value);
}

void queue_pop(deque_t* queue) {
  pop_left(queue);
}

void* queue_front(deque_t* queue) {
  return peek_front(queue);
}