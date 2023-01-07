#pragma warning(disable: 4996)
#include <stdio.h>


int main()
{
	int N, A[50], B[50], P[50], temp, temp1;
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &A[i]);
        P[i] = i;
	}
    for (int i = 0; i < N - 1; i++)
    {
        for (int j = 0; j < N - 1 - i; j++)
        {
            if (A[j] > A[j + 1])
            {
                temp = A[j];
                temp1 = P[j];
                A[j] = A[j + 1];
                P[j] = P[j + 1];
                A[j + 1] = temp;
                P[j + 1] = temp1;
            }
        }
    }
   // for (int i = N - 1; i >= 0; i--)
       // printf("%d ", P[i]);
    for (int i = 0; i < N; i++)
    {
        B[P[i]] = i;
    }
    for (int i = 0; i < N; i++)
        printf("%d ", B[i]);
    
}