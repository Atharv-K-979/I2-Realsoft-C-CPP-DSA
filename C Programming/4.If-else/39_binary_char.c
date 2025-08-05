#include<stdio.h>
int main()
{
    char a;
    printf("Enter a number:");
    scanf("%c",&a);
    if ( a == '0' && a == '1')
    {
        printf("%c is binary",a);
    }
    else
    {
        printf("%c is not binary",a);
    }

    return 0;
}