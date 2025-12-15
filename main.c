#include <stdio.h>
#include "Deque/deque.h"

int main(void) {
    Deque deque;
    createDeque(&deque);

    addFront(&deque, 1);   // [1]
    addBack(&deque, 3);    // [1,3]
    addFront(&deque, 0);   // [0,1,3]
    printDeque(&deque);        // 0 1 3

    printf("peekFront: %d\n", peekFront(&deque));  // 0
    printf("peekBack: %d\n", peekBack(&deque));    // 3

    printf("removeFront: %d\n", removeFront(&deque));  // 0
    printf("removeBack: %d\n", removeBack(&deque));    // 3

    printDeque(&deque);  // 1
    return 0;
}
