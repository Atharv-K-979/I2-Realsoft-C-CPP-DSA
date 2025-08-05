#include <stdio.h>
int main()
{
    int i, j, n;
    printf("Enter nth no ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)/////////////////////// Best....
        {
            printf(" * ");
        }
        printf("\n");
    }

    return 0;
}
// #include <stdio.h>
// int main()
// {
//     int i = 1, j = 1, n;
//     printf("Enter nth no ");
//     scanf("%d", &n);
//     while (i <= n)
//     {
//         j = 1;
//         while (j <= n)
//         {
//             printf(" * ");
//             j++;
//         }
//         printf("\n");
//         i++;
//     }
//     return 0;
// }