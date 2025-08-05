#include <stdio.h>
#include "241Myfun2.h"
int main()
{
    int x[5], opt, no, pos, rev, sv, rv, s;
    while (1)
    {
        printf("\nMenu \n1.Input \n2.Display \n3.Sum \n4.Avg \n5.Max Pos \n6.Min Pos \n7.Find and replace \n8.Exit opt \n");
        scanf("%d", &opt);
        if (opt > 7)
        {
            break;
        }
        switch (opt)
        {
        case 1:
            input(x, 5);
            break;
        case 2:
            display(x, 5);
            break;
        case 3:
            printf("\nTotal %d", total(x, 5));
            break;
        case 4:
            printf("\nAvg %d", avg(x, 5));
            break;
        case 5:
            maxPos(x, 5);
            printf("Max pos : %d", pos);
            printf("Max value : %d", x[pos]);
            break;
        case 6:
            printf("Min pos : %d", pos);
            printf("Min value : %d", x[pos]);
            break;
        case 7:
            printf("\n Enter search value");
            scanf("%d", &sv);
            printf("replace value");
            scanf("%d", &rv);
            findAndreplace(x, sv, rv, 5);
            break;
        }
    }
    return 0;
}