#include <stdio.h>
#include <stdlib.h>

int binary_search(int *array, int low, int high, int value)
{
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (array[mid] == value)
            return mid;
        else if (array[mid] < value)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int exponential_search(int *array, size_t size, int value)
{
    if (array == NULL || size == 0)
        return -1;

    if (array[0] == value)
        return 0;

    int bound = 1;
    while (bound < size && array[bound] < value)
        bound *= 2;

    int left = bound / 2;
    int right = (bound < size) ? bound : size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        printf("Checking value %d\n", array[mid]);
        if (array[mid] == value)
            return mid;
        else if (array[mid] < value)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return -1;
}

int main()
{
    int array[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    size_t size = sizeof(array) / sizeof(array[0]);
    int value = 13;
    int index = exponential_search(array, size, value);
    if (index == -1)
        printf("Value not found\n");
    else
        printf("Value found at index %d\n", index);
    return 0;
}
