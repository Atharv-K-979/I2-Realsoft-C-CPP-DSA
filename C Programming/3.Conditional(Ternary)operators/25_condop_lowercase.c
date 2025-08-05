#include<stdio.h>
int main()
{
    char a;
    printf("Enter a char :");
    scanf("%c",&a);
    printf("\nChacter %c is %s",a,((a >= 'a' && a <= 'z') ? "Lowercase" : "Not Lowercase"));
    return 0;
}