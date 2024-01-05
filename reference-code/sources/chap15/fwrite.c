#include <stdio.h>

int main(void)
{
	int buffer[] = { 10, 20, 30, 40, 50 };
	FILE *fp = NULL;
	size_t i, size, count;

	fp = fopen("binary.txt", "wb");
	if( fp == NULL ) 
	{
		fprintf(stderr, "binary.txt 파일을 열 수 없습니다.");
		exit(1);
	}

	size = sizeof(buffer[0]);
	count = sizeof(buffer) / sizeof(buffer[0]);

	i = fwrite(&buffer, size, count, fp);	
	return 0;
}
