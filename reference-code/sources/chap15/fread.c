#include <stdio.h>
#define SIZE 1000

int main(void)
{
	float buffer[SIZE];
	FILE *fp = NULL;
	size_t size;

	fp = fopen("binary.txt", "rb");

	if( fp == NULL ) 
	{
		fprintf(stderr, "binary.txt 파일을 열 수 없습니다.");
		exit(1);
	}

	size = fread( &buffer, sizeof(float), SIZE, fp);

	if( size != SIZE )
	{
		fprintf(stderr, "읽기 동작 중 오류가 발생했습니다.\n");
	}
	fclose(fp);

	return 0;
}
