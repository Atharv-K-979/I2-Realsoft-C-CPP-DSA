#include <stdio.h>
int main()
{
    int a, dig, max = 0, min = 9;
    printf("Enter a no. :");
    scanf("%d", &a);
    while (a > 0)
    {
        dig = a % 10;///////////////////////this approach has more iterations are than 69th program by sir.
        if (dig > max)
        {
            max = dig;
        }
        if (dig < min)
        {
            min = dig;
        }
        a = a / 10;
    }
    printf("Max and Min are %d %d", max, min);
    return 0;
}