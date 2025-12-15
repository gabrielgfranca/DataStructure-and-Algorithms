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
bool stack_isEmpty(Stack *stack);
bool stack_isFull(Stack *stack);
void stack_push(Stack *stack, int data);
int stack_pop(Stack *stack);
int stack_peek(Stack *stack);
void stack_clear(Stack *stack);
void printStack(Stack *stack);

#endif