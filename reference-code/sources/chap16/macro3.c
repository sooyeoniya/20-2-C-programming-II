#include <stdio.h>

#define MAKE_NAME(n) v ## n
#define PRINT(n) printf("v" #n " = %d\n", v ## n);

int main(void)
{
	int MAKE_NAME(1) = 10;	// int v1 = 10;과 같다.
	int MAKE_NAME(2) = 20;	// int v2 = 20;과 같다.

	PRINT(1);			// printf("v1 = %d\n", v1);과 같다.
	PRINT(2);			// printf("v2 = %d\n", v2);과 같다.
	return 0;
}
