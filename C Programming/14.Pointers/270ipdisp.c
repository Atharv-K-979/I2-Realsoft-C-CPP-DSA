#include <stdio.h>
void input(int *a)
{
    printf("Enter a no");
    scanf("%d", a);
    return;
}
void display(int *a)
{
    printf("Value : %d", *a);
    return;
}
int main()
{
    int x[5], i = 0;
    while (i < 5)
    {
        input(&x[i]);
        i++;
    }
    i=0;
    while (i < 5)
    {
        display(&x[i]);
        i++;
    }
    return 0;
}