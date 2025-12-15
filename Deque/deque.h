#ifndef DEQUE_H
#define DEQUE_H

#include <stdbool.h>

#define MAX_SIZE 100

typedef struct Deque {
    int array[MAX_SIZE];
    int head;
    int tail;
    int size;
} Deque;

void createDeque(Deque *queue);
bool deque_isEmpty(Deque *queue);
bool deque_isFull(Deque *queue);
void addFront(Deque *queue, int data);
void addBack(Deque *queue, int data);
int removeFront(Deque *queue);
int removeBack(Deque *queue);
int peekFront(Deque *queue);
int peekBack(Deque *queue);
void deque_clear(Deque *queue);
void printDeque(Deque *queue);

#endif