#include <stdio.h>

enum tvtype { tube, lcd, plasma, projection };

int main(void)
{
	enum tvtype type;

	printf("TV 종류 코드를 입력하시오: ");
	scanf("%d", &type);

	switch(type)
	{
		case tube:
			printf("브라운관 TV를 선택하셨습니다.\n");
			break;
		case lcd:
			printf("LCD TV를 선택하셨습니다.\n");
			break;
		case plasma:
			printf("PDP TV를 선택하셨습니다.\n");
			break;
		case projection:
			printf("프로젝션 TV를 선택하셨습니다.\n");
			break;
		default:
			printf("다시 선택하여 주십시오.\n");
			break;
	}

	return 0;
}
