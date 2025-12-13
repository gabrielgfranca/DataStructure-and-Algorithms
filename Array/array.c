// Adding an element at the end of the array
int push(int array[], int capacity, int length, int element) {
    if (length >= capacity) return length;
    array[length] = element;
    return length + 1;
}

// Adding an element at specific position
int insert(int array[], int capacity, int length, int element, int index) {
    if (length >= capacity || index < 0 || index > length) return length;
    for (int i = length; i > index; i--) {
        array[i] = array[i - 1];
    }
    array[index] = element;
    return length + 1;
}

// Adding an element at the beginning of the array
int unshift(int array[], int capacity, int length, int element) {
    if (length >= capacity) return length;
    for (int i = length; i > 0; i--) {
        array[i] = array[i - 1];
    }
    array[0] = element;
    return length + 1;
}

// Removing an element at the end of the array
int pop(int array[], int length) {
    if (length <= 0) return length;
    for (int i = 0; i < length - 1; i++) {
        array[i] = array[i + 1];
    }
    return length - 1;
}

// Removing an element at the beginning of the array
int shift(int array[], int length) {
    if (length <= 0) return length;
    for (int i = 0; i < length - 1; i++) {
        array[i] = array[i + 1];
    }
    return length - 1;
}

// Adding an element at specific position
int remove_at(int array[], int capacity, int length, int index) {
    if (length <= 0 || index < 0 || index >= length) return length;
    for (int i = index; i < length - 1; i++) {
        array[i] = array[i + 1];
    }
    return length - 1;
}
