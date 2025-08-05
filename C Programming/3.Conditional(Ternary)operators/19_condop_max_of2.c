///////////////Method 1 only Max Value  and store to max
#include<stdio.h>
int main()
{
    int a,b,max;
    printf("Enter 2 nos :");
    scanf("%d %d",&a,&b);
     max = ((a > b) ? a : b);
    printf("\nMax %d is",max);
    return 0;
}