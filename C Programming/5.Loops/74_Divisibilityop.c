#include <stdio.h>
int main()
{
    int a,cnt=2,i=2;////////// We know that each no is divisible by 1 and itself so for reducing iterations...
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