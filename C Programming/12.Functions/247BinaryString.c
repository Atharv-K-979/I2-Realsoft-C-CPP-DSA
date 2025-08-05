#include <stdio.h>
int isBinary(char p[])
{
    int i = 0;
    while (p[i] != '\0')
    {
        if (p[i] == '0' || p[i] == '1')
        {
            return 0;
        }
        else
            return 1;
        i++;
    }
}
int main()
{
    char p[50];
    int isBinary(char[]);
    isBinary(p);
    printf("Enter string\n");
    scanf("%s", p);
    if (isBinary(p) == 0)
    {
        printf("\nBinary");
    }
    else
        printf("\nNot binary");
    return 0;
}
// binary octal decimal pal