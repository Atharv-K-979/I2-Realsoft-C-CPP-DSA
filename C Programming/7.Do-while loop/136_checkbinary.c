#include <stdio.h>
int main() {
    int no, dig,flg=0;
    printf("Enter a number:");
    scanf("%d", &no);
    for (int i = 1; i <= no; i++)
    {
        dig=no%10;
        if (dig==1||dig==0)
        {
            flg=1;
        }
        no/=10;
    }
    if(flg==1)
    printf("Yes it`s binary");
    return 0;
}