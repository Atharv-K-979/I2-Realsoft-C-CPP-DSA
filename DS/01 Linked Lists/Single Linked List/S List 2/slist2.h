#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct node
{
    int data;
    struct node *next;
} NODE;
NODE *createNode(int data)
{
    NODE *a = (NODE *)malloc(sizeof(NODE));
    a->data = data;
    a->next = NULL;
    return a;
}
NODE *getLastNode(NODE *t)
{
    while (t->next != NULL)
    {
        t = t->next;
    }
    return t;
}
void addEnd(NODE **t, int data)
{ // t is the pointer pointing to pointer and that pointer is pointing to the NODE
    NODE *a = createNode(data);
    NODE *b;
    if (*t == NULL)
    {
        *t = a;
    }
    else
    {
        NODE *b = getLastNode(*t);
        b->next = a;
    }
}
// Fun to add node at begin
void addBeg(NODE **t, int data)
{
    NODE *a = createNode(data);
    a->next = *t;
    *t = a;
}
void display(NODE **t)
{
    NODE *st = *t;
    if (*t == NULL)
    {
        printf("\nEmpty List\n");
    }
    else
    {
        printf("Names\n");
        while (st != NULL)
        {
            printf("%4d", st->data);
            st = st->next;
        }
    }
}
int methodCount(NODE **t)
{
    int cnt = 0;
    NODE *a = *t;
    while (a != NULL)
    { // Till address== NULL cnt++
        cnt++;
        a = a->next;
    }
    return cnt;
}
int methodSum(NODE **t)
{
    int sum = 0;
    NODE *a = *t;
    while (a != NULL) // Till address== NULL cnt++
    {
        sum += a->data;
        a = a->next;
    }
    return sum;
}
void deleteAll(NODE **t) // Calling deletefirst is costly for processor
{
    NODE *a = *t;
    while (*t != NULL)
    {
        *t = a->next;
        free(a); // while going free a / delete a
        a = *t;
    }
}
void deleteFirstNode(NODE **t)
{
    NODE *b = *t;
    if (*t == NULL)
    {
        return;
    }
    *t = b->next;
    free(b); // free b from the memory
}
void deleteLastNode(NODE **t)
{
    NODE *a = *t, *b;
    if (*t == NULL) // Empty list
    {
        return;
    }
    if ((*t)->next == NULL) // Only one element in the list
    {
        *t = NULL;
        return;
    }
    while (a->next != NULL)
    {
        b = a;
        a = a->next;
    }
    b->next = NULL;
    free(a); // free a
}
// Function to copy source list to dist list
// p is source list and q is destination
void copyList(NODE **d, NODE **s)
{
    NODE *a = *s;
    if (*s == NULL)
        return;
    deleteAll(d);
    while (a != NULL)
    {
        addEnd(d, a->data);
        a = a->next;
    }
    display(d);
    deleteAll(d);
    return;
}
