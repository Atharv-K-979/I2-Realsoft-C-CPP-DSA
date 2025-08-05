#include<stdio.h>
int main()
{
    char a;
    printf("Enter a Character:");
    scanf("%c",&a);
    if ( a >='0' && a <='9')
    {
        printf(" Digit char");
    }
    else if ( a > 'A' && a < 'Z')
    {
        printf(" Uppercase char");
    }
    else if ( a > 'a' && a < 'z')
    {
        printf(" Lowercase char");
    }
    else
    {
        printf(" Other char");
    }

    return 0;
}