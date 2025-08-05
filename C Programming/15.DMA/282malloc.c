#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
    int *ptr;
    int n,i=0;
    printf("Info cnt :\n");
    scanf("%d",&n);
    printf("Data\n");
    ptr=(int*)malloc(n*sizeof(int));
    for (int i = 0; i < n; i++)
    {
        scanf("%d",(ptr+i));
    }
    printf("Display Data\n");
    for (int i = 0; i < n; i++)
    {
        printf("%4d",*(ptr+i));
    }
    free(ptr);
    return 0;
}