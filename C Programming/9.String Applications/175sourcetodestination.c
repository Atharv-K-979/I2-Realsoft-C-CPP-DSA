#include <stdio.h>
int main()
{
    char s[50], t[50], i = 0;
    printf("Enter String");
    gets(s);
    while (s[i] != '\0')
    {
        t[i] = s[i];
        i++;
    }
    t[i] = '\0';
    puts(t);
    return 0;
}