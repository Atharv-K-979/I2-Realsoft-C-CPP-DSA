#include<stdio.h>
int main(){
    char a[40];
    printf("\nEnter string\n\n");
    gets(a);//////////// this is the scan f function for string which can take spaces and allows miltiple words
    printf("\nString : ");
    puts(a); ////////// this is the print f function for string which can print spaces and allows miltiple words
    return 0;
}
