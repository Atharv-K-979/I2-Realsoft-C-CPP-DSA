#include<stdio.h>
int main(){
    int a,b,dig,rev=0;
    printf("Enter a number:");
    scanf("%d",&a);
    b=a;
    do
    {
        dig=a%10;
        rev=rev*10+dig;
        a=a/10;
    } while (a>0);
    if (b==rev)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not Palindrome\n");
    }
    return 0;
}