# Data Structures in C

Generic implementations of common data structures written in C.

<!-- Currently supported data structures:
- Deque
- Queue
- Stack

To-do:
- Binary Tree
- Graph
- Binary Search Tree
- Priority Queue
- Heap Tree
- Trie(?) -->

#### [Double ended queue](deque)
```C
// Example usage
deque_t deque = make_deque();
push_back(deque, (void *)10);
push_front(deque, (void *)'A');
printf("%c", peek_front(deque));
printf("%d", peek_back(deque));

pop_left(deque);
pop_right(deque);
```

#### [Queue](queue)
```C
// Example usage
deque_t queue = make_deque();
enqueue(queue, (void *)20);
enqueue(queue, (void *)30);

while (!empty(queue)) {
  printf("%d ", dequeue(queue));
}
void* front = queue_peek(queue);
```

#### [Stack](stack)
```C
// Example usage
deque_t stack = make_deque();
stack_push(stack, (void *)1);
stack_push(stack, (void *)2);

while (!empty(stack)) {
  printf("%d ", stack_top(stack));
  stack_pop(stack);
}
```