#include <stdio.h>
int main()
{
    char p[5][15];
    int i = 0;
    printf("Enter city names");
    while (i < 5)
    {
        gets(p[i]);
        i++;
    }
    for (i = 0; i < 5; i++)
    {
        puts(p[i]);
    }
    return 0;
}