#include <stdio.h>
#include <string.h>
int main()
{
    char r[200], q[200];
    int dig, no, i;
    printf("\nEnter a no");
    scanf("%d", &no);
    sprintf(r, "%d", &no);
    strcpy(q, "");
    while (q[i] != '\0')
    {
        switch (r[i])
        {
        case '0':
            strcat(q, "Zero");
            break;
        case '1':
            strcat(q, "One");
            break;
        case '2':
            strcat(q, "Two");
            break;
        case '3':
            strcat(q, "Three");
            break;
        case '4':
            strcat(q, "Four");
            break;
        case '5':
            strcat(q, "Five");
            break;
        case '6':
            strcat(q, "Six");
            break;
        case '7':
            strcat(q, "Seven");
            break;
        case '8':
            strcat(q, "Eight");
            break;
        case '9':
            strcat(q, "Nine");
            break;
        }
    }
    strcat(q, "Only");
    puts(q);
    return 0;
}