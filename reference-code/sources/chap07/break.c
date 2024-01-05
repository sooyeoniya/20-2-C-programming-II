#include <stdio.h>
#define SEED_MONEY 1000000
int main(void)
{
	int year=0, money=SEED_MONEY;

	while(1)
	{
		year++;
		money += money*0.30;
		if( money > 10*SEED_MONEY ) 
			break;
	}
	printf("%d\n", year);
	return 0;
}