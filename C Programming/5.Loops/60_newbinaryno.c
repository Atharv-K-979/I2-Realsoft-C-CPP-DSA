#include <stdio.h>
int main()
{
    int a,dig,flg=1;
    printf("Enter a no:");
    scanf("%d",&a);
 while ( a > 0)
    {
        dig = a % 10;
        if (dig > 1)
        {
            flg = 0;
        }
        a = a / 10;
    }
    
        if ( flg = 1)
        {
            printf("\nBinary");
        }
        else
        {
        printf("\nNot a binary");
        }
        
    
    return 0;
}