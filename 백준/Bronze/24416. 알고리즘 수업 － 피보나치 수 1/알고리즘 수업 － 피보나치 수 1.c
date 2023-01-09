#pragma warning(disable: 4996)
#include <stdio.h>
#include <stdlib.h>   

int F(n)
{
    int f[41] = { 0, };
    f[1] = 1;
    f[2] = 1;
    for (int i = 3; i <= n; i++)
    {
        f[i] = f[i - 1] + f[i - 2];
    }
     return f[n];
}

int main()
{
	int n ,a,b;
	scanf("%d", &n);
    printf("%d %d", F(n),n-2);
}