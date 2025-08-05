#include<stdio.h>
int main()
{
    char a;
    printf("Enter a Character:");
    scanf("%c",&a);
    if ((a >= 'a' && a <= 'z'))
    {
        printf("%c is Lowercase char",a);
    }
    else
    {
        printf("%c is not Lowercase char",a);
    }

    return 0;
}