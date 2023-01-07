#pragma warning(disable: 4996)
#include <stdio.h>
#include <string.h>

char string[1000001];
int main()
{
	int al[52] = { 0, },len;

	scanf("%s", string);
	len = strlen(string);
	for (int i = 0; i < len; i++)
	{
		al[(string[i]-65)%32]++;
		if(al[(string[i] - 65) % 32]> len)
			printf("%c", i + 65);
	}
	int max = 0, x = 0;
	for (int i = 0; i < 26; i++)
	{
		if (al[i] > al[max])
			max = i;
	}
	for (int i = 0; i < 26; i++)
	{
		if (al[i] == al[max])
			x++;
	}
	if (x > 1)
		printf("?");
	else
		printf("%c", max + 65);
}