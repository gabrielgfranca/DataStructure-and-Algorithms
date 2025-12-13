#include <stdio.h>
#include "Array/array.h"

int main(void) {
    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int length = sizeof(array) / sizeof(array[0]);

    for (int i = 0; i < length; i++) {
        printf("%d", array[i]);
    }

    length = remove_at(array, 10, length, 3);

    printf("---");

    for (int i = 0; i < length; i++) {
        printf("%d", array[i]);
    }
}