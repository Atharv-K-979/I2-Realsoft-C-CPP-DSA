#include <stdio.h>
int main()
{
    int i, j, tmp;
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
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < i; j++)
        {
            tmp = x[i][j];
            x[i][j] = x[j][i];
            x[j][i] = tmp;
        }
    }
    printf("\n\nOutput\n\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%4d", x[i][j]);
        }
        printf("\n");
    }
    return 0;
}