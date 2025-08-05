#include <stdio.h>
int main()
{
    char a[50];
    int i = 0;
    printf("\nString :");
    gets(a);
    while (a[i] != '\0')
    {
        if (a[i] >= '0' || a[i] <= '1')
        {
            i++;
        }
        else
            break;
    }
    if (a[i] == '\0')
    {
        printf("\nBinary Str");
    }
    else
        printf("\n Not a Binary Str");
    return 0;
}