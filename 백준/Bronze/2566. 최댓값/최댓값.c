#pragma warning(disable: 4996)
#include <stdio.h>
#include <stdlib.h>   

int main()
{
	int arr[9][9],max[2] = {0,};
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			if (arr[i][j] > arr[max[0]][max[1]])
			{
				max[0] = i;
				max[1] = j;
			}
		}
	}
	printf("%d\n%d %d", arr[max[0]][max[1]],max[0]+1, max[1]+1);
}