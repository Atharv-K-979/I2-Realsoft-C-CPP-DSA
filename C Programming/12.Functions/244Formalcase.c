#include <stdio.h>
void toproper(char p[])
{
    int i = 0, flg = 0;
    while (p[i] != '\0')
    {
        if (flg == 0)
        {
            p[i] = p[i] - 32;
            flg = 1;
        }
        if (p[i] == 32 && p[i + 1] >= 'a' && p[i + 1] <= 'z')
        {
            p[i + 1] = p[i + 1] - 32;
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