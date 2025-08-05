#include<stdio.h>
int main()
{
    char a;
    printf("Enter a char:");
    scanf("%c",&a);
    if ( a >= '0' && a <= '9')
    {
        printf("%c is Decimal char",a);
    }
    else
    {
        printf("%c is not Decimal",a);
    }

    return 0;
}