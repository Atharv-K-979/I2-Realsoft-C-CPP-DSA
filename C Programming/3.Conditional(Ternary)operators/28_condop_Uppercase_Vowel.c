#include<stdio.h>
int main()
{
    char a;
    printf("Enter a char :");
    scanf("%c",&a);
    printf("\nChacter %c is %s",a,((a == 'A' || a == 'E' || a =='I' || a == 'O' || a == 'U') ? "Uppercase Vowel" : "Not Uppercase Vowel"));
    return 0;
}