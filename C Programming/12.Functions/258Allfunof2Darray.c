#include <stdio.h>
void input(int a[][3], int r, int c)
{
    int i, j;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("\n[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
}
void display(int a[][3], int r, int c)
{
    int i, j;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%4d", a[i][j]);
        }
        printf("\n");
    }
}
void add(int d[][3], int a[][3], int b[][3], int r, int c)
{
    int i, j;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            d[i][j] = a[i][j] + b[i][j];
        }
    }
}
void sub(int d[][3], int a[][3], int b[][3], int r, int c)
{
    int i, j;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            d[i][j] = a[i][j] - b[i][j];
        }
    }
}
void mul(int d[][3], int a[][3], int b[][3], int r, int c)
{
    int i, j, k;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            d[i][j] = 0;
            for (k = 0; k < 3; k++)
            {
                d[i][j] += (a[i][k] * b[k][j]);
            }
        }
    }
}
int main()
{
    int i = 0, opt = 0, flgx = 0, flgy = 0, flgz = 0, x[3][3], y[3][3], z[3][3];
    while (1)
    {
        printf("\nMenu\n1.Input\n2.Input\n3.Add\n4.Sub\n5.Mul\n6.Output x\n7.Output y\n8.Output z\n9.Exit\n");
        scanf("%d", &opt);
        if (opt > 8)
        {
            break;
        }
        switch (opt)
        {
        case 1:
            input(x, 3, 3);
            flgx = 1;
            break;
        case 2:
            input(y, 3, 3);
            flgy = 1;
            break;
        case 3:
            if (flgx && flgy)
            {
                add(z, x, y, 3, 3);
                flgz = 1;
            }
            break;
        case 4:
            if (flgx && flgy)
            {
                sub(z, x, y, 3, 3);
                flgz = 1;
            }
            else
            {
                printf("\nInvalid Data");
            }
            break;
        case 5:
            if (flgx && flgy)
            {
                mul(z, x, y, 3, 3);
                flgz = 1;
            }
            else
            {
                printf("\nInvalid Data");
            }
            break;
        case 6:
            if (flgx)
            {
                display(x, 3, 3);
            }
            else
            {
                printf("\nInvalid Data");
            }
            break;
        case 7:
            if (flgy)
            {
                display(y, 3, 3);
            }
            else
            {
                printf("\nInvalid Data");
            }
            break;
        case 8:
            if (flgz)
            {
                display(z, 3, 3);
            }
            else
            {
                printf("\nInvalid Data");
            }
            break;
        }
    }
    return 0;
}