#include<stdio.h>
int main()           /////////////////////////////////////IMPORTANT QUESTION //////////////////////////////////////////////
{
    int a,b,c,max;
    printf("Enter three No : ");
    scanf("%d %d %d",&a,&b,&c);
    max = (a > b) ? a : b ;
    max = (max > c) ? max : c ;

    printf("\nMax of %d,%d,%d is %d",a,b,c,max);
    return 0;
}