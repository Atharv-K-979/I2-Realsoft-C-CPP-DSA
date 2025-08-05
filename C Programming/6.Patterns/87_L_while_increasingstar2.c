#include <stdio.h>
int main()
{
    int i = 1, j = 1, n;
    printf("Enter nth no ");
    scanf("%d", &n);
    while (i <= n)
    {
        j = 1;
        while (j <= i)
        {
            printf(" * ");
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}