#include <stdio.h>
int main()
{
    int i = 1,p,a ;
    printf("Enter a no:");
    scanf("%d",&a);
 while ( i <= 20)
    {
        p = a * i;
        printf("\n%d * %d = %d",a,i,p); 
        i++;
    }

    return 0;
}