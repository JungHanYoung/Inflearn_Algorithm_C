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
    // i는 루트노드로 간주
    int largest = i;
    int left = 2 * i + 1;
    int right = left + 1;

    // left < size : left가 size보다 크거나 같으면, 왼쪽 자식노드가 없는 것.
    // data[left] > data[largest] : 왼쪽자식이 더 크면 자리를 바꿔야함.
    if (left < size && data[left] > data[largest])
        largest = left;

    // right < size : right가 size보다 크거나 같으면, 오른쪽 자식노드가 없는 것.
    // data[right] > data[largest] : 오른쪽자식이 더 크면 자리를 바꿔야함.
    if (right < size && data[right] > data[largest])
        largest = right;

    // 만약 자식노드가 더 커서 largest값이 바뀌었으면
    if (largest != i)
    {
        // 루트노드와 자식 중 largest 노드를 exchange
        swap(int, data[i], data[largest]);
        // exchange된 자식노드에 대하여 다시 heapify
        maxHeapify(data, largest, size);
    }
}

void maxHeapInsert(int *data, int key, int size)
{
    size++;
    data[size - 1] = key;
    int i = size;
    while (i > 0 && data[(i - 1) / 2] < data[i])
    {
        swap(int, data[i], data[(i - 1) / 2]);
        i = (i - 1) / 2;
    }
}

int maxExtractMax(int *data, int size)
{
    if (size < 1)
        return -1;
    int max = data[0];
    data[0] = data[size - 1];
    size--;
    // 루트에 대하여 heapify
    maxHeapify(data, 0, size);
    return max;
}

int main(void)
{
    int data[100];
    int size = 10;

    data[0] = 5;
    data[1] = 3;
    data[2] = 6;
    data[3] = 2;
    data[4] = 8;
    data[5] = 66;
    data[6] = 1;
    data[7] = 9;
    data[8] = 13;
    data[9] = 2;

    printf("===== heapify 하기 전 =====\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", data[i]);
    }
    printf("\n\n");
    // 전체 배열을 heap으로 만들기
    for (int i = size / 2 - 1; i >= 0; i--)
    {
        maxHeapify(data, i, size);
    }
    // 값 추가하기
    maxHeapInsert(data, 1, size);
    size++;
    printf("===== heapify 하고 값 넣은 후 =====\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", data[i]);
    }
    printf("\n\n");
    // pop
    int result = maxExtractMax(data, size);
    size--;

    printf("===== 우선순위 pop 및 배열 상태 =====\n");
    printf("result: %d\n", result);

    for (int i = 0; i < size; i++)
    {
        printf("%d ", data[i]);
    }
    printf("\n\n");

    return 0;
}