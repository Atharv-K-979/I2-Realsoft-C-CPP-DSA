#include <stdio.h>
#include<string.h>
int main()
{
    char p[200], q[200];
    int dig, no;
    printf("\nEnter a no");
    scanf("%d", &no);
    strcpy(p, "Only");
    while (no > 0)
    {
        dig = no % 10;
        switch (dig)
        {
        case 0:
            strcpy(q, "Zero");
            break;
        case 1:
            strcpy(q, "One");
            break;
        case 2:
            strcpy(q, "Two");
            break;
        case 3:
            strcpy(q, "Three");
            break;
        case 4:
            strcpy(q, "Four");
            break;
        case 5:
            strcpy(q, "Five");
            break;
        case 6:
            strcpy(q, "Six");
            break;
        case 7:
            strcpy(q, "Seven");
            break;
        case 8:
            strcpy(q, "Eight");
            break;
        case 9:
            strcpy(q, "Nine");
            break;
        }
        strcat(q,p);
        strcpy(p,q);
        no/=10;
    }
    puts(p);
    return 0;
}