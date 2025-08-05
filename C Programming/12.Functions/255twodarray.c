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
int main() {
    int i=0,x[3][3];
    void input(int arr[][3],int,int);
    void display(int arr[][3],int,int);
    input(x,3,3);
    display(x,3,3);

    return 0;
}