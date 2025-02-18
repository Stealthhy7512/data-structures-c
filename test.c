#include <stdio.h>
#include "deque.h"
#include "queue.h"

int main() {
  // deque_t* deque = make_deque();
  // int x = 5;
  // push_back(deque,(void*)5);
  // push_front(deque, (void*)1);
  // printf("%d", peek_front(deque));
  // printf("%d", peek_rear(deque));
  queue_t* queue = make_queue();
  queue_push(queue, (void*)10);
  queue_push(queue, (void*)'A');
  queue_push(queue, (void*)-2);

  printf("%d\n", *(int*)queue_front(queue));
  queue_pop(queue);
  printf("%c\n", *(char*)queue_front(queue));
  queue_pop(queue);
  printf("%d\n", *(int*)queue_front(queue));
  queue_pop(queue);
}