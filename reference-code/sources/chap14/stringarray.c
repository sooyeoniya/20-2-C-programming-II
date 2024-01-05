// 문자열 배열
#include <stdio.h>

int main(void)
{
	int i, n;
	char *fruits[ ] = {
		"apple", 
		"blueberry",
		"orange",
		"melon"
	};

	n = sizeof(fruits)/sizeof(fruits[0]);	// 배열 원소 개수 계산

	for(i = 0; i < n; i++)
		printf("%s \n", fruits[i]);

	return 0;
}
