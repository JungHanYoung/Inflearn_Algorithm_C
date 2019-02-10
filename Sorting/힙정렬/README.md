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