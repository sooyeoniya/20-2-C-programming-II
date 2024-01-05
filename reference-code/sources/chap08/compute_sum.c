#include <stdio.h>

// 함수 원형
int compute_sum(int n);

int main(void)
{
	int n, sum;

	printf("정수를 입력하시오: ");
	scanf("%d", &n);

	sum = compute_sum(n);		// 함수 사용

	printf("1부터 %d까지의 합은 %d입니다. \n", n, sum);
}

// 함수 정의
int compute_sum(int n)
{
	int i;
	int result = 0;

	for(i = 1; i <= n; i++)
		result += i;

	return result;
}
