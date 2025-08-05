#include <stdio.h>
int main()
{
    int x[5], i = 0;
    printf("\nData\n");
    while (i < 5)
    {
        scanf(" %d", &x[i]);
        i++;
    }
    printf("Array Data\n");
    for (i = 0; i < 5; i++)
    {
        printf("%4d", x[i]);
    }
    return 0;
}