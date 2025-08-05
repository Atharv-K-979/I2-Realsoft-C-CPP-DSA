#include <stdio.h>
int main()
{
    int i, a, b, c;
    for (i = 1, a = -1, b = 1; i <=10; i++)
    {
        c = a + b;
        printf("%3d\n",c);
        a = b;
        b = c;
    }

    return 0;
}