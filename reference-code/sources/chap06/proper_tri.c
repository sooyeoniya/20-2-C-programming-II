#include <stdio.h>

int main(void)
{
	int a, b, c;

	printf("삼각형의 3변을 입력하시오: ");
	scanf("%d%d%d", &a, &b, &c);

	if ((a + b) > c && (b + c) > a && (a + c) > b) {
		printf("올바른 삼각형\n");
	}
	else {
		printf("올바르지 않은 삼각형\n");
	}

	return 0;
}