#include <stdio.h>
 
int main(void)
{
       int scores[5];

       scores[0] = 10;
       scores[1] = 20;
       scores[2] = 30;
       scores[3] = 40;
       scores[4] = 50;
 
 
       for(int i=0;i < 5; i++)
             printf("scores[%d]=%d\n",i, scores[i]);
       return 0;
}