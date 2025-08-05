#include <stdio.h>
int main()
{
    char a[50];
    int i = 0;
    printf("\nString :");
    gets(a);
    while (a[i] != '\0')
    {
        if ((a[i] >= '0' && a[i] <= '9') || (a[i] >= 65 && a[i] <= 70))
        {
            i++;
        }
        else
            break;
    }
    if (a[i] == '\0')
    {
        printf("\nHexadecimal Str");
    }
    else
        printf("\n Not a Hexadecimal Str");
    return 0;
}