## Heap 정렬

- 최악의 경우 시간복잡도 O(nlong2n)
- Sorts in place - 추가 배열 불필요
- 이진 힙(binary heap) 자료구조를 사용

### heap

- complete binary tree이면서
- heap property를 만족해야한다.

#### Complete Binary Trees(완전 이진 트리)

- 마지막 레벨을 제외하면 완전히 꽉 차있고, 마지막 레벨에는 가장 오른쪽부터 연속된 몇 개의 노드가 비어있을 수 있다.

#### heap property

- max heap property: 부모는 자식보다 크거나 같다.
- min heap property: 부모는 자식보다 작거나 같다.

### 표현

- Heap은 일차원 배열로 표현가능.
  - complete binary tree라 가능.
    - 루트 노드 A[1]
    - A[i]의 부모 = A[i/2]
    - A[i]의 왼쪽 자식 = A[2i]
    - A[i]의 오른쪽 자식 = A[2i + 1]

#### 힙으로 만들기 (MAX-HEAPIFY)
  
- 루트노드만이 heap을 만족하지 않을 때의 tree를 heap으로 만들기.
  - 두 개의 자식 중.. 큰 노드와 데이터를 교환.

#### 구현(recursion)

~~~
MAX_HEAPIFY(A, i)   // A: Tree, i: Node
{
    if A[i]의 자식이 없을 경우.
        return;
    k <- 자식중 더 큰 자식의 노드
    if A[i] >= A[k]
        return;
    A[i]와 A[k]를 맞바꿈.
    MAX_HEAPIFY(A, k); // recursion
}
~~~

- 시간복잡도는 O(log2n)

#### 실행결과

~~~
4 16 15 8 7 13 14 2 5 
16 8 15 5 7 13 14 2 4
~~~



## 그래서 힙 정렬은?

- 일단 모든 배열은 완전 이진 트리의 형태로 구성될 수 있을 것이다.
- 정렬할 배열(완전 이진 트리) -> 힙 으로 바꾸는 과정이 일단 필요함.
- leaf노드가 아닌 노드부터 역순으로 힙으로 만드는 과정을 수행한다.
  - 역순으로 heapify로 만드는 과정을 수행하는 이유는 heapify 성립조건이 자식노드가 heap이어야하기 때문이다.
  - 자식이 있는 노드는 n/2부터 역순.

정렬할 배열을 힙으로 만드는 과정
 - 시간복잡도: O(n)으로 봐도 무방.

### 힙정렬

- 루트와 마지막노드와 값을 바꾼다.
- 마지막노드를 없다고 가정하고 루트노드에 대해 다시 heapify를 한다.
- 반복 반복 반복...

~~~
힙정렬 {
    현재 배열을 heap으로 만들기;
    for i = heap사이즈 -> 2까지
        루트노드와 마지막노드 바꾸기;
        i--;
        루트노드에 대해 heapify
}
~~~

### 실행결과

~~~
3 5 2 7 1 2 3 1 
1 1 2 2 3 3 5 7
~~~

- 시간복잡도 = **nlogn**