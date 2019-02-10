#include <stdio.h>
#include <stdlib.h>

void merge(int *data, int p, int q, int r)
{
    int i = p;
    int j = q + 1;
    int k = p;

    // int size = sizeof(data) / sizeof(int);
    // printf("size: %d\n", size);

    // int *tmp = (int *)calloc(size, sizeof(int));
    int tmp[10];
    while (i <= q && j <= r)
    {
        if (data[i] <= data[j])
            tmp[k++] = data[i++];
        else
            tmp[k++] = data[j++];
    }
    while (i <= q)
        tmp[k++] = data[i++];
    while (j <= r)
        tmp[k++] = data[j++];

    for (int i = p; i <= r; i++)
        data[i] = tmp[i];
}

void mergeSort(int *data, int p, int r)
{
    if (p < r)
    {
        int q = (p + r) / 2;
        // printf("%d\n", q);
        mergeSort(data, p, q);
        mergeSort(data, q + 1, r);
        merge(data, p, q, r);
    }
}