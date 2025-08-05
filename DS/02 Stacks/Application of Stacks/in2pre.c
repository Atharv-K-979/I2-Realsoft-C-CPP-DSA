#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <ctype.h>
#include <time.h>
#include <limits.h>
#include "in2post.h"
void reverseString(char p[])
{
    int l = 0;
    int r = strlen(p) - 1;
    char tmp;
    while (l < r)
    {
        tmp = p[l];
        p[l] = p[r];
        p[r] = tmp;
        l++;
        r--;
    }
}
int main()
{
    char p[100], q[100];
    s.top = -1;
    int i = 0;
    // stp 1: input infix
    printf("\nInfix Expr : ");
    scanf("%s", p);
    // stp 2: reverse infix
    reverseString(p);
    puts(p);
    // stp 3: replace ( to ) and ) to (
    i = 0;
    while (p[i] != '\0')
    {
        if (p[i] == '(')
            p[i] = ')';
        else if (p[i] == ')')
            p[i] = '(';
        i++;
    }
    puts(p);
    // stp 4: convert postfix exp
    in2po(q, p);
    // stp 5: reverse postfix
    reverseString(q);
    printf("\nPrefix Expr %s", q);
    return 0;
}