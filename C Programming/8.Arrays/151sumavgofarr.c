#include <stdio.h>
int main()
{
    int x[10], i = 0, sum=0,avg=0;
    printf("\nData\n");
    while (i < 10)
    {
        scanf(" %d", &x[i]);
        sum+=x[i];
        i++;
    }
    avg=sum/10;
    for (i = 0; i < 10; i++)
    {
        printf("%4d", x[i]);
    }
    printf("\nThe sum and avg is %d %d",sum,avg);
    return 0;
}