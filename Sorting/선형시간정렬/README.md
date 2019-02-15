## Counting Sort

- n개의 정수를 정렬하라. 단 모든 정수는 0에서 k사이의 정수이다. (<- 사전지식 존재)
  - 예: n명의 학생들의 시험점수를 정렬하라. 단 모든 점수는 100이하의 양의 정수이다.

k=5인 경우의 예

A 2, 5, 3, 0, 2, 3, 0, 3

C 2, 0, 2, 3, 0, 1

- 길이 k인 배열에 각 정수의 개수를 count한다.

A -> 0 두개, 2 두개, ...

A 0, 0, 2, 2, 3, 3, 3, 5

~~~
int A[n];
int C[k] = {0,};
for(int i=1; i<=n; i++)
    C[A[i]]++;
for(int s=1, i=0; i<=k; i++) {
    for(int j=0; j<C[i]; j++) {
        A[s++] = j;
    }
}
~~~

> 연관된 데이터들도 정렬이 되어야
>
> 대부분의 경우 정렬할 key값들은 레코드의 일부분이기 때문

- 누적합.
- 카운팅을 하고, 누적합을 구한다.

~~~
Count-sort(A, B, k)
for i<-0 to k
    do C[i] <- 0
for j<-1 to length[A]
    do C[A[j]] <- C[A[j]]+1
for i<-1 to k
    do C[i]<-C[i]+C[i-1]
for j<-length[A] downto 1
    do B[C[A[j]]]<-A[j]
       C[A[j]]<-C[A[j]]-1
~~~

- 실행결과

~~~
data = 2, 5, 3, 0, 2, 3, 0, 3
...
0 0 2 2 3 3 3 5
~~~

## Radix Sort