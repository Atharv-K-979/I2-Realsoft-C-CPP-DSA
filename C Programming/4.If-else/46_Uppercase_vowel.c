#include<stdio.h>
int main()
{
    char a;
    printf("Enter a Character:");
    scanf("%c",&a);
    if ( (a = 'A') || (a = 'E') || (a = 'I') || (a = 'O') || (a = 'U'))
    {
        printf(" UppercaseVowel char");
    }
    else
    {
        printf(" Not UppercaseVowel char");
    }

    return 0;
}