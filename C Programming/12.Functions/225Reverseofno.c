#include <stdio.h>
int main()
{
    int revNo();
    printf(" Reverse no..  %d ", revNo());
    return 0;
}
int revNo()
{
    int n, rev = 0;
    printf("Enter dig");
    scanf("%d", &n);
    while (n > 0)
    {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return rev;
}