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
int IsPrimeNumber(unsigned int n) //함수 정의문
{   
    if (calc_digit(n)<9){
        return 0;
    }
    int i = 0;
    unsigned int last = n / 2;   //약수가 없는 수가 소수이므로 2부터 n/2(자기자신/2)까지만 확인하면 됨
    if (n <= 1)//소수는 1보다 큰 자연수여야 함
    {
        return 0;
    }
                        //(자기자신/2)보다 큰수는 약수가 될 수 없음
    for (i = 2; i <= last; i++) //i를 2부터 last까지 1씩 증가시키며 반복 수행
    {
        if ((n%i) == 0) //n을 i로 나누었을때 나머지가 0이면(즉, i는 n의 약수가 아님)
        {
            return 0; //소수가 아니므로 0반환(i가 약수이므로 n은 소수가 아님)
        }
    }
    return 1; //1~last(자기자신/2)사이에 약수가 없으므로 소수임
}