#include <stdio.h>

int get_integer();
double get_double();
char get_char();

int main(void)
{
	double f, g;
	f = get_double();
	g = get_double();
	printf("실수의 합=%lf\n", f + g);
	return 0;
}

int get_integer() {
	int n;
	printf("정수를 입력하시오: ");
	scanf("%d", &n);
	return n;
}

double get_double()
{
	double n;
	printf("실수를 입력하시오: ");
	scanf("%lf", &n);
	return n;
}

char get_char()
{
	char n;
	printf("문자를 입력하시오: ");
	scanf(" %c", &n);
	return n;
}
