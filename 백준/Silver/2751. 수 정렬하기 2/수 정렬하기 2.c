#pragma warning(disable: 4996)
#include <stdio.h>
#include <stdlib.h>   
int arr[1000000];
int compare(const void* a, const void* b)    
{
    int num1 = *(int*)a;    
    int num2 = *(int*)b;    

    if (num1 < num2)  
        return -1;    
    if (num1 > num2)    
        return 1;     

    return 0;    
}

int main()
{
    int num;
    scanf("%d", &num);

    for (int i = 0; i < num; i++)
        scanf("%d", &arr[i]);

    qsort(arr, num, sizeof(int), compare);

    for (int i = 0; i < num; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}
