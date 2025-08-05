#include <stdio.h>
int main()
{
    int a, dig, max = 0, min = 9;
    printf("Enter a no. :");
    scanf("%d", &a);
    min = max = dig;
    a /= 10;
    while (a > 0)
    {
        dig = a % 10;
        if (dig > max)////////////////////////////// Wrong program/////////////////
        {
            max = dig;
        }
        else
        {
            if (dig < min)
            {
                min = dig;
            }
        }
        a = a / 10;
    }
    printf("Max and Min are %d %d", max, min);
    return 0;
}