#include <stdio.h>
#include "insertionSort.h"

void printArray(int *arr, int size);

int main(void)
{
    int array[] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};
    int arrayLength = sizeof(array) / sizeof(array[0]);

    printf("===== INSERTION SORT =====\n\n");
    printf("Before insertion sort\n\n");
    printArray(array, arrayLength);

    // Insertion sort is starting ..
    printf("==========================\n\n");

    insertion_sort(array, arrayLength);

    printf("After insertion sort\n\n");
    printArray(array, arrayLength);

    return 0;
}

void printArray(int *array, int count)
{
    for (int i = 0; i < count; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n\n");
}