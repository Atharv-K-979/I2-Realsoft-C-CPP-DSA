#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char p[20];
    int n,i=0;
    char *q[5];// array to ptr to char
    while (i<5)
    {
        printf("Enter city name\n");
        gets(p);
        n=strlen(p)+1;
        *(q+i)=(char*)malloc(n*sizeof(char));
        strcpy(*(q+i),p);
        i++;
    }
    printf("Display Data\n");
    for (int i = 0; i < 5; i++)
    {
        puts(*(q+i));
        free(*(q+i));
    }
    
    return 0;
}