#include <stdio.h>
int main()
{
    int a,sum=0,flg=1;
    printf("Enter a no:");
 while (flg==1)
    {
        scanf("%d",&a);
        if (a==0)
        {
            flg = 0;
        }
        else
        {
            sum+=a;
        }          
    }
    printf("Sum %d ",sum);
    return 0;
}