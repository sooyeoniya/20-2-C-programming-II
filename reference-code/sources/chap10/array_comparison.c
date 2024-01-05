#include <stdio.h>
#define SIZE 5

int main(void)
{
	int i;
	int a[SIZE] = {1, 2, 3, 4, 5};
	int b[SIZE] = {1, 2, 3, 4, 5};


	for(i = 0; i < SIZE ; i++) 
	{
		if ( a[i] != b[i] )
		{
			printf("´Ù¸¨´Ï´Ù.\n");
			break;
		}
	}
	return 0;
}
