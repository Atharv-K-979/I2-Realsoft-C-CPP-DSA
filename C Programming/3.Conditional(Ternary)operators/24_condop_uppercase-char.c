#include<stdio.h>
int main()
{
    char a;
    printf("Enter a char :");
    scanf("%c",&a);
    printf("\nChacter %c is %s",a,((a >= 'A' && a <= 'Z') ? "Uppercase" : "Not Uppercase"));
    return 0;
}