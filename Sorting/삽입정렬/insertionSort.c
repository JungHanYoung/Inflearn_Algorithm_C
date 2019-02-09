#define swap(type, x, y) do{ type temp = x; x = y; y = temp; }while(0)

void insertion_sort(int *array, int count) {
	for(int i = 0 ; i < count - 1 ; i++){
		int j = i;
		while(array[j] > array[j + 1]){
			swap(int, array[j], array[j+1]);
			j--;
		}
	}
}
