#include <stdio.h>

union ip_address {
	unsigned long laddr;
	unsigned char saddr[4];
};

int main(void)
{
	union ip_address addr;

	addr.saddr[0] = 1;
	addr.saddr[1] = 0;
	addr.saddr[2] = 0;
	addr.saddr[3] = 127;

	printf("%x\n", addr.laddr);

	return 0;		
}