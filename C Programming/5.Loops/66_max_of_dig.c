#include <stdio.h>
int main()
{
    int a,dig,max=0;
    printf("Enter a no:");
    scanf("%d",&a);
 while ( a > 0)
    {
        dig = a % 10;
        if (dig > max)
        {
            max = dig;
        }
        a = a / 10 ;
            
    }
    printf("The Max of Digits are : %d",max);
    return 0;
}