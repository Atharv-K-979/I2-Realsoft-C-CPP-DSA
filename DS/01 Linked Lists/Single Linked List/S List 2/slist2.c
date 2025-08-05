#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <ctype.h>
#include <time.h>
#include <limits.h>
#include "slist2.h" // to demonstrate functions

int main() {
    NODE *st=NULL;
    addEnd(&st,10);
    addEnd(&st,20);
    addEnd(&st,30);
    display(&st);
    printf("\n\n");
    addBeg(&st,40);
    display(&st);
    printf("\nNode Count : %d",methodCount(&st));
    printf("\nSum : %d",methodSum(&st));
   // deleteAll(&st);
    printf("\n\n");
    display(&st);
    deleteLastNode(&st);
    display(&st);
    return 0;
}
