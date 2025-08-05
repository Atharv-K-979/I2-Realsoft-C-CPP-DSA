#include <stdio.h>
int main()
{
    long int a;
    int dig;
    printf("Enter a no:");
    scanf("%ld", &a);
    while (1)
    {
        dig = a % 10;
        if (dig > 1)
        {
            break;
        }
        a /= 10;
    }
    if (a == 0)
    {
        printf("Binary no %d ", a);
    }
    else
    {
        printf("No Binary no %d ", a);
    }

    return 0;
}