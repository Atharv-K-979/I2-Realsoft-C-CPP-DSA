#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <ctype.h>
#include <time.h>
#include <limits.h>
#include "slist2.h" // to demonstrate functions
int main()
{
    NODE *p = NULL, *q = NULL;
    int opt, d;
    while (1)
    {
        printf("\nMenu\n1.AddEnd\n2.Add Beg\n3.Display\n4.Del First\n5.Del last\n6.Del all\n7.Count\n8.Sum\n9.CopyList\n10 .Exit\n\n");
        scanf("%d", &opt);
        if (opt > 9)
        {
            break;      
        }
        switch (opt)
        {
        case 1:
            printf("\nData\n");
            scanf("%d", &d);
            addEnd(&p, d);
            break;
        case 2:
            printf("\nData\n");
            scanf("%d", &d);
            addBeg(&p, d);
            break;
        case 3:
            display(&p);
            break;
        case 4:
            deleteFirstNode(&p);
            break;
        case 5:
            deleteLastNode(&p);
            break;
        case 6:
            deleteAll(&p);
            break;
        case 7:
            printf("Count is : %d", methodCount(&p));
            break;
        case 8:
            printf("Sum is : %d", methodSum(&p));
            break;
        case 9:
            copyList(&q, &p);
            break;
        }
    }
    return 0;
}
