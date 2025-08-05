#include <stdio.h>
int main()
{
    int i, j, n;
    printf("Enter nth no ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++) /////////////////////// Best....
        {
            if (i == 1 || j == 1 || i + j == n + 1)
            {
                printf(" * ");
            }
            else
                printf("   ");
        }
        printf("\n");
    }

    return 0;
}