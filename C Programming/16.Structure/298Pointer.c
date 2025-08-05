#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct student{
    int no;
    char nm[15];
    int mrk;
};
void main() {
    struct student k,*ptr;
    ptr=&k;
    printf("\nRoll no. ");
    scanf("%d",&ptr->no);
    printf("\nName. ");
    scanf("%s",&ptr->nm);
    printf("\nMarks. ");
    scanf("%d",&ptr->mrk);
    printf("Name %d\nRoll no %s\nMarks %d\n",ptr->no,ptr->nm,ptr->mrk);
    return;
}