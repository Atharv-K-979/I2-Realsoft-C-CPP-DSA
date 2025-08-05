#include <stdio.h>
int main()
{
    char a[50];
    int i = 0;
    printf("\nString :");
    gets(a);
    while (a[i]!='\0')
    {
        i++;
    }
     printf("\nString length %d",i);
    return 0;
}