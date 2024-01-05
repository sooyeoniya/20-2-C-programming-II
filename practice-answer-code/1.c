#include <stdio.h>
#include <math.h>
#define CORE_NUM 8
//�����ϴ� �Լ��� f(x) = x^2 �������� �Ͽ���

double trapezoidalSerial(double a, double b, int n);
double verificateTra(double a, double b);

int main() {
	for (int i = 10; i < 500; i = i+50) {
		printf("n : %d ,Serial approximation %lf\n", i*i*100,trapezoidalSerial(-3, 3, i));
		printf("validation %lf\n", verificateTra(-3, 3));
	}	
}

double trapezoidalSerial(
	double a, //���� ����
	double b, //�� ����
	int n //��ٸ����� ����
) {

	double result = 0;
	double trapzoid = 0;
	double interval = (b - a) / n; //������ ����

	for (int i = 0; i < n; i++) {
		trapzoid = interval * (pow(a + interval*i, 2) + pow(a + interval*(i + 1), 2)) / 2;
		result = result + trapzoid;
	}
	return result;
}

double verificateTra(double a, double b) {

	return (b*b*b - a*a*a) / 3;

}

