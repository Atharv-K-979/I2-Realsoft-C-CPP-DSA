#include <stdio.h>

int main()
{
    int i, j, mul;
    for (i = 1; i <= 10; i++)
    {
        for (j = 2; j <= 10; j++)
        {
            mul = i * j;
            printf("%5d", mul);
        }
        printf("\n");
    }
    return 0;
}