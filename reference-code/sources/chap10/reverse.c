#include <stdio.h>
#define SIZE 5

int main(void)
{
	int data[SIZE];
	int i;
	
	for(i = 0; i < SIZE; i++)		// 정수를 입력받는 루프
	{
		printf("정수를 입력하시오:");
		scanf("%d", &data[i]);
	}

	for(i = SIZE - 1;i >= 0; i--)	// 역순으로 출력하는 루프
	{
		printf("%d\n", data[i]);
	}

	return 0;
}
