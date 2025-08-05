#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a Char : ");
    scanf("%c",&ch);
    printf("\nChar  %c is %s",ch,(( ch >= 'A' && ch <= 'F'  ) ? "HexAlphabet" :( ch >= '0' && ch <= '9') ? "HexDigit": "other"));
    return 0;
}