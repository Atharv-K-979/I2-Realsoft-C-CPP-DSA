#include <stdio.h>
void input(int a[][3],int r,int c){
    int i,j;
    for ( i = 0; i < r; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("\na[%d][%d]: ",i,j);
            scanf("%d",&a[i][j]);
        } 
    }
    
}
void display(int a[][3],int r,int c){
    int i,j;
    for ( i = 0; i < r; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("%4d",a[i][j]);
        } 
        printf("\n");
    }
    
}
void add(int d[][3],int a[][3],int b[][3],int r,int c){
    int i,j;
    for ( i = 0; i < r; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            d[i][j]=a[i][j]+b[i][j];
        } 
        printf("\n");
    }
    
}
int main() {
    int i=0,x[3][3],y[3][3],z[3][3],ad[3][3];
    input(x,3,3);
    input(y,3,3);
    add(ad,x,y,3,3);
    display(x,3,3);
    display(y,3,3);
    display(ad,3,3);
    return 0;
}