#include <stdio.h>
int main()
{
    int a,dig,odd=0,even=0;
    printf("Enter a no:");
    scanf("%d",&a);
 while ( a > 0)
    {
        dig = a % 10 ;
           if (dig % 2 ==0)
           {
            even = even + 1;
           }
           else
           {
            odd = odd + 1;
           }
            
    }
    printf("Total Odd and Even Digits are : %d %d",odd,even);
    return 0;
}