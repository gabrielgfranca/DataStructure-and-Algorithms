#ifndef DATASTRUCTURE_AND_ALGORITHMS_ARRAY_H
#define DATASTRUCTURE_AND_ALGORITHMS_ARRAY_H

int insert(int array[], int capacity, int length, int element, int index);
int array_push(int array[], int capacity, int length, int element);
int unshift(int array[], int capacity, int length, int element);
int array_pop(int array[], int length);
int shift(int array[], int length);
int remove_at(int array[], int capacity, int length, int index);

#endif //DATASTRUCTURE_AND_ALGORITHMS_ARRAY_H