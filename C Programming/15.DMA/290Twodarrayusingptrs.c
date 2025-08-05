#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int x[4][3];
    int i,j;
    for ( i = 0; i < 4; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("Enter value for x[%d][%d] :",i,j);
            scanf("%d",*(x+i)+j);
        }
    }
    printf("Display Data\n");
    for ( i = 0; i < 4; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("%4d",*(*(x+i)+j));
        }
        printf("\n");
    }
    return 0;
}