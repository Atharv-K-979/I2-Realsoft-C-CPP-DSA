#include <stdio.h>     // preprocessor director global folder <>
#include "237Myfun1.h" //local folder ""
int main()
{
    int opt, no, rev;
    while (1)
    {
        printf("\nMenu\n1.Enter no\n2.Oddeven\n3.Digsum\n4.Reverse\n5.Prime\n6.Table\n7.Digcount\n8.Exit\n");
        scanf("%d", &opt);
        if (opt > 7)
        {
            break;
        }
        switch (opt)
        {
        case 1:
            printf("Enter a no :");
            scanf("%d", &no);
            break;
        case 2:
            if (oddEven(no) == 1)
            {
                printf("Odd");
            }
            else
                printf("\nEven");
            break;
        case 3:
            printf("\nDig sum is %d", digSum(no));
            break;
        case 4:
            printf("\nReverse : %d", reverse(no));
            break;
        case 5:
            if (isPrime(no) == 0)
            {
                printf("Not prime");
            }
            else
                printf("Prime");
            break;
        case 6:
            tableDisplay(no);
            break;
        case 7:
            printf("Dig cnt %d ",digcnt(no));
            break;
        }
    }
    return 0;
}