#include <stdio.h>
void display(char p[])
{
    puts(p);
    return;
}
int main()
{
    char p[50];
    void display(char[]);
    printf("Enter string");
    gets(p);
    display(p);
    return 0;
}