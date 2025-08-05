#include <stdio.h>
int main()
{
    int a, dig, search, cnt;
    printf("Enter a no and search dig. :");
    scanf("%d %d", &a, &search);
    if (search<0 || search>9)
    {
        printf("Invalid search dig");
    }
    else //////////////////////////////////////   very complicsted program...
    {
        while (a>0)
        {
            dig = a % 10;
            if (dig == search)
            {
                cnt++;
            }
            a/=10;
        }
    }
    if(cnt==0)
    printf("Your dig %d not found.", search);
    else
    printf("Your dig %d  found",search);
    return 0;
}