#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct marks
{
    int phy;
    int che;
    int mat;
} MRK;
typedef struct result
{
    int rno;
    MRK *ptr;
} RES;
int main()
{
    RES p;
    int i = 0, tot = 0;
    printf("\nRoll no\n");
    scanf("%d", &p.rno);
    p.ptr = (MRK *)malloc(sizeof(MRK));
    if (p.ptr == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }
    printf("\nSub Cnt\n");
    scanf("%d", &p.ptr->phy);
    scanf("%d", &p.ptr->che);
    scanf("%d", &p.ptr->mat);
    printf("Data Marks\n");
    printf("%4d", p.ptr->phy);
    printf("%4d", p.ptr->che);
    printf("%4d", p.ptr->mat);
    tot = p.ptr->phy + p.ptr->che + p.ptr->mat;
    printf("\nTotal Marks=%d", tot);
    return 0;
    free(p.ptr);
}