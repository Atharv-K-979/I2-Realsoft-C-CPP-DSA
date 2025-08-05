#include <stdio.h>
int main()
{
    long int bno = 0, mf = 1;
    int dno, dig;
    printf("Enter a number: ");
    scanf("%d", &dno);
    while (dno > 0)
    {
        dig = dno % 2;
        bno = bno + mf * dig;
        mf *= 10;
        dno /= 2;
    }
    printf("Binary no %d", bno);
    return 0;
}