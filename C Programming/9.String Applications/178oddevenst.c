#include <stdio.h>
int main()
{
    char p[50], q[50], r[50];
    int i = 0, j = 0, k = 0, flg = 0;
    printf("Enter a string \n");
    gets(p);
    while (p[i] != '\0')
    {
        if (p[i] == 32)
        {
            if (flg == 0)
            {
                q[j++] = 32;
                flg = 1;
            }
            else
            {
                r[k++] = 32;
                flg = 0;
            }
        }
        else
        {
            if (flg == 0)
                q[j++] = p[i];
            else
                r[k++] = p[i];
        }
        i++;
    }
    q[j] = '\0';
    r[k] = '\0';
    puts(p);
    puts(q);
    puts(r);
}