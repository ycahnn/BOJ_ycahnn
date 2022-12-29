#include <stdio.h>
#pragma warning(disable:4996)

int Factorial(int N)
{
	if (N == 0)
	{
		return 1;
	}
	else
	{
		return N * Factorial(N - 1);
	}
}

int main()
{
	int N;
	scanf("%d", &N);
	printf("%d",Factorial(N));
}
