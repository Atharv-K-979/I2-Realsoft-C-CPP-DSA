#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int i,j,tot,n=0;
    int *nos;//here bothare array of ptr to int and dynamic array of int
    int* *ptr;
    printf("Student count :");
    scanf("%d",&n);
    nos=(int*)malloc(n*sizeof(int));
    ptr=(int**)malloc(n*sizeof(int*));
    printf("\nStudent data\n");
    for (i = 0; i < 5; i++)
    {
        printf("Student %d\n Subject count :",i);
        scanf("%d",(nos+i));
        *(ptr+i)=(int*)malloc(*(nos+i)*sizeof(int));
        printf("\n Marks :");
        for (int j = 0; j <nos[i]; j++)
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