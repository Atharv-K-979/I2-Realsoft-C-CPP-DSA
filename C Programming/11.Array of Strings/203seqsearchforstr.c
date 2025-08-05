// Liabrary fun used to compare two strings the fun returns 0 if both are matching otherwise it  returns non0 value indication missmatch
// for eg
// strcmp("Amit","Amit");
// op--> 0 // gives diff of ascii value

// strcmp("Amit","Amita");
// op-->   > 0 // gives diff of ascii value

// strcmp("Amita","Amit");
// op--> <0 // gives diff of ascii value

// wap to impliment sequential search for array of strings

#include <stdio.h>
#include<string.h>
int main()
{
    char p[5][15], q[15];
    int i = 0;
    printf("Enter city names");
    while (i < 5)
    {
        gets(p[i]);
        i++;
    }
    printf("Enter city name to search");
    gets(q);
    for (i = 0; i < 5; i++)
    {
        if (strcmp(p[i], q) == 0)
        {
            break;
        }
    }
    if (i == 5)
    {
        printf("Not found");
    }
    else
        printf("Found");

    return 0;
}