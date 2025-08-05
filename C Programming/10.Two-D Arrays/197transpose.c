#include <stdio.h>
int main()
{
    int i, j;
    int x[3][3];
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("x[%d][%d] :", i, j);
            scanf("%d", &x[i][j]);
        }
    }
    printf("\n\nMatrix form \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%4d", x[i][j]);
        }
        printf("\n");
    }
    printf("\nTranspose\n\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%4d", x[j][i]);
        }
        printf("\n");
    }
    return 0;
}