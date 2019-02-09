#include <stdio.h>
#include "quickSort.h"

void printArray(int *array, int count){
	for(int i = 0; i < count ; i++)
		printf("%d ", array[i]);
	printf("\n\n");
}


int main(void) {
	
	int data[] = {3, 5, 2, 4, 9, 10, 7, 1, 8, 6};
	int size = sizeof(data)/sizeof(data[0]);

	printf("===== Quick Sort =====\n\n");
	printf("퀵소트 전..\n");
	printArray(data, size);

	//Quick sort
	quick_sort(data, 0, size - 1);

	printf("퀵소트 후..\n");
	printArray(data, size);

	//Quick sort Desc
	quick_sort_desc(data, 0, size - 1);
	printf("퀵소트 내림차순 후..\n");
	printArray(data, size);

	return 0;
}
