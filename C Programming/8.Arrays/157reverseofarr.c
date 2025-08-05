#include <stdio.h>
int main()
{
    int x[10];
    int i = 0, tmp = 0;
    printf("\nData\n");
    while (i < 10)
    {
        scanf(" %d", &x[i]);
        i++;
    }
    printf("Array Data\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%4d", x[i]);
    }
    for (int i = 0, j = 9; i < j; i++, j--)
    {
        tmp = x[i];
        x[i] = x[j];
        x[j] = tmp;
    }
    printf("\n\nAfter Procressing");
    for (int i = 0; i < 10; i++)
    {
        printf("%4d", x[i]);
    }
    return 0;
}