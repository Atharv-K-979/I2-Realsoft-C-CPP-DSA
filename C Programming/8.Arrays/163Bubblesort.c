// Array must be in order
#include <stdio.h>
int main()
{
    int x[5], i = 0, j = 0, tmp;
    printf("\nData\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &x[i]);
    }
    printf("\nBefore sorting\n");
    for (i = 0; i < 5; i++)
    {
        printf("%4d", x[i]);
    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4 - i; j++)
        {
            if (x[j] > x[j + 1])
            {
                tmp = x[j];
                x[j] = x[j + 1];
                x[j + 1] = tmp;
            }
        }
    }
    printf("\n\nAfter Sorting\n");
    for (i = 0; i < 5; i++)
    {
        printf("%4d", x[i]);
    }
    return 0;
}