#include<stdio.h>
#include <math.h>

#define EPSILON 0.0001

double func(double x)
{
	return x*x*x - x*x + 2;
}

void bisection(double a, double b)
{
	if (func(a) * func(b) >= 0)	{
		printf("적절한 a와 b가 아님\n");
		return;
	}


	double c = a;
	while ((b - a) >= EPSILON)
	{
		c = (a + b) / 2;
		if (func(c)*func(a) < 0) {
			b = c;
		}
		else {
			a = c;
		}
	}
	printf("최종 근 = %lf\n", c);
}

int main(void)
{
	double a = -200, b = 200;
	bisection(a, b);
	return 0;
}
