#include <stdio.h>
#include <string.h>
void swap(char *p, char *q)
{
    char r = *p;
    *p = *q;
    *q = r;
}
int main()
{
    char p[50];
    int i=0;
    printf("Enter string");
    gets(p);
    puts(p);
    int j=strlen(p)-1;
    while (i<j)
    {
        swap(&p[i],&p[j]);
        i++;j--;
    }
    puts(p);
    return 0;
}