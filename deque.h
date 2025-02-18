#ifndef DEQUE_H
#define DEQUE_H

typedef struct s_deque_node{
  void* value;
  struct s_deque_node* next;
  struct s_deque_node* prev;
} deque_node_t;

typedef struct s_deque {
  struct s_deque_node* front;
  struct s_deque_node* back;
} deque_t;

deque_t* make_deque(void);
void push_front(deque_t*, void*);
void push_back(deque_t*, void*);
void pop_left(deque_t*);
void pop_right(deque_t*);
void* peek_front(deque_t*);
void* peek_back(deque_t*);
extern int empty(deque_t*);

#endif