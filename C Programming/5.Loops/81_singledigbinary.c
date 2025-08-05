#include <stdio.h>
int main()
{
    int a;
    printf("Enter a no:");
 while (1)
    {
        scanf("%d",&a);
        if (a==0 || a==1)
        {
            break;
        }
        else
        {
            continue;
        }          
    }
    printf("Binary no %d ",a);
    return 0;
}