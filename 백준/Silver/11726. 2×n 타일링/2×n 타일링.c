#pragma warning(disable: 4996)
#include <stdio.h>
#include <stdlib.h>   
#include <math.h>
#include <string.h>

int main()
{
	int n;
	int arr[1001];
	scanf( "%d", &n);
	arr[0] = 1;
	arr[1] = 1;
	for (int i = 2; i <= n; i++)
	{
		arr[i] = arr[i - 1] %10007+ arr[i - 2]%10007;
	}
	printf("%d", arr[n] % 10007);
}
