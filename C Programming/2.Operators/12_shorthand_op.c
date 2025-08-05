#include <stdio.h>
int main()
{
    int a, b;
    printf("\n Type a,b");
    scanf("%d %d", &a, &b);
    //////////// Add
    a = a + 3;
    printf("\n%d", a);
    a += 3;
    printf("\n%d", a);
    /////////////// Sub
    a = a - 3;
    printf("\n%d", a);
    a -= 3;
    printf("\n%d", a);
    ////////////////// Mul
    a = a * 3;
    printf("\n%d", a);
    a *= 3;
    printf("\n%d", a);
    ///////////////// Div
    a = a / 3;
    printf("\n%d", a);
    a /= 3;
    printf("\n%d", a);

    return 0;
    }
