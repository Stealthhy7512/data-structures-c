#include <stdio.h>
#include <stdlib.h>
#include "deque.h"
#include "queue.h"

queue_t* make_queue() {
  queue_t* queue = malloc(sizeof(queue_t));
  queue->back = NULL;
  queue->front = NULL;
}

void queue_push(queue_t* queue, void* value) {
  deque_node_t* node = malloc(sizeof(deque_node_t));
  node->value = value;
  node->prev = queue->back;
  node->next = NULL;
  if (queue->back) { queue->back->next = node; } else { queue->front = node; }
  queue->back = node;
}

void queue_pop(queue_t* queue) {
  queue->front = queue->front->next;
  if (queue->front) { queue->front->prev = NULL; } else { queue->front = NULL; }
}

void* queue_front(queue_t* queue) {
  deque_node_t* node = queue->front;
  return node;
}

// null null