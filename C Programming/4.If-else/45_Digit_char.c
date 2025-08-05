#include<stdio.h>
int main()
{
    char a;
    printf("Enter a Character:");
    scanf("%c",&a);
    if ((a >= '0' && a <= '9'))
    {
        printf("%c is Digit char",a);
    }
    else
    {
        printf("%c is not Digit char",a);
    }

    return 0;
}