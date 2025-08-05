#include <stdio.h>
void toproper(char p[])
{
    int i = 0, flg = 0;
    while (p[i] != '\0')
    {
        if (flg == 0)
        {
            if (p[i] >= 97 && p[i] <= 122)
            {
                p[i] = p[i] - 32;
                flg = 1;
            }
        }
        else
        {
            if (p[i] == 32)
            {
                flg = 0;
            }
            else
            {
                if (p[i] >= 65 && p[i] <= 90)
                {
                    p[i] = p[i] + 32;
                }
            }
        }
        i++;
    }
    printf("\n%s", p);
    return;
}
int main()
{
    char p[50];
    void toProper(char[]);
    printf("Enter string\n");
    gets(p);
    toproper(p);
    return 0;
}