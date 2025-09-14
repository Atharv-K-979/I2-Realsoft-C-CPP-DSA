#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// Structure for each node of the linked list
typedef struct node
{
    int data;
    struct node *next;
} NODE;

// Structure representing the linked list
typedef struct slist
{
    NODE *st; // Points to the start (head) of the list
} SLIST;

// Initialize the list to NULL
void init(SLIST *t)
{
    t->st = NULL;
}

// Create a new node with given data
NODE *createNode(int d)
{
    NODE *a = (NODE *)malloc(sizeof(NODE));
    a->data = d;
    a->next = NULL;
    return a;
}

// Display all nodes in the list
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

// Delete all nodes in the list to clear memory
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

// Create a list by taking input until user enters 0
void createList(SLIST *t)
{
    NODE *a, *b = NULL;
    int d;
    dellAll(t); // Clear any existing list
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
        b = a; // b always points to the last node
    }
}

// Sort the linked list in ascending order using selection sort
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

// Merge two sorted linked lists into a new sorted list
SLIST merge(SLIST *p, SLIST *q)
{
    NODE *a = p->st, *b = q->st, *c, *d = NULL;
    int data;
    SLIST r;

    init(&r); // Initialize r.st to NULL before use

    sort(p);
    sort(q);

    // Merge nodes from both lists in sorted order
    while (a != NULL && b != NULL)
    {
        if (a->data < b->data)
        {
            data = a->data;
            a = a->next;
        }
        else
        {
            data = b->data;
            b = b->next;
        }
        c = createNode(data);
        if (r.st == NULL)
            r.st = c;
        else
            d->next = c;
        d = c;
    }
    // here we can add for a list check if it is null
    while (a != NULL) /// this means b is null
    {
        c = createNode(a->data);
        if (r.st == NULL)
            r.st = c;
        else
            d->next = c;
        d = c;
        a = a->next;
    }

    while (b != NULL) /// this means a is null
    {
        c = createNode(b->data);
        if (r.st == NULL)
            r.st = c;
        else
            d->next = c;
        d = c;
        b = b->next;
    }
    return r;
}
// Fun to copy source list to the destinsation list
void copyList(SLIST *d, SLIST *s)
{
    NODE *a = s->st, *b, *c;
    if (s->st == NULL)
    {
        return;
    }
    dellAll(d);
    while (a != NULL)
    {
        c = createNode(a->data);
        if (d->st == NULL)
            d->st = c;
        else
            b->next = c;
        b = c;
        a = a->next;
    }
}
/// Fun to add source string after destination string
void appendList(SLIST *d, SLIST *s)
{
    NODE *a = s->st, *b, *c; // a starts from null
    if (s->st == NULL)
    {
        return;
    }
    if (d->st != NULL)
    {
        b = d->st;
        while (b->next != NULL) // this will return last node of the d string
        {
            b = b->next;
        }
    }
    while (a != NULL)
    {
        c = createNode(a->data);
        if (d->st == NULL) // if destination exists we try to get last node address
            d->st = c;
        else
            b->next = c; // else it will copy from the before
        b = c;
        a = a->next;
    }
}
// Fun to compute intersection of both list
SLIST computeIntersection(SLIST *p, SLIST *q)
{
    NODE *a = p->st, *b = q->st, *c, *d;
    SLIST r;
    int data;
    init(&r);
    sort(p);
    sort(q);
    while (a != NULL && b != NULL)
    {
        if (a->data < b->data)
            a = a->next;
        else
        {
            if (b->data < a->data)
                b = b->next;
            else
            { /// both data are same
                data = a->data;
                a = a->next;
                b = b->next;
                if (r.st == NULL)
                { // if initial string is null
                    r.st = c = d = createNode(data);
                }
                else
                {
                    if (d->data == data)
                    { // for duplicate data like 2 in example
                        continue;
                    }
                    c = createNode(data);
                    d->next = c;
                    d = c;
                }
            }
        }
    }
    return r;
}

