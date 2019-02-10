#include <stdio.h>
#include "mergeSort.h"

void printArray(int *array, int count)
{
    for (int i = 0; i < count; i++)
        printf("%d ", array[i]);
    printf("\n\n");
}

int main(void)
{

    int data[] = {5, 4, 7, 2, 1, 8, 2, 3, 4, 9};
    int size = sizeof(data) / sizeof(int);

    printf("===== 합병정렬 =====\n");
    printf("정렬 전..\n");
    printArray(data, size);

    mergeSort(data, 0, size);
    printf("정렬 후..\n");
    printArray(data, size);

    return 0;
}
