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
    char s[100];
    STK p;
    init(&p);
    fgets(s, sizeof(s), stdin);
    int i = 0;
    char ch;
    while (s[i] != '\0')
    {
        ch = s[i];
        if (ch == '(' || ch == '[' || ch == '{')
        {
            push(&p, ch);
        }
        else
        {
            if (!isEmpty(&p))
            {
                //"This not works for )}]"
            //     char topChar = p.arr[p.top];
            //     // printf("%c\n", topChar);
            //     // printf("%c\n",ch);
            //     if (ch == ')' && topChar == '(')
            //     {
            //         // ( ) matching
            //         pop(&p);
            //     }
            //     else if (ch == '}' && topChar == '{')
            //     {
            //         // { } matching
            //         pop(&p);
            //     }
            //     else if (ch == ']' && topChar == '[')
            //     {
            //         // [ ] matching
            //         pop(&p);
            //     }
            //}
                char topChar = p.arr[p.top];
                if ((ch == ')' && topChar == '(') || (ch == '}' && topChar == '{') || (ch == ']' && topChar == '['))
                {
                    pop(&p); // matching both so remove
                }
                else
                {
                    push(&p, ch);
                }
            }
            else
            {
                push(&p, ch);
            }
        }
        i++;
    }
    if (isEmpty(&p)) // stack empty means all are balanced
    {
        printf("All balanced\n");
        return 0;
    }
    else
    {
        
        printf("Some are unbalanced they are\n");
        char t[100];
        int j = 0;
        while (!isEmpty(&p))
        {
            t[j++] = pop(&p);
        }
        t[j] = '\0';
        while (j--)
        {
            if (t[j] == '(' || t[j] == '{' || t[j] == '[')
                printf("Left bracket: %c\n", t[j]);
            else
            {
                if (t[j] == ')' || t[j] == '}' || t[j] == ']')
                    printf("Right bracket: %c\n", t[j]);
            }
        }
    }
}
//(a+b)*{c+[d-(e/f)]}
//})}]

// {[)}