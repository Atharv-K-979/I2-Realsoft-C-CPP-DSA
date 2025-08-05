#include <stdio.h>
int main()
{
    int x[10];int i = 0;
    printf("\nData\n");
    while (i < 10)
    {
        scanf(" %d", &x[i]);
        i++;
    }
    for (int i = 0; i <=10; i++)
    {
         if (x[i] < x[i - 1])
        {
            break;
        }
    }
    
    printf("Array Data\n");
    for ( int i = 0; i < 10; i++)
    {
        printf("%4d", x[i]);
    }
    if (i == 10)
        printf("\n\nOrdered");
    else
        printf("\n\nUnordered");
    return 0;
}