#pragma warning(disable: 4996)
#include <stdio.h>
#include <stdlib.h>


int main()
{
	int a[100001], s[100001], n, m,A,b,sum;
	scanf("%d %d", &n,&m);
	s[0] = 0;
	a[0] = 0;
	scanf("%d", &a[1]);
	s[1] = a[1];
	for (int i = 2; i <=n; i++)
	{
		scanf("%d", &a[i]);
		s[i] = s[i - 1] + a[i];
	}
	for (int i = 0; i < m; i++)
	{
		scanf("%d %d", &A, &b);
		sum = s[b] - s[A-1];
		printf("%d\n", sum);
	}
}