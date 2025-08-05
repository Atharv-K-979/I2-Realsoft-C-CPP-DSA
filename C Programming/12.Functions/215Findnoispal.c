#include <stdio.h>
void digitCnt()
{
    int no, dig, tmp, rev=0;
    printf("Enter no :");
    scanf("%d", &no);
    tmp=no;
    while (no>0)
    {
        rev = rev * 10 + no % 10;
        no /= 10;
    }
    if (tmp == rev)
    {
        printf("Pall");
    }
    else
        printf("Not pall");
}
int main()
{
    digitCnt();
    return 0;
}