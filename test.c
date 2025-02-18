#include <stdio.h>
#include "deque.h"
#include "queue.h"
#include "stack.h"

int main() {
  // deque_t* deque = make_deque();
  // int x = 5;
  // push_back(deque,(void*)5);
  // push_front(deque, (void*)1);
  // printf("%d", peek_front(deque));
  // printf("%d", peek_rear(deque));

  deque_t* queue = make_deque();
  queue_push(queue, (void*)12);
  queue_push(queue, (void*)15);
  queue_push(queue, (void*)18);

  while (queue_front(queue) != NULL) {
    printf("%d ", queue_front(queue));
    queue_pop(queue);
  }
  fputc('\n', stdout);

  deque_t* stack = make_deque();
  stack_push(stack, (void*)10);
  stack_push(stack, (void*)12);
  stack_push(stack, (void*)14);

  while (!empty(stack)) {
    printf("%d ", stack_top(stack));
    stack_pop(stack);
  }
  fputc('\n', stdout);
}