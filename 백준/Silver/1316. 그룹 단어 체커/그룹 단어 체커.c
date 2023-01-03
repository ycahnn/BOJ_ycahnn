#pragma warning(disable: 4996)
#include <stdio.h>
#include <string.h>

int main()
{
	int N, count = 0, y = 0;
	char word[101];
	scanf("%d", &N);
	count = N;
	for (int i = 0; i < N; i++)
	{
		y = 0;
		scanf("%s", word);
		for (int j = 0; j<strlen(word);j++)
		{
			for (int k = j+1; k < strlen(word); k++)
			{
				if (y == 1)
					break;
				if (word[j] == word[k])
				{
					if (y == 1)
						break;
					for (int l = j + 1; l <= k; l++)
					{
						
						if (word[l] != word[j])
						{
							count--;
							y = 1;
							break;
						}
					}
				}
			}
		}
		for (int j = 0; j < 101; j++)
			word[i] = '\n';

	}
	printf("%d", count);
}