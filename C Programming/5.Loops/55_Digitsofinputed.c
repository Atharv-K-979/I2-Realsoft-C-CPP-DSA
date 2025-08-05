#include <stdio.h>
int main()
{
    int a,dig;
    printf("Enter a no:");
    scanf("%d",&a);
 while ( a > 0)
    {
        dig = a % 10;
        printf("\n%d",dig);
        a = a / 10;
    }

    return 0;
}