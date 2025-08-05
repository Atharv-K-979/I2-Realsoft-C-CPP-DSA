#include <stdio.h>
int main()
{
    int no, sdig, tmp, dig;
    printf("Enter a no:");
    scanf("%d", &no);
    for (sdig = 0; sdig < 10; sdig++)
    {
        for (tmp = no; tmp > 0; tmp /= 10)
        {
            dig = tmp % 10;
            if (dig == sdig)
            {
                break;
            }
        }
        if (tmp == 0)
            printf("\nNot found: %d ", sdig);
    }
    return 0;
}