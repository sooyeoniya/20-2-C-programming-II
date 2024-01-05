#include <stdio.h>

void print_star()
{
	int i;
	for(i = 0; i < 10; i++)
		printf("*");
}

int main(void)
{
	print_star();
	print_star();
	print_star();
	return 0;
}