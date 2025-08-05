#include <stdio.h>
int main()
{
    int a;
    printf("Enter a no:");
    scanf("%d",&a);
 while (a > 0 )
    {
        if (a % 10 > 1)
        {
            a = -1;                                   ///////////////here you can give any no
        }
        else
        a = a / 10 ;
        
    }
    if (a == 0)
    {
        printf("Binary");
    }
    else
        printf("Not Binary");
    return 0;
}