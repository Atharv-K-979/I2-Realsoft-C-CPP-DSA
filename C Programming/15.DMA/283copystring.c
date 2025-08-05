#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
    char p[100],*q;
    int n,i=0;
    printf("Info cnt :\n");
    scanf("%d",&n);
    printf("Data\n");
    q=(char*)malloc(n*sizeof(char));
    for (int i = 0; i < n; i++)
    {
        scanf("%d",(q+i));
    }
    printf("Display Data\n");
    for (int i = 0; i < n; i++)
    {
        printf("%4d",*(q+i));
    }
    free(q);
    return 0;
}