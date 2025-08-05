#include <stdio.h>
int main()
{
    int dno, rem, i = 0, j = 0;
    char p[50], ch;
    printf("Enter a no");
    scanf("%d", &dno);
    while (dno > 0)
    {
        rem = dno % 2;
        ch = (char)(48 + rem);
        p[i] = ch;
        dno /= 2;
        i++;
    }
    p[i] = '\0';
    j = i - 1;
    i = 0;
    while (i < j)
    {
        ch = p[i];
        p[i] = p[j];
        p[j] = ch;
        i++;
        j--;
    }
    puts(p);
    return 0;
}