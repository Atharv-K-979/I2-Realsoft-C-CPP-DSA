#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <ctype.h>
#include <time.h>
#include <limits.h>
#include "slist1.h"
int main() {
    int opt,d;
    while (1)
    {
        printf("\nStack List menu\n1.Push\n2.Pop\n3.Diasply\n4.Exit\n");
        printf("Enter Opt : ");
        scanf("%d",&opt);
        if (opt>3)
        {
            break;
        }
        switch (opt)
        {
        case 1:
            printf("Enter Data");
            scanf("%d",&d);
            addBeg(d);
            break;
        
        case 2:
            if (st==NULL)
            {
                printf("\nUnderFlow\n");
            }
            else{
                deleteFirstNode();
            }
            break;
        case 3:
            display();
            break;
        }
    }    
    return 0;
}