#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void display(int *p,int n){
    int i=0;
    printf("Dta\n");
    while (i<n)
    {
        printf("%4d",*(p+i));
        i++;
    }
    
}
void input(int *p,int n){
    int i=0;
    printf(" Enter Dta\n");
    while (i<n)
    {
        scanf("%d", p+i);
        i++;
    }
    
}
int total(int *a,int n){
    int i=0,tot=0;
    while (i<n)
    {
        tot+=*(a+i);
        i++;
    }
    return tot;
}
int* allocate(int n){
    return (int*)malloc(n*sizeof(int));
}
int main() {
    int *ptr,n,tot;
    printf("Inf cnt");
    scanf("%d",&n);
    ptr=allocate(n);
    input(ptr,n);
    display(ptr,n);
    printf("\n");
    tot=total(ptr,n);
    printf("Total : %d\n",tot);
    free(ptr);
    return 0;
}