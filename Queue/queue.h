#ifndef QUEUE_H
#define QUEUE_H

#include <stdbool.h>

#define MAX_SIZE 100

typedef struct Queue {
    int array[MAX_SIZE];
    int head;
    int tail;
    int size;
} Queue;

void createQueue(Queue *queue);
bool queue_isEmpty(Queue *queue);
bool queue_isFull(Queue *queue);
void enqueue(Queue *queue, int element);
void dequeue(Queue *queue);
int queue_peek(Queue *queue);
void queue_clear(Queue *queue);
void printQueue(Queue *queue);

#endif