#include<stdio.h>
int main()
{
    int a;
    printf("Enter a No : ");
    scanf("%d",&a);
    printf("\nNo  %d is %s",a,((a < 0 ) ? "neg" :(a > 0) ? "positive" : "Zero"));
    return 0;
}