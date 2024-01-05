#include <stdio.h>
#include <math.h>
#define CORE_NUM 8
//적분하는 함수는 f(x) = x^2 기준으로 하였음

double trapezoidalSerial(double a, double b, int n);
double verificateTra(double a, double b);

int main() {
	for (int i = 10; i < 500; i = i+50) {
		printf("n : %d ,Serial approximation %lf\n", i*i*100,trapezoidalSerial(-3, 3, i));
		printf("validation %lf\n", verificateTra(-3, 3));
	}	
}

double trapezoidalSerial(
	double a, //시작 지점
	double b, //끝 지점
	int n //사다리꼴의 갯수
) {

	double result = 0;
	double trapzoid = 0;
	double interval = (b - a) / n; //구간의 길이

	for (int i = 0; i < n; i++) {
		trapzoid = interval * (pow(a + interval*i, 2) + pow(a + interval*(i + 1), 2)) / 2;
		result = result + trapzoid;
	}
	return result;
}

double verificateTra(double a, double b) {

	return (b*b*b - a*a*a) / 3;

}

