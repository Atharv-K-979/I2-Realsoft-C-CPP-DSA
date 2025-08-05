#include <stdio.h>
void swap(int p,int q){
    int r= p;
    p=q;
    q=r;
}
int main() {
    int x,y;
    printf("Enter x and y");
    scanf("%d %d",&x,&y);
    swap(x,y);
    printf("%d %d",x,y);
    return 0;
}////////////////////////////// This  not  true