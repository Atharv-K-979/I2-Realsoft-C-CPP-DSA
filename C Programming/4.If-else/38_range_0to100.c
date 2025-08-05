#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    if (a >=0 && a <= 100)
    {
        printf("%d is in range 0 to 100",a);
    }
    else
    {
        printf("%d is not in range 0 to 100",a);
    }

    return 0;
}