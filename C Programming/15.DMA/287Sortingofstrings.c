#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char r[20];
    int n,i=0;
    char *p[5];// array to ptr to char
    while (i<5)
    {
        printf("Enter city name\n");
        gets(r);
        n=strlen(r)+1;
        *(p+i)=(char*)malloc(n*sizeof(char));
        strcpy(*(p+i),r);
        i++;
    }
    printf("Display Data before sorting\n");
    for (int i = 0; i < 5; i++)
    {
        puts(*(p+i));
    }
    char *temp,pos;
    for (int i = 0; i < 4; i++)
    {
        pos=i;
        for (int j = i+1; j < 5; j++)
        {
            if(strcmp(*(p+i),*(p+j))<0)
            {
                pos=j;
            }
            if(i!=pos)
            {
                temp=p[i];
                p[i]=p[pos];
                p[pos]=temp;
            }
        }
    }
    printf("Display Data after sorting\n");
    for (int i = 0; i < 5; i++)
    {
        puts(*(p+i));
        free(*(p+i));
    }
    return 0;
}