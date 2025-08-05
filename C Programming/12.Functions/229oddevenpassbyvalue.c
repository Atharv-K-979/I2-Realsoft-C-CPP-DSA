#include <stdio.h>
int main()
{
    int no, res = 0;
    printf("Enter a no");
    scanf("%d", &no);
    int oddEven(int);
    res = oddEven(no);
    if (res == 1)
    {
        printf("Odd");
    }
    else
        printf("Even");

    return 0;
}
int oddEven(int k)
{
    return (k % 2);
}