SLIST unionList(SLIST *p, SLIST *q)
{
    SLIST r;         // Declare the result list 'r'
    NODE *a = p->st, // 'a' will traverse list p
        *b = q->st,  // 'b' will traverse list q
        *c, *d;      // 'c' is temporary pointer, 'd' points to last node of result
    int data;        // To store the selected data value temporarily

    sort(p); // Sort list p (assumed to be in-place)
    sort(q); // Sort list q

    init(&r); // Initialize the result list (usually sets r.st = NULL)

    // Traverse both lists simultaneously
    while (a && b)
    {
        if (a->data < b->data)
        {                   // If current value in 'a' is smaller
            data = a->data; // Select a->data
            a = a->next;    // Move 'a' forward
        }
        else
        {                   // If b->data is smaller or equal
            data = b->data; // Select b->data
            b = b->next;    // Move 'b' forward
        }

        if (r.st == NULL)                    // If result list is empty
            r.st = c = d = createNode(data); // Create first node, set as head and tail
        else
        {
            if (d->data == data)  // If the last added value is same as current data
                continue;         // Skip adding duplicate
            c = createNode(data); // Create new node with unique data
            d->next = c;          // Link it to the tail of result list
            d = c;                // Move tail to the new node
        }
    }

    // Process remaining nodes in list 'a'
    while (a)
    {
        data = a->data;                      // Take data from 'a'
        if (r.st == NULL)                    // If result list is still empty
            r.st = d = c = createNode(data); // Create first node
        else
        {
            if (d->data != data)
            {                         // Only add if not duplicate
                c = createNode(data); // Create node
                d->next = c;          // Link to result list
                d = c;                // Move tail forward
            }
        }
        a = a->next; // Move 'a' forward
    }

    // Process remaining nodes in list 'b'
    while (b)
    {
        data = b->data;                      // Take data from 'b'
        if (r.st == NULL)                    // If result list is still empty
            r.st = d = c = createNode(data); // Create first node
        else
        {
            if (d->data != data)
            {                         // Only add if not duplicate
                c = createNode(data); // Create node
                d->next = c;          // Link to result list
                d = c;                // Move tail forward
            }
        }
        b = b->next; // Move 'b' forward
    }

    return r; // Return the union list
}

int main()
{
    SLIST p, q, r;
    init(&p);
    init(&q);
    init(&r);
    int flgp = 0, flgq = 0, flgr = 0;
    int opt;
    while (1)
    {
        printf("\nMenu:\n");
        printf("1.Create List 1\n");
        printf("2.Create List 2\n");
        printf("3.Display List 1\n");
        printf("4.Display List 2\n");
        printf("5.Display List 3\n");
        printf("6.Merge\n");
        printf("7.Intersection\n");
        printf("8.Union\n");
        printf("9.Exit\n");
        printf("Enter choice: \n");
        scanf("%d", &opt);
        if (opt > 8)
            break;
        switch (opt)
        {
        case 1:
            createList(&p);
            flgp = 1;
            flgr = 0;
            break;
        case 2:
            createList(&q);
            flgq = 1;
            flgr = 0;
            break;
        case 3:
            if (flgp == 1)
                display(&p);
            else
            {
                printf("\nEmpty\n");
            }
            break;
        case 4:
            if (flgq == 1)
                display(&q);
            else
            {
                printf("\nEmpty\n");
            }
            break;
        case 5:
            if (flgr == 1)
                display(&r);
            else
            {
                printf("\nEmpty\n");
            }
            break;
        case 6:
            dellAll(&r);
            if (flgp && flgq)
            {
                r = merge(&p, &q);
                flgr = 1;
            }
            else
            {
                printf("\nInvalid");
            }
            break;
        case 7:
            dellAll(&r);
            if (flgp && flgq)
            {
                r = computeIntersection(&p, &q);
                flgr = 1;
            }
            else
            {
                printf("\nInvalid");
            }
            break;
        case 8:
            dellAll(&r);
            if (flgp && flgq)
            {
                r = unionList(&p, &q);
                flgr = 1;
            }
            else
            {
                printf("\nInvalid");
            }
            break;
        }
    }
    return 0;
}
// SLIST p, q, r;
//  init(&p);
//  init(&q);
//  init(&r);
//  createList(&p);
//  createList(&q);
//  // r=merge(&p, &q);
//  // printf("\nP List:");
//  // display(&p);
//  // printf("\nQ List:");
//  // display(&q);
//  // printf("\nMerged Sorted List:");
//  // display(&r);
//  // // copyList(&r,&p);
//  // appendList(&r, &p);
//  // appendList(&r, &q);
//  // display(&p);
//  // display(&q);
//  // display(&r);

// // inter
// // r = computeIntersection(&p, &q);
// r = unionList(&p, &q);
// display(&p);
// display(&q);
// display(&r);