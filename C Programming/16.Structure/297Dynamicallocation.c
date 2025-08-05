#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "296ACCT.h"
int main() {
    ACCT *ptr;
    int i=0,n;
    printf("%d",&n);
    scanf("%d",&n);
    ptr=(ACCT*)malloc(n*sizeof(ACCT));
    for ( i = 0; i < n; i++)
    {
        input(ptr+i);
    }
    for ( i = 0; i < n; i++)
    {
        display(*(ptr+i));
    }
    free(ptr);
    return 0;
}