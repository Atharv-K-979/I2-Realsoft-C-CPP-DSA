#include <stdio.h>
int main()
{
    int no;
    printf("Enter a no");
    scanf("%d", &no);
    int oddEven(int);
    if (oddEven(no))
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