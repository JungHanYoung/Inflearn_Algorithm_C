#define swap(type, x, y) do{type temp = x; x = y; y = temp; }while(0)

void selectionSort(int arr[], int n)
{

    for (int last = n - 1; last > 0; last--)
    {
	    int maxIndex = 0;
	    for(int i = 1 ; i <= last ; i++){
		if(arr[maxIndex] < arr[i]){
			maxIndex = i;
		}	
	    }
	    swap(int, arr[maxIndex], arr[last]);
    }
}
