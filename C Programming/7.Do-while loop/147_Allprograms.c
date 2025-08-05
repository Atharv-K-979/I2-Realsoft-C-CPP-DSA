#include <stdio.h>
int main()
{
    int no, tmp, res, dig, opt, flg = 0;
    int i;
    long int ans = 0;
    do
    {
        printf("\nMenu\n1)Enter no\n2)Table\n3)Digit sum\n4)reverse of number\n5)Palindrome\n6)Factorial\n7)Prime\n8)SuperPrime9)Exit\nOperation--");
            scanf("%d", opt);
        if (opt > 8)
        {
            return 0;
        }
        switch (opt)
        {
        case 1:
            printf("\nEnter a no :");
            scanf("%d", &no);
            flg = 1;
            break;
        default:
            if (flg == 0)
            {
                printf("Invalid option");
            }
            switch (opt)
            {
            case 2:
                tmp = no;
                printf("Table\n");
                for (i = 1; i <= 10; i++)
                    printf("%d*%d=%d\n", tmp, i, tmp * i);
                break;
            case 3:
                tmp = no;
                res = 0;
                while (tmp != 0)
                {
                    dig = tmp % 10;
                    res = res + dig;
                    tmp = tmp / 10;
                }
                printf("Sum of digits in %d is %d", no, res);
                break;
            case 4:
            case 5:
                tmp = no;
                res = 0;
                while (tmp > 0)
                {
                    res = res * 10 + tmp % 10;
                    tmp = tmp / 10;
                }
                printf("Reverse of %d is %d", no, res);
                if (opt == 4)
                {
                    printf("Reverse of %d is %d", no, res);
                }
                else
                {
                    if (no == res)
                    {
                        printf("%d is palindrome", no);
                    }
                    else
                    {
                        printf("%d is not palindrome", no);
                    }
                }
                break;
            case 6:
                ans = 1;
                tmp = no;
                for (i = 1; i <= tmp; i++)
                {
                    ans = ans * i;
                }
                printf("Factorials of %d is %ld", no, ans);
                break;
            case 7:
            case 8:
                for (i = 2; i < no; i++)
                {
                    if (no % i == 0)
                    {
                        break;
                    }
                }
                if (opt == 7)
                {
                    if (no != i)
                    {
                        printf("Not");
                    }
                    printf("Prime");
                }
                else
                {
                    if (no != i)
                    {
                        printf("Not Prime");
                    }
                    else
                    {
                        tmp = no;
                        while (tmp > 0)
                        {
                            dig = tmp % 10;
                            if (dig == 2 || dig == 3 || dig == 5 || dig == 7)
                            {
                                tmp /= 10;
                            }
                            else
                                break;
                        }
                        if (tmp == 0)
                        {
                            printf("Super");
                        }
                        printf("Prime");
                    }
                }
            }
        }

    } while (1);
    return 0;
}
