#include <stdio.h>
#pragma warning(disable:4996)

int CheckNum(int n)
{
	int count = 0;
	while (n != 0)
	{
		if (n % 10 == 6)
			count++;
		if (count == 3)
			break;
		if(n%10!=6)
			count = 0;
		n/= 10;
	}
	if (count == 3)
		return 1;
	else
		return 0;
}
int main()
{
	int N,CountNum = 0,num = 666;
	scanf("%d", &N);
	while (CountNum != N)
	{
		if (CheckNum(num) == 1)
		{
			CountNum++;
		}
		num++;
	}
	printf("%d", num - 1);
}