#include <stdio.h>
int main()
{
    int no, dno, rem, j, dig, i = 0;
    char a[5] = "Zero", b[4] = "One", c[4] = "Two", d[6] = "Three", e[5] = "Four", f[5] = "Five", g[4] = "Six", h[6] = "Seven", o[6] = "Eight", q[5] = "Nine", k[5] = "Only", ch, val, p[10];
    printf("Enter a cost price :");
    scanf("%d", &no);
    dno = no;
    while (dno > 0)
    {
        rem = dno % 10;
        ch = (char)(48 + rem);
        p[i] = ch;
        dno /= 10;
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
    printf("The cost price in words is : ");
    for (i = 0; p[i] != '\0'; i++)
    {
        if (p[i] == '0')
            printf("%s ", a);
        else if (p[i] == '1')
            printf("%s ", b);
        else if (p[i] == '2')
            printf("%s ", c);
        else if (p[i] == '3')
            printf("%s ", d);
        else if (p[i] == '4')
            printf("%s ", e);
        else if (p[i] == '5')
            printf("%s ", f);
        else if (p[i] == '6')
            printf("%s ", g);
        else if (p[i] == '7')
            printf("%s ", h);
        else if (p[i] == '8')
            printf("%s ", i);
        else if (p[i] == '9')
            printf("%s ", j);
        else
            printf(" ");
    }
    printf("Only\n");
    return 0;
}