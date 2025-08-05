#include <stdio.h>

int main()
{
    int no, dig, sdig, tmp, nn;
    printf("Enter a number: ");
    scanf("%d", &no);

    for (sdig = 0; sdig < 10; sdig++)
    {
        for (tmp = no; tmp > 0; tmp /= 10)
        {
            dig = tmp % 10;
            if (dig == sdig)
            {
                nn = nn * 10 + sdig;
            }
        }
    }
    printf("\nOutput: %d", nn);
    return 0;
}