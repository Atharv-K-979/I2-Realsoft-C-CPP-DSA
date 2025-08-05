#include <stdio.h>
int main()
{
    char p[50];
    int i = 0, l = 0, r = 0;
    printf("Enter a string \n");
    gets(p);
    while (1)
    {
        if (p[i] == 32 || p[i] == '\0')
        {
            r = i;
            printf("\n%d",r-l);
            if (p[i] == '\0')
                break;
            l = i + 1;
        }
        i++;
    }
    return 0;
}