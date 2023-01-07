#pragma warning(disable: 4996)
#include <stdio.h>


int CheckPos(int arr[][5], int j, int x1, int y1)
{
	if ((x1 - arr[j][0]) * (x1 - arr[j][0]) + (y1 - arr[j][1]) * (y1 - arr[j][1]) < arr[j][2] * arr[j][2])
	{
		return 1;
	}
	else if ((x1 - arr[j][0]) * (x1 - arr[j][0]) + (y1 - arr[j][1]) * (y1 - arr[j][1]) > arr[j][2] * arr[j][2])
	{
		return  -1;
	}
}

int main()
{
	int T, arr[50][5], n,num,x1,x2,y1,y2;
	scanf("%d", &T);
	for (int i = 0; i < T; i++)
	{
		int count = 0;
		scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
		scanf("%d", &n);
		for (int j = 0; j < n; j++)
		{
			scanf("%d %d %d", &arr[j][0], &arr[j][1], &arr[j][2]);
			if (CheckPos(arr, j, x1, y1) * CheckPos(arr, j, x2, y2) == -1)
				count++;
		}
		printf("%d\n", count);
	}

}