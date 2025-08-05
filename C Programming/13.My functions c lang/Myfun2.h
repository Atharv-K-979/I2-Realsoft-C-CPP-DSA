#include<stdio.h>
// to arrray display and input
void display(int p[], int n)
{
    int i = 0;
    printf("\nArray Data");
    while (i < n)
    {
        printf("%4d", p[i]);
        i++;
    }
}
void input(int p[], int n)
{
    int i = 0;
    printf("\nArray Data");
    while (i < n)
    {
        scanf("%d", &p[i]);
        i++;
    }
}

// to compute sum
int total(int a[], int n)
{
    int i = 1, tot = a[0];
    while (i < n)
    {
        tot += a[i];
        i++;
    }
    return tot;
}

// to compute avg
int avg(int a[], int n)
{
    return (total(a, n) / n);
}

// to find max data pos
int maxPos(int a[], int n)
{
    int i = 1, pos = 0;
    while (i < n)
    {
        if (a[i] > a[pos])
        {
            pos = i;
        }
        i++;
    }
    return pos;
}

// to find min data position
int minPos(int a[], int n)
{
    int i = 1, pos = 0;
    while (i < n)
    {
        if (a[i] < a[pos])
        {
            pos = i;
        }
        i++;
    }
    return pos;
}
// to find and replace
int findAndreplace(int a[], int sv, int rv, int n)
{
    int i = 0;
    while (i < n)
    {
        if (a[i] == sv)
        {
            a[i] = rv;
        }
        i++;
    }
}