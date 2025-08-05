#include <stdio.h>
int main()
{
    int no;
    printf("Enter a no");
    scanf("%d", &no);
    int isPrime(int);
    printf("%d",isPrime(no));
    return 0;
}
int isPrime(int k)
{
    int i=2;
    while (i<k)
    {
        if (k%i==0)
        {
            return 0;
        }
        else
            return 1;

     i++;
        
    }
}