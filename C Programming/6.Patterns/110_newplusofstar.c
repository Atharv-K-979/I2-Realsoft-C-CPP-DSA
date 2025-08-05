#include <stdio.h>
int main()
{
    int i = 1, j = 1, n, mid;
    printf("Enter nth no ");
    scanf("%d", &n);
    if (n % 2 == 0)
    {
        n++;
    }
    mid = n / 2 + 1;

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if (i == mid || j == mid)
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

