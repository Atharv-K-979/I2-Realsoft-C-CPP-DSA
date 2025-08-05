#include<stdio.h>
int main(){
    int no,i;
    printf("Enter a number:");
    scanf("%d",&no);
    i=1;
    printf("Odd numbers are:\n");
    while (i<=no)
    {
        printf("%d\n",i);
        i=i+2;
    }
    printf("Even numbers are:\n");
    i=2;
     while (i<=no)
    {
        printf("%d\n",i);
        i=i+2;
    }
    return 0;
}