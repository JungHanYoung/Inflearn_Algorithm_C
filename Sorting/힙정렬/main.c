#include <stdio.h>
#include "HeapSort.h"

int main(void)
{
    int data[] = {3, 5, 2, 7, 1, 2, 3, 1};
    int size = sizeof(data) / sizeof(int);

    for (int i = 0; i < size; i++)
    {
        printf("%d ", data[i]);
    }

    printf("\n");
    heapSort(data, size);

    for (int i = 0; i < size; i++)
    {
        printf("%d ", data[i]);
    }

    return 0;
}