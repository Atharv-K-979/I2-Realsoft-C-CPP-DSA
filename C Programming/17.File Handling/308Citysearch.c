#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    FILE *f1;
    char p[80];
    char s[20];
    int flg = 0, cnt = 0;
    f1 = fopen("city1.txt", "w");
    printf("Type Messages\n");
    while (1)
    {
        gets(p);
        if (strcmp(p, "x") == 0)
        {
            break;
        }
        fputs(p, f1);
        fputs("\n", f1);
    }
    fclose(f1);
    f1 = fopen("city1.txt", "r");
    if (f1 == NULL)
    {
        printf("File not found\n");
        return 0;
    }
    printf("Enter Search City\n");
    gets(s);
    while (1)
    {
        cnt++;
        fgets(p, 79, f1);
        if (feof(f1))
        {
            break;
        }
        int len = strlen(p);
        if (p[len - 1] == '\n')
        {
            p[len - 1] = '\0';
        }
        if (strcmp(p, s) == 0)
        {
            flg = 1;
            break;
        }
    }
    if (flg == 1)
    {
        printf("Your entered city found at %d pos and it is : ", cnt);
        puts(s);
    }
    else
    {
        printf("City not found");
    }
    fclose(f1);
    return 0;
}
