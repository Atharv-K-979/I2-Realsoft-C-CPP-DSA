#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <ctype.h>
#include <time.h>
#include <limits.h>
#define n 20
typedef struct stack
{
    int top;
    char arr[n];
} STK;
void init(STK *t)
{
    t->top = -1;
}
int isFull(STK *t)
{
    return (t->top == n - 1);
}
int isEmpty(STK *t)
{
    return (t->top == -1);
}
void push(STK *t, char ch)
{
    if (isFull(t))
    {
        printf("StackOverflow\n");
        return;
    }
    else
    {
        t->top++;            // -1 to 0 in idx of arr
        t->arr[t->top] = ch; // arr[0] la d ghatla
    }
}
char pop(STK *t)
{
    return t->arr[t->top--];
}
int main()
{
    char s[100], ch;
    STK p;
    int flg = 0;
    init(&p);
    printf("Enter expression\n");
    scanf("%s", s);
    int i = 0;
    while (s[i] != '\0')
    {
        if (s[i] == '(')
        {
            flg = 1;
            push(&p, s[i]);
        }
        else
        {
            if (s[i] == ')')
            {
                if (isEmpty(&p))
                {
                    break;
                }
                ch = pop(&p);
            }
        }
        i++;
    }
    if (s[i] == '\0')
    {
        if (flg == 0)
        {
            printf("No br\n");
        }
        else
        {
            if (isEmpty(&p))
            {
                printf("bal\n");
            }
            else
            {
                printf("\nEx Left");
            }
        }
    }
    else
    {
        printf("Ex right");
    }
}
//(a+b)*{c+[d-(e/f)]}
// })}]

// {[)}