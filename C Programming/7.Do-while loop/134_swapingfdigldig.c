#include <stdio.h>

int main()
{
    int no, dig, cnt = 0, fdig, ldig, tmp, nn = 0, mf = 1;
    printf("Enter a number:");
    scanf("%d", &no);
    if (no < 100)
    {
        return 0;
    }
    tmp = no;
    for (fdig = ldig = no % 10; no > 0; mf *= 10, no /= 10)
    {
        fdig = no % 10;
    }
    nn = (tmp % mf) / 10;
    nn = nn * 10 + fdig;
    nn = ldig * mf + nn;
    printf("Number after swapping first and last digit is %d\n", nn);
    return 0;
}