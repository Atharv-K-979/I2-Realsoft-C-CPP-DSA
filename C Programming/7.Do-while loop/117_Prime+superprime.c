#include <stdio.h>
int main()
{
    int i = 2, no, dig;
    printf("Enter no :");
    scanf("%d", &no);
    do
    {
        if (no % i == 0)
        {
            break;
        }
        i++;
    } while (i < no);
    if (i != no)
    {
        printf("Not Prime");
        return 0;
    }
    while (no >= 0)
    {
        dig = no % 10;
        if (dig == 2 || dig == 3 || dig == 5 || dig == 7)
            no /= 10;
        else
        {
            break;
        }
    }
    if (no == 0)
    {
        printf("Super Prime");
    }
    else
    {
        printf("Prime");
    }
    return 0;
}

