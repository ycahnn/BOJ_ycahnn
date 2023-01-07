#pragma warning(disable: 4996)
#include <stdio.h>
#include <string.h>


int main()
{
	int N, a[51] = { 0, }, len;
	char arr[50][51];
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
	{
		scanf("%s", arr[i]);
	}
	len = strlen(arr[0]);
	for (int i = 0; i < len; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (arr[j][i] == arr[0][i])
				a[i]++;
		}
	}
	for (int i = 0; i < len; i++)
	{
		if (a[i] !=N)
		{
			arr[0][i]= '?';
		}
	}
	printf("%s", arr[0]);
}