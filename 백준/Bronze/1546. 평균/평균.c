#pragma warning(disable: 4996)
#include <stdio.h>


int main()
{
	int N;
	double M,avg =0, arr[1000];
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
	{
		scanf("%lf", &arr[i]);
	}
	M = arr[0];
		for (int i = 0; i < N; i++)
		{
			if (arr[i] > M)
			{
				M = arr[i];
			}
		}
		for (int i = 0; i < N; i++)
		{
			arr[i] = arr[i] / M * 100;
			avg += arr[i];
		}
		avg /= (double)N;
		printf("%f", avg);
}