#include <stdio.h>
int main()
{
    char p[50], tmp;
    int i = 0, r = 0, l = 0;
    printf("Enter String");
    gets(p);
    while (1)
    {
        if (p[i] == 32 || p[i] == '\0')
        {
            r = i - 1;
            while (l < r)//////////////// doubt
            {
                tmp = p[l];
                p[l] = p[r];
                p[r] = tmp;
                r--;
                l++;
            }
            if (p[i] == '\0')
            {
                break;
            }
        }
        i++;
    }
    puts(p);
    return 0;
}