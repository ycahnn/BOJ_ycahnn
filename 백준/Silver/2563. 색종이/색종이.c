#pragma warning(disable: 4996)
#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
	/*int SquarePosition[2][100], SquareNumber, Omit = 0, Area, x,y ;
	scanf("%d", &SquareNumber);
	Area = 100 * SquareNumber;
	for (int i = 0; i < SquareNumber; i++)
	{
		scanf("%d%d", &SquarePosition[0][i], &SquarePosition[1][i]);
	}
	for (int i = 1; i < SquareNumber; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (SquarePosition[0][i]< SquarePosition[0][j] + 10
				&& SquarePosition[0][i]  > SquarePosition[0][j] - 10
				&& SquarePosition[1][i] > SquarePosition[1][j] - 10
				&& SquarePosition[1][i] < SquarePosition[1][j] + 10)
			{
				if (SquarePosition[0][i] <= SquarePosition[0][j])
					x = abs(SquarePosition[0][i] - SquarePosition[0][j] + 10);
				if (SquarePosition[0][i] > SquarePosition[0][j])
					x = abs(- SquarePosition[0][i] + SquarePosition[0][j] + 10);
				if (SquarePosition[1][i] <= SquarePosition[1][j])
					y = abs(SquarePosition[1][i] - SquarePosition[1][j]+10);
				if (SquarePosition[1][i] > SquarePosition[1][j])
					y = abs(-SquarePosition[1][i] + SquarePosition[1][j] + 10);

				Omit = x * y;
				Area -= Omit;
			}
		}
	}
	printf("%d", Area);*/
	int White[100][100] = {0,}, pos[2][100], N, count = 0;
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
		scanf("%d%d", &pos[0][i], &pos[1][i]);
	for (int i = 0; i < N; i++)
	{
		for (int j = pos[0][i]; j < pos[0][i] + 10; j++)
		{
			for (int k = pos[1][i]; k < pos[1][i] + 10; k++)
				White[j][k] = 1;
		}
	}
	for (int i = 0; i < 100; i++)
	{
		for (int j = 0; j < 100; j++)
		{
			if (White[i][j] == 1)
			{
				count++;
			}
		}
	}
	printf("%d", count);
}