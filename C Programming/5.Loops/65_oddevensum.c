#include <stdio.h>
int main()
{
    int a,dig,oddsum=0,evensum=0;
    printf("Enter a no:");
    scanf("%d",&a);
 while ( a > 0)
    {
        dig = a % 10;
        if (dig % 2 == 0)
        {
            oddsum = oddsum + dig ;
        }
        else
        {
            evensum = evensum + dig ;
        }
        a = a / 10 ;
            
    }
    printf("Total Odd sum and Even sum ofDigits are : %d %d",oddsum,evensum);
    return 0;
}