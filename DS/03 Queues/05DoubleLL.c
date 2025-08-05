#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <ctype.h>
#include <time.h>
#include <limits.h>
#include "dlist.h"

void main()
{
    int opt, d;
    DLIST p;
    init(&p);
    while (1)
    {
        printf("\nQueue\n1.Insert\n2.Remove\n3.Display\n4.Exit\nOption:");
        scanf("%d", &opt);
        if (opt > 3)
            break;
        switch (opt)
        {
        case 2:
            dellFirst(&p);
            break;
        case 3:
            displayStartToEnd(&p);
            displayEndToStart(&p);
            break;
        case 1:
            printf("\nData:");
            scanf("%d", &d);
            addAtEnd(&p, d);
        }
    }
}