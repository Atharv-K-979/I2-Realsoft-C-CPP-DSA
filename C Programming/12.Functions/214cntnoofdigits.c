#include <stdio.h>
void digitCnt()
{
    int no, dig, cnt = 0;
    printf("Enter no :");
    scanf("%d", &no);
    while (no > 0)
    {
        dig = no % 10;
        no /= 10;
        cnt++;
    }
    printf("%d", cnt);
}
int main()
{
    digitCnt();
    return 0;
}