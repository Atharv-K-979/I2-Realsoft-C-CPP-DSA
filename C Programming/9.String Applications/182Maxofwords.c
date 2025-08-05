#include <stdio.h>
int main()
{
    char p[50];
    int i = 0, l = 0, len = 0, max = 0, r = 0;
    printf("Enter String");
    gets(p);
    while (1)
    {
        if (p[i] == 32 || p[i] == '\0')
        {
            r = i;
            len = r - l;
            max = (len > max) ? len : max;
            if (p[i] == '\0')
                break;
            l=i+1;
        }
        i++;
    }
    printf("%d Is max", max);
    return 0;
}