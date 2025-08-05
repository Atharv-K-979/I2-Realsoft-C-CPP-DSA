///////////////Method 1 only Max Value  and store to max
#include<stdio.h>
int main()
{
    int a;
    printf("Enter 1 nos :");
    scanf("%d",&a);
    printf("\nNo %d is %s",a,((a % 2 == 0) ? "even" : "odd"));
    return 0;
}