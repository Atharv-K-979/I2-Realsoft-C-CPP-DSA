#include <stdio.h>
void isEven(int no)
{
    if (no % 2 == 0)
    {
        printf("Even");
    }
    else
        printf("odd");
}
int main()
{
    int no;
    isEven(93);
    return 0;
}
