#include <stdio.h>
int main()
{
    int no,dig,tot=0;
    printf("Enter a no:");
    scanf("%d",&no);
    dig = no % 10;
    tot = tot + dig;
    no /= 10;
    dig = no % 10;
    tot = tot + dig;
    no /= 10;
    dig = no % 10;
    tot = tot + dig;
    no /= 10;
    printf("Digit sum is:%d",tot);
    return 0;
}