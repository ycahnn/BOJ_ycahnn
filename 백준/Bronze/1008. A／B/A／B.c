#pragma warning(disable: 4996)
#include <stdio.h>

int main()
{
	double a, b, result;
	scanf("%lf %lf", &a, &b);
	result = a / b;
	printf("%.10f", result);
}