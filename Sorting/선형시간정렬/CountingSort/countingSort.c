void countingSort(int *data, int *sorted, int k, int size)
{

    // k=5
    // data = {2,5,3,0,2,3,0,3}

    int countArr[k+1];
    // countArr = {0,0,0,0,0,0}
    //             0 1 2 3 4 5
    for (int i = 0; i <= k; i++)
    {
        countArr[i] = 0;
    }
    //
    // 0 -> 2개, 1 -> 0개, 2 -> 2개
    for (int j = 0; j < size; j++)
    {
        countArr[data[j]]++;
    }
    // countArr = {2, 0, 2, 3, 0, 1}
    for (int i = 1; i <= k; i++)
    {
        countArr[i] = countArr[i] + countArr[i - 1];
    }
    // countArr = {2, 2, 4, 7, 7, 8}
    for (int j = size - 1; j >= 0; j--)
    {   sorted[countArr[data[j]] - 1] = data[j];
countArr[data[j]]--;
    }
}