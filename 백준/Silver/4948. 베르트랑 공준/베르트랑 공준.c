#pragma warning(disable: 4996)
#include <stdio.h>
#include <stdlib.h>   
int arr[1000000] = { 0, };

int F(int N)
{
	int j = 2, count = 0;
	arr[1] = -1;
	for (int i = 2; i <=2*N; i++)
	{
		if (arr[i] == 0)
		{
			while (i * j <= 2 * N)
			{
				arr[i * j] = -1;
				j++;
			}
			j = 2;
		}
	}
	for (int i = N+1; i <= 2 * N; i++)
	{
		if (arr[i] == 0)
			count++;
	}
	printf("%d\n", count);
}

int main()
{
	int n = 1;
	while (1)
	 {
		scanf("%d", &n);
		if (n == 0)
		{
			return;
		}
		F(n);
	 }
}