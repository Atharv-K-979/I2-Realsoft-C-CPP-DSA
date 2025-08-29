#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <ctype.h>
#include <time.h>
#include <limits.h>
int main()
{

    int x[5];
    int i, j, pos, tmp;
    for (int i = 0; i < 5; i++)
    {
        printf("\nEnter Data: ");
        scanf("%d", &x[i]);
    }
    printf("\nBefore Sorting");
    for (int i = 0; i < 5; i++)
    {
        printf("%4d", x[i]);
    }

    // logic
    for (int i = 0; i < 4; i++)
    {
        pos = i;
        for (int j = i+1; j < 5; j++)
        {
            if (x[j] < x[pos])
                pos = j;
        }
        if (i != pos)
        {
            tmp = x[i];
            x[i] = x[pos];
            x[pos] = tmp;
        }
    }

    printf("\nAfter Sorting");
    for (int i = 0; i < 5; i++)
    {
        printf("%4d", x[i]);
    }

    return 0;
}