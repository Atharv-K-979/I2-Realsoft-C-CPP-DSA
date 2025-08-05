// Array must be in order
#include <stdio.h>
int main()
{
    int x[10], i = 0;
    int r, l, mid, sv;
    printf("\nData\n");
    while (i < 10)
    {
        scanf(" %d", &x[i]);
        if (i > 0)
        {
            if (x[i] < x[i - 1])
            {
                printf("invalid i/p");
                continue;
            }
        }
        i++;
    }
    printf("Print search dig\n");
    scanf("%d", &sv);
    l = 0;
    r = 9;
    do
    {
        mid = (l + r) / 2;
        if (sv == x[mid])
        {
            break;
        }
        else
        {
            if (sv < x[mid])
                r = mid - 1;
            else
                l = mid + 1;
        }
    } while (l <= r);
    if (l <= r)
    {
        printf("Found");
    }
    else
        printf("Not Found");

    return 0;
}