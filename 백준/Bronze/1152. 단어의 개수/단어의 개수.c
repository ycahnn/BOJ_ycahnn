#pragma warning(disable: 4996)
#include <stdio.h>

int main()
{
	char arr[1000001];
	int count = 0;
	scanf("%[^\n]s", arr);
	for (int i = 0; i < 1000001; i++)
	{
		if (arr[i] == 32 && arr[i + 1] == 0)
			break;
		if (arr[i] == 0)
			break;
		if (arr[i+1] == 32 || arr[i+1] == 0)
			count++;
	}
	printf("%d", count);
}
