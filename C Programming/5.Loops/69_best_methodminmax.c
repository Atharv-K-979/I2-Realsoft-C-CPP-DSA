#include <stdio.h>
int main()
{
    int a,dig,min=0,max=0,flg=0;
    printf("Enter a no:");
    scanf("%d",&a);
    while ( a > 0)
    {
        dig = a % 10;
        if (flg==0)
        {
           min = max = dig;
           flg = 1;
        }
        else
        {
            if (dig > max)
            {
                max = dig ;
            }
            else
            {
                if (dig < min)
                {
                    min = dig ;
                }
                
            }            
        }
        a = a / 10 ;
            
    }
    printf("The Max and Min of Number are : %d %d",max,min);
    return 0;
}