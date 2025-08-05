#include <stdio.h>
int main()
{
    int a, dig, search, flg = 0;
    printf("Enter a no and search dig. :");
    scanf("%d %d", &a, &search);
    if (search >= 0 && search <= 9)
    {
        while (a > 0 && flg == 0)
        {
            dig = a % 10;
            if (dig == search)
            {
                flg = 1;
            }
            a = a / 10;
        }
    }
    else
    printf(("Invalid search dig %d ",search));
    if (flg == 1)
        printf("Your dig %d found.", search);
    else
        printf("Your dig %d not found", search);
    return 0;
}