#include <stdio.h>
#include <stdlib.h>

// Node structure
typedef struct node
{
    int data;
    struct node *next;
} NODE;

// Linked list wrapper
typedef struct slist
{
    NODE *st;
} SLIST;

// Initialize an empty list
void init(SLIST *t)
{
    t->st = NULL;
}

// Create a new node
NODE *createNode(int d)
{
    NODE *a = (NODE *)malloc(sizeof(NODE));
    a->data = d;
    a->next = NULL;
    return a;
}

// Display the list with index and total count
void display(SLIST *t)
{
    NODE *a = t->st;
    if (t->st == NULL)
        printf("\nEmpty List\n");
    else
    {
        printf("\nData:\n");
        while (a != NULL)
        {
            printf("%4d", a->data);
            a = a->next;
        }
    }
}

// Delete all nodes from a list
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

// Create list by taking user input
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
            break;

        a = createNode(d);
        if (t->st == NULL)
            t->st = a;
        else
            b->next = a;

        b = a;
    }
}
SLIST addEvenNodes(SLIST *p)
{
    NODE *a = p->st, *b, *c;

    while (a != NULL && a->next != NULL)
    {                //// Imp a->next!=NULL
        b = a->next; // since we are using a->next=b it should exist
        c = createNode(a->data + b->data);

        c->next = b->next;
        b->next = c;

        a = c->next;
    }
    return *p;
}
SLIST addOddNodes(SLIST *p)
{
    NODE *a = p->st, *b, *c, *d;

    while (a != NULL && a->next != NULL)
    { //// Imp a->next!=NULL
        b = a->next;
        c = b->next; // since we are using a->next=b it should exist
        d = createNode(a->data + b->data + c->data);

        d->next = c->next;
        c->next = d;

        a = d->next;
        b = d->next;
    }
    return *p; // *p is actual structure so we return *p
}

int main()
{
    SLIST p;
    init(&p);
    createList(&p);
    printf("\nBefore");
    display(&p);
    // addOddNodes(&p);
    addEvenNodes(&p);
    printf("\nAfter");
    display(&p);
    return 0;
}
