#include "stack.h"
#include "deque.h"

void* stack_top(deque_t* stack) {
  return peek_back(stack);
}

void stack_push(deque_t* stack, void* value) {
  push_back(stack, value);
}

void stack_pop(deque_t* stack) {
  pop_right(stack);
}