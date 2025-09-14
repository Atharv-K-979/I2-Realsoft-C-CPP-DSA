#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <ctype.h>
#include <time.h>
#include <limits.h>
#include "slist1.h" // Definaton of application program
int main()
{
    int opt, d, sv, rv;
    while (1)
    {
        printf("\n1.Add End\n2.Add Beg\n3.Display\n4.Node Counts\n5.Sum of Nodes\n6.Odd cnt Sum\n7.Even cnt Sum\n8.Max of Data\n9.Min of Data\n10.Sequential Search\n11.Replace Value\n");
        scanf("%d", &opt);
        if (opt > 11)
        {
            break;
        }
        switch (opt)
        {
        case 3:
            display();
            break;
        case 1:
        case 2:
            printf("\nData :");
            scanf("%d", &d);
            if (opt == 1)
            {
                addEnd(d);
            }
            else
            {
                addBeg(d);
            }
            break;
        case 4:
            printf("%d", methodCount());
            break;
        case 5:
            printf("%d", methodSum());
            break;
        case 6:
            printf("%d", methodOddCnt());
            break;
        case 7:
            printf("%d", methodEvenCnt());
            break;
        case 8:
            printf("%d", maxData());
            break;
        case 9:
            printf("%d", minData());
            break;
        case 10:
            printf("Enter the Search value :");
            scanf("%d", &sv);
            if (seqSearch(sv))
            {
                printf("Found !!");
            }
            else
            {
                printf("Not Found.");
            }
            break;
        case 11:
            printf("Enter the Search value :");
            scanf("%d", &sv);
            printf("Enter the replace value :");
            scanf("%d", &rv);
            findReplace(sv, rv);
            printf("Work Done !!");
            break;
        }
    }
    return 0;
}