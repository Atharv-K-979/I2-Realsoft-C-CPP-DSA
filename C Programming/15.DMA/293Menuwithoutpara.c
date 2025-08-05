#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void display(){
    printf("\nWelcome\n");
    return;
}
void table(){
    int i,j;
    for ( i = 1; i <= 10; i++)
    {
        for ( j = 2; j <= 10; j++)
        {
            printf("%4d",i*j);
        }
        printf("\n");
        
    }
    return;
}
void prime(){
    int n,i=2;
    printf("Enter number :");
    scanf("%d",&n);
    while(i<n){
        if (n%i==0)
        {
            break;
        }
        i++;
    }
    if (i==n)
    {
        printf("Prime\n");
    }
    else
    {
        printf("Not Prime\n");
    }
    return;
}
int main() {
    int opt;
    void (*ptr)();  // function pointer declaration
    printf("Menu \n1. Display\n2. Table\n3. Prime\n 4. Exit\n");
    printf("Enter option :");
    scanf("%d",&opt);
    if(opt<1||opt>4){
        printf("Invalid option\n");
        return 0;
    }
    switch (opt)
    {
    case 1:
        ptr = display;
        break;
    case 2:
        ptr = table;
        break;
    case 3:
        ptr = prime;
        break;
    }
    (*ptr)();       // function pointer call
    return 0;
}