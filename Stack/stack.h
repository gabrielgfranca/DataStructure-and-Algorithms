#ifndef STACK_H
#define STACK_H

#include <stdbool.h>

#define MAX_SIZE 100

typedef struct Stack {
    int array[MAX_SIZE];
    int top;
    int size;
} Stack;

void createStack(Stack *stack);
bool isEmpty(Stack *stack);
bool isFull(Stack *stack);
void push(Stack *stack, int data);
int pop(Stack *stack);
int peek(Stack *stack);
void clear(Stack *stack);
void printStack(Stack *stack);

#endif