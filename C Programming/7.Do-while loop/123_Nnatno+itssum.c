#include<stdio.h>
int main(){
    int no,i,sum=0;
    printf("Enter a number:");
    scanf("%d",&no);
    for ( i = 1; i <= no; i++)
    {
       printf("%d\n",i);
       sum=sum+i;
    }
    printf("Sum of %d natural numbers is %d\n",no,sum);
    return 0;
}