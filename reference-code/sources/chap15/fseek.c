#include <stdio.h>

int main (void)
{
	FILE *fp;

	char buffer[100];

	fp = fopen("sample.txt", "wt");       
	fputs( "ABCDEFGHIJKLMNOPQRSTUVWXYZ" , fp );
	fclose(fp);

	fp = fopen("sample.txt", "rt");       


	fseek( fp , 3 , SEEK_SET );
	printf("fseek(fp, 3, SEEK_SET) = %c \n", fgetc(fp));

	fseek( fp , -1 , SEEK_END );
	printf("fseek(fp, -1, SEEK_END) = %c \n", fgetc(fp));

	fclose(fp);
	return 0;
}
