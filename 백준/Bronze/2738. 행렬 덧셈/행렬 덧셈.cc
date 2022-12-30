#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int A[100][100] = { 0, };
	int B[100][100] = { 0, };
	int C[100][100] = { 0, };

	int N, M;
	scanf("%d%d", &N, &M);
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
			scanf("%d", &A[j][i]);
	}
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
			scanf("%d", &B[j][i]);
	}
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
			C[j][i] = A[j][i] + B[j][i];
	}
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			printf("%d ", C[j][i]);
		}
		printf("\n");
	}
}