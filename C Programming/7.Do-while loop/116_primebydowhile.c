#include <stdio.h>

int main()
{
    int i = 2, no;
    printf("Enter no :");
    scanf("%d", &no);
    do
    {
        if (no % i == 0)
        {
            break;
        }
        i++;
    } while (i <= no / 2);
    if (i = no / 2)
    {
        printf("Prime");
    }
    else
    {
        printf("Not Prime");
    }
    return 0;
}
