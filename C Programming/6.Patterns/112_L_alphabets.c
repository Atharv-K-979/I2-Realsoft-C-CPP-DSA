#include <stdio.h>
int main()
{
    int i, j, n;
    int a = 65;
    printf("Enter nth no ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        
        for (j = 1; j <= i; j++) /////////////////////// Best....
        {
            printf(" %c ", a);
        }
        printf("\n");
        a++;
    }

    return 0;
}