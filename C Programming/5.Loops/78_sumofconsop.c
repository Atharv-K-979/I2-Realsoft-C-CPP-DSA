#include <stdio.h>
int main()
{
    int a,sum=0,flg=1;
    printf("Enter a no:");
 while (flg)
    {
        scanf("%d",&a);                            /////////////////when flg=0 out of loop
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