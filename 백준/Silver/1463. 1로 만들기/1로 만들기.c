#pragma warning(disable: 4996)
#include <stdio.h>
#include <stdlib.h>   

int arr[1000000];

int main()
{
	int N, min;;
	int* ptr;
	ptr = &N;
	arr[1] = 0;
	arr[2] = 1;
	arr[3] = 1;
	scanf("%d", &N);
	
	if (N >= 4)
	{
		for (int i = 4; i <= N; i++)
		{
			if (i % 6 == 0)
			{
				min = ((arr[i - 1] < arr[i / 2]) && (arr[i - 1] < arr[i / 3])) ? arr[i - 1] : ((arr[i / 2] < arr[i - 1]) && (arr[i / 2] < arr[i / 3])) ? arr[i / 2] : arr[i / 3];
				arr[i] = 1 + min;
			}
			else if (i % 2 == 0)
			{
				min = arr[i - 1] < arr[i / 2] ? arr[i - 1] : arr[i / 2];
				arr[i] = 1 + min;
			}
			else if (i % 3 == 0)
			{
				min = arr[i - 1] < arr[i / 3] ? arr[i - 1] : arr[i / 3];
				arr[i] = 1 + min;
			}
			else
				arr[i] = 1 + arr[i - 1];
		}
	}
		printf("%d", arr[N]);

}