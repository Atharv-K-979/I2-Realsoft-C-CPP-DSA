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
typedef struct stack
{
    NODE *top;
} STK;

NODE *createNode(int d)
{
    NODE *a = (NODE *)malloc(sizeof(NODE));
    a->data = d;
    a->next = NULL;
    return a;
}
void init(STK *t)
{
    t->top = NULL;
}
void push(STK *t, int d)
{
    NODE *a = createNode(d); // new node created
    a->next = t->top;        // added to top
    t->top = a;              // now top is a
}
void pop(STK *t)
{
    NODE *a = t->top; // targets top node
    if (t->top == NULL)
    {
        printf("Underflow\n");
    }
    else
    {
        t->top = a->next;
        free(a);
    }
}

void display(STK *t)
{
    NODE *a = t->top;
    if (t->top == NULL)
    {
        printf("Empty Stack\n");
    }
    else
    {
        printf("Stack Data\n");
        while (a)
        {
            printf("%4d", a->data);
            a = a->next;
        }
    }
}
int main()
{
    int opt,d;
    STK p;
    init(&p);
    //NODE *a;
    while (1)
    {
        printf("\nStack List menu\n1.Push\n2.Pop\n3.Display\n4.Exit\n");
        printf("Enter Opt : ");
        scanf("%d",&opt);
        if (opt>3)
        {
            break;
        }
        switch (opt)
        {
        case 1:
            printf("Enter Data");
            scanf("%d",&d);
            push(&p,d);
            break;
        
        case 2:
            pop(&p);
            break;
        case 3:
            display(&p);
            break;
        }
    }
    return 0;
}