#include <stdio.h>
#define N 10
void input(int *a)
{
    int i = 0;
    printf("\nEnter array data: ");
    while (i < N)
    {
        scanf("%d", &a[i]);
        i++;
    }
}
void display(int *a, int flg)
{
    int i = 0;
    if (flg == 0)
        printf("\nBefore sorting\n");
    else
        printf("\nAfter sorting\n");
    while (i < N)
        printf("%4d", a[i++]);
    return;
}

void merge(int *a)
{
    int i, j, k;
    int l1, u1, l2, u2, size = 1;
    int tmp[N];
    while (size < N)
    {
        l1 = 0;
        k = 0;
        while (l1 + size < N)
        {
            u1 = l1 + size - 1;
            l2 = u1 + 1;
            if (l2 + size - 1 < N)
                u2 = l2 + size - 1;
            else
                u2 = N - 1;
            for (i = l1, j = l2; i <= u1 && j <= u2; k++)
            {
                if (a[i] < a[j])
                    tmp[k] = a[i++];
                else
                    tmp[k] = a[j++];
            }
            for (; i <= u1; i++)
                tmp[k++] = a[i];
            for (; j <= u2; j++)
                tmp[k++] = a[j];
            l1 = u2 + 1;
        }
        for (i = l1; i < N; i++)
            tmp[k++] = a[i];
        for (i = 0; i < N; i++)
            a[i] = tmp[i];
        size *= 2;
    }
    return;
}

int main()
{
    int x[N];
    input(x);
    display(x, 0);
    merge(x);
    display(x, 1);
    return 0;
}