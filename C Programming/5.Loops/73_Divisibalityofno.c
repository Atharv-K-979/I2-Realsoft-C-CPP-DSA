#include <stdio.h>
int main()
{
    int a,cnt=0,i=1;
    printf("Enter a no:");
    scanf("%d",&a);
 while ( i<=a)
    {
        if (a%i==0)
        {
            cnt++;
        }
        i++;          
    }
    printf("\n %d is divisible by %d time",a,cnt);
    return 0;
}