#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <ctype.h>
#include <time.h>
#include <limits.h>
#include "slist2.h"
typedef struct queue
{
    NODE *fr;
    NODE *rr;
} QUE;
void init(QUE *t)
{
    t->fr = NULL;
    t->rr = NULL;
}
void main()
{
    int opt, d;
    QUE p;
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
            deleteFirstNode(&p);
            break;

        case 3:
            display(&p);
            break;

        case 1:
            printf("\nData:");
            scanf("%d", &d);
            addEnd(&p, d);
        }
    }
}