#include <stdio.h>
#include <string.h>
int main()
{
    int dno = 0, val, mf = 1, i;
    char p[50], ch;
    printf("Enter a binary string");
    scanf("%s", p);
    i = strlen(p) - 1;
    while (i >= 0)
    {
        ch = p[i];
        if (ch >= '0' && ch <= '7')
        {
            val = ch - 48;
            dno += (mf * val);
            mf *= 8;
        }
        else
            break;
        i--;
    }
    if (i == -1)
    {
        printf("Decimal %d", dno);
    }
    else
        printf("Invalid i/p");
    return 0;
}