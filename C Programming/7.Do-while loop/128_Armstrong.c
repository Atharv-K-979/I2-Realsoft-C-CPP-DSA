#include<stdio.h>
int main(){
    int no,i,sum=0,cube,tmp;
    printf("Enter a number:");
    scanf("%d",&no);
    tmp=no;
    while (no>0)
    {
        i=no%10;
        cube=i*i*i;
        sum=sum+cube;
        no=no/10;
    }
    if (tmp==sum)
    {
        printf("Armstrong\n");
    }
    else
    {
        printf("Not Armstrong\n");
    }
    return 0;
}