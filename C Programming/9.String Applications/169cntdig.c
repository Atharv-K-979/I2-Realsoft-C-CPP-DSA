#include <stdio.h>
int main()
{
    char a[50];
    int i = 0, cnt = 0;
    printf("\nString :");
    gets(a);
    while (a[i] != '\0')
    {
        if (a[i] >= 48 && a[i] <= 57)
        {
            cnt++;
        }
        i++;
    }
    printf("\nDig cnt %d", cnt);
    return 0;
}