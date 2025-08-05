#include <stdio.h>
#include <string.h>
int hex2dec(char s[])
{
    int i = strlen(s) - 1, mf = 1, val, dno = 0;
    while (i >= 0)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            val = s[i] - '0';
        }
        else if (s[i] >= 'A' && s[i] <= 'F')
        {
            val = s[i] - 'A' + 10;
        }////////////////////////////////////////// IMP STEP
        else
        {
            return -1;
        }
        dno += (mf * val);
        mf *= 16;
        i--;
    }
    return dno;
}
int main()
{
    int res;
    char s[50];
    printf("Enter Hex String:\n");
    scanf("%s", s);
    res = hex2dec(s);
    if (res == -1)
    {
        printf("Invalid string\n");
    }
    else
    {
        printf("Decimal number: %d\n", res);
    }
    return 0;
}
