#include <stdio.h>
#include <string.h>
int main()
{
    char p[50];
    int i = 0;
    printf("Enter String");
    gets(p);
    int ln = strlen(p);
    for (i = 0; i < ln; i++)/////////////// resolve
    {
        p[i] = p[i] + 32;
    }
    puts(p);
    return 0;
}