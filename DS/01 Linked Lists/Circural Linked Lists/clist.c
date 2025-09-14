#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <ctype.h>
#include <time.h>
#include <limits.h>
typedef struct node
{
    int data;
    struct node *next;
} NODE;
NODE *st = NULL;

NODE *createNode(int d)
{
    NODE *a;
    a = (NODE *)malloc(sizeof(NODE));
    a->data = d;
    a->next = NULL;
    return a;
}

void addAtEnd(int d)
{
    NODE *a = createNode(d), *b;
    if (st == NULL)
        a->next = a;
    else
    {
        b = st;
        a->next = b->next; // add of 20 is 100 which will give to 10
        b->next = a;       // creating 20 after 10
    }
    st = a; // 100
}

void addAtBeg(int d)
{
    NODE *a = createNode(d), *b;
    if (st == NULL)
    {
        a->next = a;
        st = a;
    }
    else
    {
        b = st->next;
        a->next = b;
        st->next = a;
    }
}
void displayNodes()
{
    NODE *a;
    if (st == NULL)
        printf("\nEmpty List\n");
    else
    {
        printf("\nData\n");
        a = st->next;
        do
        {
            printf("%4d", a->data);
            if (a == st)
                break;
            a = a->next;
        } while (1);
    }
}

void delFirst()
{
    NODE *a;
    if (st == NULL)
        printf("List is already empty!\n");
    if (st == st->next)
    { // For 1 node
        free(st);
        st = NULL; // NULL to the st
    }
    else
    {
        a = st->next;
        st->next = a->next;
        free(a);
    }
}
void delLast()
{
    NODE *a, *b;
    if (st == NULL)
        printf("List is already empty!\n");
    if (st == st->next)
    {
        free(st);
        st = NULL;
    }
    else
    {
        a = st->next;
        while (a != st)
        {
            b = a;
            a = a->next;
        }
        b->next = st->next;
        st = b;
        free(a);
    }
}
int main()
{
    NODE *p;
    int opt, data;
    while (1)
    {
        printf("\nCircural Data\n");
        printf("\nMenu:\n");
        printf("1.Add end\n");
        printf("2.Add first\n");
        printf("3.Diaplay\n");
        printf("4.Delete First\n");
        printf("5.Delete Last\n");
        printf("Enter choice: ");
        scanf("%d", &opt);
        if (opt > 5)
        {
            break;
        }
        switch (opt)
        {
        case 1:
            printf("Enter Data\n");
            scanf("%d", &data);
            addAtEnd(data);
            break;
        case 2:
            printf("Enter Data\n");
            scanf("%d", &data);
            addAtBeg(data);
            break;
        case 3:
            displayNodes(p);
            break;
        case 4:
            delFirst();
            displayNodes(p);
            break;
        case 5:
            delLast();
            displayNodes(p);
            break;
        }
    }
    return 0;
}