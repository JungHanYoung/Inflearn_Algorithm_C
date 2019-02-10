#include <stdio.h>

#define swap(type, x, y) do{ type temp = x; x = y; y = temp; } while (0)

void maxHeapify(int *data, int i, int size)
{
    int leftChild = 2 * i + 1;
    int rightChild = leftChild + 1;

    if (leftChild > size)
        return;
    else if (leftChild == size)
        swap(int, data[i], data[leftChild]);
    else
    {
        int max;
        max = data[leftChild] > data[rightChild] ? leftChild : rightChild;
        if (data[max] <= data[i])
            return;
        swap(int, data[i], data[max]);
        maxHeapify(data, max, size);
    }
}

int main(void)
{

    int data[] = {4, 16, 15, 8, 7, 13, 14, 2, 5};
    int size = sizeof(data) / sizeof(data[0]);
    for (int i = 0; i < 9; i++)
    {
        printf("%d ", data[i]);
    }

    printf("\n");

    maxHeapify(data, 0, size);

    for (int i = 0; i < 9; i++)
    {
        printf("%d ", data[i]);
    }

    return 0;
}
