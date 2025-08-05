#include <stdio.h>
int main()
{
    long int bno, mf = 1;
    int dno = 0, dig;
    printf("Enter a number: ");
    scanf("%d", &bno);
    while (bno > 0)
    {
        dig = dno % 10;
        if (dig > 1)/////////////////////////////////////////////////////////////////
            break;;
        dno = dno + mf * dig;
        mf *= 2;
        bno /= 10;
    }
    if (bno == 0)
        printf("decimal no %d", dno);
    else
        printf("decimalnot found");
    return 0;
}