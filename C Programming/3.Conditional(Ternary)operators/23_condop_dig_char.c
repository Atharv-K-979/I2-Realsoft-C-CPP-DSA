#include<stdio.h>
int main()
{
    char a;
    printf("Enter a char :");
    scanf("%c",&a);
    printf("\nChacter %c is %s",a,((a >= '0' && a <= '9') ? "Digit" : "Not a Digit"));
    return 0;
}