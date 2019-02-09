#define swap(type, x, y) do{ type temp = x; x = y; y = temp; }while(0)

void bubble_sort(int *array, int count) {
	int temp;
	for(int i = 0 ; i < count ; i++) {
		for(int j = 0 ; j < count - 1 - i ; j++){
			if(array[j] > array[j + 1]){
				swap(int, array[j], array[j+1]);
			}
		}
	}
}
