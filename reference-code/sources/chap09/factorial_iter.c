// 반복적인 팩토리얼 함수 계산
#include <stdio.h>
long factorial_iter(int n);

int main(void)
{
	int x;
	long f;

	printf("정수를 입력하시오: \n");
	scanf("%d", &x);

	f = factorial_iter(x);
	printf("%d!은 %d입니다.\n", x, f);

	return 0;
}

long factorial_iter(int n)
{
	long result;

	for(result = 1; n > 1; n--)
		result *= n;

	return result;
}
