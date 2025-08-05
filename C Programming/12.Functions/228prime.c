#include <stdio.h>
#include <math.h>
int main()
{
    int isPrime();
    printf("%d", isPrime());
    return 0;
}
int isPrime()
{
    int n, i = 2;
    printf("Enter dig - ");
    scanf("%d", &n);
    while (i < sqrt(n))
    {
        if (n % i == 0)
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
}