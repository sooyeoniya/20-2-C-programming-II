#include <stdio.h>
double get_pc_temp();

int main(void)
{
	double temperature;
	temperature = get_pc_temp();
	if( temperature >= 50 ) 
		printf("과열되었습니다\n");
	return 0;
}
double get_pc_temp()
{
	printf("get_pc_temp()가 호출되었습니다.\n");
	return 49.0;
}