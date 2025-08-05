#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct node
{
    int data;
    struct node *next;
} NODE;
typedef struct slist
{
    NODE *st;
} SLIST;
void init(SLIST *t)
{
    t->st = NULL;
}
NODE *createNode(int d)
{
    NODE *a = (NODE *)malloc(sizeof(NODE));
    a->data = d;
    a->next = NULL;
    return a;
}
void display(SLIST *t)
{
    NODE *a = t->st;
    if (t->st == NULL)
        printf("\nEmpty List");
    else
    {
        printf("\nData :");
        while (a != NULL)
        {
            printf("%4d", a->data);
            a = a->next;
        }
    }
}
void dellAll(SLIST *t)
{
    NODE *a = t->st;
    while (t->st != NULL)
    {
        t->st = a->next;
        free(a);
        a = t->st;
    }
}
void createList(SLIST *t)
{
    NODE *a, *b = NULL;
    int d;
    dellAll(t);
    printf("Enter Data (0 to stop):\n");
    while (1)
    {
        scanf("%d", &d);
        if (d == 0)
        {
            break;
        }
        a = createNode(d);
        if (t->st == NULL)
            t->st = a;
        else
            b->next = a;
        b = a;
    }
}
void sort(SLIST *t)
{
    NODE *a = t->st;
    int val;
    NODE *b, *c;

    if (t->st == NULL)
        return;

    while (a->next != NULL)
    {
        b = a;
        c = a->next;
        while (c != NULL)
        {
            if (c->data < b->data)
                b = c;
            c = c->next;
        }
        if (a != b)
        {
            val = a->data;
            a->data = b->data;
            b->data = val;
        }
        a = a->next;
    }
    printf("\nSorting Done !");
}
SLIST splitList(SLIST *p)
{
    SLIST s, t;
    NODE *a = p->st, *d, *c, *x, *y;
    int data;
    init(&s); // even
    init(&t); // odd
    sort(p);
    while (a != NULL)
    {
        data = a->data;
        if ((data) % 2 == 0)
        {
            if (s.st == NULL)
                s.st = c = d = createNode(data);
            else
            {
                  ///"""""This logic is for duplicate"""""////
                // if (d->data == data)
                // { // If the last added value is same as current data
                //     a = a->next;
                //     continue; // Skip adding duplicate
                // }

                  ///""""This Logic is neglect duplicate"""////
                c = createNode(data); // Create new node with unique data
                d->next = c;          // Link it to the tail of result list
                d = c;                // Move tail to the new node
            }
        }
        else
        {

            if (t.st == NULL)                    // If result list is empty
                t.st = x = y = createNode(data); // Create first node, set as head and tail
            else
            {
                    ///"""""This logic is for duplicate"""""////
                // if (x->data == data)
                // { // If the last added value is same as current data
                //     a = a->next;
                //     continue; // Skip adding duplicate
                // }

                   ///""""This Logic is neglect duplicate"""////
                y = createNode(data); // Create new node with unique data
                x->next = y;          // Link it to the tail of result list
                x = y;                // Move tail to the new node
            }
        }
        a = a->next;
    }
    display(&s);
    display(&t);
}
int main()
{

    SLIST p, q, r;
    int *count = 0;
    init(&p);
    init(&q);
    init(&r);
    createList(&p);
    splitList(&p);
    //display(&p);

    return 0;
}