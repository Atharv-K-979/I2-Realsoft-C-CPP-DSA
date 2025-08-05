#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef union abc
{
    int a;
    float b;
    char c;
} ABC;
typedef struct pqr
{
    ABC var;
    char type; // i or f or c
} PQR;
int main()
{
    PQR p[5];
    int i = 0;
    float tmp;
    scanf("%f", &tmp);
    while (i < 5)
    {
        printf("\ni - int \nf - float \nc - char \nChoice :");
        scanf(" %c", &p[i].type);
        switch (p[i].type)
        {
        case 'i':
            printf("\nint data :");
            scanf("%d", &p[i].var.a);
            break;
        case 'f':
            printf("\nfloat data :");
            scanf("%f", &p[i].var.b);
            break;
        case 'c':
            printf("\nchar data :");
            scanf("%c", &p[i].var.c);
            break;
        }
        i++;
    }
    for (i = 0; i < 5; i++)
    {
        switch (p[i].type)
        {
        case 'i':
            printf("\nint data :");
            printf("%d", p[i].var.a);
            break;
        case 'f':
            printf("\nfloat data :");
            printf("%f", p[i].var.b);
            break;
        case 'c':
            printf("\nchar data :");
            printf("%c", p[i].var.c);
            break;
        }
    }

    return 0;
}