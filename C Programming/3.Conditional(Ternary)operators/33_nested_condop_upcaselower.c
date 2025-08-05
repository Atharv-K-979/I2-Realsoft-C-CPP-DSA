#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a Char : ");
    scanf("%c",&ch);
    printf("\nChr  %c is %s",ch,(( ch >= 'A' && ch <= 'Z'  ) ? "Uppercase" :( ch >= 'a' && ch <= 'z') ? "Lowercase": "other"));
    return 0;
}