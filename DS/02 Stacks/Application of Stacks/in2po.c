#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <ctype.h>
#include <time.h>
#include <limits.h>
#include "in2post.h"
int main()
{
    char p[100], q[100];
    s.top = -1;
    printf("\nInfix Expr : ");
    scanf("%s", p);
    in2po(q, p);
    printf("\nPostfix Expr %s", q);
    return 0;
}