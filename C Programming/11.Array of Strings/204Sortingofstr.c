#include <stdio.h>
#include <string.h>
int main()
{
    int i = 0, j = 0, pos = 0;
    char p[5][15], q[15];
    printf("Enter city names");
    while (i < 5)
    {
        gets(p[i]);
        i++;
    }
    printf("Before Sorting ");
    for (i = 0; i < 5; i++)
    {
        puts(p[i]);
    }
    for (i = 0; i < 4; i++)
    {
        pos = i;
        for (j = i + 1; j < 5; j++)
        {
            if (strcmp(p[j], p[pos]) < 0)
            {
                pos = j;
            }
            if (i != pos)
            {
                strcpy(q, p[i]);
                strcpy(p[i], p[pos]);
                strcpy(p[pos], q);
            }
        }
    }
    printf("\nAfter Sorting :\n");
    for (i = 0; i < 5; i++)
    {
        puts(p[i]);
    }

    return 0;
}