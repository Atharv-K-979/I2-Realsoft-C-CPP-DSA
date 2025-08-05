#include <stdio.h>
#include <string.h>
int isPalindrome(char s[])
{
    int i, j;
    for (i = 0, j = strlen(s) - 1; i < j; i++, j--)
    {
        if (s[i] == s[j])
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
}
int main()
{
    char s[50];
    printf("Enter String\n");
    scanf("%s", s);
    int isPalindrome(char[]);
    isPalindrome(s);
    if (isPalindrome(s))
    {
        printf("Palindrome");
    }
    else
        printf("Not Palindrome");
    return 0;
}
