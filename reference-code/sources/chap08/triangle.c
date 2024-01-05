#include <stdio.h>
#include <math.h>

#define RAD_TO_DEG (45.0/atan(1))

int main(void)
{
	double w, h, r, theta;

	printf("밑변과 높이를 입력하시오:");
	scanf("%lf %lf", &w, &h);

	r = sqrt(w * w + h * h);
	theta = RAD_TO_DEG * atan2(h, w);

	printf("빗변= %f 각도= %f\n", r, theta);
}
