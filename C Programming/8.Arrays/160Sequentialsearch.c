#include <stdio.h>
int main()
{
    int x[10], i = 0,sv;
    printf("\nData\n");
    while (i < 10)
    {
        scanf(" %d", &x[i]);
        i++;
    }
    printf("Print search dig\n");
    scanf("%d",&sv);
    for (i = 0; i < 10; i++)
    {
       if (sv==x[i])
       {
            break;
       }
    }
    if (i==10)
    {
        printf("\n\nNot-found");
    }
    else
        printf("\n\n%d Found",sv);
    return 0;
}