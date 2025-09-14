#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <ctype.h>
#include <time.h>
#include <limits.h>
# include "slist1.h"
int main() {
    
    int pos,val;
    addEnd(10000);   // pos   0
    addEnd(10);  // pos   1
    addEnd(2);  // pos   2
    addEnd(300);  // pos   3
    addEnd(26);  // pos   4
    addEnd(5);  // pos   5
    display();
    // scanf("%d %d",&pos,&val);
    // //insertBeforePos(pos,val);
    // insertAfterPos(pos,val);
    // display();
    // printf("\n%d",isOrdered());
    sortList();
    display();
    return 0;
}
