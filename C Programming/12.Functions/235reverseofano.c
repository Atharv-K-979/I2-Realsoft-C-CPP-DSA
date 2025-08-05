#include<stdio.h>
int main()
{    
    int no;
    printf("Enter a no");
    scanf("%d",&no);
    int reverse(int);
    printf("Reverse of a no is : %d",reverse(no));
    return 0;
}
int reverse(int k){
    int rev=0;
    while (k>0)
    {
        rev=rev*10+k%10;
        k/=10;
    }
    return rev;
}