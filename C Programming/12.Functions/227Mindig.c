#include <stdio.h>
int main()
{
    int minDig();
    printf(" minDig %d ",minDig());
    return 0;
}
int minDig()
{
    int n,min=9,dig;
    printf("Enter dig");
    scanf("%d", &n);
    while (n>0)
    {
        dig=n%10;
        if (dig<min)
        {
            min=dig;
        }
        n/=10;
    }
    return min;
}