#include<stdio.h>
int main()
{
    char a;
    printf("Enter a Character:");
    scanf("%c",&a);
    if ((a >= 'A' && a <= 'Z'))
    {
        printf("%c is Uppercase char",a);
    }
    else
    {
        printf("%c is not Uppercase char",a);
    }

    return 0;
}