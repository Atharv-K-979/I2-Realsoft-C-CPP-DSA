#include <stdio.h>

int main() {
    int no, dig,cnt=0,fdig,ldig,sum=0;
    printf("Enter a number:");
    scanf("%d", &no);
    while (no > 0)
    {
        dig = no % 10;
        if (cnt==0)
        {
            ldig=dig;
        }
        cnt++;
        no = no / 10; 
    }
    fdig=dig;
    sum=fdig+ldig;
    printf("First digit is %d\n",fdig);
    printf("Last digit is %d\n",ldig);
    printf("Sum of first and last digit is %d\n",sum);
    return 0;
}