// Array must be in order
#include <stdio.h>
int main()
{
    int x[5], i, j, pos, tmp;
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
        pos = i;
        for (j = j + 1; j < 5; j++)
        {
            if (x[j] < x[pos])
            {
                pos = j;
            }
        }
        if (i != pos)
        {
            tmp = x[i];
            x[i] = x[pos];
            x[pos] = tmp;
        }
    }
    printf("\n\nAfter Sorting\n");
    for (i = 0; i < 5; i++)
    {
        printf("%4d", x[i]);
    }
    return 0;
}