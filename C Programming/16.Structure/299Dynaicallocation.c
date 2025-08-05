#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct marks{
    int rno;
    int nos;
    int *ptr;
}MRK;
int main() {
    MRK p;
    int i=0,tot=0;
    printf("\nRoll no\n");
    scanf("%d",&p.rno);
    printf("\nSub Cnt\n");
    scanf("%d",&p.nos);
    p.ptr=(int*)malloc(p.nos*sizeof(int));
    printf("Matks\n");
    for ( i = 0; i < p.nos; i++)
    {
       scanf("%d",(p.ptr+i));
    }
    printf("Data Marks\n");
    for ( i=tot=0; i < p.nos; i++)
    {
       printf("%4d",*(p.ptr+i));
       tot+=*(p.ptr+i);
    }
    free(p.ptr);
    return 0;
}