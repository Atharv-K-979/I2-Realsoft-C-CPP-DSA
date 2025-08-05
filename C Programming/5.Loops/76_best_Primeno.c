#include <stdio.h>
int main()
{
    int a, dig, i = 2, cnt = 2;
    printf("Enter a no:");
    scanf("%d", &a);
    while (i < a && cnt == 2)
    {
        if (a % 2 == 0)
        {
            cnt++;
        }
        i++;
    }
    if (cnt == 2)
    {
        printf("No.is Prime");
    }
    else
    {
        printf("No.is Not Prime");
    }
    return 0;
}