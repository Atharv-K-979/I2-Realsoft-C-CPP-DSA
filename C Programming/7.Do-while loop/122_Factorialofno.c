#include<stdio.h>
int main(){
    int no,i,fact=1;
    printf("Enter a number:");
    scanf("%d",&no);
    i=1;
    for ( i = 1; i <= no; i++)
    {
        fact=fact*i;
    }
    printf("Factorial of %d is %d\n",no,fact);
    return 0;
}