#pragma warning(disable: 4996)
#include <stdio.h>
#include <stdlib.h>   


int main()
{
    int n, result = -1, a;
    scanf("%d", &n);
    for (int i = n / 5; i >= 0; i--)
    {
        for(int j  = 0;j<=n/3;j++)
        {
            if (5 * i + 3 * j == n)
            {
                result = i + j;
                break;
            }
        }
        if (result != -1)
        {
            break;
        }
    }
    printf("%d", result);
}