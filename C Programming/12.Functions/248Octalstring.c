#include <stdio.h>
int isisOctal(char p[])
{
    int i = 0;
    while (p[i] != '\0')
    {
        if (p[i] >= '0' && p[i] <= '7')
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
    int isisOctal(char p[]);
    isisOctal(p);
    printf("Enter string\n");
    scanf("%s", p);
    if (isisOctal(p) == 0)
    {
        printf("\nOctal");
    }
    else
        printf("\nNot Octal");
    return 0;
}
// binary octal decimal pal