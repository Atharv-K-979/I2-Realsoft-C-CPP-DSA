#include<stdio.h>
int main()
{    
    int no;
    printf("Enter a no");
    scanf("%d",&no);
    int fact(int);
    printf("Factorial of a no is : %d",fact(no));
    return 0;
}
int fact(int k){
    int fact=1;
    for ( int i = 1; i <= k; i++)
    {
        fact*=i;
    }
    return fact;
}