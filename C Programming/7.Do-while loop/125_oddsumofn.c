#include<stdio.h>
int main(){
    int no,i,osum=0;
    printf("Enter a number:");
    scanf("%d",&no);
    i=1;
    for ( i = 1; i <= no; i++)
    {
        if (i%2!=0)
        {
            printf("%d\n",i);
        }
        osum=osum+i;
    }
    printf("Sum of odd numbers is %d\n",osum);
    return 0;
}