// 반복적인 거듭 제곱값 계산
#include <stdio.h>
double power(int x, int n);

int main(void)
{
	int x, n;
	double f;

	printf("두개의 정수를 입력하시오(예: 2 3): \n");
	scanf("%d %d", &x, &n);

	f = power(x, n);
	printf("%d^%d는 %f입니다.\n", x, n, f);

	return 0;
}

double power(int x, int n)
{
	if( n == 0 ) 
		return 1;
	else if ( n%2 == 0 ) 
		return power(x*x, n/2);
	else 
		return x*power(x*x, (n-1)/2);
}
