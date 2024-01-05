#include <stdio.h>

int max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}


int main(void)
{
	int x, y;
	printf("정수를 입력하시오: ");
	scanf("%d", &x);
	printf("정수를 입력하시오: ");
	scanf("%d", &y);

	int larger;
	larger = max(x, y);
	printf("더 큰값은 %d입니다. \n", larger);
	return 0;
}