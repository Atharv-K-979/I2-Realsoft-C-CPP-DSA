#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void display(){
    printf("\nWelcome\n");
    return;
}
int main() {
    void (*ptr)();  // function pointer declaration
    ptr=display;    // function pointer assignment
    (*ptr)();       // function pointer call
    return 0;
}