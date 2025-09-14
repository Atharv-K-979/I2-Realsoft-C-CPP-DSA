#include <stdio.h>
#include <ctype.h>
struct stack
{
    int top;
    char opr[40];
} s;
void push(char ch)
{
    s.top++;
    s.opr[s.top] = ch;
}
void pop()
{
    s.top--;
}
int isEmpty()
{
    return (s.top == -1);
}
int preced(char stktop, char opr)
{
    if (stktop != '(' && opr == ')')
        return 1;
    else
        return 0;
}
void in2po(char *d, char *k)
{ // k is infix and d is postfix
    char ch;
    int i = 0, j = 0;
    while (k[i] != '\0')
    {
        if (isalpha(k[i]))
        {
            d[j++] = k[i];
        }
        else
        {
            while (!isEmpty() && preced(s.opr[s.top], k[i]))
            {
                char ch = s.opr[s.top];
                pop();
                d[j++] = ch;
            }
            if (isEmpty() || k[i] != ')')
                push(k[i]);
            else
                pop();
        }
        i++;
    }
    while (!isEmpty())
    {
        d[j++] = s.opr[s.top];
        pop();
    }
    d[j] = '\0';
    return;
}
