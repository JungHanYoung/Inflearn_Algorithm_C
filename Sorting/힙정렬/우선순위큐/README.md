## 우선순위 큐

### 최대 우선순위 큐

- INSERT(x): 새로운 원소 x를 삽입
- EXTRACT_MAX(): 최대값을 삭제하고 반환

### 최소 우선순위 큐

- EXTRACT_MAX 대신 EXTRACT_MIN을 지원.

MAX HEAP을 이용하여 최대 우선순위 큐를 구현.

### INSERT 과정

- 힙의 마지막 자리에 추가
- 추가된 노드와 부모 노드를 비교, 자식이 더 크면 교환 <- 반복

~~~
MAX_HEAP_INSERT(A, key) {
    heap_size = heap_size + 1;
    A[heap_size] = key;
    i = heap_size;
    // 루트노드가 아니고, 부모노드 값보다 더 크면
    while(i > 1 and A[PARENT(i)] < A[i]) {
        exchange A[i] and A[PARENT(i)];
        i = PARENT(i);
    }
}
~~~

### EXTRACT_MAX()

- 루트노드와 마지막 leaf노드 맞바꾸기
- heap_size를 -1

~~~
HEAP_EXTRACT_MAX(A) {
    if heap_size < 1
        error "heap underflow"
    max <- A[0]
    A[0] <- A[heap_size - 1]
    heap_size = heap_size - 1
    MAX_HEAPIFY(A, 1)
    return max
}
~~~

### 실행결과

[code](./PriorityQueue.c)

~~~
===== heapify 하기 전 =====
5 3 6 2 8 66 1 9 13 2 

===== heapify 하고 값 넣은 후 =====
66 13 6 9 8 5 1 3 2 2 1 

===== 우선순위 pop 및 배열 상태 =====
result: 66
13 9 6 3 8 5 1 1 2 2
~~~