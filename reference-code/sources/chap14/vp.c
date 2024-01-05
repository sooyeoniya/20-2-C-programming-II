#include <stdio.h>
void memzero(void *ptr, size_t len)
{
	for (; len > 0; len--) {
		*(char *)ptr = 0;
	}
}

int main(void)
{
	char a[10];
	memzero(a, sizeof(a));

	int b[10];
	memzero(b, sizeof(b));

	double c[10];
	memzero(c, sizeof(c));

	return 0;
}