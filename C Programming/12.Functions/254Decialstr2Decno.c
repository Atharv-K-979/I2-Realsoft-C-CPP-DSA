#include <stdio.h>
#include <string.h>
int decstr2decno(char s[])
{
    int i = strlen(s) - 1;
    int dno = 0, val, mf = 1;
    while (i >= 0)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            val = s[i] - 48;
            dno += (mf * val);
            mf *= 10;
        }
        else
        {
            return -1; 
        }
        i--;
    }
    return ((i == -1) ? dno : -1);
}

int main()
{
    int res;
    char s[50];
    printf("Enter decimal String:\n");
    scanf("%s", s);
    res = decstr2decno(s);
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