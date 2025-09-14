// array must be in sorted order for fiboSearch
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <ctype.h>
#include <time.h>
#include <limits.h>
#define N 10
void input(int *a)
{

    int i = 0;
    printf("\nArray Data");
    while (i < N)
    {
        scanf("%d", (a + i));
        if (i > 0 && a[i] < a[i - 1])
        {
            continue;
        }
        i++;
    }
}
void display(int *a)
{
    int i = 0;
    printf("Data\n");
    while (i < N)
    {
        printf("%4d", a[i++]);
    }
    return;
}
int fSearch(int *a, int sv)
{
    int f1, f2, mid, first, idx;
    f1 = 1;
    f2 = 0;
    mid = 2;
    while (f1 < N)
    {
        f1 = f1 + f2;
        f2 = f1 - f2;
        mid++;
    }
    f2 = f1 - f2;
    f1 = f1 - f2;
    mid--;
    first = 0;
    while (mid > 0)
    {
        idx = first + f1;
        if (idx >= N || sv < a[idx])
        {
            mid--;
            f2 = f1 - f2;
            f1 = f1 - f2;
        }
        else
        {
            if (sv == a[idx])
                break;
            else
            {
                first = idx;
                mid = mid - 2;
                f1 = f1 - f2;
                f2 = f2 - f1;
            }
        }
    }
    if (mid > 0)
        return idx;
    else
        return -1;
}

void main()
{
    int x[N], sv, res;
    input(x);
    printf("\nSearch Value: ");
    scanf("%d", &sv);
    res = fSearch(x, sv);
    if (res == -1)
        printf("\nNot Found");
    else
        printf("\nFound");
}
