#include <stdio.h>
int main()
{
    int maxDig();
    printf(" maxDig %d ",maxDig());
    return 0;
}
int maxDig()
{
    int n,max=0,dig;
    printf("Enter dig");
    scanf("%d", &n);
    while (n>0)
    {
        dig=n%10;
        if (dig>max)
        {
            max=dig;
        }
        n/=10;
    }
    return max;
}