#include <stdio.h>
int isHex(char p[])
{
    int i = 0;
    while (p[i] != '\0')
    {
        if ((p[i] >= 'A' && p[i] <= 'F') || (p[i] >= '0' && p[i] <= '9'))
        {
            return 0;
        }
        else
            return 1;
        i++;
    }
    return 0;
}
int main()
{
    char p[50];
    int isHex(char[]);
    printf("Enter string\n");
    scanf("%s", p);
    if (isHex(p) == 0)
    {
        printf("\nHex");
    }
    else
        printf("\nNot hex");
            isHex(p);
    return 0;
}


// tocheck str is binary
// to check octal
// to check __DECIMAL
// palindrome