// 반복적인 거듭 제곱값 계산
#include <stdio.h>
double slow_power(int x, int n);

int main(void)
{
	int x, n;
	double f;

	printf("두개의 정수를 입력하시오(예: 2 3): \n");
	scanf("%d %d", &x, &n);

	f = slow_power(x, n);
	printf("%d^%d는 %f입니다.\n", x, n, f);

	return 0;
}

double slow_power(int x, int n)
{
	int i;
	double result = 1.0;

	for(i = 0; i < n; i++)
		result = result * x;

	return(result);
}
