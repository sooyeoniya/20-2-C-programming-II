#include <stdio.h>
static void f1()
{
	printf("f1()이 호출되었습니다.\n");
}

void f2()
{
	f1();
	printf("f2()가 호출되었습니다.\n");
}
