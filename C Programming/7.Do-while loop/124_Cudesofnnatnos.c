#include<stdio.h>
int main(){
    int no,i,cube=0;
    printf("Enter a number:");
    scanf("%d",&no);
    for ( i = 1; i <=no; i++)
    {
       printf("Cube of %d : %d\n",i,cube=i*i*i);
    }
    return 0;
}