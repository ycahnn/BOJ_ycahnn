#pragma warning(disable: 4996)
#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b)    // 오름차순 비교 함수 구현
{
	int num1 = *(int*)a;    // void 포인터를 int 포인터로 변환한 뒤 역참조하여 값을 가져옴
	int num2 = *(int*)b;    // void 포인터를 int 포인터로 변환한 뒤 역참조하여 값을 가져옴

	if (num1 < num2)    // a가 b보다 작을 때는
		return -1;      // -1 반환

	if (num1 > num2)    // a가 b보다 클 때는
		return 1;       // 1 반환

	return 0;    // a와 b가 같을 때는 0 반환
}

int main()
{
	int N, M, A[100000], B[100000];
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &A[i]);
	}
	scanf("%d", &M);
	for (int i = 0; i < M; i++)
	{
		scanf("%d", &B[i]);
	}
	qsort(A, N, sizeof(int), compare);
	for (int i = 0; i < M; i++)
	{
		printf("%d\n", find(N, i, A, B));
	}
}
	int find(int N,int i,int *A,int*B)
	{
		int l, h, m;
		h = N - 1;
		l = 0;
		m = N / 2;
			while (l <= h)
			{
				m = (l + h) / 2;
				if (B[i] == A[m])
				{
					return 1;
				}
				else if (B[i] < A[m])
				{
					h = m - 1;
				}
				if (B[i] > A[m])
				{
					l = m + 1;
				}
			}
			return 0;
	}