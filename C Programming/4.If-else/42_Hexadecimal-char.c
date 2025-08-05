#include<stdio.h>
int main()
{
    char a;
    printf("Enter a Character:");
    scanf("%c",&a);
    if ( (a >= '0' && a <= '9')|| (a >= 'A' && a <= 'F'))
    {
        printf("%c is HexaDecimal char",a);
    }
    else
    {
        printf("%c is not HexaDecimal char",a);
    }

    return 0;
}