#include <stdio.h>
int main()
{
    int i, j, n;
    printf("Enter nth no ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        int a = 65;
        for (j = 1; j <= i; j++) /////////////////////// Best....
        {
            printf(" %c ", a);
            a++;
        }
        printf("\n");
    }

    return 0;
}