#include<stdio.h>
int main()
{
    char a;
    printf("Enter a char:");
    scanf("%c",&a);
    if ( a >= '0' && a <= '7')
    {
        printf("%c is octal",a);
    }
    else
    {
        printf("%c is not octal",a);
    }

    return 0;
}