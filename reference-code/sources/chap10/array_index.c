#include <stdio.h>
int main(void)
{
	int grade[5];
	int i;

	grade[0]=10;
	grade[1]=20;
	grade[2]=30;
	grade[3]=40;
	grade[4]=50;
	grade[5]=60;

	for(i = 0; i <= 5; i++)
		 printf("grade[%d]=%d\n", i, grade[i]);
	return 0;
}