//-------------------------------
//          Deque
//-------------------------------

/*
- It is exactly like a queue except that it does not follow the FIFO rule (First
in first out)
- the elements can be added to or removed from either the front(head) or
back(tail) of the deque.
*/

#include <stdbool.h>
#include <stdio.h>

#define MAX_SIZE 100

typedef struct Deque {
    int array[MAX_SIZE];
    int head;
    int tail;
    int size;
} Deque;

void createDeque(Deque *queue) {
    queue->head = 0;
    queue->tail = 0;
    queue->size = 0;
}

bool deque_isEmpty(Deque *queue) {
    return queue->size == 0 ? true : false;
}

bool deque_isFull(Deque *queue) {
    return queue->size == MAX_SIZE ? true : false;
}

void addFront(Deque *queue, int data) {
    if (deque_isFull(queue)) {
        printf("Deque is full\n");
        return;
    }
    for (int i = queue->size; i >= 1; i--) {
        queue->array[i] = queue->array[i - 1];
    }
    queue->array[0] = data;
    queue->head = 0;
    queue->size++;
}

void addBack(Deque *queue, int data) {
    if (deque_isFull(queue)) {
        printf("Deque Overflow\n");
        return;
    }
    queue->array[queue->tail] = data;
    queue->tail++;
    queue->size++;
}

int removeFront(Deque *queue) {
    if (deque_isEmpty(queue)) {
        printf("Deque Underflow\n");
        return -1;
    }

    int data = queue->array[queue->head];
    queue->head++;
    queue->size--;
    return data;
}

int removeBack(Deque *queue) {
    if (deque_isEmpty(queue)) {
        printf("Deque Underflow\n");
        return -1;
    }
    int removed = queue->array[queue->tail];
    queue->tail--;
    queue->size--;
    return removed;
}

int peekFront(Deque *queue) {
    if (deque_isEmpty(queue)) {
        printf("Deque Underflow\n");
        return -1;
    }
    return queue->array[queue->head];
}

int peekBack(Deque *queue) {
    if (deque_isEmpty(queue)) {
        printf("Deque Underflow\n");
        return -1;
    }
    return queue->array[queue->tail - 1];
}

void deque_clear(Deque *queue) {
    if (deque_isEmpty(queue)) {
        printf("Deque is empty\n");
        return;
    }
    queue->head = 0;
    queue->tail = 0;
    queue->size = 0;
}

void printDeque(Deque *queue) {
    if (deque_isEmpty(queue)) {
        printf("Deque is empty\n");
        return;
    }
    for (int i = queue->head; i < queue->tail; i++) {
        printf("%d ", queue->array[i]);
    }
    printf("\n");
}