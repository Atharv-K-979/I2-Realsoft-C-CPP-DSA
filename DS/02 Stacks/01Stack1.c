#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <ctype.h>
#include <time.h>
#include <limits.h>
#define n 5
typedef struct stack{
    int top;
    int arr[n];
} STK;
void init(STK *t){
    t->top = -1;
}
int isFull(STK *t){
    return (t->top == n - 1);
}
int isEmpty(STK *t){
    return (t->top == -1);
}
void push(STK *t, int d){
    if (isFull(t))
    {
        printf("StackOverflow\n");
        return;
    }
    else
    {
        t->top++;           // -1 to 0 in idx of arr
        t->arr[t->top] = d; // arr[0] la d ghatla
    }
}
void pop(STK *t){
    if (isEmpty(t))
    {
        printf("Stack Underflow\n");
        return;
    }
    else
    {
        t->top--;
    }
}
void display(STK *t)
{
    int i = t->top;
    if (isEmpty(t))
    {
        printf("Empty Stack\n");
        return;
    }
    else
    {
        printf("Stack Data\n");
        while (i >= 0)
        {
            printf("%4d", t->arr[i]);
            i--;
        }
    }
}
int main()
{
    int opt, d;
    STK s;
    init(&s);
    while (1)
    {
        printf("\n1. Push\n2. Pop\n3. Display\n4. Exit\n");
        printf("Enter opt :");
        scanf("%d", &opt);
        if (opt > 3)
        {
            break;
        }
        switch (opt)
        {
        case 1:
            printf("Enter Data: ");
            scanf("%d", &d);
            push(&s, d);
            break;
        case 2:
            pop(&s);
            break;
        case 3:
            display(&s);
            break;
        }
    }
    return 0;
}