#include <stdio.h>
#include "countingSort.h"

#define N 8

int main(void)
{

    int data[N] = {2, 5, 3, 0, 2, 3, 0, 3};
    int sorted[N];

    countingSort(data, sorted, 5, N);

    for (int i = 0; i < N; i++)
    {
        printf("%d ", sorted[i]);
    }

    return 0;
}