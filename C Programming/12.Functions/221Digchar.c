#include <stdio.h>
int digChar()
{
    char ch;
    printf("Enter a dig char");
    scanf("%c", &ch);
    if (ch >= 48 && ch <= 57)
    {
        printf("Dig");
    }
    else
        printf("Not dig");
}
int main()
{
    int digChar();
    digChar();

    return 0;
}