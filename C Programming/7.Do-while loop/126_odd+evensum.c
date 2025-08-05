#include<stdio.h>
int main(){
    int no,i,sum=0,osum=0,esum=0;
    printf("Enter a number:");
    scanf("%d",&no);
    for ( i = 1; i <= no; i++)
    {
        if (i%2==0)
        {
            esum=esum+i;
            printf("Even term %d\n",i);
        }
        else
        {
            osum=osum+i;
            printf("Odd term %d\n",i);
        }
        sum=sum+i;
    }
    printf("Sum of odd numbers is %d\n",osum);
    printf("Sum of even numbers is %d\n",esum);
    printf("Sum of numbers is %d\n",sum);
    return 0;
}