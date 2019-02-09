#include <stdio.h>
#include "selectionSort.h"

int main(void)
{

	int arr[] = {29, 10, 14, 37, 13};
	int n = 5;

	selectionSort(arr, n);

	for (int i = 0; i < n; i++)
	{
		printf("arr[%d]: %d\n", i, arr[i]);
	}

	return 0;
}
