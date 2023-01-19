#pragma warning(disable: 4996)
#include <stdio.h>
#include <stdlib.h>   
#include <math.h>

int main()
{
	int arr[100];
	int N,M, sum = 0, a = 300000,ans;
	scanf("%d %d", &N, &M);
	for(int i = 0; i<N;i++)
		scanf("%d", &arr[i]);
	for (int i = N - 1; i >= 2; i--)
	{
		sum += arr[i];
		for (int j = i - 1; j >= 1; j--)
		{
			sum += arr[j];
			for (int k = j - 1; k >= 0; k--)
			{
				sum += arr[k];
				if (M-sum < a && (M>=sum))
				{
					a = M-sum;
					ans = sum;
				}
				if (a==0)
				{
					printf("%d", sum);
					return 0;
				}
				sum -= arr[k];
			}
			sum -= arr[j];
		}
		sum -= arr[i];
	}
	printf("%d", ans);
}