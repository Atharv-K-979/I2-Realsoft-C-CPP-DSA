#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct student{
    int no;
    char nm[15];
    int mrk;
};
void main() {
    struct student k;
    printf("\nRoll no. ");
    scanf("%d",&k.no);
    printf("\nName. ");
    scanf("%s",&k.nm);
    printf("\nMarks. ");
    scanf("%d",&k.mrk);
    printf("Name %d\nRoll no %s\nMarks %d\n",k.no,k.nm,k.mrk);
    return;
}