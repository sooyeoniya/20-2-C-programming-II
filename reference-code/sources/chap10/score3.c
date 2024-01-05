#include <stdio.h>
#define SIZE 5

int main (void){
	int i;
	int grade[SIZE];
	printf("5명의 점수를 입력하시오\n");
	for(i=0;i<SIZE;i++)
		scanf("%d",&grade[i]);

	for(i=0;i<SIZE;i++)
		printf("grade[%d]=%d\n",i,grade[i]);
	return 0;
}