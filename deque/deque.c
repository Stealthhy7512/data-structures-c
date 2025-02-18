#include <stdio.h>
#include <stdlib.h>
#include "deque.h"

deque_t* make_deque() {
  deque_t* deque = malloc(sizeof(deque_t));
  deque->front = NULL;
  deque->back = NULL;

  return deque;
}

void push_front(deque_t* deque, void* value) {
  deque_node_t* node;
  node = malloc(sizeof(deque_node_t));

  node->value = value;
  node->prev = NULL;
  node->next = deque->front;
  if (deque->front) { deque->front->prev = node; } else { deque->back = node; } 
  deque->front = node;
}

void push_back(deque_t* deque, void* value) {
  deque_node_t* node;
  node = malloc(sizeof(deque_node_t));

  node->value = value;
  node->prev = deque->back;
  node->next = NULL;
  if (deque->back) { deque->back->next = node; } else { deque->front = node; }
  deque->back = node;
}

void* peek_front(deque_t* deque) {
  return (deque->front) ? deque->front->value : NULL;
}

void* peek_back(deque_t* deque) {
  return (deque->back) ? deque->back->value : NULL;
}

void pop_left(deque_t* deque) {
  deque->front = deque->front->next;
  if (deque->front) { deque->front->prev = NULL; } else { deque->front = NULL; }
}

void pop_right(deque_t* deque) {
  deque->back = deque->back->prev;
  if (deque->back) { deque->back->next = NULL; } else { deque->back = NULL; }
}

int empty(deque_t* deque) {
  return !deque->front || !deque->back;
}