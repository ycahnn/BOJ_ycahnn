#pragma warning(disable: 4996)
#include <stdio.h>
#include <stdlib.h>   

int main()
{
	int A[100][100], B[100][100], N, M, K, C[100][100], sum = 0;
	scanf("%d %d", &N, &M);
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			scanf("%d", &A[i][j]);
		}
	}
	scanf("%d %d", &M, &K);
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < K; j++)
		{
			scanf("%d", &B[i][j]);
		}
	}
	for (int k = 0; k < N; k++)
	{
		for (int i = 0; i < K; i++)
		{
			for (int j = 0; j < M; j++)
			{
				sum += A[k][j] * B[j][i];
				C[k][i] = sum;
			}
			sum = 0;
		}
	}
	for (int k = 0; k < N; k++)
	{
		for (int i = 0; i < K; i++)
		{
			printf("%d ", C[k][i]);
		}
		printf("\n");
	}

}