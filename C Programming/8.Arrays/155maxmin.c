#include <stdio.h>
int main()
{
    int x[10], i = 0, xpos = 0, npos = 0;
    printf("\nData\n");
    while (i < 10)
    {
        scanf(" %d", &x[i]);
        if (i > 0)
        {
            if (x[i] > x[xpos])
            {
                xpos = i;
            }
            else
            {
                if (x[i] < x[npos])
                {
                    npos = i;
                }
            }
        }
        i++;
    }
    printf("Array Data\n");
    for (i = 0; i < 10; i++)
    {
        printf("%4d", x[i]);
    }
    printf("\nThe max is %d and max pos is %d", x[xpos], xpos);
    printf("\nThe min is %d and min pos is %d", x[npos], npos);
    return 0;
}