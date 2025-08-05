#include <stdio.h>
int main()
{
    int x[3][3], y[3][3], z[3][3], i, j;
    printf("Data for matrix 1");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("x[%d][%d]", i, j);
            scanf(" %d", &x[i][j]);
        }
    }
    printf("Matrix data 2 ");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("y[%d][%d]", i, j);
            scanf(" %d", &y[i][j]);
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            z[i][j] = x[i][j] - y[i][j];
        }
    }
    printf("OP\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d", x[i][j]);
        }
        printf("\t");
        for (j = 0; j < 3; j++)
        {
            printf("%d", y[i][j]);
        }
        printf("\t");
        for (j = 0; j < 3; j++)
        {
            printf("%d", z[i][j]);
        }
        printf("\n");
    }
    return 0;
}