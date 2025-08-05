#include <stdio.h>
int main()
{
    int x[10], i = 0, pc = 0, nc = 0, zc = 0;
    printf("\nData\n");
    while (i < 10)
    {
        scanf(" %d", &x[i]);
        i++;
    }
    for ( i = 0; i < 10; i++)
    {
        if (x[i] > 0)
        {
            pc++;
        }
        else
        {
            if (x[i] < 0)
            {
                nc++;
            }
            else
                zc++;
        }
    }
    printf("Array Data\n");
    for (i = 0; i < 10; i++)
    {
        printf("%4d", x[i]);
    }
    printf("\nThe count is pos %d,neg %d,zero %d", pc, nc, zc);
    return 0;
}