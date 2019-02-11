#include <stdio.h>

#define swap(type, x, y) \
    do                   \
    {                    \
        type temp = x;   \
        x = y;           \
        y = temp;        \
    } while (0)

void maxHeapify(int *data, int i, int size)
{
    int largest = i;
    int left = 2 * i + 1;
    int right = left + 1;

    if (left < size && data[left] > data[largest])
        largest = left;

    if (right < size && data[right] > data[largest])
        largest = right;

    if (largest != i)
    {
        swap(int, data[i], data[largest]);
        maxHeapify(data, largest, size);
    }
}
