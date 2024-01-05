#include <stdio.h>

int main(void)
{
	int i, n, sum;		// 변수 선언
	
	printf("정수를 입력하시오:");	// 입력 안내 메시지 출력
	scanf("%d", &n);		// 정수값 입력
	
	i = 0;				// 변수 초기화
	sum = 0;

 	while(i <= n)
	{
		sum += i;		// sum = sum + i;와 같다.
		i = i + 2;		// i += 2; 로 하여도 된다. 
	}

	
	printf("1부터 %d까지의 합은 %d입니다\n", n, sum);
	return 0;
}
