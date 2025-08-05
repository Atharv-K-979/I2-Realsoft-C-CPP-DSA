#include <stdio.h>

int main() {
    float x=9.2;
    float *y = &x;
    printf("%d\n",x);
    printf("%u\n",&x);
    printf("%f\n",*(&x));
    printf("%u\n",y);
    printf("%u\n",&y);
    printf("%u\n",*(&y));
    printf("%f\n",**(&y));
    printf("%f\n",*y);
    *y+=5;
    printf("%f\n",x);
    printf("%f\n",*y);

    return 0;
}