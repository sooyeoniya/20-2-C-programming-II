#include <stdio.h>

// amount가 양수이면 입금이고 음수이면 출금으로 생각한다. 
void save(int amount)
{
	static long balance = 0;

	if( amount >= 0)
		printf("%d \t\t", amount);
	else
		printf("\t %d \t", -amount);

	balance += amount;
	printf("%d \n", balance);
}

int main(void) {
	printf("==============================\n");
	printf("입금 \t출금\t 잔고\n");
	printf("==============================\n");
	save(10000);
	save(50000);
	save(-10000);
	save(30000);
	printf("==============================\n");
	return 0;
}