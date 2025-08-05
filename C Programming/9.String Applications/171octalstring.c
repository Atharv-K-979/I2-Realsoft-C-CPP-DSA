#include <stdio.h>
int main()
{
    char a[50];
    int i = 0;
    printf("\nString :");
    gets(a);
    while (a[i] != '\0')
    {
        if (a[i] >= '0' && a[i] <= '7')
        {
            i++;
        }
        else
            break;
    }
    if (a[i] == '\0')
    {
        printf("\nOctal Str");
    }
    else
        printf("\n Not aOctal Str");
    return 0;
}