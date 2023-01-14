#pragma warning(disable: 4996)
#include <stdio.h>
#include <stdlib.h>   

int arr[128][128], blue = 0, white = 0;

int F(int x, int y, int n)
{
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (arr[x][y] != arr[x + i][y + j])
				{
					F(x, y, n / 2);
					F(x + n / 2, y, n / 2);
					F(x, y + n / 2, n / 2);
					F(x + n / 2, y + n / 2, n / 2);
					return 0;
				}
			}
		}
	
	if (arr[x][y] == 0)
	{
		white++;
		return 0;
	}
	else
	{
		blue++;
		return 0;

	}
}
int main()
{
	int N;
	scanf("%d", &N);
	for (int i = 0; i<N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	F(0, 0, N);
	printf("%d\n%d", white, blue);
}