#pragma warning(disable: 4996)
#include <stdio.h>
#include <stdlib.h>   

int main()
{
	int x,x1,y,y1,ans;
	scanf("%d %d", &x, &y);
	x1 = x;
	y1 = y;
	while (x != 0 && y != 0)
	{
		if (x % 10 == y % 10)
		{
			x /= 10;
			y /= 10;
			continue;
		}
		else if (x % 10 > y % 10)
		{
			ans = x1;
			break;
		}
		else
		{
			ans = y1;
			break;
		}
	}
	printf("%d%d%d", ans % 10, ans / 10 % 10, ans / 100);
}