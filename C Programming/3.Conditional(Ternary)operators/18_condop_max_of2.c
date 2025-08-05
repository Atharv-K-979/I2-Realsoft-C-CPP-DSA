///////////////Method 1 only Max Value
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter 2 nos :");
    scanf("%d %d",&a,&b);
    printf("\nMax %d is",((a > b) ? a : b));
    return 0;
}