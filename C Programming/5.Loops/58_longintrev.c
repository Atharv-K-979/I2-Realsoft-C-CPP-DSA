#include <stdio.h>
int main()
{
    int a ,dig ; long int rev=0;
    printf("Enter a no:");
    scanf("%d",&a);
    while ( a > 0)
    {
        dig = a % 10;
        rev = (rev) * (10) + dig;
        a = a / 10;
    }
    printf("\n%d",rev);

    return 0;
}