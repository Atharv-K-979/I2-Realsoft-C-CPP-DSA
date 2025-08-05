#include <stdio.h>
int main()
{
    int x[10], i = 0, max;
    printf("\nData\n");
    while (i < 10)
    {
        scanf(" %d", &x[i]);
        if (i == 0)
        {
            max = x[i];
        }
        else
        {
            if (x[i] > max)
            {
                max = x[i];
            }
        }
        i++;
    }
    printf("Array Data\n");
    for (i = 0; i < 10; i++)
    {
        printf("%4d", x[i]);
    }
    printf("\nThe max is %d", max);
    return 0;
}