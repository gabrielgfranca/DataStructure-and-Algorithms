//-------------------------------
//          Stack
//-------------------------------

/*
- Stack is the linear data structure that follows the Last in, First Out(LIFO)
principle of data insertion and deletion.
- The element that is inserted last will be the first one to be removed and the
element that is inserted first will be removed at last.
- Stack is a linear data structure that can be implemented using arrays or
linked lists.
*/

#include <stdbool.h>
#include <stdio.h>

#define MAX_SIZE 100

typedef struct Stack {
    int array[MAX_SIZE];
    int top;
    int size;
} Stack;

void createStack(Stack *stack) {
    stack->top = -1;
    stack->size = 0;
}

bool stack_isEmpty(Stack *stack) {
    return stack->size == 0 ? true : false;
}

bool stack_isFull(Stack *stack) {
    return stack->size == MAX_SIZE ? true : false;
}

void stack_push(Stack *stack, int data) {
    if (stack_isFull(stack)) {
        printf("Stack Overflow\n");
        return;
    }
    stack->array[++stack->top] = data;
    stack->size++;
}

int stack_pop(Stack *stack) {
    if (stack_isEmpty(stack)) {
        printf("Stack Underflow\n");
        return -1;
    }
    int popData = stack->array[stack->top];
    stack->top--;
    stack->size--;
    return popData;
}

int stack_peek(Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty\n");
        return -1;
    }
    return stack->array[stack->top];
}

void stack_clear(Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty\n");
        return;
    }
    stack->top = -1;
    stack->size = 0;
}

void printStack(Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty\n");
        return;
    }

    for (int i = stack->top; i >= 0; i--) {
        printf("%d\n", stack->array[i]);
    }

    printf("\n");
}