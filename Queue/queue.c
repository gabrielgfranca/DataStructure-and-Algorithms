//-------------------------------
//          queue
//-------------------------------

/*
- A queue is a linear data structure that follows the First In First Out (FIFO)
order of insertion and deletion.
- The element that is inserted first will be the first one to be removed and the
element that is inserted last will be removed at last.
- We can implement a queue in C using either an array or a linked list.
*/

#include <stdbool.h>
#include <stdio.h>

#define MAX_SIZE 100

typedef struct Queue {
    int array[MAX_SIZE];
    int head;
    int tail;
    int size;
} Queue;

void createQueue(Queue *queue) {
    queue->head = 0;
    queue->tail = 0;
    queue->size = 0;
}

bool queue_isEmpty(Queue *queue) {
    return queue->size == 0 ? true : false;
}

bool queue_isFull(Queue *queue) {
    return queue->size == MAX_SIZE ? true : false;
}

void enqueue(Queue *queue, int data) {
    if (queue_isFull(queue)) {
        printf("Queue Overflow\n");
        return;
    }
    queue->array[queue->tail] = data;
    queue->tail++;
    queue->size++;
}

int dequeue(Queue *queue) {
    if (queue_isEmpty(queue)) {
        printf("Queue Underflow\n");
        return -1;
    }

    int data = queue->array[queue->head];
    queue->head++;
    queue->size--;
    return data;
}

int queue_peek(Queue *queue) {
    if (queue_isEmpty(queue)) {
        printf("Queue Underflow\n");
        return -1;
    }
    return queue->array[queue->head];
}

void queue_clear(Queue *queue) {
    if (queue_isEmpty(queue)) {
        printf("Queue Underflow\n");
        return;
    }
    queue->head = 0;
    queue->tail = 0;
    queue->size = 0;
}

void printQueue(Queue *queue) {
    if (queue_isEmpty(queue)) {
        printf("Queue is Empty\n");
        return;
    }

    for (int i = queue->head; i < queue->tail; i++) {
        printf("%d ", queue->array[i]);
    }

    printf("\n");
}