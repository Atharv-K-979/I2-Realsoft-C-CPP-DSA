#include <stdio.h>
int main()
{
    int a;
    printf("Enter a No:");
    scanf("%d", &a);
    if (a % 5 == 0)
    {
        if (a % 7 == 0)
            printf("Divisible by both 5 and 7 ");
        else
            printf("Divisible by 5");
    }
    
    else if (a % 7 == 0)
    {
        printf("Divisible by 7");
    }
    else
    {
        printf("Divisible by not 5 and 7");
    }
    return 0;
}