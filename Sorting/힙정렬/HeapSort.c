#include <stdio.h>
#include "maxHeapify.h"

#define swap(type, x, y) \
	do                   \
	{                    \
		type temp = x;   \
		x = y;           \
		y = temp;        \
	} while (0)

void heapSort(int *data, int size)
{
	for (int i = size / 2 - 1; i >= 0; i--)
	{
		maxHeapify(data, i, size);
	}
	while (size > 1)
	{
		swap(int, data[0], data[size - 1]);

		size--;

		maxHeapify(data, 0, size);
	}
}
