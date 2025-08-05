#include <stdio.h>
int main()
{
    int x[10], i = 0, xpos=0;
    printf("\nData\n");
    while (i < 10)
    {
        scanf(" %d", &x[i]);
        if (i>0)
        {
            if (x[i]>x[xpos])
            {
                xpos=i;
            } 
        }
        i++;
    }
    printf("Array Data\n");
    for (i = 0; i < 10; i++)
    {
        printf("%4d", x[i]);
    }
    printf("\nThe max is %d and max pos is %d", x[xpos],xpos);
    return 0;
}