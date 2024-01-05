#include <stdio.h>

int main(void)
{
	int i;
	char str[4];

	str[0] = 'a';
	str[1] = 'b';
	str[2] = 'c';
	str[3] = '\0';		// NULL 문자를 넣어준다.

	
	i = 0;

	while(str[i] != '\0')
	{
		printf("%c", str[i]);
		i++;
	}

	return 0;
}