#include<stdio.h>
int main(){
    int no,i;
    printf("Enter a number:");
    scanf("%d",&no);
    i=1;
    for ( i = 1; i <= no; i++)
    {
        if (no%i==0)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}