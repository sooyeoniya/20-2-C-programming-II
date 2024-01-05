#include <stdio.h>

#define SIZE 5
int main(void)
{

	int buffer[SIZE] = { 10, 20, 30, 40, 50 };
	FILE *fp = NULL;

	fp = fopen("binary.bin", "wb");       // ①
	if( fp == NULL ) 
	{
		fprintf(stderr, "binary.bin 파일을열수없습니다.");
		return 1;
	}

	fwrite(buffer, sizeof(int), SIZE, fp);     // ②

	fclose(fp);    
	return 0;
}