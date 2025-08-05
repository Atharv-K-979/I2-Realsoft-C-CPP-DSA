#include <stdio.h>
int main()
{
    int a,dig,flg=1;
    printf("Enter a no:");
    scanf("%d",&a);
 while ( a > 0 && flg == 1)
    {
        dig = a % 10;
        if (dig > 1)
        {
            flg = 0 ;
        }
        else
        a = a / 10;
        
    }
    if (flg==1)
    {
        printf("Binary");
    }
    else
    {
        printf("Not Binary");
    }
    return 0;
}