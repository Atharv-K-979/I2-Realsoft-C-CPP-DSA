#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int(*ptr)[3],i,j,n;
    printf("Student count :\n");
    scanf("%d",&n);
    ptr=(int(*)[])malloc(n*3*sizeof(int));//very imp line
    printf("\nMArks :");
    for ( i = 0; i < 4; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("Enter value for x[%d][%d] :",i,j);
            scanf("%d",*(ptr+i)+j);
        }
    }
    printf("Display Data\n");
    for ( i = 0; i < 4; i++)
    {
        int tot=0;
        for ( j = 0; j < 3; j++)
        {
            printf("%4d",*(*(ptr+i)+j));
            tot+=*(*(ptr+i)+j);
        }
        printf("\nTotal : %d\n",tot);
        printf("\n");
    }
    free(ptr);
    return 0;
}