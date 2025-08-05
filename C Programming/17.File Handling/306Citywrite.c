#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    FILE *f1;
    char p[80];
    f1 = fopen("city.txt", "w");
    printf("Type Messages\n");
    while (1)
    {
        gets(p);
        if (strcmp(p, "exit") == 0) // if p == exit then == 0.
        {
            break;
        }
        fputs(p, f1);
        fputs("\n", f1);
    }
    fclose(f1);
    return 0;
}