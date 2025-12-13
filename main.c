#include <stdio.h>
#include "Array/array.h"
#include "Stack/stack.h"

int main(void) {
    Stack stack;
    createStack(&stack);

    stackPush(&stack, 10);
    stackPush(&stack, 20);
    stackPush(&stack, 30);
    stackPush(&stack, 40);

    printStack(&stack);
    stackPop(&stack);

    printStack(&stack);
    stackPop(&stack);

    printStack(&stack);
    stackPop(&stack);

    printStack(&stack);
    stackPop(&stack);

    printStack(&stack);
    stackPop(&stack);

    printStack(&stack);
}
