#pragma warning(disable: 4996)
#include <stdio.h>
#include <string.h>


int main()
{
    int COUNT, data[50], temp;
    scanf("%d", &COUNT);
    for (int i = 0; i < COUNT; i++)
    {
        scanf("%d", &data[i]);
    }

    for (int i = 0; i < COUNT - 1; i++)
    {
        for (int j = 0; j < COUNT - 1 - i; j++)
        {
            if (data[j] > data[j + 1])
            {
                temp = data[j];
                data[j] = data[j + 1];
                data[j + 1] = temp;
            }
        }
    }
    temp = data[0] * data[COUNT - 1];
    printf("%d", temp);
}
