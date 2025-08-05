#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int i,j,tot;
    int nos[5];
    int *ptr[5];
    for (i = 0; i < 5; i++)
    {
        printf("Student %d\n Subject count :",i);
        scanf("%d",(nos+i));
        *(ptr+i)=(int*)malloc(nos[i]*sizeof(int));
        printf("\n Marks :");
        for (int j = 0; j < *(nos+i); j++)
        {
            scanf("%d",(*(ptr+i)+j));
        }
    }
    printf("Result :");
    for ( i = 0; i < 5; i++)
    {
        printf("Student %d \nSubject count :",i);
        printf("%d",*(nos+i));
        tot=0;
        printf("\nMarks\n");
        for (j = 0; j < *(nos+i); j++)
        {
            printf("%4d",*(*(ptr+i)+j));
            tot+=*(*(ptr+i)+j);
        }
        printf("\nTotal : %d\n",tot);
        free(*(ptr+i));
    }
    
    
    return 0;
}