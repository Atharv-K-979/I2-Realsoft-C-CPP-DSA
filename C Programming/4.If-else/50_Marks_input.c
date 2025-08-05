#include <stdio.h>
int main()
{
    int a;
    printf("Enter your marks :");
    scanf("%d", &a);
    if ( a >= 95 )
    {
        printf(" Your grade for marks %d is :A++",a);
    }
    else if ( a >= 90 && a < 95)
    {
        printf(" Your grade for marks %d is :A",a);
    }
     else if ( a >= 80 && a < 90)
    {
        printf(" Your grade for marks %d is :B",a);
    }
     else if ( a >= 70 && a < 80)
    {
        printf(" Your grade for marks %d is :C",a);
    }
     else if ( a >= 60 && a < 70)
    {
        printf(" Your grade for marks %d is :D",a);
    }
     else if ( a >= 50 && a < 60)
    {
        printf(" Your grade for marks %d is :C",a);
    }
    return 0;
}