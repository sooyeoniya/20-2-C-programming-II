#include <stdio.h>
double c_to_f(double c_temp); 	// 함수 원형

int main(void)
{
	printf("섭씨 %lf도는 화씨 %lf입니다.  \n", 36.0, c_to_f(36.0));
	return 0;
}

double c_to_f(double c_temp)
{
	return 9.0 / 5.0 * c_temp + 32;
}
