#include <stdio.h>
#include <stdlib.h>
#define DEBUG

#ifdef DEBUG
#define ASSERT(exp) 	{ if (!(exp)) \
	{ printf("가정(" #exp ")이 소스 파일 %s %d번째 줄에서 실패.\n"\
	,__FILE__, __LINE__), exit(1);}}
#else
#define ASSERT(exp) 
#endif

int main(void)
{
	int sum=100;		// 지역 변수의 초기값은 0이 아님

	ASSERT(sum == 0);	// sum의 값은 0이 되어야 함.
	return 0;
}
