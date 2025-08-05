#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <ctype.h>
#include <time.h>
#include <limits.h>
#define N 5
typedef struct queue
{
    int arr[N];
    int fr, rr;
} PQUE;
void init(PQUE *t)
{
    t->rr = -1;
    t->fr = 0;
}
void insert(PQUE *t, int d)
{
    int i;
    if (t->rr == N - 1)
    {
        printf("Overflow\n");
        return;
    }
    for (i = t->rr; i >= 0; i--)
    {
        if (d < t->arr[i])
        {
            t->arr[i + 1] = t->arr[i];
        }
        else
        {
            break;
        }
    }
    t->arr[i + 1] = d;
    t->rr++;
}
void remQue(PQUE *t)
{
    int i;
    if (t->rr < t->fr)
    {
        printf("Underflow\n");
        return;
    }
    for (int i = 1; i <= t->rr; i++)
    {
        t->arr[i - 1] = t->arr[i];
    }
    t->rr--;
}
void display(PQUE *t)
{
    int i;
    if (t->rr < t->fr)
    {
        printf("EmptyQueue\n");
        return;
    }
    printf("\nDisplay\n");
    for (i = 0; i <= t->rr; i++)
    {
        printf("%4d", t->arr[i]);
    }
}

void main()
{
    int opt, d;
    PQUE p;
    init(&p);

    while (1)
    {
        printf("\nQueue\n1.Insert\n2.Remove\n3.Display\n4.Exit\nOption:");
        scanf("%d", &opt);

        if (opt > 3)
            break;

        switch (opt)
        {
        case 2:
            remQue(&p);
            break;

        case 3:
            display(&p);
            break;

        case 1:
            printf("\nData:");
            scanf("%d", &d);
            insert(&p, d);
        }
    }
}