#ifndef QUEUE_H
#define QUEUE_H

typedef struct s_queue {
  struct s_deque_node* front;
  struct s_deque_node* back;
} queue_t;

queue_t* make_queue(void);
void queue_push(queue_t*, void*);
void queue_pop(queue_t*);
void* queue_front(queue_t*);

#endif