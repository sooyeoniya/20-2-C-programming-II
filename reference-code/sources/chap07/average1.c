// break를 이용하여 무한루프를 탈출한다.
#include <stdio.h>

int main(void)
{
	float grade, sum = 0.0, average;
	int count = 0;

	while(1)
	{
		printf("학생 성적을 입력하시오: ");
		scanf("%f", &grade);		// 정수도 받을 수 있다.

		if( grade < 0.0 ) 		// 음수가 입력되면
			break;			// 반복을 빠져나간다.

		count++;
		sum += grade;		
	}

	average = sum / count;
	printf("학생들의 성적의 평균은 %f입니다.\n", average);

	return 0;
}
