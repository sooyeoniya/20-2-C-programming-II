#include <stdio.h>
int main(void)
{

       int scores[5] = { 31, 63, 62, 87, 14 };
       int i;
 
       for(i = 0; i < 5; i++)
             printf("scores[%d] = %d\n", i, scores[i]);
 
       return 0;
}