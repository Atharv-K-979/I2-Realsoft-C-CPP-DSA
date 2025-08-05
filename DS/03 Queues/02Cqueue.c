#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 5
typedef struct queue
{
    int arr[N];
    int fr, rr;
} CQUE;

void init(CQUE *t)
{
    int i = 0;
    while (i < N)
    {
        t->arr[i] = -1;
        i++;
    }
    t->rr = t->fr = N - 1;
}

int count(CQUE *t)
{
    int i = 0, cnt = 0;
    while (i < N)
    {
        if (t->arr[i] == -1)
            cnt++;
        i++;
    }
    return cnt;
}

void insert(CQUE *t, int d)
{
    if (count(t) == 0)
        printf("\nOverflow");
    else
    {
        if (t->rr == N - 1)
            t->rr = 0; // if array is filling then we will st from 0
        else
            ++t->rr;
        t->arr[t->rr] = d;
    }
}

void removecq(CQUE *t)
{
    if (count(t) == N)
        printf("\nUnderflow");
    else
    {
        if (t->fr == N - 1)
            t->fr = 0;
        else
            t->fr++;
        t->arr[t->fr] = -1;
    }
}

void displayCQueue(CQUE *t)
{
    if (count(t) == N)
        printf("\nEmpty Queue");
    else
    {
        if (t->fr < t->rr)
        {
            for (int i = t->fr + 1; i <= t->rr; i++)
                printf("%4d", t->arr[i]);
        }
        else
        {
            for (int i = 0; i < N; i++)
                printf("%4d", t->arr[i]);
            for (int i = t->fr + 1; i <= t->rr; i++)
                printf("%4d", t->arr[i]);
        }
    }
}
void main()
{
    int opt, d;
    CQUE p;
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
            removecq(&p);
            break;

        case 3:
            displayCQueue(&p);
            break;

        case 1:
            printf("\nData:");
            scanf("%d", &d);
            insert(&p, d);
        }
    }
}