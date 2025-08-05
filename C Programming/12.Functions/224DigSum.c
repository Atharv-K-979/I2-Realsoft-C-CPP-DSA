#include <stdio.h>
int main()
{
    int digSum();
    printf(" DigSum %d ",digSum());
    return 0;
}
int digSum()
{
    int n,sum=0;
    printf("Enter dig");
    scanf("%d", &n);
    while (n>0)
    {
        sum+=n%10;
        n/=10;
    }
    return sum;
}