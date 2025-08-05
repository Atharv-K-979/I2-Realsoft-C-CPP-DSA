#include <stdio.h>
int main()
{
    int no;
    printf("Enter a no");
    scanf("%d", &no);
    int isPal(int);
    printf("%d", isPal(no));
    return 0;
}
int isPal(int k)
{
    int tmp = k, rev = 0;
    while (k > 0)
    {
        rev = rev * 10 + k % 10;
        k /= 10;
    }
    if (rev == tmp)
    {
        return 1;
    }
    else
        return 0;
}