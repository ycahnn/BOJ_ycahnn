#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int d(n)    
{
	int result=n;

	while (n!= 0)
	{
		result += n % 10;
		n=n / 10;
	}
	return result;
}

int main()
{
	
	int num, i, self=1;
	for (num = 1; num <=10000; num++)  //1부터 n까지 셀프넘버 여부 조사
	{
		for (i = 1; i <= num; i++)		//생성자 존재 여부 조사
		{
			if (d(i) == num)
			self = 0;
		}
		if (self == 1)
		{
			printf("%d\n", num);
		}
		self = 1;
	}

	return 0;
}