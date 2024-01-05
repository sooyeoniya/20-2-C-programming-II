// 별표로 사각형을 그리는 예제
#include <stdio.h>

void draw_rect(int side);

int main(void)
{
	draw_rect(5);
	return 0;
}

void draw_rect(int side)
{
	int x, y;

	for(y = 0; y < side; y++)
	{
		for(x = 0; x < side; x++)
			printf("*");
		printf("\n");
	}
}
