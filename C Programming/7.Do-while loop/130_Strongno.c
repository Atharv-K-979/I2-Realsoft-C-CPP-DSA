#include <stdio.h>
int main()
{
    int i, j, no, dig, fact = 1, tot = 0, tmp;
    printf("Enter a number:");
    scanf("%d", &no);
    for (tmp = no; no > 0; no = no / 10)
    {
        dig = no % 10;
        fact = 1;
        for (j = 1; j <= dig; j++)
        {
            fact = fact * j;
        }
        tot = tot + fact;
    }
    if (tmp == tot)
    {
        printf("Strong number\n");
    }
    else
    {
        printf("Not Strong number\n");
    }

    return 0;
}