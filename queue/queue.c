#include "queue.h"
#include "deque.h"


void enqueue(deque_t* queue, void* value) {
  push_back(queue, value);
}

void* dequeue(deque_t* queue) {
  void* front = peek_front(queue);
  pop_left(queue);
  return front;
}

void* queue_peek(deque_t* queue) {
  return peek_front(queue);
}