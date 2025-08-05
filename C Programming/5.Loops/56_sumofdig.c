#include <stdio.h>
int main()
{
    int a,dig,tot=0;
    printf("Enter a no:");
    scanf("%d",&a);
 while ( a > 0)
    {
        dig = a % 10;
        tot = tot + dig;
        a = a / 10;
    }
    printf("\n%d",tot);

    return 0;
}