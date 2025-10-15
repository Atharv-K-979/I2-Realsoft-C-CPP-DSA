#include <stdio.h>
#define N 5
void input(int *a)
{
    int i = 0;
    printf("Enter data.");
    while (i < N)
    {
        scanf("%d", a + i);
        i++;
    }
}

void display(int *a, int flg)
{
    int i = 0;
    if (flg == 0)
    {
        printf("Before Sorting\n");
    }
    else
        printf("\nAfter Sorting\n");
    while (i < N)
    {
        printf("%4d", a[i]);
        i++;
    }
}

void swap(int *a, int *b)
{
    int c = *a;
    *a = *b;
    *b = c;
}
void pivot(int *a, int l, int r)
{
    if (a[l] > a[r])
    {
        swap(a + l, a + r);
    }
}

int partition(int *a, int l, int r)
{
    int i = l, j = r, k;
    pivot(a, l, r);
    k = a[l]; // pivot element
    do
    {
        do
            ++i;
        while (a[i] < k);
        do
            --j;
        while (a[j] > k);

        if (i < j)
        {
            swap(a + j, a + l);
        }
    } while (i < j);
    swap(a + j, a + l);
    return j;
}

void quick(int *a, int l, int r)
{
    int k;
    if (l < r)
    {
        k = partition(a, l, r);
        quick(a, l, k - 1);
        quick(a, k + 1, r);
    }
}

int main()
{
    int x[N];
    input(x);
    display(x, 0);
    quick(x, 0, N - 1);
    display(x, 1);
}