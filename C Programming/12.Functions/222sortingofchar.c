#include <stdio.h>
int main()
{
    int isChar();
    switch (isChar())
    {
    case 1:
        printf("\nDigit");
        break;
    case 2:
        printf("\nUppercase");
        break;
    case 3:
        printf("\nLowercase");
        break;
    case 4:
        printf("\nothar");
        break;
    }

    return 0;
}
int isChar()
{
    char ch;
    printf("Enter char");
    scanf("%c", &ch);
    if (ch >= '0' && ch <= '9')
    {
        return 1;
    }
    if (ch >= '65' && ch >= '90')
    {
        return 2;
    }

    if (ch >= '97' && ch <= '122')
    {
        return 3;
    }
    else
        return 4;
}