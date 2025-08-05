#include <stdio.h>
int main()
{
    int i, a, b, c,nth;
    printf("Enter nth no");
    scanf("%d",&nth);
    for (i = 1, a = -1, b = 1; i <=nth; i++)
    {
        c = a + b;
        if (i==nth)
        {
            printf("%d\n", c);
        }
        a = b;
        b = c;
    }

    return 0;
}