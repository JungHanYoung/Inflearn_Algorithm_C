#include <stdio.h>
#include "bubbleSort.h"

void printArray(int *array, int count);

int main(void)
{
    int array[] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};
    int size = sizeof(array) / sizeof(array[0]);

    printf("========= Bubble sort ========\n");
    printf("버블 정렬 전... \n\n");
    printArray(array, size);

    // bubble sort ...

    bubble_sort(array, size);

    printf("==============================\n");
    printf("버블 정렬 후! \n\n");
    printArray(array, size);

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