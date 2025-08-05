#include <stdio.h>
int main()
{
    int x[10], i = 0,sv,cnt=0;
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
            cnt++;
       }
    }
    if (cnt==0)
    {
        printf("Search dig not found");
    }
    printf("\n\n %d is repeated %d times",sv,cnt);
    return 0;
}