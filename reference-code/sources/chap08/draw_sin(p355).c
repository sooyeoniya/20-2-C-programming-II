#include <windows.h>

#include <stdio.h>
#include <math.h>
#define PI 3.141592

double rad(double degree)
{
	return PI*degree / 180.0;
}
int main(void)
{

	int degree, x, y;
	double radian, result;

	HWND hwnd = GetForegroundWindow();
	HDC hdc = GetWindowDC(hwnd);

	MoveToEx(hdc, 30, 200, 0);
	LineTo(hdc, 500, 200);

	MoveToEx(hdc, 30, 200, 0);
	LineTo(hdc, 30, 0);


	for (degree = 0; degree <= 360; degree++)
	{
		result = sin(rad((double)degree));
		x = degree + 30;
		y = 200 - (int)(100.0*result);
		SetPixel(hdc, x, y, RGB(255, 0, 0));
	}
	return 0;
}
