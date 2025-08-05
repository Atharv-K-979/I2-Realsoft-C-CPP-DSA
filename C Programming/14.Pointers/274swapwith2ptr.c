#include <stdio.h>
#include <string.h>
int main()
{
    int x[5], *p, *q;
    q = x + 4;
    p = x + 0;
    printf("Data\n");
    while (p <= q)
    {
        scanf("%d", p);
        p++;
    }
    for (p = x + 0; p <= q; p++, q--)
    {
        int tmp = *p;
        *p = *q;
        *q = tmp;
    }
    printf("data\n\n");
    for (p = x + 0, q = x + 4; p <= q; p++)
    {
        printf("%4d", *p);
    }
    return 0;
}