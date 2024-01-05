// 변수 저장 유형 예제
#include <stdio.h>
 
unsigned random_i(void);
double random_f(void);

extern unsigned call_count;	// 외부 참조 변수

int main(void)
{
	register int i;		// 레지스터 변수
	
	for(i = 0; i < 10; i++)
		printf("%d ", random_i());

	printf("\n");

	for(i = 0; i < 10; i++)
		printf("%f ", random_f());

	printf("\n함수가 호출된 횟수= %d \n", call_count);
	return 0;
}
