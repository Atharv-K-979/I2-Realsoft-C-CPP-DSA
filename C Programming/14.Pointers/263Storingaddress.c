#include <stdio.h>

int main() {
    int a=10;
    int *b = &a;
    int **c = &b;
    printf("%d\n",a);
    printf("%u\n",&a);
    printf("%u\n",*(&a)+5);
    printf("%u\n",b);
    printf("%u\n",&b);
    printf("%d\n",*b);
    printf("%u\n",*(&b));
    printf("%d\n",**(&b));
    printf("%d\n",c);
    printf("%d\n",**c);
    printf("%d\n",***(&c));
    return 0;
}