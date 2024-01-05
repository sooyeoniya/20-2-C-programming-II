#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
double factorial(double a);
int IsPrimeNumber(unsigned int n);
void parsing(char*dest,char* src, int s, int e);
int calc_digit(unsigned int n);

int main(void)
{
    char e[200]="2.7182818284590452353602874713526624977572470936999595749669676277240766303535475945713821785251664274274663919320030599218174135966290435729003342952605956307381323286279434";
    char buffer[10];
    unsigned int num;
    char *end;
    for(int i=2; i<200;i++){
        parsing(buffer,e,i,i+9);
        num=  strtol(buffer, &end, 10);
        if(IsPrimeNumber(num) ==1){
            printf("%dth num: %d\n", i, num);
        }
    }
}
void parsing(char*dest,char* src, int s, int e){
    int j=0;
    for(int i=s;i<e;i++){
        dest[j]=src[i];
        j++;
    }
}
int calc_digit(unsigned int n){
    int i=0;
    while(n>0){
        i++;
        n/=10;
    }
    return i;
}
int IsPrimeNumber(unsigned int n) //�Լ� ���ǹ�
{   
    if (calc_digit(n)<9){
        return 0;
    }
    int i = 0;
    unsigned int last = n / 2;   //����� ���� ���� �Ҽ��̹Ƿ� 2���� n/2(�ڱ��ڽ�/2)������ Ȯ���ϸ� ��
    if (n <= 1)//�Ҽ��� 1���� ū �ڿ������� ��
    {
        return 0;
    }
                        //(�ڱ��ڽ�/2)���� ū���� ����� �� �� ����
    for (i = 2; i <= last; i++) //i�� 2���� last���� 1�� ������Ű�� �ݺ� ����
    {
        if ((n%i) == 0) //n�� i�� ���������� �������� 0�̸�(��, i�� n�� ����� �ƴ�)
        {
            return 0; //�Ҽ��� �ƴϹǷ� 0��ȯ(i�� ����̹Ƿ� n�� �Ҽ��� �ƴ�)
        }
    }
    return 1; //1~last(�ڱ��ڽ�/2)���̿� ����� �����Ƿ� �Ҽ���
}