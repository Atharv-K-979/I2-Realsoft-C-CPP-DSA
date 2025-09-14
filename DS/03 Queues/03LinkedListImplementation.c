#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <ctype.h>
#include <time.h>
#include <limits.h>
typedef struct Node
{
    int data;
    struct Node *next;
} NODE;
typedef struct queue
{
    NODE *fr;
    NODE *rr;
} QUE;
void init(QUE *t)
{
    t->fr = NULL;
    t->rr = NULL;
}
NODE *createNode(int d)
{
    NODE *a = (NODE *)malloc(sizeof(NODE));
    a->data = d;
    a->next = NULL;
    return a;
}
void insert(QUE *t, int d)
{
    NODE *a = createNode(d);
    NODE *b = t->rr;
    if (t->fr == NULL)
        t->fr = a;
    else
    {
        b->next = a;
    }
    t->rr = a;
}
void removeque(QUE *t)
{
    NODE *a = t->fr;
    if (t->fr == NULL)
    {
        printf("UnderFlow\n");
        return;
    }
    if (t->fr == t->rr)
        t->fr = t->rr = NULL;
    t->fr = a->next;
    free(a);
}
void display(QUE *t)
{
    NODE *a = t->fr;
    if (t->fr == NULL)
        printf("Empty Queue\n");
    else
    {
        printf("Queue Data\n");
        while (a != NULL)
        {
            printf("%4d", a->data);
            a = a->next;
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
            removeque(&p);
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

/// HW
// insert add at end
// del first for remove

// dlist also