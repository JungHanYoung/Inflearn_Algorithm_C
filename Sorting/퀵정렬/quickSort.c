#define swap(type, x, y) do{ type temp = x; x = y; y = temp; }while(0)

void quick_sort(int *data, int start, int end){
	if(start >= end)
		return;

	int pivot = start;
	int i = start + 1;

	int j = end;

	while(i <= j){

		while(data[pivot] <= data[j] && j > start){
			j--;
		}
		while(data[pivot] >= data[i]){
			i++;
		}
		if(i > j)
			swap(int, data[j], data[pivot]);
		else
			swap(int, data[j], data[i]);
	}
	quick_sort(data, start, j - 1);
	quick_sort(data, j + 1, end);
}

void quick_sort_desc(int *data, int start, int end){
	if(start >= end)
		return;
	int pivot = start;
	int i = start + 1;
	int j = end;

	while(i <= j){

		while(data[pivot] >= data[j] && j > start){
			j--;
		}
		while(data[pivot] <= data[i]){
			i++;
		}
		if(i > j)
			swap(int, data[j], data[pivot]);
		else
			swap(int, data[j], data[i]);
	}
	quick_sort_desc(data, start, j - 1);
	quick_sort_desc(data, j + 1, end);
}	
