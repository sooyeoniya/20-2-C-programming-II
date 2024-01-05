#include <stdio.h>
 
int main(void)
{
       char name[100];
       char address[100];
 
       printf("이름을 입력하시오: ");
       scanf("%s", name);
       printf("현재 거주하는 도시를 입력하시오: ");
       scanf("%s", address);
 
       printf("당신은 %s에 사는 %s입니다.\n", address, name);
       return 0;
}