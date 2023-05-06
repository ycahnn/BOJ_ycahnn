#pragma warning(disable: 4996)
#include <stdio.h>
#include <stdlib.h>   
#include <math.h>
#include <string.h>


int Min(int* arr, int M)
{
	int min = arr[0];
	for (int i = 0; i < M; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	return min;
}

int main()
{
	int N;
	int M;
	int six[50];
	int one[50];
	int result=0;
	scanf("%d", &N);
	scanf("%d", &M);
	for (int i = 0; i < M; i++)
	{
		scanf("%d", &six[i]);
		scanf("%d", &one[i]);
	}
	int sixMin = Min(six, M);
	int oneMin = Min(one, M);
	if (sixMin <= oneMin)
	{
		if (N % 6 == 0)
		{
			printf("%d", N / 6 * sixMin);
		}
		else
		{
			printf("%d", (N / 6+1) * sixMin);
		}
	}
	else if (sixMin >=oneMin*6)
	{
		printf("%d", N * oneMin);
	}
	else
	{
		if (N < 6)
		{
			if (sixMin < N * oneMin)
			{
				result += sixMin;
			}
			else
			{
				result += oneMin * N;
			}
		}
		else
		{
			int s = N / 6;
			int r = N % 6;
			result += s * sixMin;
			if (sixMin < r * oneMin)
			{
				result += sixMin;
			}
			else
			{
				result += oneMin * r;
			}
		}
		printf("%d", result);
	}
}