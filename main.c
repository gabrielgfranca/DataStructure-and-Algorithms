#include <stdio.h>
#include "Queue/queue.h"

int main(void) {
    Queue queue;
    createQueue(&queue);

    enqueue(&queue, 10);
    enqueue(&queue, 20);
    enqueue(&queue, 30);
    enqueue(&queue, 40);
    enqueue(&queue, 50);

    printQueue(&queue);

    dequeue(&queue);
    dequeue(&queue);

    enqueue(&queue, 60);

    printQueue(&queue);
}
