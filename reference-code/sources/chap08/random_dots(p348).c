#include <windows.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <conio.h>

int main(void)
{
	int i, x, y, red, green, blue;

	HDC hdc;
	hdc = GetWindowDC(GetForegroundWindow());

	srand((unsigned)time(NULL));
	for (i = 0; i < 10000; i++)
	{
		x = rand() % 300;		// x는 0에서 299 사이의 랜덤한 값
		y = rand() % 300;         // y는 0에서 299 사이의 랜덤한 값
                                            
		red = rand() % 256;       // red는 0에서 255 사이의 랜덤한 값
		green = rand() % 256;     // green은 0에서 255 사이의 랜덤한 값
		blue = rand() % 256;      // blue는 0에서 255 사이의 랜덤한 값

		SetPixel(hdc, x, y, RGB(red, green, blue));
	}
	_getch();
	return 0;
}