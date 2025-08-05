#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 5

typedef struct queue
{
    int arr[N];
    int fr, rr;
} QUE;

void init(QUE *t)
{
    t->rr = -1;
    t->fr = 0;
}

int isEmpty(QUE *t)
{
    return (t->rr < t->fr);
}

void insert(QUE *t, int d)
{
    if (t->rr == N - 1)
        printf("\nQueue Overflow");
    else
    {
        t->rr++;
        t->arr[t->rr] = d;
    }
}

void delete(QUE *t)
{
    if (isEmpty(t))
        printf("\nUnderflow");
    else
        t->fr++;
}

void displayQueue(QUE *t)
{
    int i = t->fr;
    if (isEmpty(t))
        printf("\nEmpty Queue");
    else
    {
        printf("\nData: \n");
        while (i <= t->rr)
        {
            printf("%4d", t->arr[i]);
            i++;
        }
    }
}

void main()
{
    int opt, d;
    QUE p;
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
            delete(&p);
            break;

        case 3:
            displayQueue(&p);
            break;

        case 1:
            printf("\nData:");
            scanf("%d", &d);
            insert(&p, d);
        }
    }
}