#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter upper range and lower range:");
    scanf("%d %d", &a,&b);
    if ( a > b)
    {
        a = c ;
        b = a ;
        c = a ;
    }
    printf("Enter search value");
    scanf("%d",&c);
    if ( c < a )
    {
        printf(" Below range %d",a);
    }
    else if ( a > b)
    {
        printf("Above range %d",b);
    }
    else
    {
        printf("Within range %d and %d ",a,b);
    }
    return 0;
}