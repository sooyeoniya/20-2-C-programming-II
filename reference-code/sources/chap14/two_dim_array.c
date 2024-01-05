#include <stdio.h>

int main(void)
{
	int m[3][3] = { 10, 20, 30, 40, 50, 60, 70, 80, 90 };

	printf("m = %p\n", m);
	printf("m+1 = %p\n", m+1);
	printf("m+2 = %p\n", m+2);
	printf("m[0] = %p\n", m[0]);
	printf("m[1] = %p\n", m[1]);
	printf("m[2] = %p\n", m[2]);

	return 0;
}
