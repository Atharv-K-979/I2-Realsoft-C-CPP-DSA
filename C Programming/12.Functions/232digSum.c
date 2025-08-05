#include <stdio.h>
int main()
{
    int no;
    printf("Enter a no");
    scanf("%d", &no);
    int digSum(int);
    printf("Dig sum is %d", digSum(no));
    return 0;
}
int digSum(int k)
{
    int sum = 0;
    while (k > 0)
    {
        sum+=k%10;
        k /= 10;
    }

    return sum;
}