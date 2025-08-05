// Fun calling but not returning
#include <stdio.h>
int main()
{
    int oddeven();
    if (oddeven())
    {
        printf("Odd");
    }
    else
    printf("Even");
    
    return 0;
}
int oddeven()
{
    int no;
    printf("\nEnter no");
    scanf("%d",&no);
    return (no%2);
}
