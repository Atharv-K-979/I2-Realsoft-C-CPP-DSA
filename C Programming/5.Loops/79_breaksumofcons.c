#include <stdio.h>
int main()
{
    int a,sum=0;
    printf("Enter a no:");
 while (1)
    {
        scanf("%d",&a);
        if (a==0)
        {
            break;
        }
        else
        {
            sum+=a;
        }          
    }
    printf("Sum %d ",sum);
    return 0;
}