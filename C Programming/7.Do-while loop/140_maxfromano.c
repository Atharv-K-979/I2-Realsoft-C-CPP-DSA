#include <stdio.h>
int main()
{
    int no, dig, sdig, tmp;long int nn;
    printf("Enter a number: ");
    scanf("%d", &no);
    for (sdig = 9; sdig >= 0; sdig--)
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
    printf("\nOutput: %ld", nn);
    return 0;
}