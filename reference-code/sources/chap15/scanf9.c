#include <stdio.h>
int main(void)
{
	char ch;
	while(1) {
		scanf("%c", &ch);
		fflush(stdin);
		printf("%d ", ch);
	}
	return 0;
}