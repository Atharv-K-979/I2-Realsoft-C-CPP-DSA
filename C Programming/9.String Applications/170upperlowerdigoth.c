#include <stdio.h>
int main()
{
    char a[50];
    int i = 0, dcnt = 0, lcnt = 0, ucnt = 0, ocnt = 0;
    printf("\nString :");
    gets(a);
    while (a[i] != '\0')
    {
        if (a[i] >= 48 && a[i] <= 57)
        {
            dcnt++;
        }
        else
        {
            if (a[i] >= 65 && a[i] <= 90)
                ucnt++;
            else
            {
                if (a[i] >= 97 && a[i] <= 122)
                    lcnt++;
                else
                    ocnt++;
            }
        }
         i++;
    }
    printf("\nDig cnt %d Lower cnt : %d Upper cnt %d Other cnt :%d", dcnt, lcnt, ucnt, ocnt);
    return 0;
}