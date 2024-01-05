// 사용자로부터 정수를 받는 함수 사용 예제
#include <stdio.h>

int get_integer(void);
int get_max(int x, int y);

int main(void)
{
	int a, b;

	a = get_integer();
	b = get_integer();

	printf("더 큰 수는 %d입니다. \n", get_max(a, b));
	return 0;
}

int get_integer(void)
{
	int n;

	printf("정수를 입력하시오: ");
	scanf("%d", &n);

	return n;
}

int get_max(int x, int y)
{
	if( x > y ) return(x);
	else return(y);
}
