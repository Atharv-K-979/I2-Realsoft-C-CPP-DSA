#include <stdio.h>
void take(int x[], int n)
{
    int i = 0;
    while (i < n)
    {
        scanf("%d", &x[i]);
        i++;
    }
}
void give(int x[], int n)
{
    int i = 0;
    while (i < n)
    {
        printf("%4d", x[i]);
        i++;
    }
}
int main()
{
    int x[5];
    int n = 5;
    printf("Enter data");
    take(x, n);
    printf("\ndata");
    give(x, n);
    return 0;
}