// getch()의 사용
#include <stdio.h>
#include <conio.h>
int main(void)
{
	int ch;		// 정수형에 주의

	while((ch=_getch())!='q')
	{
		_putch(ch);
	}
	return 0;
}

