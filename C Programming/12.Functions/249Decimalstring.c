#include <stdio.h>
int isDecimal(char p[])
{
    int i = 0;
    while (p[i] != '\0')
    {
        if (p[i] >= '0' && p[i] <= '9')
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
    int isDecimal(char[]);
    isDecimal(p);
    printf("Enter string\n");
    scanf("%s", p);
    if (isDecimal(p) == 0)
    {
        printf("\nDecimal");
    }
    else
        printf("\nNotDecimal");
    return 0;
}
// binary octal decimal pal