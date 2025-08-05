#include <stdio.h>
void input(int *a){
    printf("Enter a no");
    scanf("%d",a);
}
void display(int a){
    printf("Value : %d",a);
}
void update(int *b,int val){
    *b+=val;
}
int main() {
    int no;
    input(&no);
    update(&no,5);
    display(no);
    return 0;
}