#include <stdio.h>
#include <stdlib.h>

int values[] = { 98, 23, 99, 37, 16 };

int compare(const void * a, const void * b)
{
	return (*(int*)a - *(int*)b);
}

int main()
{
	int n;

	qsort(values, 5, sizeof(int), compare);

	printf("정렬한 후 배열: ");
	for (n = 0; n < 5; n++)
		printf("%d ", values[n]);
	printf("\n");

	return(0);
}