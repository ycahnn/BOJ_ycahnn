#pragma warning(disable: 4996)
#include <stdio.h>
#include <stdlib.h>   


int main()
{
	char arr[16];
	int result = 0, len;
	scanf("%s", arr);
	len = strlen(arr);
	for (int i = 0; i < len; i++)
	{
		if (arr[i] == 90)
		{
			result += 10;
		}
		else if (arr[i] >=83)
		{
			result += (arr[i]) / 3 - 19;
		}
		else
			result += (arr[i]+1) / 3 - 19;
	}
	printf("%d", result);
}