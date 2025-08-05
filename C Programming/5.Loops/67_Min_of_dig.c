#include <stdio.h>
int main()
{
    int a,dig,min=9;
    printf("Enter a no:");
    scanf("%d",&a);
 while ( a > 0)
    {
        dig = a % 10;
        if (dig < min)
        {
            min = dig;
        }
        a = a / 10 ;
            
    }
    printf("The Min of Digits are : %d",min);
    return 0;
}