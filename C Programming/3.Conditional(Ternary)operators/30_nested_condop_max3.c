#include<stdio.h>
int main()           /////////////////////////////////////IMPORTANT QUESTION //////////////////////////////////////////////
{
    int a,b,c;
    printf("Enter three No : ");
    scanf("%d %d %d",&a,&b,&c);
    printf("\nMax of %d,%d,%d is %d",a,b,c,((a > b ) ? (( a > c) ? a : c ) :( b > c) ? b : c));
    return 0;
}