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
DEQUE_INIT(deque, int);
DEQUE_INIT(deque_char, char);

DEQUE_PUSH_BACK(deque, int, 10);              deque = [10] 
DEQUE_PUSH_FRONT(deque_char, char, 'A');      deque_char = ['A']

printf("%d", DEQUE_PEEK_BACK(deque));         >> 10
printf("%c", DEQUE_PEEK_FRONT(deque_char));   >> 'A'

DEQUE_POP_FRONT(deque);                       deque = []
DEQUE_POP_BACK(deque_char);                   deque_char = []
```

#### [Queue](queue)
```C
// Example usage
QUEUE_INIT(queue);

ENQUEUE(queue, int, 20);                      queue = [20]
ENQUEUE(queue, int, 30);                      queue = [20, 30]

while (!QUEUE_EMPTY(queue)) {                 >> 20 30
  printf("%d ", QUEUE_PEEK(queue));
  DEQUEUE(queue);
}
```

#### [Stack](stack)
```C
// Example usage
INIT_STACK(stack, double);

STACK_PUSH(stack, double, 10);                stack = [10]
STACK_PUSH(stack, double, 3.14);              stack = [3.14, 10]

while (!STACK_EMPTY(stack)) {                 >> 3.14 10.00
  printf("%.2lf ", STACK_TOP(stack));
  STACK_POP(stack);
}
```