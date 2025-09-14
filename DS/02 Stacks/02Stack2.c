#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <ctype.h>
#include <time.h>
#include <limits.h>
#define n 10
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
    char s[100], t[100];
    STK p;
    init(&p);
    int i = 0, j = 0;
    printf("Enter a string\n");
    fgets(s, sizeof(s), stdin);
    while (s[i] != '\0')
    {
        push(&p, s[i]);
        i++;
    }
    while (!isEmpty(&p))
    {
        t[j++] = pop(&p);
    }
    t[j] = '\0';
    printf("\nInput String is : ");
    puts(s);
    printf("\nOutput Reverse String is : ");
    puts(t);
    return 0;
}