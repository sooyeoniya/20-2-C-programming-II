#include <stdio.h>

#define  YEARS 	3
#define  PRODUCTS 	5

int sum(int scores[YEARS][PRODUCTS]);

int main(void)
{
	int sales[YEARS][PRODUCTS] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
	int total_sale;

	total_sale = sum(sales);
	printf("총매출은 %d입니다.\n", total_sale);


	return 0;
}

int sum(int scores[YEARS][PRODUCTS])
{
	int y, p;
	int total = 0;

	for(y = 0; y < YEARS; y++)
		for(p = 0; p < PRODUCTS; p++)
			total += scores[y][p];

	return total;
}
