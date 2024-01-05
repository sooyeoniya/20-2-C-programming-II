// sizeof 연산자 프로그램
#include <stdio.h>

int main(void)
{
	int i;
	double f;
	size_t n;
	
	n = sizeof(int);
	printf("int형의 크기=%u \n", n);

	n = sizeof(i);
	printf("변수 i의 크기=%u \n", n);

	n = sizeof f;
	printf("변수 f의 크기=%u \n", n);
}	
