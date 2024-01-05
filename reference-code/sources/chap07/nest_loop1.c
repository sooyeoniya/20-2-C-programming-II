// 중첩 for 문을 이용하여 *기호를 사각형 모양으로 출력하는 프로그램
#include <stdio.h>

int main(void)
{

	for(int y = 0;y < 5; y++)		// 바깥 반복문
	{
		for(int x = 0;x < 10; x++)	// 안쪽 반복문
			printf("*");

		printf("\n");			// 안쪽 반복문이 종료될때마다 실행
	}

	return 0;
}
