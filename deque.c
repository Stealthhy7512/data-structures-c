#include <stdio.h>
#include <stdlib.h>
#include "deque.h"

deque_t* make_deque() {
  deque_t* deque = malloc(sizeof(deque_t));
  deque->front = NULL;
  deque->rear = NULL;

  return deque;
}

void push_front(deque_t* deque, void* value) {
  deque_node_t* node = malloc(sizeof(deque_node_t));

  node->value = value;
  node->prev = NULL;
  node->next = deque->front;
  if (deque->front) { deque->front->prev = node; } else { deque->rear = node; } 
  deque->front = node;
}

void push_back(deque_t* deque, void* value) {
  deque_node_t* node = malloc(sizeof(deque_node_t));

  node->value = value;
  node->prev = deque->rear;
  node->next = NULL;
  if (deque->rear) { deque->rear->next = node; } else { deque->front = node; }
  deque->rear = node;
}

void* peek_front(deque_t* deque) {
  if (deque->front) { return deque->front->value; }
}

void* peek_rear(deque_t* deque) {
  if (deque->rear) { return deque->rear->value; }
}