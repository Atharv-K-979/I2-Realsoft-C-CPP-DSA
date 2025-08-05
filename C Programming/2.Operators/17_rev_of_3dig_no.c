#include <stdio.h>
int main()
{
    int no, dig, rev = 0;
    printf("Enter a no:");
    scanf("%d", &no);
    dig = no % 10;
    rev = rev * 10 + dig;
    no /= 10;
    dig = no % 10;
    rev = rev * 10 + dig;
    no /= 10;
    dig = no % 10;
    rev = rev * 10 + dig;
    no /= 10;
    printf("Reverse of no is:%d", rev);
    return 0;
}