#include <stdio.h>
int main()
{
    int i, j, n,ls;
    printf("Enter nth no ");
    scanf("%d", &n);
    ls = n - 1;
    for (i = 1; i <= n; i++)
    {
        
        for (j = 1; j <= i; j++) /////////////////////// Best....
        {
            if (j<=ls)
            {
                printf("  ");
            }
            else
            printf("* ");
        }
        printf("\n");
        ls--;
    }

    return 0;
}