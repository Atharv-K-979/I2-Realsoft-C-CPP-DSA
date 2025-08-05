#include <stdio.h>
int main()
{
    int cntDig();
    printf(" count - %d ",cntDig());
    return 0;
}
int cntDig()
{
    int n,cnt=0;
    printf("Enter dig");
    scanf("%d", &n);
    while (n>0)
    {
        cnt++;
        n/=10;
    }
    return cnt;
}