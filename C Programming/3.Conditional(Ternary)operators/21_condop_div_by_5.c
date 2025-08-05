#include<stdio.h>
int main()
{
    int a;
    printf("Enter 1 nos :");
    scanf("%d",&a);
    printf("\nNo %d is %s",a,((a % 5 == 0) ? "Divisible by 5" : "Not Divisible by 5"));
    return 0;
}