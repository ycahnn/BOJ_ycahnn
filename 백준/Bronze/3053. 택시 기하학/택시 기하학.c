#pragma warning(disable: 4996)
#include <stdio.h>
#include <stdlib.h>   
#define _USE_MATH_DEFINES
#include <math.h>

int main()
{
	double r, a, b;
	scanf("%lf", &r);
	a = r * r * M_PI;
	b = r * r * 2;
	printf("%lf\n%lf",a,b);

}