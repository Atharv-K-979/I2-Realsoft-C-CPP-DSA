#include <stdio.h>
int main()
{
    int a,b,c;
    printf("\n Type a,b");
    scanf("%d %d", &a,&b);
    printf("\nA is %d \nB is %d",a,b);
    c = a;
    a = b;
    b = c;
    printf("\nA is %d \nB is %d",a,b);
    return 0;
}
