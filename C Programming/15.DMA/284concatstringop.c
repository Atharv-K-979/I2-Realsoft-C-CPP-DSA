#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char p[100], q[100], *r;
    int n, i = 0, j = 0;
    printf("Data 1\n");
    gets(p);
    printf("Data 2\n");
    gets(q);
    n = strlen(p) + strlen(q) + 1;
    r = (char *)malloc(n * sizeof(char));
    for (int i = 0, j = 0; *(p + i) != '\0'; i++, j++)
    {
        *(r + j) = *(p + i);
    }
    for (int i = 0; *(q + i) != '\0'; i++)
    {
        *(r + j) = *(q + i);
    }
    puts(p);
    puts(q);
    puts(r);
    free(r);
    return 0;
}