#include <stdio.h>

int binary_search(int *array, size_t left, size_t right, int value);

int advanced_binary(int *array, size_t size, int value) {
    if (array == NULL || size == 0) {
        return -1;
    }
    size_t left = 0, right = size - 1;
    return binary_search(array, left, right, value);
}

int binary_search(int *array, size_t left, size_t right, int value) {
    if (left > right) {
        return -1;
    }
    size_t mid = (left + right) / 2;
    if (array[mid] == value) {
        if (mid == 0 || array[mid - 1] < value) {
            return mid;
        } else {
            return binary_search(array, left, mid - 1, value);
        }
    } else if (array[mid] < value) {
        return binary_search(array, mid + 1, right, value);
    } else {
        return binary_search(array, left, mid - 1, value);
    }
}

