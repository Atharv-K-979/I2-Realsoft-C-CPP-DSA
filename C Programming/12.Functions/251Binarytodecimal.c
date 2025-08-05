#include <stdio.h>
#include <string.h>
int Bin2Dec(char s[])
{
    int i = strlen(s) - 1, mf = 1, val, dno=0;
    while (i >= 0)
    {

        if (s[i] >= '0' || s[i] <= '1')
        {
            val = s[i] - 48;
            dno += (mf * val);
            mf *= 2;
        }
        else
        {
            break;
        }
        i--;
    }
    return (i == -1) ? dno : -1;
}
int main()
{
    int res;
    char s[50];
    printf("Enter String\n");
    scanf("%s", s);
    int Bin2Dec(char[]);
    Bin2Dec(s);
    res = Bin2Dec(s);
    if (res == -1)
    {
        printf("Invalid string");
    }
    else
        printf("Decimal no %d", res);
    return 0;
}
