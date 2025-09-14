#include <stdio.h>
#define N 10
void input(int *a)
{
    int i = 0;
    printf("Enter 3 digit nos.");
    while (i < N)
    {
        scanf("%d", a + i);
        if (a[i] < 100 || a[i] > 999)
        {
            continue;
        }
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
int getIndex(int val, int pos)
{
    int index;
    switch (pos)
    {
    case 1:
        index = val % 10;
        break;
    case 2:
        index = (val / 10) % 10;
        break;

    case 3:
        index = val / 100;
    }
    return index;
}

struct queue
{
    int arr[N];
    int fr, rr;
} Q[10];
void init()
{
    int i = 0;
    while (i < 10)
    {
        Q[i].rr = -1;
        Q[i].fr = 0;
        i++;
    }
}

void insert(int *a, int pos)
{
    int i = 0, index, j;
    while (i < 10)
    {
        index = getIndex(a[i], pos);
        j = ++Q[index].rr;
        Q[index].arr[j] = a[i];
        i++;
    }
}

void remQue(int *a)
{
    int i = 0, j = 0, k = 0;
    while (i < 10)
    {
        j = 0;
        while (j <= Q[i].rr)
        {
            a[k++] = Q[i].arr[j];
            j++;
        }
        i++;
    }
}

void radixSort(int *a)
{
    int i = 1;
    while (i <= 3)
    {
        init();
        insert(a, i);
        remQue(a);
        i++;
    }
}

int main()
{
    int x[N];
    input(x);
    display(x, 0);
    radixSort(x);
    display(x, 1);
    return 0;
}