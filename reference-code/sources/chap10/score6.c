#include <stdio.h>

int main(void)
{
       int grade[] = { 1, 2, 3, 4, 5, 6 };
       int i, size;
 

       size = sizeof(grade) / sizeof(grade[0]);


       for(i = 0; i < size ; i++)
             printf("grade[%d] = %d\n", i, grade[i]);
       return 0;
 
}