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

    int x[5], i, val, j;
    printf("\nEnter Data");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &val);
        for (j = i - 1; j >= 0 && x[j] > val; j--)
        {
            x[j + 1] = x[j];
        }
        x[j + 1] = val;
    }
    printf("\nArray Data");
    for (int i = 0; i < 5; i++)
    {
        printf("%4d", x[i]);
    }
    return 0;
}

// void main()
// {
//     int x[5], i = 0, j = 0, val;
//     for (i = 0; i < 5; i++)
//     {
//         printf("\nEnter Data");
//         scanf("%d", &x[i]);
//     }
//     printf("\nBefore Sorting");
//     for (i = 0; i < 5; i++)
//     {
//         printf("%4d", x[i]);
//     }
//     i = 0;
//     while (i < 5)
//     {
//         val = x[i];
//         for (j = i - 1; j >= 0 && x[j] > val; j--)
//         {
//             x[j + 1] = x[j];
//         }
//         x[j + 1] = val;
//         i++;
//     }
//     printf("\nAfter Sorting");
//     for (i = 0; i < 5; i++)
//     {
//         printf("%4d", x[i]);
//     }
//     return;
// }