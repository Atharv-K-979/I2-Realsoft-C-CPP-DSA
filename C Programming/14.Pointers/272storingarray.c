#include <stdio.h>
#include <string.h>

int main() {
    int x[5],*p;
    p=x+0;
    int i=0;
    printf("Data\n");
    while (i<5)
    {
        scanf("%d",(p+i));
        i++;
    }
    printf("data\n\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%4d",*(p+i));
    }    
    return 0;
}