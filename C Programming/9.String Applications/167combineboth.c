#include<stdio.h>
int main(){
    char a[50];
    int i=0;
    printf("\n String ");
    gets(a);
    printf("\nString ");
    while (a[i]!='\0')
    {
        printf("%c",a[i]);
        i++;
    }
return 0;
}