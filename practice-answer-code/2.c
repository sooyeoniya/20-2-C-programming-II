#include <stdio.h>

int main(void) {
    int tmp1 = 10, tmp2 = 6;
    int x, y, r;


    for (int i = tmp1; i > 1; i--) {
        if (((tmp1 % i) == 0) && ((tmp2%i) ==0)) {
            printf("GCD %d\n", i);
        }
    }
}