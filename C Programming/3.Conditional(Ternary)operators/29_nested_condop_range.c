#include<stdio.h>
int main()
{
    int a;
    printf("Enter a No : ");
    scanf("%d",&a);
    printf("\nNo  %d is %s",a,((a < 0 ) ? "Below 0" :(a > 100) ? "Above 100" : "Betn 0 to 100"));
    return 0;
}