#include <stdio.h>
int main()
{
    int a,dig,b=0;
    printf("Enter a no:");
    scanf("%d",&a);
 while ( a > 0)
    {
        dig = a % 10;
        b = b + 1;
        a = a / 10 ;    
    }
    printf("Total Digits are : %d",b);
    return 0;
}